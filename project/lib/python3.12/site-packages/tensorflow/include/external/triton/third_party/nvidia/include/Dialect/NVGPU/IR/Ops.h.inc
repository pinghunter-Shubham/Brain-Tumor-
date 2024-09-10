/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPUOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
namespace nvgpu {
class ClusterArriveOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class ClusterCTAIdOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class ClusterWaitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class FenceAsyncSharedOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class LoadDSmemOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class SparseWGMMAOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class StoreDSmemOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class StoreMatrixOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMACommitGroupOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMAFenceOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMAOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMAWaitGroupOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterArriveOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ClusterArriveOpGenericAdaptorBase {
public:
  struct Properties {
    using relaxedTy = ::mlir::IntegerAttr;
    relaxedTy relaxed;

    auto getRelaxed() {
      auto &propStorage = this->relaxed;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setRelaxed(const ::mlir::IntegerAttr &propValue) {
      this->relaxed = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.relaxed == this->relaxed &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  ClusterArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.cluster_arrive", odsAttrs.getContext());
  }

  ClusterArriveOpGenericAdaptorBase(ClusterArriveOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getRelaxedAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().relaxed);
    return attr;
  }

  bool getRelaxed();
};
} // namespace detail
template <typename RangeT>
class ClusterArriveOpGenericAdaptor : public detail::ClusterArriveOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ClusterArriveOpGenericAdaptorBase;
public:
  ClusterArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ClusterArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ClusterArriveOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  ClusterArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : ClusterArriveOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = ClusterArriveOp, typename = std::enable_if_t<std::is_same_v<LateInst, ClusterArriveOp>>>
  ClusterArriveOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ClusterArriveOpAdaptor : public ClusterArriveOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ClusterArriveOpGenericAdaptor::ClusterArriveOpGenericAdaptor;
  ClusterArriveOpAdaptor(ClusterArriveOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ClusterArriveOp : public ::mlir::Op<ClusterArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ClusterArriveOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ClusterArriveOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("relaxed")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getRelaxedAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getRelaxedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cluster_arrive");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getRelaxedAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().relaxed);
  }

  bool getRelaxed();
  void setRelaxedAttr(::mlir::IntegerAttr attr) {
    getProperties().relaxed = attr;
  }

  void setRelaxed(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr relaxed);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr relaxed);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool relaxed);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool relaxed);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterArriveOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterCTAIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ClusterCTAIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ClusterCTAIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.cluster_id", odsAttrs.getContext());
  }

  ClusterCTAIdOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ClusterCTAIdOpGenericAdaptor : public detail::ClusterCTAIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ClusterCTAIdOpGenericAdaptorBase;
public:
  ClusterCTAIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ClusterCTAIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ClusterCTAIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ClusterCTAIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, ClusterCTAIdOp>>>
  ClusterCTAIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ClusterCTAIdOpAdaptor : public ClusterCTAIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ClusterCTAIdOpGenericAdaptor::ClusterCTAIdOpGenericAdaptor;
  ClusterCTAIdOpAdaptor(ClusterCTAIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ClusterCTAIdOp : public ::mlir::Op<ClusterCTAIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ClusterCTAIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ClusterCTAIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cluster_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::IntegerType> getResult() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterCTAIdOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ClusterWaitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ClusterWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.cluster_wait", odsAttrs.getContext());
  }

  ClusterWaitOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ClusterWaitOpGenericAdaptor : public detail::ClusterWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ClusterWaitOpGenericAdaptorBase;
