#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePOV_RecenterTargetMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachinePOV_RecenterTargetMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachinePOV_RecenterTargetMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachinePOV_RecenterTargetMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachinePOV_RecenterTargetMode, "Unity.Cinemachine", "CinemachinePOV/RecenterTargetMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachinePOV/RecenterTargetMode
struct CORDL_TYPE CinemachinePOV_RecenterTargetMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachinePOV_RecenterTargetMode_Unwrapped
enum struct __CinemachinePOV_RecenterTargetMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FollowTargetForward = static_cast<int32_t>(0x1),
__E_LookAtTargetForward = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachinePOV_RecenterTargetMode_Unwrapped () const noexcept {
return static_cast<__CinemachinePOV_RecenterTargetMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePOV_RecenterTargetMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachinePOV_RecenterTargetMode(int32_t  value__) noexcept;

/// @brief Field FollowTargetForward value: I32(1)
static ::GlobalNamespace::CinemachinePOV_RecenterTargetMode const FollowTargetForward;

/// @brief Field LookAtTargetForward value: I32(2)
static ::GlobalNamespace::CinemachinePOV_RecenterTargetMode const LookAtTargetForward;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CinemachinePOV_RecenterTargetMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachinePOV_RecenterTargetMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachinePOV_RecenterTargetMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
