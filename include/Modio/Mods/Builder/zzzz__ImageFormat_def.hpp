#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ImageFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImageFormat)
// Forward declare root types
namespace Modio::Mods::Builder {
struct ImageFormat;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::Builder::ImageFormat);
DEFINE_IL2CPP_CLASS(::Modio::Mods::Builder::ImageFormat, "Modio.Mods.Builder", "ImageFormat");
// Dependencies 
namespace Modio::Mods::Builder {
// Is value type: true
// CS Name: Modio.Mods.Builder.ImageFormat
struct CORDL_TYPE ImageFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImageFormat_Unwrapped
enum struct __ImageFormat_Unwrapped : int32_t {
__E_Jpg = static_cast<int32_t>(0x0),
__E_Jpeg = static_cast<int32_t>(0x1),
__E_Png = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImageFormat_Unwrapped () const noexcept {
return static_cast<__ImageFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ImageFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ImageFormat(int32_t  value__) noexcept;

/// @brief Field Jpeg value: I32(1)
static ::Modio::Mods::Builder::ImageFormat const Jpeg;

/// @brief Field Jpg value: I32(0)
static ::Modio::Mods::Builder::ImageFormat const Jpg;

/// @brief Field Png value: I32(2)
static ::Modio::Mods::Builder::ImageFormat const Png;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::Builder::ImageFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::Builder::ImageFormat) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods::Builder
