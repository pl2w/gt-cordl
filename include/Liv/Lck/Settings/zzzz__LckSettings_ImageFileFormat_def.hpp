#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings_ImageFileFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckSettings_ImageFileFormat)
// Forward declare root types
namespace GlobalNamespace {
struct LckSettings_ImageFileFormat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckSettings_ImageFileFormat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSettings_ImageFileFormat, "Liv.Lck.Settings", "LckSettings/ImageFileFormat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Settings.LckSettings/ImageFileFormat
struct CORDL_TYPE LckSettings_ImageFileFormat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckSettings_ImageFileFormat_Unwrapped
enum struct __LckSettings_ImageFileFormat_Unwrapped : int32_t {
__E_EXR = static_cast<int32_t>(0x0),
__E_JPG = static_cast<int32_t>(0x1),
__E_TGA = static_cast<int32_t>(0x2),
__E_PNG = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckSettings_ImageFileFormat_Unwrapped () const noexcept {
return static_cast<__LckSettings_ImageFileFormat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckSettings_ImageFileFormat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckSettings_ImageFileFormat(int32_t  value__) noexcept;

/// @brief Field EXR value: I32(0)
static ::GlobalNamespace::LckSettings_ImageFileFormat const EXR;

/// @brief Field JPG value: I32(1)
static ::GlobalNamespace::LckSettings_ImageFileFormat const JPG;

/// @brief Field PNG value: I32(3)
static ::GlobalNamespace::LckSettings_ImageFileFormat const PNG;

/// @brief Field TGA value: I32(2)
static ::GlobalNamespace::LckSettings_ImageFileFormat const TGA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24868};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckSettings_ImageFileFormat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckSettings_ImageFileFormat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
