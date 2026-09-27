#pragma once
// IWYU pragma private; include "UnityEngine/Camera_GateFitMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera_GateFitMode)
// Forward declare root types
namespace GlobalNamespace {
struct Camera_GateFitMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Camera_GateFitMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Camera_GateFitMode, "UnityEngine", "Camera/GateFitMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Camera/GateFitMode
struct CORDL_TYPE Camera_GateFitMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Camera_GateFitMode_Unwrapped
enum struct __Camera_GateFitMode_Unwrapped : int32_t {
__E_Vertical = static_cast<int32_t>(0x1),
__E_Horizontal = static_cast<int32_t>(0x2),
__E_Fill = static_cast<int32_t>(0x3),
__E_Overscan = static_cast<int32_t>(0x4),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Camera_GateFitMode_Unwrapped () const noexcept {
return static_cast<__Camera_GateFitMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Camera_GateFitMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Camera_GateFitMode(int32_t  value__) noexcept;

/// @brief Field Fill value: I32(3)
static ::GlobalNamespace::Camera_GateFitMode const Fill;

/// @brief Field Horizontal value: I32(2)
static ::GlobalNamespace::Camera_GateFitMode const Horizontal;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Camera_GateFitMode const None;

/// @brief Field Overscan value: I32(4)
static ::GlobalNamespace::Camera_GateFitMode const Overscan;

/// @brief Field Vertical value: I32(1)
static ::GlobalNamespace::Camera_GateFitMode const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Camera_GateFitMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Camera_GateFitMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
