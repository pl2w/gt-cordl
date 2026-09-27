#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCachedSystem_UpdateTransformsJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalUpdateCachedSystem_UpdateTransformsJob)
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
struct DecalUpdateCachedSystem_UpdateTransformsJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, "UnityEngine.Rendering.Universal", "DecalUpdateCachedSystem/UpdateTransformsJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, Unity.Mathematics.float4x4, Unity.Mathematics.quaternion, UnityEngine.BoundingSphere, UnityEngine.Rendering.Universal.DecalScaleMode
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalUpdateCachedSystem/UpdateTransformsJob
struct CORDL_TYPE DecalUpdateCachedSystem_UpdateTransformsJob {
public:
// Declarations
/// @brief Field k_MinusYtoZRotation, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_MinusYtoZRotation, put=setStaticF_k_MinusYtoZRotation)) ::Unity::Mathematics::quaternion  k_MinusYtoZRotation;

/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method DistanceBetweenQuaternions, addr 0xb239a10, size 0x30, virtual false, abstract: false, final false
inline float_t DistanceBetweenQuaternions(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b) ;

/// @brief Method Execute, addr 0xb239a40, size 0x5b4, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Method GetDecalProjectBoundingSphere, addr 0xb239ff4, size 0x1d8, virtual false, abstract: false, final false
inline ::UnityEngine::BoundingSphere GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4  decalToWorld) ;

static inline ::Unity::Mathematics::quaternion getStaticF_k_MinusYtoZRotation() ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

static inline void setStaticF_k_MinusYtoZRotation(::Unity::Mathematics::quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DecalUpdateCachedSystem_UpdateTransformsJob() ;

// Ctor Parameters [CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotations", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>", modifiers: "", def_value: None, comment: None }, CppParam { name: "scales", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dirty", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleModes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>", modifiers: "", def_value: None, comment: None }, CppParam { name: "sizeOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "decalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "normalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "boundingSpheres", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: None, comment: None }, CppParam { name: "minDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DecalUpdateCachedSystem_UpdateTransformsJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>  rotations, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  scales, ::Unity::Collections::NativeArray_1<bool>  dirty, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>  scaleModes, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  sizeOffsets, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  normalToWorlds, ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>  boundingSpheres, float_t  minDistance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18346};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field positions, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions;

/// @brief Field rotations, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>  rotations;

/// @brief Field scales, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  scales;

/// @brief Field dirty, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<bool>  dirty;

/// [ReadOnly]
/// @brief Field scaleModes, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>  scaleModes;

/// [ReadOnly]
/// @brief Field sizeOffsets, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  sizeOffsets;

/// [WriteOnly]
/// @brief Field decalToWorlds, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  decalToWorlds;

/// [WriteOnly]
/// @brief Field normalToWorlds, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>  normalToWorlds;

/// [WriteOnly]
/// @brief Field boundingSpheres, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>  boundingSpheres;

/// @brief Field minDistance, offset: 0x90, size: 0x4, def value: None
 float_t  minDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, positions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, rotations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, scales) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, dirty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, scaleModes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, sizeOffsets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, decalToWorlds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, normalToWorlds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, boundingSpheres) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob, minDistance) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DecalUpdateCachedSystem_UpdateTransformsJob) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
