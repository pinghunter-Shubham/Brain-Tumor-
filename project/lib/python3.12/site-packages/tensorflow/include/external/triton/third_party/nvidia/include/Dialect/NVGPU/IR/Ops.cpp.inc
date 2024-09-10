/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPUOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::triton::nvgpu::ClusterArriveOp,
::mlir::triton::nvgpu::ClusterCTAIdOp,
::mlir::triton::nvgpu::ClusterWaitOp,
::mlir::triton::nvgpu::FenceAsyncSharedOp,
::mlir::triton::nvgpu::LoadDSmemOp,
::mlir::triton::nvgpu::SparseWGMMAOp,
::mlir::triton::nvgpu::StoreDSmemOp,
::mlir::triton::nvgpu::StoreMatrixOp,
::mlir::triton::nvgpu::WGMMACommitGroupOp,
::mlir::triton::nvgpu::WGMMAFenceOp,
::mlir::triton::nvgpu::WGMMAOp,
::mlir::triton::nvgpu::WGMMAWaitGroupOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace triton {
namespace nvgpu {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::mlir::LLVM::isCompatibleOuterType(type))) && ((!::llvm::isa<::mlir::LLVM::LLVMVoidType, ::mlir::LLVM::LLVMFunctionType>(type)))) && (!(((::llvm::isa<::mlir::LLVM::LLVMStructType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMStructType>(type).isOpaque())))) && (!(((::llvm::isa<::mlir::LLVM::LLVMTargetExtType>(type))) && ((!::llvm::cast<::mlir::LLVM::LLVMTargetExtType>(type).supportsMemOps()))))) || ((::llvm::isa<::mlir::LLVM::PointerElementTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM type with size, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::LLVM::LLVMStructType>(type))) || ((type.isSignlessInteger(64))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be wgmma operand A/B type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::LLVM::LLVMStructType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM structure type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((((::mlir::LLVM::isCompatibleOuterType(type))) && ((!::llvm::isa<::mlir::LLVM::LLVMVoidType, ::mlir::LLVM::LLVMFunctionType>(type)))) && (!(((::llvm::isa<::mlir::LLVM::LLVMStructType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMStructType>(type).isOpaque())))) && (!(((::llvm::isa<::mlir::LLVM::LLVMTargetExtType>(type))) && ((!::llvm::cast<::mlir::LLVM::LLVMTargetExtType>(type).supportsMemOps()))))) || ((::llvm::isa<::mlir::LLVM::PointerElementTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of LLVM type with size, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::LLVM::LLVMPointerType>(type))) && ((::llvm::cast<::mlir::LLVM::LLVMPointerType>(type).getAddressSpace() == 3)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be LLVM pointer in address space 3, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_NVGPUOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(1)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 1-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 32-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::triton::nvgpu::WGMMALayoutAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: wgmma layout, either 'row' or 'col'";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_NVGPUOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterArriveOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ClusterArriveOpGenericAdaptorBase::ClusterArriveOpGenericAdaptorBase(ClusterArriveOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

bool ClusterArriveOpGenericAdaptorBase::getRelaxed() {
  auto attr = getRelaxedAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ClusterArriveOpAdaptor::ClusterArriveOpAdaptor(ClusterArriveOp op) : ClusterArriveOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterArriveOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_relaxed = getProperties().relaxed; (void)tblgen_relaxed;
  if (!tblgen_relaxed) return emitError(loc, "'nvgpu.cluster_arrive' op ""requires attribute 'relaxed'");

  if (tblgen_relaxed && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_relaxed))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_relaxed).getType().isSignlessInteger(1)))))
    return emitError(loc, "'nvgpu.cluster_arrive' op ""attribute 'relaxed' failed to satisfy constraint: 1-bit signless integer attribute");
  return ::mlir::success();
}

::mlir::LogicalResult ClusterArriveOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.relaxed;
       auto attr = dict.get("relaxed");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `relaxed` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ClusterArriveOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.relaxed;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("relaxed",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ClusterArriveOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.relaxed.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ClusterArriveOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "relaxed")
      return prop.relaxed;
  return std::nullopt;
}

void ClusterArriveOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "relaxed") {
       prop.relaxed = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.relaxed)>>(value);
       return;
    }
}

void ClusterArriveOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.relaxed) attrs.append("relaxed", prop.relaxed);
}

::mlir::LogicalResult ClusterArriveOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getRelaxedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps0(attr, "relaxed", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ClusterArriveOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.relaxed)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ClusterArriveOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.relaxed);
}

bool ClusterArriveOp::getRelaxed() {
  auto attr = getRelaxedAttr();
  return attr.getValue().getZExtValue();
}

void ClusterArriveOp::setRelaxed(bool attrValue) {
  getProperties().relaxed = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(1), attrValue);
}

void ClusterArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr relaxed) {
  odsState.getOrAddProperties<Properties>().relaxed = relaxed;
}

void ClusterArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr relaxed) {
  odsState.getOrAddProperties<Properties>().relaxed = relaxed;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool relaxed) {
  odsState.getOrAddProperties<Properties>().relaxed = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(1), relaxed);
}

void ClusterArriveOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool relaxed) {
  odsState.getOrAddProperties<Properties>().relaxed = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(1), relaxed);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterArriveOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ClusterArriveOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::mlir::LogicalResult ClusterArriveOp::verifyInvariantsImpl() {
  auto tblgen_relaxed = getProperties().relaxed; (void)tblgen_relaxed;
  if (!tblgen_relaxed) return emitOpError("requires attribute 'relaxed'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps0(*this, tblgen_relaxed, "relaxed")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult ClusterArriveOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterArriveOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ClusterArriveOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterArriveOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterCTAIdOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ClusterCTAIdOpAdaptor::ClusterCTAIdOpAdaptor(ClusterCTAIdOp op) : ClusterCTAIdOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterCTAIdOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ClusterCTAIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result) {
  odsState.addTypes(result);
}

void ClusterCTAIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ClusterCTAIdOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ClusterCTAIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterCTAIdOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ClusterCTAIdOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ClusterCTAIdOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult ClusterCTAIdOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ClusterCTAIdOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ClusterCTAIdOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIntegerType(32);
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ClusterCTAIdOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void ClusterCTAIdOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void ClusterCTAIdOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterCTAIdOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterWaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ClusterWaitOpAdaptor::ClusterWaitOpAdaptor(ClusterWaitOp op) : ClusterWaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ClusterWaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ClusterWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ClusterWaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ClusterWaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ClusterWaitOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult ClusterWaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ClusterWaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ClusterWaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterWaitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::FenceAsyncSharedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FenceAsyncSharedOpGenericAdaptorBase::FenceAsyncSharedOpGenericAdaptorBase(FenceAsyncSharedOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

bool FenceAsyncSharedOpGenericAdaptorBase::getBCluster() {
  auto attr = getBClusterAttr();
  return attr.getValue();
}

} // namespace detail
FenceAsyncSharedOpAdaptor::FenceAsyncSharedOpAdaptor(FenceAsyncSharedOp op) : FenceAsyncSharedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FenceAsyncSharedOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_bCluster = getProperties().bCluster; (void)tblgen_bCluster;
  if (!tblgen_bCluster) return emitError(loc, "'nvgpu.fence_async_shared' op ""requires attribute 'bCluster'");

  if (tblgen_bCluster && !((::llvm::isa<::mlir::BoolAttr>(tblgen_bCluster))))
    return emitError(loc, "'nvgpu.fence_async_shared' op ""attribute 'bCluster' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

::mlir::LogicalResult FenceAsyncSharedOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.bCluster;
       auto attr = dict.get("bCluster");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `bCluster` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FenceAsyncSharedOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.bCluster;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bCluster",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FenceAsyncSharedOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.bCluster.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FenceAsyncSharedOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "bCluster")
      return prop.bCluster;
  return std::nullopt;
}

void FenceAsyncSharedOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "bCluster") {
       prop.bCluster = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bCluster)>>(value);
       return;
    }
}

void FenceAsyncSharedOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.bCluster) attrs.append("bCluster", prop.bCluster);
}

::mlir::LogicalResult FenceAsyncSharedOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBClusterAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps1(attr, "bCluster", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FenceAsyncSharedOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.bCluster)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FenceAsyncSharedOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.bCluster);
}

bool FenceAsyncSharedOp::getBCluster() {
  auto attr = getBClusterAttr();
  return attr.getValue();
}

void FenceAsyncSharedOp::setBCluster(bool attrValue) {
  getProperties().bCluster = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void FenceAsyncSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr bCluster) {
  odsState.getOrAddProperties<Properties>().bCluster = bCluster;
}

void FenceAsyncSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::BoolAttr bCluster) {
  odsState.getOrAddProperties<Properties>().bCluster = bCluster;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FenceAsyncSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool bCluster) {
  odsState.getOrAddProperties<Properties>().bCluster = odsBuilder.getBoolAttr(bCluster);
}

void FenceAsyncSharedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool bCluster) {
  odsState.getOrAddProperties<Properties>().bCluster = odsBuilder.getBoolAttr(bCluster);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FenceAsyncSharedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<FenceAsyncSharedOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::mlir::LogicalResult FenceAsyncSharedOp::verifyInvariantsImpl() {
  auto tblgen_bCluster = getProperties().bCluster; (void)tblgen_bCluster;
  if (!tblgen_bCluster) return emitOpError("requires attribute 'bCluster'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps1(*this, tblgen_bCluster, "bCluster")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult FenceAsyncSharedOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FenceAsyncSharedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void FenceAsyncSharedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::FenceAsyncSharedOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::LoadDSmemOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoadDSmemOpGenericAdaptorBase::LoadDSmemOpGenericAdaptorBase(LoadDSmemOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint32_t LoadDSmemOpGenericAdaptorBase::getBitwidth() {
  auto attr = getBitwidthAttr();
  return attr.getValue().getZExtValue();
}

uint32_t LoadDSmemOpGenericAdaptorBase::getVec() {
  auto attr = getVecAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LoadDSmemOpAdaptor::LoadDSmemOpAdaptor(LoadDSmemOp op) : LoadDSmemOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult LoadDSmemOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_bitwidth = getProperties().bitwidth; (void)tblgen_bitwidth;
  if (!tblgen_bitwidth) return emitError(loc, "'nvgpu.load_dsmem' op ""requires attribute 'bitwidth'");
  auto tblgen_vec = getProperties().vec; (void)tblgen_vec;
  if (!tblgen_vec) return emitError(loc, "'nvgpu.load_dsmem' op ""requires attribute 'vec'");

  if (tblgen_bitwidth && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_bitwidth))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_bitwidth).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.load_dsmem' op ""attribute 'bitwidth' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_vec && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_vec))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_vec).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.load_dsmem' op ""attribute 'vec' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

::mlir::LogicalResult LoadDSmemOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.bitwidth;
       auto attr = dict.get("bitwidth");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `bitwidth` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vec;
       auto attr = dict.get("vec");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `vec` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoadDSmemOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.bitwidth;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bitwidth",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vec;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vec",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoadDSmemOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.bitwidth.getAsOpaquePointer()), 
    llvm::hash_value(prop.vec.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoadDSmemOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "bitwidth")
      return prop.bitwidth;

    if (name == "vec")
      return prop.vec;
  return std::nullopt;
}

void LoadDSmemOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "bitwidth") {
       prop.bitwidth = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bitwidth)>>(value);
       return;
    }

    if (name == "vec") {
       prop.vec = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vec)>>(value);
       return;
    }
}

void LoadDSmemOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.bitwidth) attrs.append("bitwidth", prop.bitwidth);

    if (prop.vec) attrs.append("vec", prop.vec);
}

::mlir::LogicalResult LoadDSmemOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBitwidthAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "bitwidth", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVecAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "vec", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult LoadDSmemOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.bitwidth)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.vec)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadDSmemOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.bitwidth);
  writer.writeAttribute(prop.vec);
}

uint32_t LoadDSmemOp::getBitwidth() {
  auto attr = getBitwidthAttr();
  return attr.getValue().getZExtValue();
}

uint32_t LoadDSmemOp::getVec() {
  auto attr = getVecAttr();
  return attr.getValue().getZExtValue();
}

void LoadDSmemOp::setBitwidth(uint32_t attrValue) {
  getProperties().bitwidth = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void LoadDSmemOp::setVec(uint32_t attrValue) {
  getProperties().vec = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void LoadDSmemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::IntegerAttr bitwidth, ::mlir::IntegerAttr vec) {
  odsState.addOperands(addr);
  odsState.addOperands(ctaId);
  odsState.getOrAddProperties<Properties>().bitwidth = bitwidth;
  odsState.getOrAddProperties<Properties>().vec = vec;
  odsState.addTypes(result);
}

void LoadDSmemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::IntegerAttr bitwidth, ::mlir::IntegerAttr vec) {
  odsState.addOperands(addr);
  odsState.addOperands(ctaId);
  odsState.getOrAddProperties<Properties>().bitwidth = bitwidth;
  odsState.getOrAddProperties<Properties>().vec = vec;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadDSmemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value addr, ::mlir::Value ctaId, uint32_t bitwidth, uint32_t vec) {
  odsState.addOperands(addr);
  odsState.addOperands(ctaId);
  odsState.getOrAddProperties<Properties>().bitwidth = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), bitwidth);
  odsState.getOrAddProperties<Properties>().vec = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), vec);
  odsState.addTypes(result);
}

void LoadDSmemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, uint32_t bitwidth, uint32_t vec) {
  odsState.addOperands(addr);
  odsState.addOperands(ctaId);
  odsState.getOrAddProperties<Properties>().bitwidth = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), bitwidth);
  odsState.getOrAddProperties<Properties>().vec = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), vec);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadDSmemOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<LoadDSmemOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::mlir::LogicalResult LoadDSmemOp::verifyInvariantsImpl() {
  auto tblgen_bitwidth = getProperties().bitwidth; (void)tblgen_bitwidth;
  if (!tblgen_bitwidth) return emitOpError("requires attribute 'bitwidth'");
  auto tblgen_vec = getProperties().vec; (void)tblgen_vec;
  if (!tblgen_vec) return emitOpError("requires attribute 'vec'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_bitwidth, "bitwidth")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_vec, "vec")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult LoadDSmemOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoadDSmemOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoadDSmemOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void LoadDSmemOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::LoadDSmemOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::SparseWGMMAOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SparseWGMMAOpGenericAdaptorBase::SparseWGMMAOpGenericAdaptorBase(SparseWGMMAOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint32_t SparseWGMMAOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint32_t SparseWGMMAOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

uint32_t SparseWGMMAOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::triton::nvgpu::WGMMAEltType SparseWGMMAOpGenericAdaptorBase::getEltTypeC() {
  auto attr = getEltTypeCAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType SparseWGMMAOpGenericAdaptorBase::getEltTypeA() {
  auto attr = getEltTypeAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType SparseWGMMAOpGenericAdaptorBase::getEltTypeB() {
  auto attr = getEltTypeBAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout SparseWGMMAOpGenericAdaptorBase::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout SparseWGMMAOpGenericAdaptorBase::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

} // namespace detail
SparseWGMMAOpAdaptor::SparseWGMMAOpAdaptor(SparseWGMMAOp op) : SparseWGMMAOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SparseWGMMAOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_eltTypeA = getProperties().eltTypeA; (void)tblgen_eltTypeA;
  if (!tblgen_eltTypeA) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'eltTypeA'");
  auto tblgen_eltTypeB = getProperties().eltTypeB; (void)tblgen_eltTypeB;
  if (!tblgen_eltTypeB) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'eltTypeB'");
  auto tblgen_eltTypeC = getProperties().eltTypeC; (void)tblgen_eltTypeC;
  if (!tblgen_eltTypeC) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'eltTypeC'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'k'");
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'layoutB'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'nvgpu.wgmma_sp' op ""requires attribute 'n'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'm' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'k' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_eltTypeC && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(tblgen_eltTypeC))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'eltTypeC' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

  if (tblgen_eltTypeA && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(tblgen_eltTypeA))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'eltTypeA' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

  if (tblgen_eltTypeB && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(tblgen_eltTypeB))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'eltTypeB' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

  if (tblgen_layoutA && !((::llvm::isa<::mlir::triton::nvgpu::WGMMALayoutAttr>(tblgen_layoutA))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'layoutA' failed to satisfy constraint: wgmma layout, either 'row' or 'col'");

  if (tblgen_layoutB && !((::llvm::isa<::mlir::triton::nvgpu::WGMMALayoutAttr>(tblgen_layoutB))))
    return emitError(loc, "'nvgpu.wgmma_sp' op ""attribute 'layoutB' failed to satisfy constraint: wgmma layout, either 'row' or 'col'");
  return ::mlir::success();
}

::mlir::LogicalResult SparseWGMMAOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.eltTypeA;
       auto attr = dict.get("eltTypeA");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltTypeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.eltTypeB;
       auto attr = dict.get("eltTypeB");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltTypeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.eltTypeC;
       auto attr = dict.get("eltTypeC");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltTypeC` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutA;
       auto attr = dict.get("layoutA");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutB;
       auto attr = dict.get("layoutB");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SparseWGMMAOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.eltTypeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltTypeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.eltTypeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltTypeB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.eltTypeC;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltTypeC",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SparseWGMMAOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.eltTypeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.eltTypeB.getAsOpaquePointer()), 
    llvm::hash_value(prop.eltTypeC.getAsOpaquePointer()), 
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutA.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutB.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SparseWGMMAOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "eltTypeA")
      return prop.eltTypeA;

    if (name == "eltTypeB")
      return prop.eltTypeB;

    if (name == "eltTypeC")
      return prop.eltTypeC;

    if (name == "k")
      return prop.k;

    if (name == "layoutA")
      return prop.layoutA;

    if (name == "layoutB")
      return prop.layoutB;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void SparseWGMMAOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "eltTypeA") {
       prop.eltTypeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltTypeA)>>(value);
       return;
    }

    if (name == "eltTypeB") {
       prop.eltTypeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltTypeB)>>(value);
       return;
    }

    if (name == "eltTypeC") {
       prop.eltTypeC = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltTypeC)>>(value);
       return;
    }

    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "layoutA") {
       prop.layoutA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutA)>>(value);
       return;
    }

    if (name == "layoutB") {
       prop.layoutB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutB)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void SparseWGMMAOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.eltTypeA) attrs.append("eltTypeA", prop.eltTypeA);

    if (prop.eltTypeB) attrs.append("eltTypeB", prop.eltTypeB);

    if (prop.eltTypeC) attrs.append("eltTypeC", prop.eltTypeC);

    if (prop.k) attrs.append("k", prop.k);

    if (prop.layoutA) attrs.append("layoutA", prop.layoutA);

    if (prop.layoutB) attrs.append("layoutB", prop.layoutB);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);
}

::mlir::LogicalResult SparseWGMMAOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getEltTypeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(attr, "eltTypeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEltTypeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(attr, "eltTypeB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEltTypeCAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(attr, "eltTypeC", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(attr, "layoutA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(attr, "layoutB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SparseWGMMAOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.eltTypeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.eltTypeB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.eltTypeC)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SparseWGMMAOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.eltTypeA);
  writer.writeAttribute(prop.eltTypeB);
  writer.writeAttribute(prop.eltTypeC);
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.layoutA);
  writer.writeAttribute(prop.layoutB);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);
}

uint32_t SparseWGMMAOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint32_t SparseWGMMAOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

uint32_t SparseWGMMAOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::triton::nvgpu::WGMMAEltType SparseWGMMAOp::getEltTypeC() {
  auto attr = getEltTypeCAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType SparseWGMMAOp::getEltTypeA() {
  auto attr = getEltTypeAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType SparseWGMMAOp::getEltTypeB() {
  auto attr = getEltTypeBAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout SparseWGMMAOp::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout SparseWGMMAOp::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

void SparseWGMMAOp::setM(uint32_t attrValue) {
  getProperties().m = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void SparseWGMMAOp::setN(uint32_t attrValue) {
  getProperties().n = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void SparseWGMMAOp::setK(uint32_t attrValue) {
  getProperties().k = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void SparseWGMMAOp::setEltTypeC(::mlir::triton::nvgpu::WGMMAEltType attrValue) {
  getProperties().eltTypeC = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void SparseWGMMAOp::setEltTypeA(::mlir::triton::nvgpu::WGMMAEltType attrValue) {
  getProperties().eltTypeA = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void SparseWGMMAOp::setEltTypeB(::mlir::triton::nvgpu::WGMMAEltType attrValue) {
  getProperties().eltTypeB = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void SparseWGMMAOp::setLayoutA(::mlir::triton::nvgpu::WGMMALayout attrValue) {
  getProperties().layoutA = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void SparseWGMMAOp::setLayoutB(::mlir::triton::nvgpu::WGMMALayout attrValue) {
  getProperties().layoutB = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void SparseWGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(metaA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().eltTypeC = eltTypeC;
  odsState.getOrAddProperties<Properties>().eltTypeA = eltTypeA;
  odsState.getOrAddProperties<Properties>().eltTypeB = eltTypeB;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  odsState.addTypes(res);
}

void SparseWGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(metaA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().eltTypeC = eltTypeC;
  odsState.getOrAddProperties<Properties>().eltTypeA = eltTypeA;
  odsState.getOrAddProperties<Properties>().eltTypeB = eltTypeB;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SparseWGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(metaA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().eltTypeC = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeC);
  odsState.getOrAddProperties<Properties>().eltTypeA = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeA);
  odsState.getOrAddProperties<Properties>().eltTypeB = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeB);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  odsState.addTypes(res);
}

void SparseWGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(metaA);
  odsState.addOperands(opB);
  odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().eltTypeC = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeC);
  odsState.getOrAddProperties<Properties>().eltTypeA = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeA);
  odsState.getOrAddProperties<Properties>().eltTypeB = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeB);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SparseWGMMAOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<SparseWGMMAOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::mlir::LogicalResult SparseWGMMAOp::verifyInvariantsImpl() {
  auto tblgen_eltTypeA = getProperties().eltTypeA; (void)tblgen_eltTypeA;
  if (!tblgen_eltTypeA) return emitOpError("requires attribute 'eltTypeA'");
  auto tblgen_eltTypeB = getProperties().eltTypeB; (void)tblgen_eltTypeB;
  if (!tblgen_eltTypeB) return emitOpError("requires attribute 'eltTypeB'");
  auto tblgen_eltTypeC = getProperties().eltTypeC; (void)tblgen_eltTypeC;
  if (!tblgen_eltTypeC) return emitOpError("requires attribute 'eltTypeC'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitOpError("requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitOpError("requires attribute 'layoutB'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_k, "k")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(*this, tblgen_eltTypeC, "eltTypeC")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(*this, tblgen_eltTypeA, "eltTypeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(*this, tblgen_eltTypeB, "eltTypeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(*this, tblgen_layoutA, "layoutA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(*this, tblgen_layoutB, "layoutB")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult SparseWGMMAOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SparseWGMMAOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand opARawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opAOperands(&opARawOperand, 1);  ::llvm::SMLoc opAOperandsLoc;
  (void)opAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand metaARawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> metaAOperands(&metaARawOperand, 1);  ::llvm::SMLoc metaAOperandsLoc;
  (void)metaAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand opBRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opBOperands(&opBRawOperand, 1);  ::llvm::SMLoc opBOperandsLoc;
  (void)opBOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand opCRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opCOperands(&opCRawOperand, 1);  ::llvm::SMLoc opCOperandsLoc;
  (void)opCOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  opAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opARawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("meta"))
    return ::mlir::failure();

  metaAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(metaARawOperand))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  opBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opBRawOperand))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  opCOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opCRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__res_functionType;
  if (parser.parseType(allOperand__res_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__res_functionType.getInputs();
  resTypes = allOperand__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(opAOperands, metaAOperands, opBOperands, opCOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SparseWGMMAOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOpA();
  _odsPrinter << ' ' << "meta";
  _odsPrinter << ' ';
  _odsPrinter << getMetaA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOpB();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOpC();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::SparseWGMMAOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::StoreDSmemOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
std::pair<unsigned, unsigned> StoreDSmemOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

} // namespace detail
StoreDSmemOpAdaptor::StoreDSmemOpAdaptor(StoreDSmemOp op) : StoreDSmemOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StoreDSmemOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StoreDSmemOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange StoreDSmemOp::getValuesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

void StoreDSmemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::ValueRange values, ::mlir::Value pred) {
  odsState.addOperands(addr);
  odsState.addOperands(ctaId);
  odsState.addOperands(values);
  odsState.addOperands(pred);
}

void StoreDSmemOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::ValueRange values, ::mlir::Value pred) {
  odsState.addOperands(addr);
  odsState.addOperands(ctaId);
  odsState.addOperands(values);
  odsState.addOperands(pred);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreDSmemOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult StoreDSmemOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult StoreDSmemOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult StoreDSmemOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreDSmemOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

void StoreDSmemOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::StoreDSmemOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::StoreMatrixOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
std::pair<unsigned, unsigned> StoreMatrixOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

} // namespace detail
StoreMatrixOpAdaptor::StoreMatrixOpAdaptor(StoreMatrixOp op) : StoreMatrixOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult StoreMatrixOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> StoreMatrixOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange StoreMatrixOp::getDatasMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

void StoreMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::ValueRange datas) {
  odsState.addOperands(addr);
  odsState.addOperands(datas);
}

void StoreMatrixOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::ValueRange datas) {
  odsState.addOperands(addr);
  odsState.addOperands(datas);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreMatrixOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult StoreMatrixOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult StoreMatrixOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult StoreMatrixOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allOperands;
  ::llvm::SmallVector<::mlir::Type, 1> allOperandTypes;
  [[maybe_unused]] ::llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(allOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(allOperandTypes))
    return ::mlir::failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void StoreMatrixOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperands();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getOperation()->getOperandTypes();
}

void StoreMatrixOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::StoreMatrixOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMACommitGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
WGMMACommitGroupOpAdaptor::WGMMACommitGroupOpAdaptor(WGMMACommitGroupOp op) : WGMMACommitGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WGMMACommitGroupOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void WGMMACommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void WGMMACommitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WGMMACommitGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WGMMACommitGroupOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult WGMMACommitGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WGMMACommitGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void WGMMACommitGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMACommitGroupOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAFenceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
WGMMAFenceOpAdaptor::WGMMAFenceOpAdaptor(WGMMAFenceOp op) : WGMMAFenceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WGMMAFenceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void WGMMAFenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void WGMMAFenceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WGMMAFenceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WGMMAFenceOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult WGMMAFenceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WGMMAFenceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void WGMMAFenceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAFenceOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WGMMAOpGenericAdaptorBase::WGMMAOpGenericAdaptorBase(WGMMAOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> WGMMAOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

uint32_t WGMMAOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint32_t WGMMAOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

uint32_t WGMMAOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::triton::nvgpu::WGMMAEltType WGMMAOpGenericAdaptorBase::getEltTypeC() {
  auto attr = getEltTypeCAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType WGMMAOpGenericAdaptorBase::getEltTypeA() {
  auto attr = getEltTypeAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType WGMMAOpGenericAdaptorBase::getEltTypeB() {
  auto attr = getEltTypeBAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout WGMMAOpGenericAdaptorBase::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout WGMMAOpGenericAdaptorBase::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

} // namespace detail
WGMMAOpAdaptor::WGMMAOpAdaptor(WGMMAOp op) : WGMMAOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WGMMAOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_eltTypeA = getProperties().eltTypeA; (void)tblgen_eltTypeA;
  if (!tblgen_eltTypeA) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'eltTypeA'");
  auto tblgen_eltTypeB = getProperties().eltTypeB; (void)tblgen_eltTypeB;
  if (!tblgen_eltTypeB) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'eltTypeB'");
  auto tblgen_eltTypeC = getProperties().eltTypeC; (void)tblgen_eltTypeC;
  if (!tblgen_eltTypeC) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'eltTypeC'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'k'");
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'layoutB'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'nvgpu.wgmma' op ""requires attribute 'n'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'm' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'n' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'k' failed to satisfy constraint: 32-bit signless integer attribute");

  if (tblgen_eltTypeC && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(tblgen_eltTypeC))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'eltTypeC' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

  if (tblgen_eltTypeA && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(tblgen_eltTypeA))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'eltTypeA' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

  if (tblgen_eltTypeB && !((::llvm::isa<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(tblgen_eltTypeB))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'eltTypeB' failed to satisfy constraint: wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

  if (tblgen_layoutA && !((::llvm::isa<::mlir::triton::nvgpu::WGMMALayoutAttr>(tblgen_layoutA))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'layoutA' failed to satisfy constraint: wgmma layout, either 'row' or 'col'");

  if (tblgen_layoutB && !((::llvm::isa<::mlir::triton::nvgpu::WGMMALayoutAttr>(tblgen_layoutB))))
    return emitError(loc, "'nvgpu.wgmma' op ""attribute 'layoutB' failed to satisfy constraint: wgmma layout, either 'row' or 'col'");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WGMMAOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange WGMMAOp::getOpCMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::LogicalResult WGMMAOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.eltTypeA;
       auto attr = dict.get("eltTypeA");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltTypeA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.eltTypeB;
       auto attr = dict.get("eltTypeB");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltTypeB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.eltTypeC;
       auto attr = dict.get("eltTypeC");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `eltTypeC` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutA;
       auto attr = dict.get("layoutA");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutA` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.layoutB;
       auto attr = dict.get("layoutB");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `layoutB` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WGMMAOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.eltTypeA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltTypeA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.eltTypeB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltTypeB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.eltTypeC;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("eltTypeC",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutA;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutA",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.layoutB;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("layoutB",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WGMMAOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.eltTypeA.getAsOpaquePointer()), 
    llvm::hash_value(prop.eltTypeB.getAsOpaquePointer()), 
    llvm::hash_value(prop.eltTypeC.getAsOpaquePointer()), 
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutA.getAsOpaquePointer()), 
    llvm::hash_value(prop.layoutB.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WGMMAOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "eltTypeA")
      return prop.eltTypeA;

    if (name == "eltTypeB")
      return prop.eltTypeB;

    if (name == "eltTypeC")
      return prop.eltTypeC;

    if (name == "k")
      return prop.k;

    if (name == "layoutA")
      return prop.layoutA;

    if (name == "layoutB")
      return prop.layoutB;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void WGMMAOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "eltTypeA") {
       prop.eltTypeA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltTypeA)>>(value);
       return;
    }

    if (name == "eltTypeB") {
       prop.eltTypeB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltTypeB)>>(value);
       return;
    }

    if (name == "eltTypeC") {
       prop.eltTypeC = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.eltTypeC)>>(value);
       return;
    }

    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "layoutA") {
       prop.layoutA = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutA)>>(value);
       return;
    }

    if (name == "layoutB") {
       prop.layoutB = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.layoutB)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void WGMMAOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.eltTypeA) attrs.append("eltTypeA", prop.eltTypeA);

    if (prop.eltTypeB) attrs.append("eltTypeB", prop.eltTypeB);

    if (prop.eltTypeC) attrs.append("eltTypeC", prop.eltTypeC);

    if (prop.k) attrs.append("k", prop.k);

    if (prop.layoutA) attrs.append("layoutA", prop.layoutA);

    if (prop.layoutB) attrs.append("layoutB", prop.layoutB);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);
}

