#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipEntrySource.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipEntrySource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource::ZipEntrySource(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource::ZipEntrySource()   {
}
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::FileSystem{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::Stream{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::ZipFile{static_cast<int32_t>(0x3)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::WriteDelegate{static_cast<int32_t>(0x4)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::JitStream{static_cast<int32_t>(0x5)};
constexpr ::Pathfinding::Ionic::Zip::ZipEntrySource  Pathfinding::Ionic::Zip::ZipEntrySource::ZipOutputStream{static_cast<int32_t>(0x6)};
