#pragma once
// IWYU pragma private; include "Modio/Mods/ModChangeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModChangeType)
// Forward declare root types
namespace Modio::Mods {
struct ModChangeType;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModChangeType);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModChangeType, "Modio.Mods", "ModChangeType");
// [Flags]
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModChangeType
struct CORDL_TYPE ModChangeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModChangeType_Unwrapped
enum struct __ModChangeType_Unwrapped : int32_t {
__E_Modfile = static_cast<int32_t>(0x1),
__E_IsEnabled = static_cast<int32_t>(0x2),
__E_IsSubscribed = static_cast<int32_t>(0x4),
__E_ModObject = static_cast<int32_t>(0x8),
__E_DownloadProgress = static_cast<int32_t>(0x10),
__E_FileState = static_cast<int32_t>(0x20),
__E_Rating = static_cast<int32_t>(0x40),
__E_IsPurchased = static_cast<int32_t>(0x80),
__E_Generic = static_cast<int32_t>(0x100),
__E_Dependencies = static_cast<int32_t>(0x200),
__E_Everything = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModChangeType_Unwrapped () const noexcept {
return static_cast<__ModChangeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModChangeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModChangeType(int32_t  value__) noexcept;

/// @brief Field Dependencies value: I32(512)
static ::Modio::Mods::ModChangeType const Dependencies;

/// @brief Field DownloadProgress value: I32(16)
static ::Modio::Mods::ModChangeType const DownloadProgress;

/// @brief Field Everything value: I32(-1)
static ::Modio::Mods::ModChangeType const Everything;

/// @brief Field FileState value: I32(32)
static ::Modio::Mods::ModChangeType const FileState;

/// @brief Field Generic value: I32(256)
static ::Modio::Mods::ModChangeType const Generic;

/// @brief Field IsEnabled value: I32(2)
static ::Modio::Mods::ModChangeType const IsEnabled;

/// @brief Field IsPurchased value: I32(128)
static ::Modio::Mods::ModChangeType const IsPurchased;

/// @brief Field IsSubscribed value: I32(4)
static ::Modio::Mods::ModChangeType const IsSubscribed;

/// @brief Field ModObject value: I32(8)
static ::Modio::Mods::ModChangeType const ModObject;

/// @brief Field Modfile value: I32(1)
static ::Modio::Mods::ModChangeType const Modfile;

/// @brief Field Rating value: I32(64)
static ::Modio::Mods::ModChangeType const Rating;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17583};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModChangeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModChangeType) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
