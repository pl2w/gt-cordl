#pragma once
// IWYU pragma private; include "Modio/Mods/ModFileState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModFileState)
// Forward declare root types
namespace Modio::Mods {
struct ModFileState;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModFileState);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModFileState, "Modio.Mods", "ModFileState");
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModFileState
struct CORDL_TYPE ModFileState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModFileState_Unwrapped
enum struct __ModFileState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Queued = static_cast<int32_t>(0x1),
__E_Downloading = static_cast<int32_t>(0x2),
__E_Downloaded = static_cast<int32_t>(0x3),
__E_Installing = static_cast<int32_t>(0x4),
__E_Installed = static_cast<int32_t>(0x5),
__E_Updating = static_cast<int32_t>(0x6),
__E_Uninstalling = static_cast<int32_t>(0x7),
__E_FileOperationFailed = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModFileState_Unwrapped () const noexcept {
return static_cast<__ModFileState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModFileState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModFileState(int32_t  value__) noexcept;

/// @brief Field Downloaded value: I32(3)
static ::Modio::Mods::ModFileState const Downloaded;

/// @brief Field Downloading value: I32(2)
static ::Modio::Mods::ModFileState const Downloading;

/// @brief Field FileOperationFailed value: I32(8)
static ::Modio::Mods::ModFileState const FileOperationFailed;

/// @brief Field Installed value: I32(5)
static ::Modio::Mods::ModFileState const Installed;

/// @brief Field Installing value: I32(4)
static ::Modio::Mods::ModFileState const Installing;

/// @brief Field None value: I32(0)
static ::Modio::Mods::ModFileState const None;

/// @brief Field Queued value: I32(1)
static ::Modio::Mods::ModFileState const Queued;

/// @brief Field Uninstalling value: I32(7)
static ::Modio::Mods::ModFileState const Uninstalling;

/// @brief Field Updating value: I32(6)
static ::Modio::Mods::ModFileState const Updating;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17591};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModFileState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModFileState) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
