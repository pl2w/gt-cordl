#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaVelocityEstimator_VelocityHistorySample.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaVelocityEstimator_VelocityHistorySample)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaVelocityEstimator_VelocityHistorySample;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample, "", "GorillaVelocityEstimator/VelocityHistorySample");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaVelocityEstimator/VelocityHistorySample
struct CORDL_TYPE GorillaVelocityEstimator_VelocityHistorySample {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GorillaVelocityEstimator_VelocityHistorySample() ;

// Ctor Parameters [CppParam { name: "linear", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "angular", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GorillaVelocityEstimator_VelocityHistorySample(::UnityEngine::Vector3  linear, ::UnityEngine::Vector3  angular) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field linear, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  linear;

/// @brief Field angular, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  angular;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample, linear) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample, angular) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaVelocityEstimator_VelocityHistorySample) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
