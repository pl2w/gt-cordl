#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePanTilt_RecenterTargetModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachinePanTilt_RecenterTargetModes)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachinePanTilt_RecenterTargetModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes, "Unity.Cinemachine", "CinemachinePanTilt/RecenterTargetModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachinePanTilt/RecenterTargetModes
struct CORDL_TYPE CinemachinePanTilt_RecenterTargetModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachinePanTilt_RecenterTargetModes_Unwrapped
enum struct __CinemachinePanTilt_RecenterTargetModes_Unwrapped : int32_t {
__E_AxisCenter = static_cast<int32_t>(0x0),
__E_TrackingTargetForward = static_cast<int32_t>(0x1),
__E_LookAtTargetForward = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachinePanTilt_RecenterTargetModes_Unwrapped () const noexcept {
return static_cast<__CinemachinePanTilt_RecenterTargetModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePanTilt_RecenterTargetModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachinePanTilt_RecenterTargetModes(int32_t  value__) noexcept;

/// @brief Field AxisCenter value: I32(0)
static ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes const AxisCenter;

/// @brief Field LookAtTargetForward value: I32(2)
static ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes const LookAtTargetForward;

/// @brief Field TrackingTargetForward value: I32(1)
static ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes const TrackingTargetForward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22236};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
