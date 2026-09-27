#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShopEventType.hpp"
#include "GlobalNamespace/zzzz__GTShopEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShopEventType::GTShopEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShopEventType::GTShopEventType()   {
}
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::item_select{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::item_try_on{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::cart_item_add{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::cart_item_remove{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::checkout_start{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::checkout_cancel{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::register_visit{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GTShopEventType  GlobalNamespace::GTShopEventType::external_item_claim{static_cast<int32_t>(0x7)};
