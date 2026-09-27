#pragma once
// IWYU pragma private; include "Modio/LinkType.hpp"
#include "Modio/zzzz__LinkType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::LinkType::LinkType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::LinkType::LinkType()   {
}
constexpr ::Modio::LinkType  Modio::LinkType::Website{static_cast<int32_t>(0x0)};
constexpr ::Modio::LinkType  Modio::LinkType::Terms{static_cast<int32_t>(0x1)};
constexpr ::Modio::LinkType  Modio::LinkType::Privacy{static_cast<int32_t>(0x2)};
constexpr ::Modio::LinkType  Modio::LinkType::Manage{static_cast<int32_t>(0x3)};
constexpr ::Modio::LinkType  Modio::LinkType::Refund{static_cast<int32_t>(0x4)};
