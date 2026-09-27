#pragma once
// IWYU pragma private; include "Modio/Reports/ModNotWorkingReason.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModNotWorkingReason)
// Forward declare root types
namespace Modio::Reports {
struct ModNotWorkingReason;
}
// Write type traits
MARK_VAL_T(::Modio::Reports::ModNotWorkingReason);
DEFINE_IL2CPP_CLASS(::Modio::Reports::ModNotWorkingReason, "Modio.Reports", "ModNotWorkingReason");
// Dependencies 
namespace Modio::Reports {
// Is value type: true
// CS Name: Modio.Reports.ModNotWorkingReason
struct CORDL_TYPE ModNotWorkingReason {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModNotWorkingReason_Unwrapped
enum struct __ModNotWorkingReason_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CrashesGame = static_cast<int32_t>(0x1),
__E_DoesNotLoad = static_cast<int32_t>(0x2),
__E_ConflictsWithOtherMods = static_cast<int32_t>(0x3),
__E_MissingDependencies = static_cast<int32_t>(0x4),
__E_InstallationIssues = static_cast<int32_t>(0x5),
__E_BuggyBehaviour = static_cast<int32_t>(0x6),
__E_IncompatibleWithGameVersion = static_cast<int32_t>(0x7),
__E_FileCorruption = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModNotWorkingReason_Unwrapped () const noexcept {
return static_cast<__ModNotWorkingReason_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModNotWorkingReason() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModNotWorkingReason(int32_t  value__) noexcept;

/// @brief Field BuggyBehaviour value: I32(6)
static ::Modio::Reports::ModNotWorkingReason const BuggyBehaviour;

/// @brief Field ConflictsWithOtherMods value: I32(3)
static ::Modio::Reports::ModNotWorkingReason const ConflictsWithOtherMods;

/// @brief Field CrashesGame value: I32(1)
static ::Modio::Reports::ModNotWorkingReason const CrashesGame;

/// @brief Field DoesNotLoad value: I32(2)
static ::Modio::Reports::ModNotWorkingReason const DoesNotLoad;

/// @brief Field FileCorruption value: I32(8)
static ::Modio::Reports::ModNotWorkingReason const FileCorruption;

/// @brief Field IncompatibleWithGameVersion value: I32(7)
static ::Modio::Reports::ModNotWorkingReason const IncompatibleWithGameVersion;

/// @brief Field InstallationIssues value: I32(5)
static ::Modio::Reports::ModNotWorkingReason const InstallationIssues;

/// @brief Field MissingDependencies value: I32(4)
static ::Modio::Reports::ModNotWorkingReason const MissingDependencies;

/// @brief Field None value: I32(0)
static ::Modio::Reports::ModNotWorkingReason const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17555};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Reports::ModNotWorkingReason, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Reports::ModNotWorkingReason) == 0x4, "Size mismatch!");

} // namespace end def Modio::Reports
