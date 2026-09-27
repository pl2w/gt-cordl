#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SilhouettePlaneCache_Slot.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_Slot_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SilhouettePlaneCache_Slot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SilhouettePlaneCache_Slot::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::SilhouettePlaneCache_Slot::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb20d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SilhouettePlaneCache_Slot>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SilhouettePlaneCache_Slot::_ctor(int32_t  viewInstanceID, int32_t  planeCount, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SilhouettePlaneCache_Slot>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewInstanceID, planeCount, frameIndex);
}
// Ctor Parameters [CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "planeCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SilhouettePlaneCache_Slot::SilhouettePlaneCache_Slot(bool  isActive, int32_t  viewInstanceID, int32_t  planeCount, int32_t  lastUsedFrameIndex) noexcept  {
this->isActive = isActive;
this->viewInstanceID = viewInstanceID;
this->planeCount = planeCount;
this->lastUsedFrameIndex = lastUsedFrameIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SilhouettePlaneCache_Slot::SilhouettePlaneCache_Slot()   {
}
