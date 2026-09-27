#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/EncryptionAlgorithm.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__EncryptionAlgorithm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm::EncryptionAlgorithm(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm::EncryptionAlgorithm()   {
}
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  Pathfinding::Ionic::Zip::EncryptionAlgorithm::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  Pathfinding::Ionic::Zip::EncryptionAlgorithm::PkzipWeak{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::EncryptionAlgorithm  Pathfinding::Ionic::Zip::EncryptionAlgorithm::Unsupported{static_cast<int32_t>(0x4)};
