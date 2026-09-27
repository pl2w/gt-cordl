#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/CryptoMode.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__CryptoMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::CryptoMode::CryptoMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::CryptoMode::CryptoMode()   {
}
constexpr ::Pathfinding::Ionic::Zip::CryptoMode  Pathfinding::Ionic::Zip::CryptoMode::Encrypt{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::CryptoMode  Pathfinding::Ionic::Zip::CryptoMode::Decrypt{static_cast<int32_t>(0x1)};
