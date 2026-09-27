#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputDevice_ControlBitRangeNode.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_ControlBitRangeNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputDevice_ControlBitRangeNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputDevice_ControlBitRangeNode::*)(uint16_t)>(&::GlobalNamespace::InputDevice_ControlBitRangeNode::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf5d2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDevice_ControlBitRangeNode>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputDevice_ControlBitRangeNode::_ctor(uint16_t  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputDevice_ControlBitRangeNode>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, endOffset);
}
// Ctor Parameters [CppParam { name: "endBitOffset", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftChildIndex", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlStartIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controlCount", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputDevice_ControlBitRangeNode::InputDevice_ControlBitRangeNode(uint16_t  endBitOffset, int16_t  leftChildIndex, uint16_t  controlStartIndex, uint8_t  controlCount) noexcept  {
this->endBitOffset = endBitOffset;
this->leftChildIndex = leftChildIndex;
this->controlStartIndex = controlStartIndex;
this->controlCount = controlCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputDevice_ControlBitRangeNode::InputDevice_ControlBitRangeNode()   {
}
