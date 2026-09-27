#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRenderer_SetupInstanceDataForMeshStatic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderRenderer_SetupInstanceDataForMeshStatic)
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderRenderer_SetupInstanceDataForMeshStatic;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic, "", "BuilderRenderer/SetupInstanceDataForMeshStatic");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderRenderer/SetupInstanceDataForMeshStatic
struct CORDL_TYPE BuilderRenderer_SetupInstanceDataForMeshStatic {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method Execute, addr 0x57d5c54, size 0x68, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderRenderer_SetupInstanceDataForMeshStatic() ;

// Ctor Parameters [CppParam { name: "transformIndexToDataIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "objectToWorld", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderRenderer_SetupInstanceDataForMeshStatic(::Unity::Collections::NativeArray_1<int32_t>  transformIndexToDataIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  objectToWorld) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ReadOnly]
/// @brief Field transformIndexToDataIndex, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  transformIndexToDataIndex;

/// [NativeDisableContainerSafetyRestriction]
/// @brief Field objectToWorld, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  objectToWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic, transformIndexToDataIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic, objectToWorld) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderRenderer_SetupInstanceDataForMeshStatic) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
