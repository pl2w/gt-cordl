#pragma once
// IWYU pragma private; include "Modio/Mods/Mod_GalleryResolution.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mod_GalleryResolution)
// Forward declare root types
namespace GlobalNamespace {
struct Mod_GalleryResolution;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mod_GalleryResolution);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mod_GalleryResolution, "Modio.Mods", "Mod/GalleryResolution");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Mod/GalleryResolution
struct CORDL_TYPE Mod_GalleryResolution {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Mod_GalleryResolution_Unwrapped
enum struct __Mod_GalleryResolution_Unwrapped : int32_t {
__E_X320_Y180 = static_cast<int32_t>(0x0),
__E_X1280_Y720 = static_cast<int32_t>(0x1),
__E_Original = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Mod_GalleryResolution_Unwrapped () const noexcept {
return static_cast<__Mod_GalleryResolution_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Mod_GalleryResolution() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Mod_GalleryResolution(int32_t  value__) noexcept;

/// @brief Field Original value: I32(2)
static ::GlobalNamespace::Mod_GalleryResolution const Original;

/// @brief Field X1280_Y720 value: I32(1)
static ::GlobalNamespace::Mod_GalleryResolution const X1280_Y720;

/// @brief Field X320_Y180 value: I32(0)
static ::GlobalNamespace::Mod_GalleryResolution const X320_Y180;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mod_GalleryResolution, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mod_GalleryResolution) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
