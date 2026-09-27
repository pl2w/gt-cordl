#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PixelPerfectCamera_PixelPerfectFilterMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelPerfectCamera_PixelPerfectFilterMode)
// Forward declare root types
namespace GlobalNamespace {
struct PixelPerfectCamera_PixelPerfectFilterMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode, "UnityEngine.Rendering.Universal", "PixelPerfectCamera/PixelPerfectFilterMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PixelPerfectCamera/PixelPerfectFilterMode
struct CORDL_TYPE PixelPerfectCamera_PixelPerfectFilterMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PixelPerfectCamera_PixelPerfectFilterMode_Unwrapped
enum struct __PixelPerfectCamera_PixelPerfectFilterMode_Unwrapped : int32_t {
__E_RetroAA = static_cast<int32_t>(0x0),
__E_Point = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PixelPerfectCamera_PixelPerfectFilterMode_Unwrapped () const noexcept {
return static_cast<__PixelPerfectCamera_PixelPerfectFilterMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PixelPerfectCamera_PixelPerfectFilterMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PixelPerfectCamera_PixelPerfectFilterMode(int32_t  value__) noexcept;

/// @brief Field Point value: I32(1)
static ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode const Point;

/// @brief Field RetroAA value: I32(0)
static ::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode const RetroAA;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32905};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PixelPerfectCamera_PixelPerfectFilterMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
