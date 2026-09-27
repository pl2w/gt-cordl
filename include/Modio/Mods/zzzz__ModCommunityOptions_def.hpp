#pragma once
// IWYU pragma private; include "Modio/Mods/ModCommunityOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModCommunityOptions)
// Forward declare root types
namespace Modio::Mods {
struct ModCommunityOptions;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModCommunityOptions);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModCommunityOptions, "Modio.Mods", "ModCommunityOptions");
// [Flags]
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModCommunityOptions
struct CORDL_TYPE ModCommunityOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModCommunityOptions_Unwrapped
enum struct __ModCommunityOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_EnableComments = static_cast<int32_t>(0x1),
__E_EnablePreviews = static_cast<int32_t>(0x40),
__E_EnablePreviewUrls = static_cast<int32_t>(0x80),
__E_AllowDependencies = static_cast<int32_t>(0x400),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModCommunityOptions_Unwrapped () const noexcept {
return static_cast<__ModCommunityOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModCommunityOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModCommunityOptions(int32_t  value__) noexcept;

/// @brief Field AllowDependencies value: I32(1024)
static ::Modio::Mods::ModCommunityOptions const AllowDependencies;

/// @brief Field EnableComments value: I32(1)
static ::Modio::Mods::ModCommunityOptions const EnableComments;

/// @brief Field EnablePreviewUrls value: I32(128)
static ::Modio::Mods::ModCommunityOptions const EnablePreviewUrls;

/// @brief Field EnablePreviews value: I32(64)
static ::Modio::Mods::ModCommunityOptions const EnablePreviews;

/// @brief Field None value: I32(0)
static ::Modio::Mods::ModCommunityOptions const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModCommunityOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModCommunityOptions) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