::mlir::LogicalResult WGMMAOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getEltTypeAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(attr, "eltTypeA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEltTypeBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(attr, "eltTypeB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEltTypeCAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(attr, "eltTypeC", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutAAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(attr, "layoutA", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLayoutBAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(attr, "layoutB", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WGMMAOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.eltTypeA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.eltTypeB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.eltTypeC)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutA)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.layoutB)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WGMMAOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.eltTypeA);
  writer.writeAttribute(prop.eltTypeB);
  writer.writeAttribute(prop.eltTypeC);
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.layoutA);
  writer.writeAttribute(prop.layoutB);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);
}

uint32_t WGMMAOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint32_t WGMMAOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

uint32_t WGMMAOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

::mlir::triton::nvgpu::WGMMAEltType WGMMAOp::getEltTypeC() {
  auto attr = getEltTypeCAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType WGMMAOp::getEltTypeA() {
  auto attr = getEltTypeAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMAEltType WGMMAOp::getEltTypeB() {
  auto attr = getEltTypeBAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout WGMMAOp::getLayoutA() {
  auto attr = getLayoutAAttr();
  return attr.getValue();
}

::mlir::triton::nvgpu::WGMMALayout WGMMAOp::getLayoutB() {
  auto attr = getLayoutBAttr();
  return attr.getValue();
}

void WGMMAOp::setM(uint32_t attrValue) {
  getProperties().m = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void WGMMAOp::setN(uint32_t attrValue) {
  getProperties().n = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void WGMMAOp::setK(uint32_t attrValue) {
  getProperties().k = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void WGMMAOp::setEltTypeC(::mlir::triton::nvgpu::WGMMAEltType attrValue) {
  getProperties().eltTypeC = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void WGMMAOp::setEltTypeA(::mlir::triton::nvgpu::WGMMAEltType attrValue) {
  getProperties().eltTypeA = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void WGMMAOp::setEltTypeB(::mlir::triton::nvgpu::WGMMAEltType attrValue) {
  getProperties().eltTypeB = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void WGMMAOp::setLayoutA(::mlir::triton::nvgpu::WGMMALayout attrValue) {
  getProperties().layoutA = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void WGMMAOp::setLayoutB(::mlir::triton::nvgpu::WGMMALayout attrValue) {
  getProperties().layoutB = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void WGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  if (opC)
    odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().eltTypeC = eltTypeC;
  odsState.getOrAddProperties<Properties>().eltTypeA = eltTypeA;
  odsState.getOrAddProperties<Properties>().eltTypeB = eltTypeB;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  odsState.addTypes(res);
}

void WGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  if (opC)
    odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  odsState.getOrAddProperties<Properties>().eltTypeC = eltTypeC;
  odsState.getOrAddProperties<Properties>().eltTypeA = eltTypeA;
  odsState.getOrAddProperties<Properties>().eltTypeB = eltTypeB;
  odsState.getOrAddProperties<Properties>().layoutA = layoutA;
  odsState.getOrAddProperties<Properties>().layoutB = layoutB;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  if (opC)
    odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().eltTypeC = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeC);
  odsState.getOrAddProperties<Properties>().eltTypeA = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeA);
  odsState.getOrAddProperties<Properties>().eltTypeB = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeB);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  odsState.addTypes(res);
}

void WGMMAOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB) {
  odsState.addOperands(opA);
  odsState.addOperands(opB);
  if (opC)
    odsState.addOperands(opC);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), k);
  odsState.getOrAddProperties<Properties>().eltTypeC = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeC);
  odsState.getOrAddProperties<Properties>().eltTypeA = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeA);
  odsState.getOrAddProperties<Properties>().eltTypeB = ::mlir::triton::nvgpu::WGMMAEltTypeAttr::get(odsBuilder.getContext(), eltTypeB);
  odsState.getOrAddProperties<Properties>().layoutA = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutA);
  odsState.getOrAddProperties<Properties>().layoutB = ::mlir::triton::nvgpu::WGMMALayoutAttr::get(odsBuilder.getContext(), layoutB);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WGMMAOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<WGMMAOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::mlir::LogicalResult WGMMAOp::verifyInvariantsImpl() {
  auto tblgen_eltTypeA = getProperties().eltTypeA; (void)tblgen_eltTypeA;
  if (!tblgen_eltTypeA) return emitOpError("requires attribute 'eltTypeA'");
  auto tblgen_eltTypeB = getProperties().eltTypeB; (void)tblgen_eltTypeB;
  if (!tblgen_eltTypeB) return emitOpError("requires attribute 'eltTypeB'");
  auto tblgen_eltTypeC = getProperties().eltTypeC; (void)tblgen_eltTypeC;
  if (!tblgen_eltTypeC) return emitOpError("requires attribute 'eltTypeC'");
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_layoutA = getProperties().layoutA; (void)tblgen_layoutA;
  if (!tblgen_layoutA) return emitOpError("requires attribute 'layoutA'");
  auto tblgen_layoutB = getProperties().layoutB; (void)tblgen_layoutB;
  if (!tblgen_layoutB) return emitOpError("requires attribute 'layoutB'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_k, "k")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(*this, tblgen_eltTypeC, "eltTypeC")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(*this, tblgen_eltTypeA, "eltTypeA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps3(*this, tblgen_eltTypeB, "eltTypeB")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(*this, tblgen_layoutA, "layoutA")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps4(*this, tblgen_layoutB, "layoutB")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult WGMMAOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WGMMAOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand opARawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opAOperands(&opARawOperand, 1);  ::llvm::SMLoc opAOperandsLoc;
  (void)opAOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand opBRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> opBOperands(&opBRawOperand, 1);  ::llvm::SMLoc opBOperandsLoc;
  (void)opBOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> opCOperands;
  ::llvm::SMLoc opCOperandsLoc;
  (void)opCOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> resTypes;

  opAOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opARawOperand))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  opBOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(opBRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    opCOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      opCOperands.push_back(operand);
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__res_functionType;
  if (parser.parseType(allOperand__res_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__res_functionType.getInputs();
  resTypes = allOperand__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(opAOperands, opBOperands, opCOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WGMMAOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOpA();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getOpB();
  if (getOpC()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    if (::mlir::Value value = getOpC())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), ::llvm::ArrayRef<::mlir::Type>(getRes().getType()));
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAWaitGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WGMMAWaitGroupOpGenericAdaptorBase::WGMMAWaitGroupOpGenericAdaptorBase(WGMMAWaitGroupOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint32_t WGMMAWaitGroupOpGenericAdaptorBase::getPendings() {
  auto attr = getPendingsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
WGMMAWaitGroupOpAdaptor::WGMMAWaitGroupOpAdaptor(WGMMAWaitGroupOp op) : WGMMAWaitGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WGMMAWaitGroupOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_pendings = getProperties().pendings; (void)tblgen_pendings;
  if (!tblgen_pendings) return emitError(loc, "'nvgpu.wgmma_wait_group' op ""requires attribute 'pendings'");

  if (tblgen_pendings && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_pendings))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_pendings).getType().isSignlessInteger(32)))))
    return emitError(loc, "'nvgpu.wgmma_wait_group' op ""attribute 'pendings' failed to satisfy constraint: 32-bit signless integer attribute");
  return ::mlir::success();
}

