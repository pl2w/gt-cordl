#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipProgressEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZipProgressEventType)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct ZipProgressEventType;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::ZipProgressEventType);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipProgressEventType, "Pathfinding.Ionic.Zip", "ZipProgressEventType");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.ZipProgressEventType
struct CORDL_TYPE ZipProgressEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZipProgressEventType_Unwrapped
enum struct __ZipProgressEventType_Unwrapped : int32_t {
__E_Adding_Started = static_cast<int32_t>(0x0),
__E_Adding_AfterAddEntry = static_cast<int32_t>(0x1),
__E_Adding_Completed = static_cast<int32_t>(0x2),
__E_Reading_Started = static_cast<int32_t>(0x3),
__E_Reading_BeforeReadEntry = static_cast<int32_t>(0x4),
__E_Reading_AfterReadEntry = static_cast<int32_t>(0x5),
__E_Reading_Completed = static_cast<int32_t>(0x6),
__E_Reading_ArchiveBytesRead = static_cast<int32_t>(0x7),
__E_Saving_Started = static_cast<int32_t>(0x8),
__E_Saving_BeforeWriteEntry = static_cast<int32_t>(0x9),
__E_Saving_AfterWriteEntry = static_cast<int32_t>(0xa),
__E_Saving_Completed = static_cast<int32_t>(0xb),
__E_Saving_AfterSaveTempArchive = static_cast<int32_t>(0xc),
__E_Saving_BeforeRenameTempArchive = static_cast<int32_t>(0xd),
__E_Saving_AfterRenameTempArchive = static_cast<int32_t>(0xe),
__E_Saving_AfterCompileSelfExtractor = static_cast<int32_t>(0xf),
__E_Saving_EntryBytesRead = static_cast<int32_t>(0x10),
__E_Extracting_BeforeExtractEntry = static_cast<int32_t>(0x11),
__E_Extracting_AfterExtractEntry = static_cast<int32_t>(0x12),
__E_Extracting_ExtractEntryWouldOverwrite = static_cast<int32_t>(0x13),
__E_Extracting_EntryBytesWritten = static_cast<int32_t>(0x14),
__E_Extracting_BeforeExtractAll = static_cast<int32_t>(0x15),
__E_Extracting_AfterExtractAll = static_cast<int32_t>(0x16),
__E_Error_Saving = static_cast<int32_t>(0x17),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZipProgressEventType_Unwrapped () const noexcept {
return static_cast<__ZipProgressEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZipProgressEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZipProgressEventType(int32_t  value__) noexcept;

/// @brief Field Adding_AfterAddEntry value: I32(1)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Adding_AfterAddEntry;

/// @brief Field Adding_Completed value: I32(2)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Adding_Completed;

/// @brief Field Adding_Started value: I32(0)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Adding_Started;

/// @brief Field Error_Saving value: I32(23)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Error_Saving;

/// @brief Field Extracting_AfterExtractAll value: I32(22)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Extracting_AfterExtractAll;

/// @brief Field Extracting_AfterExtractEntry value: I32(18)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Extracting_AfterExtractEntry;

/// @brief Field Extracting_BeforeExtractAll value: I32(21)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Extracting_BeforeExtractAll;

/// @brief Field Extracting_BeforeExtractEntry value: I32(17)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Extracting_BeforeExtractEntry;

/// @brief Field Extracting_EntryBytesWritten value: I32(20)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Extracting_EntryBytesWritten;

/// @brief Field Extracting_ExtractEntryWouldOverwrite value: I32(19)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Extracting_ExtractEntryWouldOverwrite;

/// @brief Field Reading_AfterReadEntry value: I32(5)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Reading_AfterReadEntry;

/// @brief Field Reading_ArchiveBytesRead value: I32(7)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Reading_ArchiveBytesRead;

/// @brief Field Reading_BeforeReadEntry value: I32(4)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Reading_BeforeReadEntry;

/// @brief Field Reading_Completed value: I32(6)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Reading_Completed;

/// @brief Field Reading_Started value: I32(3)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Reading_Started;

/// @brief Field Saving_AfterCompileSelfExtractor value: I32(15)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_AfterCompileSelfExtractor;

/// @brief Field Saving_AfterRenameTempArchive value: I32(14)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_AfterRenameTempArchive;

/// @brief Field Saving_AfterSaveTempArchive value: I32(12)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_AfterSaveTempArchive;

/// @brief Field Saving_AfterWriteEntry value: I32(10)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_AfterWriteEntry;

/// @brief Field Saving_BeforeRenameTempArchive value: I32(13)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_BeforeRenameTempArchive;

/// @brief Field Saving_BeforeWriteEntry value: I32(9)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_BeforeWriteEntry;

/// @brief Field Saving_Completed value: I32(11)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_Completed;

/// @brief Field Saving_EntryBytesRead value: I32(16)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_EntryBytesRead;

/// @brief Field Saving_Started value: I32(8)
static ::Pathfinding::Ionic::Zip::ZipProgressEventType const Saving_Started;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28141};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipProgressEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipProgressEventType) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
