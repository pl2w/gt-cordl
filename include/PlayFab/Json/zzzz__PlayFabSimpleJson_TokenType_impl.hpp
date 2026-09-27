#pragma once
// IWYU pragma private; include "PlayFab/Json/PlayFabSimpleJson_TokenType.hpp"
#include "PlayFab/Json/zzzz__PlayFabSimpleJson_TokenType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType::PlayFabSimpleJson_TokenType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType::PlayFabSimpleJson_TokenType()   {
}
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::NONE{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::CURLY_OPEN{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::CURLY_CLOSE{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::SQUARED_OPEN{static_cast<uint8_t>(0x3u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::SQUARED_CLOSE{static_cast<uint8_t>(0x4u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::COLON{static_cast<uint8_t>(0x5u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::COMMA{static_cast<uint8_t>(0x6u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::STRING{static_cast<uint8_t>(0x7u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::NUMBER{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::TRUE{static_cast<uint8_t>(0x9u)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::FALSE{static_cast<uint8_t>(0xau)};
constexpr ::GlobalNamespace::PlayFabSimpleJson_TokenType  GlobalNamespace::PlayFabSimpleJson_TokenType::_cordl_NULL{static_cast<uint8_t>(0xbu)};
