#pragma once
// IWYU pragma private; include "GlobalNamespace/MeshExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_def.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_BuildAdjJob_def.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_FaceNormalJob_def.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_SplitJob_def.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_TriNormalJob_def.hpp"
#include "GlobalNamespace/zzzz__MeshExtensions_VertexNormalJob_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions.SplitByAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, float_t)>(&::GlobalNamespace::MeshExtensions::SplitByAngle)> {
  constexpr static std::size_t size = 0x7e0;
  constexpr static std::size_t addrs = 0x5d14f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions.SplitByAngleBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, float_t, bool, ::Unity::Collections::Allocator)>(&::GlobalNamespace::MeshExtensions::SplitByAngleBurst)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x5d156fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions*>(),
                        {"SplitByAngleBurst", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MeshExtensions.RecalcNormalsJobified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeList_1<int32_t>, bool, ::Unity::Collections::Allocator, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::GlobalNamespace::MeshExtensions::RecalcNormalsJobified)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5d15e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions*>(),
                        {"RecalcNormalsJobified", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MeshExtensions::SplitByAngle(::UnityEngine::Mesh*  mesh, float_t  angleDeg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions*>(),
                        {"SplitByAngle", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, angleDeg);
}
inline void GlobalNamespace::MeshExtensions::SplitByAngleBurst(::UnityEngine::Mesh*  mesh, float_t  angleDeg, bool  areaWeight, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions*>(),
                        {"SplitByAngleBurst", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, angleDeg, areaWeight, allocator);
}
inline void GlobalNamespace::MeshExtensions::RecalcNormalsJobified(::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  verts, ::Unity::Collections::NativeList_1<int32_t>  tris, bool  areaWeight, ::Unity::Collections::Allocator  alloc, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  outNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MeshExtensions*>(),
                        {"RecalcNormalsJobified", {}, {::i2c::type_of<::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<int32_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, verts, tris, areaWeight, alloc, outNormals);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MeshExtensions::MeshExtensions()   {
}