public:
  ClusterWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ClusterWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ClusterWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ClusterWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, ClusterWaitOp>>>
  ClusterWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ClusterWaitOpAdaptor : public ClusterWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ClusterWaitOpGenericAdaptor::ClusterWaitOpGenericAdaptor;
  ClusterWaitOpAdaptor(ClusterWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ClusterWaitOp : public ::mlir::Op<ClusterWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ClusterWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ClusterWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cluster_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterWaitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::FenceAsyncSharedOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FenceAsyncSharedOpGenericAdaptorBase {
public:
  struct Properties {
    using bClusterTy = ::mlir::BoolAttr;
    bClusterTy bCluster;

    auto getBCluster() {
      auto &propStorage = this->bCluster;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setBCluster(const ::mlir::BoolAttr &propValue) {
      this->bCluster = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.bCluster == this->bCluster &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  FenceAsyncSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.fence_async_shared", odsAttrs.getContext());
  }

  FenceAsyncSharedOpGenericAdaptorBase(FenceAsyncSharedOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::BoolAttr getBClusterAttr() {
    auto attr = ::llvm::cast<::mlir::BoolAttr>(getProperties().bCluster);
    return attr;
  }

  bool getBCluster();
};
} // namespace detail
template <typename RangeT>
class FenceAsyncSharedOpGenericAdaptor : public detail::FenceAsyncSharedOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FenceAsyncSharedOpGenericAdaptorBase;
public:
  FenceAsyncSharedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FenceAsyncSharedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FenceAsyncSharedOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  FenceAsyncSharedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : FenceAsyncSharedOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = FenceAsyncSharedOp, typename = std::enable_if_t<std::is_same_v<LateInst, FenceAsyncSharedOp>>>
  FenceAsyncSharedOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FenceAsyncSharedOpAdaptor : public FenceAsyncSharedOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FenceAsyncSharedOpGenericAdaptor::FenceAsyncSharedOpGenericAdaptor;
  FenceAsyncSharedOpAdaptor(FenceAsyncSharedOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FenceAsyncSharedOp : public ::mlir::Op<FenceAsyncSharedOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FenceAsyncSharedOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FenceAsyncSharedOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("bCluster")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBClusterAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBClusterAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.fence_async_shared");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::BoolAttr getBClusterAttr() {
    return ::llvm::cast<::mlir::BoolAttr>(getProperties().bCluster);
  }

  bool getBCluster();
  void setBClusterAttr(::mlir::BoolAttr attr) {
    getProperties().bCluster = attr;
  }

  void setBCluster(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr bCluster);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::BoolAttr bCluster);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool bCluster);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool bCluster);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::FenceAsyncSharedOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::LoadDSmemOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoadDSmemOpGenericAdaptorBase {
public:
  struct Properties {
    using bitwidthTy = ::mlir::IntegerAttr;
    bitwidthTy bitwidth;

    auto getBitwidth() {
      auto &propStorage = this->bitwidth;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBitwidth(const ::mlir::IntegerAttr &propValue) {
      this->bitwidth = propValue;
    }
    using vecTy = ::mlir::IntegerAttr;
    vecTy vec;

    auto getVec() {
      auto &propStorage = this->vec;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setVec(const ::mlir::IntegerAttr &propValue) {
      this->vec = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.bitwidth == this->bitwidth &&
        rhs.vec == this->vec &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  LoadDSmemOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.load_dsmem", odsAttrs.getContext());
  }

  LoadDSmemOpGenericAdaptorBase(LoadDSmemOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getBitwidthAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().bitwidth);
    return attr;
  }

  uint32_t getBitwidth();
  ::mlir::IntegerAttr getVecAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().vec);
    return attr;
  }

  uint32_t getVec();
};
} // namespace detail
template <typename RangeT>
class LoadDSmemOpGenericAdaptor : public detail::LoadDSmemOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoadDSmemOpGenericAdaptorBase;
public:
  LoadDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoadDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoadDSmemOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  LoadDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : LoadDSmemOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = LoadDSmemOp, typename = std::enable_if_t<std::is_same_v<LateInst, LoadDSmemOp>>>
  LoadDSmemOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAddr() {
    return (*getODSOperands(0).begin());
  }

  ValueT getCtaId() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LoadDSmemOpAdaptor : public LoadDSmemOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoadDSmemOpGenericAdaptor::LoadDSmemOpGenericAdaptor;
  LoadDSmemOpAdaptor(LoadDSmemOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoadDSmemOp : public ::mlir::Op<LoadDSmemOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoadDSmemOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoadDSmemOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("bitwidth"), ::llvm::StringRef("vec")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBitwidthAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBitwidthAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getVecAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getVecAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.load_dsmem");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getAddr() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
  }

  ::mlir::TypedValue<::mlir::IntegerType> getCtaId() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
  }

  ::mlir::OpOperand &getAddrMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getCtaIdMutable() {
    auto range = getODSOperandIndexAndLength(1);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getResult() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
  }

  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getBitwidthAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().bitwidth);
  }

  uint32_t getBitwidth();
  ::mlir::IntegerAttr getVecAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().vec);
  }

  uint32_t getVec();
  void setBitwidthAttr(::mlir::IntegerAttr attr) {
    getProperties().bitwidth = attr;
  }

  void setBitwidth(uint32_t attrValue);
  void setVecAttr(::mlir::IntegerAttr attr) {
    getProperties().vec = attr;
  }

  void setVec(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type resultTy, Value addr, Value ctaId);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value addr, Value ctaId, unsigned bitwidth, unsigned vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value addr, Value ctaId, unsigned bitwidth);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::IntegerAttr bitwidth, ::mlir::IntegerAttr vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::IntegerAttr bitwidth, ::mlir::IntegerAttr vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value addr, ::mlir::Value ctaId, uint32_t bitwidth, uint32_t vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, uint32_t bitwidth, uint32_t vec);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::LoadDSmemOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::SparseWGMMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SparseWGMMAOpGenericAdaptorBase {
public:
  struct Properties {
    using eltTypeATy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeATy eltTypeA;

    auto getEltTypeA() {
      auto &propStorage = this->eltTypeA;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeA(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeA = propValue;
    }
    using eltTypeBTy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeBTy eltTypeB;

    auto getEltTypeB() {
      auto &propStorage = this->eltTypeB;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeB(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeB = propValue;
    }
    using eltTypeCTy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeCTy eltTypeC;

    auto getEltTypeC() {
      auto &propStorage = this->eltTypeC;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeC(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeC = propValue;
    }
    using kTy = ::mlir::IntegerAttr;
    kTy k;

    auto getK() {
      auto &propStorage = this->k;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setK(const ::mlir::IntegerAttr &propValue) {
      this->k = propValue;
    }
    using layoutATy = ::mlir::triton::nvgpu::WGMMALayoutAttr;
    layoutATy layoutA;

    auto getLayoutA() {
      auto &propStorage = this->layoutA;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(propStorage);
    }
    void setLayoutA(const ::mlir::triton::nvgpu::WGMMALayoutAttr &propValue) {
      this->layoutA = propValue;
    }
    using layoutBTy = ::mlir::triton::nvgpu::WGMMALayoutAttr;
    layoutBTy layoutB;

    auto getLayoutB() {
      auto &propStorage = this->layoutB;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(propStorage);
    }
    void setLayoutB(const ::mlir::triton::nvgpu::WGMMALayoutAttr &propValue) {
      this->layoutB = propValue;
    }
    using mTy = ::mlir::IntegerAttr;
    mTy m;

    auto getM() {
      auto &propStorage = this->m;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setM(const ::mlir::IntegerAttr &propValue) {
      this->m = propValue;
    }
    using nTy = ::mlir::IntegerAttr;
    nTy n;

    auto getN() {
      auto &propStorage = this->n;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setN(const ::mlir::IntegerAttr &propValue) {
      this->n = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.eltTypeA == this->eltTypeA &&
        rhs.eltTypeB == this->eltTypeB &&
        rhs.eltTypeC == this->eltTypeC &&
        rhs.k == this->k &&
        rhs.layoutA == this->layoutA &&
        rhs.layoutB == this->layoutB &&
        rhs.m == this->m &&
        rhs.n == this->n &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  SparseWGMMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.wgmma_sp", odsAttrs.getContext());
  }

  SparseWGMMAOpGenericAdaptorBase(SparseWGMMAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getMAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
    return attr;
  }

  uint32_t getM();
  ::mlir::IntegerAttr getNAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
    return attr;
  }

  uint32_t getN();
  ::mlir::IntegerAttr getKAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
    return attr;
  }

  uint32_t getK();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeCAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeC);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeC();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeAAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeA);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeA();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeBAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeB);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeB();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutAAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutA);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutA();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutBAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutB);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutB();
};
} // namespace detail
template <typename RangeT>
class SparseWGMMAOpGenericAdaptor : public detail::SparseWGMMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SparseWGMMAOpGenericAdaptorBase;
public:
  SparseWGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SparseWGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SparseWGMMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  SparseWGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : SparseWGMMAOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = SparseWGMMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, SparseWGMMAOp>>>
  SparseWGMMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOpA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMetaA() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOpB() {
    return (*getODSOperands(2).begin());
  }

  ValueT getOpC() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SparseWGMMAOpAdaptor : public SparseWGMMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SparseWGMMAOpGenericAdaptor::SparseWGMMAOpGenericAdaptor;
  SparseWGMMAOpAdaptor(SparseWGMMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SparseWGMMAOp : public ::mlir::Op<SparseWGMMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SparseWGMMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SparseWGMMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("eltTypeA"), ::llvm::StringRef("eltTypeB"), ::llvm::StringRef("eltTypeC"), ::llvm::StringRef("k"), ::llvm::StringRef("layoutA"), ::llvm::StringRef("layoutB"), ::llvm::StringRef("m"), ::llvm::StringRef("n")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getEltTypeAAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getEltTypeAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getEltTypeBAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getEltTypeBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEltTypeCAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEltTypeCAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getKAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getKAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLayoutAAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLayoutAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getLayoutBAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getLayoutBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getMAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getMAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getNAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getNAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_sp");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getOpA() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
  }

  ::mlir::TypedValue<::mlir::IntegerType> getMetaA() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
  }

  ::mlir::Value getOpB() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(2).begin());
  }

  ::mlir::Value getOpC() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(3).begin());
  }

  ::mlir::OpOperand &getOpAMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getMetaAMutable() {
    auto range = getODSOperandIndexAndLength(1);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getOpBMutable() {
    auto range = getODSOperandIndexAndLength(2);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getOpCMutable() {
    auto range = getODSOperandIndexAndLength(3);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getRes() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
  }

  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getMAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  }

  uint32_t getM();
  ::mlir::IntegerAttr getNAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  }

  uint32_t getN();
  ::mlir::IntegerAttr getKAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
  }

  uint32_t getK();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeCAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeC);
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeC();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeAAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeA);
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeA();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeBAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeB);
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeB();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutAAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutA);
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutA();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutBAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutB);
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutB();
  void setMAttr(::mlir::IntegerAttr attr) {
    getProperties().m = attr;
  }

  void setM(uint32_t attrValue);
  void setNAttr(::mlir::IntegerAttr attr) {
    getProperties().n = attr;
  }

  void setN(uint32_t attrValue);
  void setKAttr(::mlir::IntegerAttr attr) {
    getProperties().k = attr;
  }

  void setK(uint32_t attrValue);
  void setEltTypeCAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr) {
    getProperties().eltTypeC = attr;
  }

  void setEltTypeC(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setEltTypeAAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr) {
    getProperties().eltTypeA = attr;
  }

  void setEltTypeA(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setEltTypeBAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr) {
    getProperties().eltTypeB = attr;
  }

  void setEltTypeB(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setLayoutAAttr(::mlir::triton::nvgpu::WGMMALayoutAttr attr) {
    getProperties().layoutA = attr;
  }

  void setLayoutA(::mlir::triton::nvgpu::WGMMALayout attrValue);
  void setLayoutBAttr(::mlir::triton::nvgpu::WGMMALayoutAttr attr) {
    getProperties().layoutB = attr;
  }

  void setLayoutB(::mlir::triton::nvgpu::WGMMALayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value metaA, ::mlir::Value opB, ::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 8 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::SparseWGMMAOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::StoreDSmemOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StoreDSmemOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StoreDSmemOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.store_dsmem", odsAttrs.getContext());
  }

  StoreDSmemOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class StoreDSmemOpGenericAdaptor : public detail::StoreDSmemOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StoreDSmemOpGenericAdaptorBase;
public:
  StoreDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StoreDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StoreDSmemOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StoreDSmemOp, typename = std::enable_if_t<std::is_same_v<LateInst, StoreDSmemOp>>>
  StoreDSmemOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAddr() {
    return (*getODSOperands(0).begin());
  }

  ValueT getCtaId() {
    return (*getODSOperands(1).begin());
  }

  RangeT getValues() {
    return getODSOperands(2);
  }

  ValueT getPred() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StoreDSmemOpAdaptor : public StoreDSmemOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StoreDSmemOpGenericAdaptor::StoreDSmemOpGenericAdaptor;
  StoreDSmemOpAdaptor(StoreDSmemOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StoreDSmemOp : public ::mlir::Op<StoreDSmemOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StoreDSmemOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StoreDSmemOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.store_dsmem");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getAddr() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
  }

  ::mlir::TypedValue<::mlir::IntegerType> getCtaId() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(1).begin());
  }

  ::mlir::Operation::operand_range getValues() {
    return getODSOperands(2);
  }

  ::mlir::TypedValue<::mlir::IntegerType> getPred() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*getODSOperands(3).begin());
  }

  ::mlir::OpOperand &getAddrMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getCtaIdMutable() {
    auto range = getODSOperandIndexAndLength(1);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getValuesMutable();
  ::mlir::OpOperand &getPredMutable() {
    auto range = getODSOperandIndexAndLength(3);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value addr, Value ctaId, Value value, Value pred);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::ValueRange values, ::mlir::Value pred);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::ValueRange values, ::mlir::Value pred);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  unsigned getBitwidth();
  unsigned getVec();
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::StoreDSmemOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::StoreMatrixOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StoreMatrixOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StoreMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.stmatrix", odsAttrs.getContext());
  }

  StoreMatrixOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class StoreMatrixOpGenericAdaptor : public detail::StoreMatrixOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StoreMatrixOpGenericAdaptorBase;
