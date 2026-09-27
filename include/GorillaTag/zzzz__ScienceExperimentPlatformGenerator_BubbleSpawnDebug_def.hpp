#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentPlatformGenerator_BubbleSpawnDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScienceExperimentPlatformGenerator_BubbleSpawnDebug)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentPlatformGenerator_BubbleSpawnDebug;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, "GorillaTag", "ScienceExperimentPlatformGenerator/BubbleSpawnDebug");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentPlatformGenerator/BubbleSpawnDebug
struct CORDL_TYPE ScienceExperimentPlatformGenerator_BubbleSpawnDebug {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentPlatformGenerator_BubbleSpawnDebug() ;

// Ctor Parameters [CppParam { name: "initialPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "initialDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "spawnPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "minAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "edgeCorrectionAngle", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "spawnTime", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentPlatformGenerator_BubbleSpawnDebug(::UnityEngine::Vector3  initialPosition, ::UnityEngine::Vector3  initialDirection, ::UnityEngine::Vector3  spawnPosition, float_t  minAngle, float_t  maxAngle, float_t  edgeCorrectionAngle, double_t  spawnTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4645};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field initialPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  initialPosition;

/// @brief Field initialDirection, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  initialDirection;

/// @brief Field spawnPosition, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  spawnPosition;

/// @brief Field minAngle, offset: 0x24, size: 0x4, def value: None
 float_t  minAngle;

/// @brief Field maxAngle, offset: 0x28, size: 0x4, def value: None
 float_t  maxAngle;

/// @brief Field edgeCorrectionAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  edgeCorrectionAngle;

/// @brief Field spawnTime, offset: 0x30, size: 0x8, def value: None
 double_t  spawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, initialPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, initialDirection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, spawnPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, minAngle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, maxAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, edgeCorrectionAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug, spawnTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
