#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentPlatformGenerator_BubbleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScienceExperimentPlatformGenerator_BubbleData)
namespace GlobalNamespace {
class SodaBubble;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentPlatformGenerator_BubbleData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, "GorillaTag", "ScienceExperimentPlatformGenerator/BubbleData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentPlatformGenerator/BubbleData
struct CORDL_TYPE ScienceExperimentPlatformGenerator_BubbleData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentPlatformGenerator_BubbleData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "spawnSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lifetime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "spawnTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isTrail", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bubble", ty: "::UnityW<::GlobalNamespace::SodaBubble>", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentPlatformGenerator_BubbleData(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  spawnSize, float_t  lifetime, double_t  spawnTime, bool  isTrail, ::UnityW<::GlobalNamespace::SodaBubble>  bubble) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4644};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field direction, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  direction;

/// @brief Field spawnSize, offset: 0x18, size: 0x4, def value: None
 float_t  spawnSize;

/// @brief Field lifetime, offset: 0x1c, size: 0x4, def value: None
 float_t  lifetime;

/// @brief Field spawnTime, offset: 0x20, size: 0x8, def value: None
 double_t  spawnTime;

/// @brief Field isTrail, offset: 0x28, size: 0x1, def value: None
 bool  isTrail;

/// @brief Field bubble, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SodaBubble>  bubble;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, direction) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, spawnSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, lifetime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, spawnTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, isTrail) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData, bubble) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
