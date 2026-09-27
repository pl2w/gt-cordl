#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineOrbitalFollow_ReferenceFrames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineOrbitalFollow_ReferenceFrames)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineOrbitalFollow_ReferenceFrames;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames, "Unity.Cinemachine", "CinemachineOrbitalFollow/ReferenceFrames");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineOrbitalFollow/ReferenceFrames
struct CORDL_TYPE CinemachineOrbitalFollow_ReferenceFrames {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineOrbitalFollow_ReferenceFrames_Unwrapped
enum struct __CinemachineOrbitalFollow_ReferenceFrames_Unwrapped : int32_t {
__E_AxisCenter = static_cast<int32_t>(0x0),
__E_ParentObject = static_cast<int32_t>(0x1),
__E_TrackingTarget = static_cast<int32_t>(0x2),
__E_LookAtTarget = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineOrbitalFollow_ReferenceFrames_Unwrapped () const noexcept {
return static_cast<__CinemachineOrbitalFollow_ReferenceFrames_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineOrbitalFollow_ReferenceFrames() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineOrbitalFollow_ReferenceFrames(int32_t  value__) noexcept;

/// @brief Field AxisCenter value: I32(0)
static ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames const AxisCenter;

/// @brief Field LookAtTarget value: I32(3)
static ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames const LookAtTarget;

/// @brief Field ParentObject value: I32(1)
static ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames const ParentObject;

/// @brief Field TrackingTarget value: I32(2)
static ::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames const TrackingTarget;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineOrbitalFollow_ReferenceFrames) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
