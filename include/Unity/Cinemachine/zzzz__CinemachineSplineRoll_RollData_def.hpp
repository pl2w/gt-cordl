#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll_RollData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSplineRoll_RollData)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineRoll_RollData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineRoll_RollData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineRoll_RollData, "Unity.Cinemachine", "CinemachineSplineRoll/RollData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineRoll/RollData
struct CORDL_TYPE CinemachineSplineRoll_RollData {
public:
// Declarations
/// @brief Method op_Implicit, addr 0xae986fc, size 0x4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineSplineRoll_RollData op_Implicit___GlobalNamespace__CinemachineSplineRoll_RollData(float_t  roll) ;

/// @brief Method op_Implicit, addr 0xae987ac, size 0x4, virtual false, abstract: false, final false
static inline float_t op_Implicit_float_t(::GlobalNamespace::CinemachineSplineRoll_RollData  roll) ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineRoll_RollData() ;

// Ctor Parameters [CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSplineRoll_RollData(float_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [Tooltip("Roll (in degrees) around the forward direction for specific location on the track.\n- When placed on a SplineContainer, this is going to be a global override that affects all vcams using the Spline.\n- When placed on a CinemachineCamera, this is going to be a local override that only affects that CinemachineCamera.")]
/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 float_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSplineRoll_RollData, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSplineRoll_RollData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
