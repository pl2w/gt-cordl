#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipProgressEventType.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipProgressEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType::ZipProgressEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType::ZipProgressEventType()   {
}
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Adding_Started{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Adding_AfterAddEntry{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Adding_Completed{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Reading_Started{static_cast<int32_t>(0x3)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Reading_BeforeReadEntry{static_cast<int32_t>(0x4)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Reading_AfterReadEntry{static_cast<int32_t>(0x5)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Reading_Completed{static_cast<int32_t>(0x6)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Reading_ArchiveBytesRead{static_cast<int32_t>(0x7)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_Started{static_cast<int32_t>(0x8)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_BeforeWriteEntry{static_cast<int32_t>(0x9)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_AfterWriteEntry{static_cast<int32_t>(0xa)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_Completed{static_cast<int32_t>(0xb)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_AfterSaveTempArchive{static_cast<int32_t>(0xc)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_BeforeRenameTempArchive{static_cast<int32_t>(0xd)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_AfterRenameTempArchive{static_cast<int32_t>(0xe)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_AfterCompileSelfExtractor{static_cast<int32_t>(0xf)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Saving_EntryBytesRead{static_cast<int32_t>(0x10)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Extracting_BeforeExtractEntry{static_cast<int32_t>(0x11)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Extracting_AfterExtractEntry{static_cast<int32_t>(0x12)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Extracting_ExtractEntryWouldOverwrite{static_cast<int32_t>(0x13)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Extracting_EntryBytesWritten{static_cast<int32_t>(0x14)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Extracting_BeforeExtractAll{static_cast<int32_t>(0x15)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Extracting_AfterExtractAll{static_cast<int32_t>(0x16)};
constexpr ::Pathfinding::Ionic::Zip::ZipProgressEventType  Pathfinding::Ionic::Zip::ZipProgressEventType::Error_Saving{static_cast<int32_t>(0x17)};
