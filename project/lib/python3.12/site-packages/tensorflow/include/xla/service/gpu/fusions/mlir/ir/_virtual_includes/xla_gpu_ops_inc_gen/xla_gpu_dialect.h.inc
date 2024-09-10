/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: xla_gpu_ops.td                                                       *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace xla {
namespace gpu {

class XlaGpuDialect : public ::mlir::Dialect {
  explicit XlaGpuDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~XlaGpuDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("xla_gpu");
  }
};
} // namespace gpu
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::gpu::XlaGpuDialect)
