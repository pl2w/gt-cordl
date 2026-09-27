#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/ECosmeticSelectSide.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide::ECosmeticSelectSide(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide::ECosmeticSelectSide()   {
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag::CosmeticSystem::ECosmeticSelectSide::Both{static_cast<int32_t>(0x0)};
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag::CosmeticSystem::ECosmeticSelectSide::Left{static_cast<int32_t>(0x1)};
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag::CosmeticSystem::ECosmeticSelectSide::Right{static_cast<int32_t>(0x2)};
