#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/AnimationOutputWeightProcessor_WeightInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationOutputWeightProcessor_WeightInfo)
// Forward declare root types
namespace GlobalNamespace {
struct AnimationOutputWeightProcessor_WeightInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo, "UnityEngine.Timeline", "AnimationOutputWeightProcessor/WeightInfo");
// Dependencies UnityEngine.Playables.Playable
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct CORDL_TYPE AnimationOutputWeightProcessor_WeightInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AnimationOutputWeightProcessor_WeightInfo() ;

// Ctor Parameters [CppParam { name: "mixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentMixer", ty: "::UnityEngine::Playables::Playable", modifiers: "", def_value: None, comment: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnimationOutputWeightProcessor_WeightInfo(::UnityEngine::Playables::Playable  mixer, ::UnityEngine::Playables::Playable  parentMixer, int32_t  port) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field mixer, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Playables::Playable  mixer;

/// @brief Field parentMixer, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Playables::Playable  parentMixer;

/// @brief Field port, offset: 0x20, size: 0x4, def value: None
 int32_t  port;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo, mixer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo, parentMixer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo, port) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationOutputWeightProcessor_WeightInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
