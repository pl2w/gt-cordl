#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_RegisteredTouch.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TouchModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_RegisteredTouch_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRUIInputModule_RegisteredTouch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRUIInputModule_RegisteredTouch::*)(::UnityEngine::Touch, int32_t)>(&::GlobalNamespace::XRUIInputModule_RegisteredTouch::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4411b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRUIInputModule_RegisteredTouch>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRUIInputModule_RegisteredTouch::_ctor(::UnityEngine::Touch  touch, int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRUIInputModule_RegisteredTouch>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, touch, deviceIndex);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "model", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRUIInputModule_RegisteredTouch::XRUIInputModule_RegisteredTouch(bool  isValid, int32_t  touchId, ::UnityEngine::XR::Interaction::Toolkit::UI::TouchModel  model) noexcept  {
this->isValid = isValid;
this->touchId = touchId;
this->model = model;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRUIInputModule_RegisteredTouch::XRUIInputModule_RegisteredTouch()   {
}