public:
  StoreMatrixOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StoreMatrixOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StoreMatrixOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StoreMatrixOp, typename = std::enable_if_t<std::is_same_v<LateInst, StoreMatrixOp>>>
  StoreMatrixOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAddr() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDatas() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StoreMatrixOpAdaptor : public StoreMatrixOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StoreMatrixOpGenericAdaptor::StoreMatrixOpGenericAdaptor;
  StoreMatrixOpAdaptor(StoreMatrixOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StoreMatrixOp : public ::mlir::Op<StoreMatrixOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StoreMatrixOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StoreMatrixOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.stmatrix");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getAddr() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::LLVM::LLVMPointerType>>(*getODSOperands(0).begin());
  }

  ::mlir::Operation::operand_range getDatas() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getAddrMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getDatasMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::ValueRange datas);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::ValueRange datas);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::StoreMatrixOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMACommitGroupOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMACommitGroupOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  WGMMACommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.wgmma_commit_group", odsAttrs.getContext());
  }

  WGMMACommitGroupOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class WGMMACommitGroupOpGenericAdaptor : public detail::WGMMACommitGroupOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMACommitGroupOpGenericAdaptorBase;
public:
  WGMMACommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMACommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMACommitGroupOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = WGMMACommitGroupOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMACommitGroupOp>>>
  WGMMACommitGroupOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WGMMACommitGroupOpAdaptor : public WGMMACommitGroupOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMACommitGroupOpGenericAdaptor::WGMMACommitGroupOpGenericAdaptor;
  WGMMACommitGroupOpAdaptor(WGMMACommitGroupOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMACommitGroupOp : public ::mlir::Op<WGMMACommitGroupOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMACommitGroupOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMACommitGroupOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_commit_group");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMACommitGroupOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAFenceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMAFenceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  WGMMAFenceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.wgmma_fence", odsAttrs.getContext());
  }

  WGMMAFenceOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class WGMMAFenceOpGenericAdaptor : public detail::WGMMAFenceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMAFenceOpGenericAdaptorBase;
