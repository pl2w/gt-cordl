#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ChangeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChangeFlags)
// Forward declare root types
namespace Modio::Mods::Builder {
struct ChangeFlags;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::Builder::ChangeFlags);
DEFINE_IL2CPP_CLASS(::Modio::Mods::Builder::ChangeFlags, "Modio.Mods.Builder", "ChangeFlags");
// [Flags]
// Dependencies 
namespace Modio::Mods::Builder {
// Is value type: true
// CS Name: Modio.Mods.Builder.ChangeFlags
struct CORDL_TYPE ChangeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChangeFlags_Unwrapped
enum struct __ChangeFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Name = static_cast<int32_t>(0x1),
__E_Summary = static_cast<int32_t>(0x2),
__E_Description = static_cast<int32_t>(0x4),
__E_Logo = static_cast<int32_t>(0x8),
__E_Gallery = static_cast<int32_t>(0x10),
__E_Tags = static_cast<int32_t>(0x20),
__E_MetadataBlob = static_cast<int32_t>(0x40),
__E_MetadataKvps = static_cast<int32_t>(0x80),
__E_Visibility = static_cast<int32_t>(0x100),
__E_MaturityOptions = static_cast<int32_t>(0x200),
__E_CommunityOptions = static_cast<int32_t>(0x400),
__E_Modfile = static_cast<int32_t>(0x800),
__E_MonetizationConfig = static_cast<int32_t>(0x1000),
__E_Dependencies = static_cast<int32_t>(0x2000),
__E_AddFlags = static_cast<int32_t>(0x76f),
__E_EditFlags = static_cast<int32_t>(0x176f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChangeFlags_Unwrapped () const noexcept {
return static_cast<__ChangeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChangeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChangeFlags(int32_t  value__) noexcept;

/// @brief Field AddFlags value: I32(1903)
static ::Modio::Mods::Builder::ChangeFlags const AddFlags;

/// @brief Field CommunityOptions value: I32(1024)
static ::Modio::Mods::Builder::ChangeFlags const CommunityOptions;

/// @brief Field Dependencies value: I32(8192)
static ::Modio::Mods::Builder::ChangeFlags const Dependencies;

/// @brief Field Description value: I32(4)
static ::Modio::Mods::Builder::ChangeFlags const Description;

/// @brief Field EditFlags value: I32(5999)
static ::Modio::Mods::Builder::ChangeFlags const EditFlags;

/// @brief Field Gallery value: I32(16)
static ::Modio::Mods::Builder::ChangeFlags const Gallery;

/// @brief Field Logo value: I32(8)
static ::Modio::Mods::Builder::ChangeFlags const Logo;

/// @brief Field MaturityOptions value: I32(512)
static ::Modio::Mods::Builder::ChangeFlags const MaturityOptions;

/// @brief Field MetadataBlob value: I32(64)
static ::Modio::Mods::Builder::ChangeFlags const MetadataBlob;

/// @brief Field MetadataKvps value: I32(128)
static ::Modio::Mods::Builder::ChangeFlags const MetadataKvps;

/// @brief Field Modfile value: I32(2048)
static ::Modio::Mods::Builder::ChangeFlags const Modfile;

/// @brief Field MonetizationConfig value: I32(4096)
static ::Modio::Mods::Builder::ChangeFlags const MonetizationConfig;

/// @brief Field Name value: I32(1)
static ::Modio::Mods::Builder::ChangeFlags const Name;

/// @brief Field None value: I32(0)
static ::Modio::Mods::Builder::ChangeFlags const None;

/// @brief Field Summary value: I32(2)
static ::Modio::Mods::Builder::ChangeFlags const Summary;

/// @brief Field Tags value: I32(32)
static ::Modio::Mods::Builder::ChangeFlags const Tags;

/// @brief Field Visibility value: I32(256)
static ::Modio::Mods::Builder::ChangeFlags const Visibility;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17604};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::Builder::ChangeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::Builder::ChangeFlags) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods::Builder
