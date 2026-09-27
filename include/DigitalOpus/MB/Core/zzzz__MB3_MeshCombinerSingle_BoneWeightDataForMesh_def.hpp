#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle_BoneWeightDataForMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BoneWeight1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshCombinerSingle_BoneWeightDataForMesh)
// Forward declare root types
namespace GlobalNamespace {
struct MB3_MeshCombinerSingle_BoneWeightDataForMesh;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/BoneWeightDataForMesh");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.BoneWeight1
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/BoneWeightDataForMesh
struct CORDL_TYPE MB3_MeshCombinerSingle_BoneWeightDataForMesh {
public:
// Declarations
/// @brief Method Dispose, addr 0x9d9a1d0, size 0x8, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9d9a650, size 0xbc, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSingle_BoneWeightDataForMesh() ;

// Ctor Parameters [CppParam { name: "_disposed", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "initialized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "weMustDispose", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "bonesPerVertex", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "boneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>", modifiers: "", def_value: None, comment: None }, CppParam { name: "UsedBoneIdxsInSrcMesh", ty: "::ArrayW<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "numUsedbones", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB3_MeshCombinerSingle_BoneWeightDataForMesh(bool  _disposed, bool  initialized, bool  weMustDispose, ::Unity::Collections::NativeArray_1<uint8_t>  bonesPerVertex, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  boneWeights, ::ArrayW<bool>  UsedBoneIdxsInSrcMesh, int32_t  numUsedbones) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22633};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field _disposed, offset: 0x0, size: 0x1, def value: None
 bool  _disposed;

/// @brief Field initialized, offset: 0x1, size: 0x1, def value: None
 bool  initialized;

/// @brief Field weMustDispose, offset: 0x2, size: 0x1, def value: None
 bool  weMustDispose;

/// @brief Field bonesPerVertex, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<uint8_t>  bonesPerVertex;

/// @brief Field boneWeights, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight1>  boneWeights;

/// @brief Field UsedBoneIdxsInSrcMesh, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<bool>  UsedBoneIdxsInSrcMesh;

/// @brief Field numUsedbones, offset: 0x30, size: 0x4, def value: None
 int32_t  numUsedbones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, _disposed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, initialized) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, weMustDispose) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, bonesPerVertex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, boneWeights) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, UsedBoneIdxsInSrcMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh, numUsedbones) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshCombinerSingle_BoneWeightDataForMesh) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
