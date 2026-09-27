#pragma once
// IWYU pragma private; include "Liv/Lck/LckMonoBehaviourMediator_ApplicationLifecycleEventType.hpp"
#include "Liv/Lck/zzzz__LckMonoBehaviourMediator_ApplicationLifecycleEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::LckMonoBehaviourMediator_ApplicationLifecycleEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::LckMonoBehaviourMediator_ApplicationLifecycleEventType()   {
}
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::Quit{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::Pause{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::Resume{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::HMDIdle{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType::HMDActive{static_cast<int32_t>(0x4)};
