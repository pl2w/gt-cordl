#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PixelPerfectCamera_GridSnapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelPerfectCamera_GridSnapping)
// Forward declare root types
namespace GlobalNamespace {
struct PixelPerfectCamera_GridSnapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PixelPerfectCamera_GridSnapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PixelPerfectCamera_GridSnapping, "UnityEngine.Rendering.Universal", "PixelPerfectCamera/GridSnapping");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PixelPerfectCamera/GridSnapping
struct CORDL_TYPE PixelPerfectCamera_GridSnapping {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PixelPerfectCamera_GridSnapping_Unwrapped
enum struct __PixelPerfectCamera_GridSnapping_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PixelSnapping = static_cast<int32_t>(0x1),
__E_UpscaleRenderTexture = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PixelPerfectCamera_GridSnapping_Unwrapped () const noexcept {
return static_cast<__PixelPerfectCamera_GridSnapping_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PixelPerfectCamera_GridSnapping() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PixelPerfectCamera_GridSnapping(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PixelPerfectCamera_GridSnapping const None;

/// @brief Field PixelSnapping value: I32(1)
static ::GlobalNamespace::PixelPerfectCamera_GridSnapping const PixelSnapping;

/// @brief Field UpscaleRenderTexture value: I32(2)
static ::GlobalNamespace::PixelPerfectCamera_GridSnapping const UpscaleRenderTexture;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PixelPerfectCamera_GridSnapping, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PixelPerfectCamera_GridSnapping) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
