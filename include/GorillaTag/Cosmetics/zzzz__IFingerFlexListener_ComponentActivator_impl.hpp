#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IFingerFlexListener_ComponentActivator.hpp"
#include "GorillaTag/Cosmetics/zzzz__IFingerFlexListener_ComponentActivator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IFingerFlexListener_ComponentActivator::IFingerFlexListener_ComponentActivator(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IFingerFlexListener_ComponentActivator::IFingerFlexListener_ComponentActivator()   {
}
constexpr ::GlobalNamespace::IFingerFlexListener_ComponentActivator  GlobalNamespace::IFingerFlexListener_ComponentActivator::FingerReleased{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::IFingerFlexListener_ComponentActivator  GlobalNamespace::IFingerFlexListener_ComponentActivator::FingerFlexed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::IFingerFlexListener_ComponentActivator  GlobalNamespace::IFingerFlexListener_ComponentActivator::FingerStayed{static_cast<int32_t>(0x2)};
