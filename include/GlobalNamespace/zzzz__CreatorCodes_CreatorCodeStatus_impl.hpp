#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodes_CreatorCodeStatus.hpp"
#include "GlobalNamespace/zzzz__CreatorCodes_CreatorCodeStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodeStatus::CreatorCodes_CreatorCodeStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodeStatus::CreatorCodes_CreatorCodeStatus()   {
}
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodeStatus  GlobalNamespace::CreatorCodes_CreatorCodeStatus::Empty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodeStatus  GlobalNamespace::CreatorCodes_CreatorCodeStatus::Unchecked{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodeStatus  GlobalNamespace::CreatorCodes_CreatorCodeStatus::Validating{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodeStatus  GlobalNamespace::CreatorCodes_CreatorCodeStatus::Valid{static_cast<int32_t>(0x3)};
