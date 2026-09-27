#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryProcessor_MaskMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryProcessor_MaskMesh)
// Forward declare root types
namespace GlobalNamespace {
struct EntryProcessor_MaskMesh;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EntryProcessor_MaskMesh);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EntryProcessor_MaskMesh, "UnityEngine.UIElements.UIR", "EntryProcessor/MaskMesh");
// Dependencies Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.Vertex
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.EntryProcessor/MaskMesh
struct CORDL_TYPE EntryProcessor_MaskMesh {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EntryProcessor_MaskMesh() ;

// Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EntryProcessor_MaskMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  vertices, ::Unity::Collections::NativeSlice_1<uint16_t>  indices, int32_t  indexOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8518};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field vertices, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>  vertices;

/// @brief Field indices, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeSlice_1<uint16_t>  indices;

/// @brief Field indexOffset, offset: 0x20, size: 0x4, def value: None
 int32_t  indexOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EntryProcessor_MaskMesh, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EntryProcessor_MaskMesh, indices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EntryProcessor_MaskMesh, indexOffset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EntryProcessor_MaskMesh) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
