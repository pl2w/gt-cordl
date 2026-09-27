#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/XRUIInputModule_RegisteredInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__XRUIInputModule_RegisteredInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XRUIInputModule_RegisteredInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XRUIInputModule_RegisteredInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, int32_t)>(&::GlobalNamespace::XRUIInputModule_RegisteredInteractor::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb43f6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::XRUIInputModule_RegisteredInteractor::_ctor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, int32_t  deviceIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XRUIInputModule_RegisteredInteractor>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, interactor, deviceIndex);
}
// Ctor Parameters [CppParam { name: "interactor", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "model", ty: "::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deactivating", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XRUIInputModule_RegisteredInteractor::XRUIInputModule_RegisteredInteractor(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel  model, bool  deactivating, bool  active) noexcept  {
this->interactor = interactor;
this->model = model;
this->deactivating = deactivating;
this->active = active;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XRUIInputModule_RegisteredInteractor::XRUIInputModule_RegisteredInteractor()   {
}
