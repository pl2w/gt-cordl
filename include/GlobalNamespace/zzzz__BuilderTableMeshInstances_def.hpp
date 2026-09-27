#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderTableMeshInstances.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableMeshInstances)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTableMeshInstances;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTableMeshInstances);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableMeshInstances, "", "BuilderTableMeshInstances");
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Jobs.TransformAccessArray
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderTableMeshInstances
struct CORDL_TYPE BuilderTableMeshInstances {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableMeshInstances() ;

// Ctor Parameters [CppParam { name: "transforms", ty: "::UnityEngine::Jobs::TransformAccessArray", modifiers: "", def_value: None, comment: None }, CppParam { name: "texIndex", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "tint", ty: "::Unity::Collections::NativeList_1<float_t>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTableMeshInstances(::UnityEngine::Jobs::TransformAccessArray  transforms, ::Unity::Collections::NativeList_1<int32_t>  texIndex, ::Unity::Collections::NativeList_1<float_t>  tint) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field transforms, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Jobs::TransformAccessArray  transforms;

/// @brief Field texIndex, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  texIndex;

/// @brief Field tint, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<float_t>  tint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableMeshInstances, transforms) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableMeshInstances, texIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTableMeshInstances, tint) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableMeshInstances) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
