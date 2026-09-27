#pragma once
// IWYU pragma private; include "Fusion/NetworkMecanimAnimator_AnimatorData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkMecanimAnimator_AnimatorData)
namespace Fusion {
struct AnimatorSyncSettings;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
struct NetworkMecanimAnimator_AnimatorData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, "Fusion", "NetworkMecanimAnimator/AnimatorData");
// [IsReadOnly]
// Dependencies UnityEngine.AnimatorControllerParameter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkMecanimAnimator/AnimatorData
struct CORDL_TYPE NetworkMecanimAnimator_AnimatorData {
public:
// Declarations
/// @brief Method GetWordCount, addr 0x5f86578, size 0x194, virtual false, abstract: false, final false
static inline int32_t GetWordCount(::Fusion::AnimatorSyncSettings  syncSettings, ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  parameters, ::ArrayW<int32_t>  parameterHashes, int32_t  layerCount, ::by_ref<int32_t>  param32Count, ::by_ref<int32_t>  paramBoolCount, ::by_ref<int32_t>  syncedLayerCount, ::by_ref<int32_t>  wordsUsedForBools) ;

/// @brief Method .ctor, addr 0x5f86388, size 0x14c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Animator*  animator, ::Fusion::AnimatorSyncSettings  syncSettings) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkMecanimAnimator_AnimatorData() ;

// Ctor Parameters [CppParam { name: "Param32Count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParamBoolCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Parameters", ty: "::ArrayW<::UnityEngine::AnimatorControllerParameter*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParameterCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParameterHashes", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "LayerCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SyncedLayerCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParamBoolsWordCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ParamBoolsPtrOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "WordCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PrevBoolsBitmask", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr NetworkMecanimAnimator_AnimatorData(int32_t  Param32Count, int32_t  ParamBoolCount, ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  Parameters, int32_t  ParameterCount, ::ArrayW<int32_t>  ParameterHashes, int32_t  LayerCount, int32_t  SyncedLayerCount, int32_t  ParamBoolsWordCount, int32_t  ParamBoolsPtrOffset, int32_t  WordCount, ::ArrayW<int32_t>  PrevBoolsBitmask) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Param32Count, offset: 0x0, size: 0x4, def value: None
 int32_t  Param32Count;

/// @brief Field ParamBoolCount, offset: 0x4, size: 0x4, def value: None
 int32_t  ParamBoolCount;

/// @brief Field Parameters, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  Parameters;

/// @brief Field ParameterCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ParameterCount;

/// @brief Field ParameterHashes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<int32_t>  ParameterHashes;

/// @brief Field LayerCount, offset: 0x20, size: 0x4, def value: None
 int32_t  LayerCount;

/// @brief Field SyncedLayerCount, offset: 0x24, size: 0x4, def value: None
 int32_t  SyncedLayerCount;

/// @brief Field ParamBoolsWordCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ParamBoolsWordCount;

/// @brief Field ParamBoolsPtrOffset, offset: 0x2c, size: 0x4, def value: None
 int32_t  ParamBoolsPtrOffset;

/// @brief Field WordCount, offset: 0x30, size: 0x4, def value: None
 int32_t  WordCount;

/// @brief Field PrevBoolsBitmask, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  PrevBoolsBitmask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, Param32Count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, ParamBoolCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, Parameters) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, ParameterCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, ParameterHashes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, LayerCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, SyncedLayerCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, ParamBoolsWordCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, ParamBoolsPtrOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, WordCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData, PrevBoolsBitmask) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetworkMecanimAnimator_AnimatorData) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
