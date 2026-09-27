#pragma once
// IWYU pragma private; include "Voxels/MeshUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Voxels/zzzz__MeshUtilities_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "Voxels/zzzz__MeshUtilities_BuildAdjJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_FaceNormalJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_MeshData_def.hpp"
#include "Voxels/zzzz__MeshUtilities_SplitJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_SplitVoxelMeshJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_TriNormalJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_VertexNormalJob_def.hpp"
#include "Voxels/zzzz__MeshUtilities_VoxelMeshData_def.hpp"
//  Writing Method size for method: ::Voxels::MeshUtilities.SplitByAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, float_t, bool, ::Unity::Collections::Allocator)>(&::Voxels::MeshUtilities::SplitByAngle)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5db2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MeshUtilities.SplitByAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MeshUtilities_MeshData (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<int32_t>, float_t, bool, ::Unity::Collections::Allocator)>(&::Voxels::MeshUtilities::SplitByAngle)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5db3080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MeshUtilities.SplitByAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MeshUtilities_VoxelMeshData (*)(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<uint8_t>, ::Unity::Collections::NativeArray_1<int32_t>, float_t, bool, ::Unity::Collections::Allocator)>(&::Voxels::MeshUtilities::SplitByAngle)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5db3778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::MeshUtilities.RecalcNormalsJobified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeList_1<int32_t>, bool, ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>)>(&::Voxels::MeshUtilities::RecalcNormalsJobified)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5db33ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"RecalcNormalsJobified", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Voxels::MeshUtilities::SplitByAngle(::UnityEngine::Mesh*  mesh, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, angleDeg, areaWeight, allocator);
}
inline ::GlobalNamespace::MeshUtilities_MeshData Voxels::MeshUtilities::SplitByAngle(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts, ::Unity::Collections::NativeArray_1<int32_t>  srcTris, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MeshUtilities_MeshData>(nullptr, ___internal_method, srcVerts, srcTris, angleDeg, areaWeight, allocator);
}
inline ::GlobalNamespace::MeshUtilities_VoxelMeshData Voxels::MeshUtilities::SplitByAngle(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  srcVerts, ::Unity::Collections::NativeArray_1<uint8_t>  srcMats, ::Unity::Collections::NativeArray_1<int32_t>  srcTris, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MeshUtilities_VoxelMeshData>(nullptr, ___internal_method, srcVerts, srcMats, srcTris, angleDeg, areaWeight, allocator);
}
inline void Voxels::MeshUtilities::RecalcNormalsJobified(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  verts, ::Unity::Collections::NativeList_1<int32_t>  tris, bool  areaWeight, ::Unity::Collections::Allocator  alloc, ::by_ref<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>  outNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::MeshUtilities*>(),
                        {"RecalcNormalsJobified", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, tris, areaWeight, alloc, outNormals);
}
// Ctor Parameters []
constexpr ::Voxels::MeshUtilities::MeshUtilities()   {
}
