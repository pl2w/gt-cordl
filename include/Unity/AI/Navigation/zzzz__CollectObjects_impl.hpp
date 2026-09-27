#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/CollectObjects.hpp"
#include "Unity/AI/Navigation/zzzz__CollectObjects_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::AI::Navigation::CollectObjects::CollectObjects(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::AI::Navigation::CollectObjects::CollectObjects()   {
}
constexpr ::Unity::AI::Navigation::CollectObjects  Unity::AI::Navigation::CollectObjects::All{static_cast<int32_t>(0x0)};
constexpr ::Unity::AI::Navigation::CollectObjects  Unity::AI::Navigation::CollectObjects::Volume{static_cast<int32_t>(0x1)};
constexpr ::Unity::AI::Navigation::CollectObjects  Unity::AI::Navigation::CollectObjects::Children{static_cast<int32_t>(0x2)};
constexpr ::Unity::AI::Navigation::CollectObjects  Unity::AI::Navigation::CollectObjects::MarkedWithModifier{static_cast<int32_t>(0x3)};
