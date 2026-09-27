#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_ClearCameraParams.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_ClearCameraParams_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UniversalRenderer_ClearCameraParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UniversalRenderer_ClearCameraParams::*)(bool, bool, ::UnityEngine::Color)>(&::GlobalNamespace::UniversalRenderer_ClearCameraParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb2b9208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderer_ClearCameraParams>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UniversalRenderer_ClearCameraParams::_ctor(bool  clearColor, bool  clearDepth, ::UnityEngine::Color  clearVal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniversalRenderer_ClearCameraParams>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clearColor, clearDepth, clearVal);
}
// Ctor Parameters [CppParam { name: "mustClearColor", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mustClearDepth", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clearValue", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderer_ClearCameraParams::UniversalRenderer_ClearCameraParams(bool  mustClearColor, bool  mustClearDepth, ::UnityEngine::Color  clearValue) noexcept  {
this->mustClearColor = mustClearColor;
this->mustClearDepth = mustClearDepth;
this->clearValue = clearValue;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderer_ClearCameraParams::UniversalRenderer_ClearCameraParams()   {
}
