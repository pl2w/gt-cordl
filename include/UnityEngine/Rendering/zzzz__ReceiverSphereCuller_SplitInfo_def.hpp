#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ReceiverSphereCuller_SplitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ReceiverSphereCuller_SplitInfo)
// Forward declare root types
namespace GlobalNamespace {
struct ReceiverSphereCuller_SplitInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ReceiverSphereCuller_SplitInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReceiverSphereCuller_SplitInfo, "UnityEngine.Rendering", "ReceiverSphereCuller/SplitInfo");
// Dependencies Unity.Mathematics.float4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ReceiverSphereCuller/SplitInfo
struct CORDL_TYPE ReceiverSphereCuller_SplitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ReceiverSphereCuller_SplitInfo() ;

// Ctor Parameters [CppParam { name: "receiverSphereLightSpace", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "cascadeBlendCullingFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ReceiverSphereCuller_SplitInfo(::Unity::Mathematics::float4  receiverSphereLightSpace, float_t  cascadeBlendCullingFactor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field receiverSphereLightSpace, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  receiverSphereLightSpace;

/// @brief Field cascadeBlendCullingFactor, offset: 0x10, size: 0x4, def value: None
 float_t  cascadeBlendCullingFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReceiverSphereCuller_SplitInfo, receiverSphereLightSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReceiverSphereCuller_SplitInfo, cascadeBlendCullingFactor) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReceiverSphereCuller_SplitInfo) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
