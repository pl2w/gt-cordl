#pragma once
// IWYU pragma private; include "GlobalNamespace/SerializableBSPNode.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_Axis_impl.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_def.hpp"
#include "GlobalNamespace/zzzz__SerializableBSPNode_Axis_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPNode.get_matrixIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SerializableBSPNode::*)()>(&::GlobalNamespace::SerializableBSPNode::get_matrixIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPNode>(),
                        {"get_matrixIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPNode.get_outsideChildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SerializableBSPNode::*)()>(&::GlobalNamespace::SerializableBSPNode::get_outsideChildIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPNode>(),
                        {"get_outsideChildIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SerializableBSPNode.get_zoneIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SerializableBSPNode::*)()>(&::GlobalNamespace::SerializableBSPNode::get_zoneIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPNode>(),
                        {"get_zoneIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::SerializableBSPNode::get_matrixIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPNode>(),
                        {"get_matrixIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::SerializableBSPNode::get_outsideChildIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPNode>(),
                        {"get_outsideChildIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::SerializableBSPNode::get_zoneIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SerializableBSPNode>(),
                        {"get_zoneIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "axis", ty: "::GlobalNamespace::SerializableBSPNode_Axis", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitValue", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rightChildIndex", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SerializableBSPNode::SerializableBSPNode(::GlobalNamespace::SerializableBSPNode_Axis  axis, float_t  splitValue, int16_t  leftChildIndex, int16_t  rightChildIndex) noexcept  {
this->axis = axis;
this->splitValue = splitValue;
this->leftChildIndex = leftChildIndex;
this->rightChildIndex = rightChildIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SerializableBSPNode::SerializableBSPNode()   {
}
