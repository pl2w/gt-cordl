#pragma once
// IWYU pragma private; include "Voxels/SurfaceNetsBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNetsBuffer)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace Voxels {
struct SurfaceNetsBuffer;
}
// Write type traits
MARK_VAL_T(::Voxels::SurfaceNetsBuffer);
DEFINE_IL2CPP_CLASS(::Voxels::SurfaceNetsBuffer, "Voxels", "SurfaceNetsBuffer");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Mathematics.float3, Unity.Mathematics.int3
namespace Voxels {
// Is value type: true
// CS Name: Voxels.SurfaceNetsBuffer
struct CORDL_TYPE SurfaceNetsBuffer {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x5db4e18, size 0xf0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Reset, addr 0x5db4c2c, size 0x1ec, virtual false, abstract: false, final false
inline void Reset(int32_t  strideCount) ;

/// @brief Method .ctor, addr 0x5db4a2c, size 0x200, virtual false, abstract: false, final false
inline void _ctor(int32_t  vertexCap, int32_t  indexCap, int32_t  strideCount, ::Unity::Collections::Allocator  alloc) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNetsBuffer() ;

// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Materials", ty: "::Unity::Collections::NativeList_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Triangles", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SurfacePoints", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "SurfaceStrides", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "StrideToIndex", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr SurfaceNetsBuffer(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Vertices, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Normals, ::Unity::Collections::NativeList_1<uint8_t>  Materials, ::Unity::Collections::NativeList_1<int32_t>  Triangles, ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  SurfacePoints, ::Unity::Collections::NativeList_1<int32_t>  SurfaceStrides, ::Unity::Collections::NativeArray_1<int32_t>  StrideToIndex) noexcept;

/// @brief Field NullVertex offset 0xffffffff size 0x4
static constexpr int32_t  NullVertex{static_cast<int32_t>(0x7fffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Vertices, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Vertices;

/// @brief Field Normals, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  Normals;

/// @brief Field Materials, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<uint8_t>  Materials;

/// @brief Field Triangles, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  Triangles;

/// @brief Field SurfacePoints, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::Unity::Mathematics::int3>  SurfacePoints;

/// @brief Field SurfaceStrides, offset: 0x28, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  SurfaceStrides;

/// @brief Field StrideToIndex, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  StrideToIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::SurfaceNetsBuffer, Vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsBuffer, Normals) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsBuffer, Materials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsBuffer, Triangles) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsBuffer, SurfacePoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsBuffer, SurfaceStrides) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::SurfaceNetsBuffer, StrideToIndex) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Voxels::SurfaceNetsBuffer) == 0x40, "Size mismatch!");

} // namespace end def Voxels
