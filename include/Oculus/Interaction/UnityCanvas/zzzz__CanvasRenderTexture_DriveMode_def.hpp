#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasRenderTexture_DriveMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasRenderTexture_DriveMode)
// Forward declare root types
namespace GlobalNamespace {
struct CanvasRenderTexture_DriveMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CanvasRenderTexture_DriveMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CanvasRenderTexture_DriveMode, "Oculus.Interaction.UnityCanvas", "CanvasRenderTexture/DriveMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.UnityCanvas.CanvasRenderTexture/DriveMode
struct CORDL_TYPE CanvasRenderTexture_DriveMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CanvasRenderTexture_DriveMode_Unwrapped
enum struct __CanvasRenderTexture_DriveMode_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0x0),
__E_Manual = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CanvasRenderTexture_DriveMode_Unwrapped () const noexcept {
return static_cast<__CanvasRenderTexture_DriveMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CanvasRenderTexture_DriveMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CanvasRenderTexture_DriveMode(int32_t  value__) noexcept;

/// @brief Field Auto value: I32(0)
static ::GlobalNamespace::CanvasRenderTexture_DriveMode const Auto;

/// @brief Field Manual value: I32(1)
static ::GlobalNamespace::CanvasRenderTexture_DriveMode const Manual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasRenderTexture_DriveMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CanvasRenderTexture_DriveMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
