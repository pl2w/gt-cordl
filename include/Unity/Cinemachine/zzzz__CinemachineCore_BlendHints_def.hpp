#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineCore_BlendHints.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineCore_BlendHints)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineCore_BlendHints;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineCore_BlendHints);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineCore_BlendHints, "Unity.Cinemachine", "CinemachineCore/BlendHints");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineCore/BlendHints
struct CORDL_TYPE CinemachineCore_BlendHints {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineCore_BlendHints_Unwrapped
enum struct __CinemachineCore_BlendHints_Unwrapped : int32_t {
__E_SphericalPosition = static_cast<int32_t>(0x1),
__E_CylindricalPosition = static_cast<int32_t>(0x2),
__E_ScreenSpaceAimWhenTargetsDiffer = static_cast<int32_t>(0x4),
__E_InheritPosition = static_cast<int32_t>(0x8),
__E_IgnoreTarget = static_cast<int32_t>(0x10),
__E_FreezeWhenBlendingOut = static_cast<int32_t>(0x20),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineCore_BlendHints_Unwrapped () const noexcept {
return static_cast<__CinemachineCore_BlendHints_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineCore_BlendHints() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineCore_BlendHints(int32_t  value__) noexcept;

/// @brief Field CylindricalPosition value: I32(2)
static ::GlobalNamespace::CinemachineCore_BlendHints const CylindricalPosition;

/// @brief Field FreezeWhenBlendingOut value: I32(32)
static ::GlobalNamespace::CinemachineCore_BlendHints const FreezeWhenBlendingOut;

/// @brief Field IgnoreTarget value: I32(16)
static ::GlobalNamespace::CinemachineCore_BlendHints const IgnoreTarget;

/// @brief Field InheritPosition value: I32(8)
static ::GlobalNamespace::CinemachineCore_BlendHints const InheritPosition;

/// @brief Field ScreenSpaceAimWhenTargetsDiffer value: I32(4)
static ::GlobalNamespace::CinemachineCore_BlendHints const ScreenSpaceAimWhenTargetsDiffer;

/// @brief Field SphericalPosition value: I32(1)
static ::GlobalNamespace::CinemachineCore_BlendHints const SphericalPosition;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22277};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineCore_BlendHints, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineCore_BlendHints) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
