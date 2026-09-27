#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyFileOperations_Operation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModPropertyFileOperations_Operation)
// Forward declare root types
namespace GlobalNamespace {
struct ModPropertyFileOperations_Operation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModPropertyFileOperations_Operation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModPropertyFileOperations_Operation, "Modio.Unity.UI.Components.ModProperties", "ModPropertyFileOperations/Operation");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Components.ModProperties.ModPropertyFileOperations/Operation
struct CORDL_TYPE ModPropertyFileOperations_Operation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModPropertyFileOperations_Operation_Unwrapped
enum struct __ModPropertyFileOperations_Operation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Queued = static_cast<int32_t>(0x1),
__E_Downloading = static_cast<int32_t>(0x2),
__E_Installing = static_cast<int32_t>(0x4),
__E_Installed = static_cast<int32_t>(0x8),
__E_Updating = static_cast<int32_t>(0x10),
__E_Uninstalling = static_cast<int32_t>(0x20),
__E_FileOperationFailed = static_cast<int32_t>(0x40),
__E_InstalledByOtherUser = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModPropertyFileOperations_Operation_Unwrapped () const noexcept {
return static_cast<__ModPropertyFileOperations_Operation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModPropertyFileOperations_Operation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModPropertyFileOperations_Operation(int32_t  value__) noexcept;

/// @brief Field Downloading value: I32(2)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const Downloading;

/// @brief Field FileOperationFailed value: I32(64)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const FileOperationFailed;

/// @brief Field Installed value: I32(8)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const Installed;

/// @brief Field InstalledByOtherUser value: I32(128)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const InstalledByOtherUser;

/// @brief Field Installing value: I32(4)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const Installing;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const None;

/// @brief Field Queued value: I32(1)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const Queued;

/// @brief Field Uninstalling value: I32(32)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const Uninstalling;

/// @brief Field Updating value: I32(16)
static ::GlobalNamespace::ModPropertyFileOperations_Operation const Updating;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27228};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModPropertyFileOperations_Operation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModPropertyFileOperations_Operation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