public:
  WGMMAFenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMAFenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMAFenceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = WGMMAFenceOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMAFenceOp>>>
  WGMMAFenceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WGMMAFenceOpAdaptor : public WGMMAFenceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMAFenceOpGenericAdaptor::WGMMAFenceOpGenericAdaptor;
  WGMMAFenceOpAdaptor(WGMMAFenceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMAFenceOp : public ::mlir::Op<WGMMAFenceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMAFenceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMAFenceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_fence");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAFenceOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMAOpGenericAdaptorBase {
public:
  struct Properties {
    using eltTypeATy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeATy eltTypeA;

    auto getEltTypeA() {
      auto &propStorage = this->eltTypeA;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeA(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeA = propValue;
    }
    using eltTypeBTy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeBTy eltTypeB;

    auto getEltTypeB() {
      auto &propStorage = this->eltTypeB;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeB(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeB = propValue;
    }
    using eltTypeCTy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeCTy eltTypeC;

    auto getEltTypeC() {
      auto &propStorage = this->eltTypeC;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeC(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeC = propValue;
    }
    using kTy = ::mlir::IntegerAttr;
    kTy k;

    auto getK() {
      auto &propStorage = this->k;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setK(const ::mlir::IntegerAttr &propValue) {
      this->k = propValue;
    }
    using layoutATy = ::mlir::triton::nvgpu::WGMMALayoutAttr;
    layoutATy layoutA;

    auto getLayoutA() {
      auto &propStorage = this->layoutA;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(propStorage);
    }
    void setLayoutA(const ::mlir::triton::nvgpu::WGMMALayoutAttr &propValue) {
      this->layoutA = propValue;
    }
    using layoutBTy = ::mlir::triton::nvgpu::WGMMALayoutAttr;
    layoutBTy layoutB;

    auto getLayoutB() {
      auto &propStorage = this->layoutB;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(propStorage);
    }
    void setLayoutB(const ::mlir::triton::nvgpu::WGMMALayoutAttr &propValue) {
      this->layoutB = propValue;
    }
    using mTy = ::mlir::IntegerAttr;
    mTy m;

    auto getM() {
      auto &propStorage = this->m;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setM(const ::mlir::IntegerAttr &propValue) {
      this->m = propValue;
    }
    using nTy = ::mlir::IntegerAttr;
    nTy n;

    auto getN() {
      auto &propStorage = this->n;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setN(const ::mlir::IntegerAttr &propValue) {
      this->n = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.eltTypeA == this->eltTypeA &&
        rhs.eltTypeB == this->eltTypeB &&
        rhs.eltTypeC == this->eltTypeC &&
        rhs.k == this->k &&
        rhs.layoutA == this->layoutA &&
        rhs.layoutB == this->layoutB &&
        rhs.m == this->m &&
        rhs.n == this->n &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  WGMMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.wgmma", odsAttrs.getContext());
  }

  WGMMAOpGenericAdaptorBase(WGMMAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getMAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
    return attr;
  }

  uint32_t getM();
  ::mlir::IntegerAttr getNAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
    return attr;
  }

  uint32_t getN();
  ::mlir::IntegerAttr getKAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
    return attr;
  }

  uint32_t getK();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeCAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeC);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeC();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeAAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeA);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeA();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeBAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeB);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeB();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutAAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutA);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutA();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutBAttr() {
    auto attr = ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutB);
    return attr;
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutB();
};
} // namespace detail
template <typename RangeT>
class WGMMAOpGenericAdaptor : public detail::WGMMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMAOpGenericAdaptorBase;
public:
  WGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  WGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : WGMMAOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = WGMMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMAOp>>>
  WGMMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOpA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOpB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOpC() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WGMMAOpAdaptor : public WGMMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMAOpGenericAdaptor::WGMMAOpGenericAdaptor;
  WGMMAOpAdaptor(WGMMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMAOp : public ::mlir::Op<WGMMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("eltTypeA"), ::llvm::StringRef("eltTypeB"), ::llvm::StringRef("eltTypeC"), ::llvm::StringRef("k"), ::llvm::StringRef("layoutA"), ::llvm::StringRef("layoutB"), ::llvm::StringRef("m"), ::llvm::StringRef("n")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getEltTypeAAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getEltTypeAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getEltTypeBAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getEltTypeBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEltTypeCAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEltTypeCAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getKAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getKAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLayoutAAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLayoutAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getLayoutBAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getLayoutBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getMAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getMAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getNAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getNAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getOpA() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
  }

  ::mlir::Value getOpB() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
  }

  ::mlir::Value getOpC() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
  }

  ::mlir::OpOperand &getOpAMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getOpBMutable() {
    auto range = getODSOperandIndexAndLength(1);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getOpCMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getRes() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
  }

  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getMAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  }

  uint32_t getM();
  ::mlir::IntegerAttr getNAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().n);
  }

  uint32_t getN();
  ::mlir::IntegerAttr getKAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().k);
  }

  uint32_t getK();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeCAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeC);
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeC();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeAAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeA);
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeA();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeBAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(getProperties().eltTypeB);
  }

  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeB();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutAAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutA);
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutA();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutBAttr() {
    return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(getProperties().layoutB);
  }

  ::mlir::triton::nvgpu::WGMMALayout getLayoutB();
  void setMAttr(::mlir::IntegerAttr attr) {
    getProperties().m = attr;
  }

  void setM(uint32_t attrValue);
  void setNAttr(::mlir::IntegerAttr attr) {
    getProperties().n = attr;
  }

  void setN(uint32_t attrValue);
  void setKAttr(::mlir::IntegerAttr attr) {
    getProperties().k = attr;
  }

  void setK(uint32_t attrValue);
  void setEltTypeCAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr) {
    getProperties().eltTypeC = attr;
  }

  void setEltTypeC(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setEltTypeAAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr) {
    getProperties().eltTypeA = attr;
  }

  void setEltTypeA(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setEltTypeBAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr) {
    getProperties().eltTypeB = attr;
  }

  void setEltTypeB(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setLayoutAAttr(::mlir::triton::nvgpu::WGMMALayoutAttr attr) {
    getProperties().layoutA = attr;
  }

  void setLayoutA(::mlir::triton::nvgpu::WGMMALayout attrValue);
  void setLayoutBAttr(::mlir::triton::nvgpu::WGMMALayoutAttr attr) {
    getProperties().layoutB = attr;
  }

  void setLayoutB(::mlir::triton::nvgpu::WGMMALayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 8 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAWaitGroupOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMAWaitGroupOpGenericAdaptorBase {
public:
  struct Properties {
    using pendingsTy = ::mlir::IntegerAttr;
    pendingsTy pendings;

    auto getPendings() {
      auto &propStorage = this->pendings;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setPendings(const ::mlir::IntegerAttr &propValue) {
      this->pendings = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.pendings == this->pendings &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  WGMMAWaitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("nvgpu.wgmma_wait_group", odsAttrs.getContext());
  }

  WGMMAWaitGroupOpGenericAdaptorBase(WGMMAWaitGroupOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getPendingsAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().pendings);
    return attr;
  }

  uint32_t getPendings();
};
} // namespace detail
template <typename RangeT>
class WGMMAWaitGroupOpGenericAdaptor : public detail::WGMMAWaitGroupOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMAWaitGroupOpGenericAdaptorBase;
public:
  WGMMAWaitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMAWaitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMAWaitGroupOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  WGMMAWaitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : WGMMAWaitGroupOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = WGMMAWaitGroupOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMAWaitGroupOp>>>
  WGMMAWaitGroupOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WGMMAWaitGroupOpAdaptor : public WGMMAWaitGroupOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMAWaitGroupOpGenericAdaptor::WGMMAWaitGroupOpGenericAdaptor;
  WGMMAWaitGroupOpAdaptor(WGMMAWaitGroupOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMAWaitGroupOp : public ::mlir::Op<WGMMAWaitGroupOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMAWaitGroupOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMAWaitGroupOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("pendings")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getPendingsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getPendingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_wait_group");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getInput() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getInputMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getOutput() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
  }

  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getPendingsAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().pendings);
  }

  uint32_t getPendings();
  void setPendingsAttr(::mlir::IntegerAttr attr) {
    getProperties().pendings = attr;
  }

  void setPendings(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t pendings);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAWaitGroupOp)


#endif  // GET_OP_CLASSES

