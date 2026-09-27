#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Drawing/zzzz__GeometryBuilder_def.hpp"
#include "Drawing/zzzz__DrawingData_MeshWithType_def.hpp"
#include "Drawing/zzzz__DrawingData_ProcessedBuilderData_MeshBuffers_def.hpp"
#include "Drawing/zzzz__DrawingData_def.hpp"
#include "Drawing/zzzz__GeometryBuilder_CameraInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeAppendBuffer_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::Drawing::GeometryBuilder.Build
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Drawing::DrawingData*, ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*, ::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>, ::Unity::Jobs::JobHandle)>(&::Drawing::GeometryBuilder::Build)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x55cf05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                        {"Build", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilder.CameraDepthToPixelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (*)(::UnityEngine::Camera*)>(&::Drawing::GeometryBuilder::CameraDepthToPixelSize)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x55d50d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                        {"CameraDepthToPixelSize", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::GeometryBuilder.BuildMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Drawing::DrawingData*, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*, ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*)>(&::Drawing::GeometryBuilder::BuildMesh)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x55cf584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                        {"BuildMesh", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*>(), ::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle Drawing::GeometryBuilder::Build(::Drawing::DrawingData*  gizmos, ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  buffers, ::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>  cameraInfo, ::Unity::Jobs::JobHandle  dependency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                        {"Build", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, gizmos, buffers, cameraInfo, dependency);
}
inline ::Unity::Mathematics::float2 Drawing::GeometryBuilder::CameraDepthToPixelSize(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                        {"CameraDepthToPixelSize", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(nullptr, ___internal_method, camera);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> Drawing::GeometryBuilder::ConvertExistingDataToNativeArray(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  data)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                    {"ConvertExistingDataToNativeArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(nullptr, ___internal_method, data);
}
inline void Drawing::GeometryBuilder::BuildMesh(::Drawing::DrawingData*  gizmos, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*  meshes, ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  inputBuffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                        {"BuildMesh", {}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*>(), ::i2c::type_of<::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gizmos, meshes, inputBuffers);
}
template<typename VertexType>
requires(::cordl_internals::value_type_constraint<VertexType> && ::cordl_internals::default_constructor_constraint<VertexType>)
inline ::UnityW<::UnityEngine::Mesh> Drawing::GeometryBuilder::AssignMeshData(::Drawing::DrawingData*  gizmos, ::UnityEngine::Bounds  bounds, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  vertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  triangles, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  layout)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Drawing::GeometryBuilder*>(),
                    {"AssignMeshData", {::i2c::class_of<VertexType>()}, {::i2c::type_of<::Drawing::DrawingData*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<VertexType>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, gizmos, bounds, vertices, triangles, layout);
}
// Ctor Parameters []
constexpr ::Drawing::GeometryBuilder::GeometryBuilder()   {
}
