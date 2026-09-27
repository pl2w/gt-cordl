#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities_MeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtilities_MeshData)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct MeshUtilities_MeshData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MeshUtilities_MeshData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MeshUtilities_MeshData, "Voxels", "MeshUtilities/MeshData");
// Dependencies Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Voxels.MeshUtilities/MeshData
struct CORDL_TYPE MeshUtilities_MeshData {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x5db3370, size 0x7c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshUtilities_MeshData() ;

// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }]
constexpr MeshUtilities_MeshData(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Vertices, ::Unity::Collections::NativeList_1<int32_t>  Triangles, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Normals) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5028};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Vertices, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Vertices;

/// @brief Field Triangles, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  Triangles;

/// @brief Field Normals, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Normals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MeshUtilities_MeshData, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_MeshData, Triangles) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MeshUtilities_MeshData, Normals) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MeshUtilities_MeshData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
