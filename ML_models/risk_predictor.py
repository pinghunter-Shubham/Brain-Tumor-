import pickle
def predict_risk(RNASeqCluster,
            MethylationCluster, 
            miRNACluster, 
            CNCluster,
            RPPACluster, 
            OncosignCluster, 
            COCCluster, 
            histological_type,
            neoplasm_histologic_grade,
            tumor_tissue_site,
            laterality,
            tumor_location,
            gender,
            age_at_initial_pathologic,
            race,
            ethnicity):
    with open('ML_models/support_vector_model_1.pkl', 'rb') as file:
        loaded_model = pickle.load(file)
        # print("Loading the model worked perfectly.\n")

    data = [[RNASeqCluster,MethylationCluster, miRNACluster,CNCluster,RPPACluster,OncosignCluster, 
            COCCluster, histological_type,neoplasm_histologic_grade,tumor_tissue_site,laterality,
            tumor_location,gender,age_at_initial_pathologic,race,ethnicity]]
    return loaded_model.predict(data)