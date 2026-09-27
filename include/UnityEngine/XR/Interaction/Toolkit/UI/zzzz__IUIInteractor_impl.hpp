#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/IUIInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor.UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::UpdateUIModel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor.TryGetUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::TryGetUIModel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, model);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor::TryGetUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  model)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, model);
}
