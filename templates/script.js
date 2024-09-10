const form = document.querySelector("form"),
fileInput = document.querySelector(".file-input"),
progressArea = document.querySelector(".progress-area"),
uploadedArea = document.querySelector(".uploaded-area");

form.addEventListener("click", (e) => {
  if (e.target.type === "submit") {
    form.submit();
  } else {
    fileInput.click();
  }
});

fileInput.onchange = ({ target }) => {
  let file = target.files[0];
  if (file) {
    let fileName = file.name;
    if (fileName.length >= 12) {
      let splitName = fileName.split('.');
      fileName = splitName[0].substring(0, 13) + "... ." + splitName[1];
    }
    uploadFile(fileName);
  }
};

function uploadFile(name) {
  let fileLoaded = 0;
  let fileSize = (fileInput.files[0].size / 1024).toFixed(2) + " KB";
  let progressHTML = `<li class="row">
                        <i class="fas fa-file-alt"></i>
                        <div class="content">
                          <div class="details">
                            <span class="name">${name} • Uploading</span>
                            <span class="percent">${fileLoaded}%</span>
                          </div>
                          <div class="progress-bar">
                            <div class="progress" style="width: ${fileLoaded}%"></div>
                          </div>
                        </div>
                      </li>`;
  uploadedArea.classList.add("onprogress");
  progressArea.innerHTML = progressHTML;

  let progressInterval = setInterval(() => {
    if (fileLoaded < 100) {
      fileLoaded++;
      progressArea.querySelector(".progress").style.width = fileLoaded + "%";
      progressArea.querySelector(".percent").textContent = fileLoaded + "%";
    } else {
      clearInterval(progressInterval);
      progressArea.innerHTML = "";
      let uploadedHTML = `<li class="row">
                            <div class="content upload">
                              <i class="fas fa-file-alt"></i>
                              <div class="details">
                                <span class="name">${name} • Uploaded</span>
                                <span class="size">${fileSize}</span>
                              </div>
                            </div>
                            <i class="fas fa-check"></i>
                          </li>`;
      uploadedArea.classList.remove("onprogress");
      uploadedArea.insertAdjacentHTML("afterbegin", uploadedHTML);
    }
  }, 50);
}
