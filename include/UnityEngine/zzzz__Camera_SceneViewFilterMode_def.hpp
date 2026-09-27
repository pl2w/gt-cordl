#pragma once
// IWYU pragma private; include "UnityEngine/Camera_SceneViewFilterMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Camera_SceneViewFilterMode)
// Forward declare root types
namespace GlobalNamespace {
struct Camera_SceneViewFilterMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Camera_SceneViewFilterMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Camera_SceneViewFilterMode, "UnityEngine", "Camera/SceneViewFilterMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Camera/SceneViewFilterMode
struct CORDL_TYPE Camera_SceneViewFilterMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Camera_SceneViewFilterMode_Unwrapped
enum struct __Camera_SceneViewFilterMode_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_ShowFiltered = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Camera_SceneViewFilterMode_Unwrapped () const noexcept {
return static_cast<__Camera_SceneViewFilterMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Camera_SceneViewFilterMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Camera_SceneViewFilterMode(int32_t  value__) noexcept;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::Camera_SceneViewFilterMode const Off;

/// @brief Field ShowFiltered value: I32(1)
static ::GlobalNamespace::Camera_SceneViewFilterMode const ShowFiltered;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Camera_SceneViewFilterMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Camera_SceneViewFilterMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
