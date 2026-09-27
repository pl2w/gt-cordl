#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraState_BlendHints.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraState_BlendHints)
// Forward declare root types
namespace GlobalNamespace {
struct CameraState_BlendHints;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CameraState_BlendHints);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CameraState_BlendHints, "Unity.Cinemachine", "CameraState/BlendHints");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CameraState/BlendHints
struct CORDL_TYPE CameraState_BlendHints {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CameraState_BlendHints_Unwrapped
enum struct __CameraState_BlendHints_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_SphericalPositionBlend = static_cast<int32_t>(0x1),
__E_CylindricalPositionBlend = static_cast<int32_t>(0x2),
__E_ScreenSpaceAimWhenTargetsDiffer = static_cast<int32_t>(0x4),
__E_InheritPosition = static_cast<int32_t>(0x8),
__E_IgnoreLookAtTarget = static_cast<int32_t>(0x10),
__E_FreezeWhenBlendingOut = static_cast<int32_t>(0x20),
__E_NoPosition = static_cast<int32_t>(0x10000),
__E_NoOrientation = static_cast<int32_t>(0x20000),
__E_NoTransform = static_cast<int32_t>(0x30000),
__E_NoLens = static_cast<int32_t>(0x40000),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraState_BlendHints_Unwrapped () const noexcept {
return static_cast<__CameraState_BlendHints_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CameraState_BlendHints() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CameraState_BlendHints(int32_t  value__) noexcept;

/// @brief Field CylindricalPositionBlend value: I32(2)
static ::GlobalNamespace::CameraState_BlendHints const CylindricalPositionBlend;

/// @brief Field FreezeWhenBlendingOut value: I32(32)
static ::GlobalNamespace::CameraState_BlendHints const FreezeWhenBlendingOut;

/// @brief Field IgnoreLookAtTarget value: I32(16)
static ::GlobalNamespace::CameraState_BlendHints const IgnoreLookAtTarget;

/// @brief Field InheritPosition value: I32(8)
static ::GlobalNamespace::CameraState_BlendHints const InheritPosition;

/// @brief Field NoLens value: I32(262144)
static ::GlobalNamespace::CameraState_BlendHints const NoLens;

/// @brief Field NoOrientation value: I32(131072)
static ::GlobalNamespace::CameraState_BlendHints const NoOrientation;

/// @brief Field NoPosition value: I32(65536)
static ::GlobalNamespace::CameraState_BlendHints const NoPosition;

/// @brief Field NoTransform value: I32(196608)
static ::GlobalNamespace::CameraState_BlendHints const NoTransform;

/// @brief Field Nothing value: I32(0)
static ::GlobalNamespace::CameraState_BlendHints const Nothing;

/// @brief Field ScreenSpaceAimWhenTargetsDiffer value: I32(4)
static ::GlobalNamespace::CameraState_BlendHints const ScreenSpaceAimWhenTargetsDiffer;

/// @brief Field SphericalPositionBlend value: I32(1)
static ::GlobalNamespace::CameraState_BlendHints const SphericalPositionBlend;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CameraState_BlendHints, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CameraState_BlendHints) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
