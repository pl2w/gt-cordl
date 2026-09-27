#pragma once
// IWYU pragma private; include "Fusion/Protocol/SnapshotType.hpp"
#include "Fusion/Protocol/zzzz__SnapshotType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::SnapshotType::SnapshotType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::SnapshotType::SnapshotType()   {
}
constexpr ::Fusion::Protocol::SnapshotType  Fusion::Protocol::SnapshotType::Invalid{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Protocol::SnapshotType  Fusion::Protocol::SnapshotType::Data{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::SnapshotType  Fusion::Protocol::SnapshotType::Confirmation{static_cast<uint8_t>(0x2u)};
