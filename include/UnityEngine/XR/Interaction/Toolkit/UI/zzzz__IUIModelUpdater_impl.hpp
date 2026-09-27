#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/IUIModelUpdater.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIModelUpdater_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceModel_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater.UpdateUIModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>, bool, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater::UpdateUIModel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater::UpdateUIModel(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  uiModel, bool  isSelectActive, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector2>  scrollDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::IUIModelUpdater*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uiModel, isSelectActive, scrollDelta);
}
