#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipEntryTimestamp.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntryTimestamp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp::ZipEntryTimestamp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp::ZipEntryTimestamp()   {
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  Pathfinding::Ionic::Zip::ZipEntryTimestamp::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  Pathfinding::Ionic::Zip::ZipEntryTimestamp::DOS{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  Pathfinding::Ionic::Zip::ZipEntryTimestamp::Windows{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  Pathfinding::Ionic::Zip::ZipEntryTimestamp::Unix{static_cast<int32_t>(0x4)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntryTimestamp  Pathfinding::Ionic::Zip::ZipEntryTimestamp::InfoZip1{static_cast<int32_t>(0x8)};
