#pragma once
// IWYU pragma private; include "UnityEngine/AI/CollectObjects.hpp"
#include "UnityEngine/AI/zzzz__CollectObjects_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::AI::CollectObjects::CollectObjects(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::CollectObjects::CollectObjects()   {
}
constexpr ::UnityEngine::AI::CollectObjects  UnityEngine::AI::CollectObjects::All{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::AI::CollectObjects  UnityEngine::AI::CollectObjects::Volume{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::AI::CollectObjects  UnityEngine::AI::CollectObjects::Children{static_cast<int32_t>(0x2)};