::mlir::LogicalResult WGMMAWaitGroupOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.pendings;
       auto attr = dict.get("pendings");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pendings` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WGMMAWaitGroupOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.pendings;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pendings",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WGMMAWaitGroupOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.pendings.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WGMMAWaitGroupOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "pendings")
      return prop.pendings;
  return std::nullopt;
}

void WGMMAWaitGroupOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "pendings") {
       prop.pendings = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pendings)>>(value);
       return;
    }
}

void WGMMAWaitGroupOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.pendings) attrs.append("pendings", prop.pendings);
}

::mlir::LogicalResult WGMMAWaitGroupOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getPendingsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(attr, "pendings", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WGMMAWaitGroupOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.pendings)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WGMMAWaitGroupOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.pendings);
}

uint32_t WGMMAWaitGroupOp::getPendings() {
  auto attr = getPendingsAttr();
  return attr.getValue().getZExtValue();
}

void WGMMAWaitGroupOp::setPendings(uint32_t attrValue) {
  getProperties().pendings = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(32), attrValue);
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr pendings) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().pendings = pendings;
  odsState.addTypes(output);
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr pendings) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().pendings = pendings;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(WGMMAWaitGroupOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr pendings) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().pendings = pendings;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t pendings) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().pendings = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), pendings);
  odsState.addTypes(output);
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t pendings) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().pendings = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), pendings);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(WGMMAWaitGroupOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t pendings) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().pendings = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), pendings);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<WGMMAWaitGroupOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void WGMMAWaitGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<WGMMAWaitGroupOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(WGMMAWaitGroupOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult WGMMAWaitGroupOp::verifyInvariantsImpl() {
  auto tblgen_pendings = getProperties().pendings; (void)tblgen_pendings;
  if (!tblgen_pendings) return emitOpError("requires attribute 'pendings'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUOps2(*this, tblgen_pendings, "pendings")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {input, output} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult WGMMAWaitGroupOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult WGMMAWaitGroupOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult WGMMAWaitGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(&inputRawOperand, 1);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::Type inputRawType{};
  ::llvm::ArrayRef<::mlir::Type> inputTypes(&inputRawType, 1);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawType = type;
  }
  result.addTypes(inputTypes[0]);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WGMMAWaitGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAWaitGroupOp)


#endif  // GET_OP_CLASSES

