#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitType.hpp"
#include "GlobalNamespace/zzzz__GameHitType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameHitType::GameHitType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameHitType::GameHitType()   {
}
constexpr ::GlobalNamespace::GameHitType  GlobalNamespace::GameHitType::Club{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GameHitType  GlobalNamespace::GameHitType::Flash{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GameHitType  GlobalNamespace::GameHitType::Shield{static_cast<int32_t>(0x2)};
