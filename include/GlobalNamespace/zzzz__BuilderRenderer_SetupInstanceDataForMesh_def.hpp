#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRenderer_SetupInstanceDataForMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_IndirectDrawIndexedArgs_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderRenderer_SetupInstanceDataForMesh)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderRenderer_SetupInstanceDataForMesh;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, "", "BuilderRenderer/SetupInstanceDataForMesh");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.GraphicsBuffer::IndirectDrawIndexedArgs, UnityEngine.Matrix4x4, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderRenderer/SetupInstanceDataForMesh
struct CORDL_TYPE BuilderRenderer_SetupInstanceDataForMesh {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method Execute, addr 0x57d5b60, size 0xf4, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderRenderer_SetupInstanceDataForMesh() ;

// Ctor Parameters [CppParam { name: "texIndex", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tint", ty: "::Unity::Collections::NativeList_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "commandData", ty: "::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs", modifiers: "", def_value: None, comment: None }, CppParam { name: "cameraPos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceTexIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "objectToWorld", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceTint", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodLevel", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lodDirty", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderRenderer_SetupInstanceDataForMesh(::Unity::Collections::NativeList_1<int32_t>  texIndex, ::Unity::Collections::NativeList_1<float_t>  tint, ::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs  commandData, ::UnityEngine::Vector3  cameraPos, ::Unity::Collections::NativeArray_1<int32_t>  instanceTexIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  objectToWorld, ::Unity::Collections::NativeArray_1<float_t>  instanceTint, ::Unity::Collections::NativeArray_1<int32_t>  lodLevel, ::Unity::Collections::NativeArray_1<int32_t>  lodDirty) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// [ReadOnly]
/// @brief Field texIndex, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  texIndex;

/// [ReadOnly]
/// @brief Field tint, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<float_t>  tint;

/// [ReadOnly]
/// @brief Field commandData, offset: 0x10, size: 0x14, def value: None
 ::GlobalNamespace::GraphicsBuffer_IndirectDrawIndexedArgs  commandData;

/// [ReadOnly]
/// @brief Field cameraPos, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  cameraPos;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field instanceTexIndex, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  instanceTexIndex;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field objectToWorld, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  objectToWorld;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field instanceTint, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<float_t>  instanceTint;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field lodLevel, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  lodLevel;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field lodDirty, offset: 0x70, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  lodDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, texIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, tint) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, commandData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, cameraPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, instanceTexIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, objectToWorld) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, instanceTint) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, lodLevel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh, lodDirty) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMesh) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
