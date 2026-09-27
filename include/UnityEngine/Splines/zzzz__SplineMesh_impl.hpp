#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMesh.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_impl.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_impl.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineMesh_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/ExtrusionShapes/zzzz__Circle_def.hpp"
#include "UnityEngine/Splines/zzzz__ExtrudeSettings_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineMesh_VertexData_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineMesh___c__DisplayClass19_0_2_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineMesh_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh.GetVertexAndIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, bool, bool, bool, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Splines::SplineMesh::GetVertexAndIndexCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb326648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                        {"GetVertexAndIndexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh.GetVertexAndIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, bool, bool, ::UnityEngine::Vector2, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::Splines::SplineMesh::GetVertexAndIndexCount)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb3266a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                        {"GetVertexAndIndexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Splines::SplineMesh::setStaticF_k_PipeVertexAttribs(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>, "k_PipeVertexAttribs", ::UnityEngine::Splines::SplineMesh*>(std::forward<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> UnityEngine::Splines::SplineMesh::getStaticF_k_PipeVertexAttribs()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>, "k_PipeVertexAttribs", ::UnityEngine::Splines::SplineMesh*>();
}
inline void UnityEngine::Splines::SplineMesh::setStaticF_s_DefaultShape(::UnityEngine::Splines::ExtrusionShapes::Circle*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Splines::ExtrusionShapes::Circle*, "s_DefaultShape", ::UnityEngine::Splines::SplineMesh*>(std::forward<::UnityEngine::Splines::ExtrusionShapes::Circle*>(value));
}
inline ::UnityEngine::Splines::ExtrusionShapes::Circle* UnityEngine::Splines::SplineMesh::getStaticF_s_DefaultShape()  {
return ::cordl_internals::getStaticField<::UnityEngine::Splines::ExtrusionShapes::Circle*, "s_DefaultShape", ::UnityEngine::Splines::SplineMesh*>();
}
inline void UnityEngine::Splines::SplineMesh::setStaticF_s_IsConvex(bool  value)  {
::cordl_internals::setStaticField<bool, "s_IsConvex", ::UnityEngine::Splines::SplineMesh*>(std::forward<bool>(value));
}
inline bool UnityEngine::Splines::SplineMesh::getStaticF_s_IsConvex()  {
return ::cordl_internals::getStaticField<bool, "s_IsConvex", ::UnityEngine::Splines::SplineMesh*>();
}
inline void UnityEngine::Splines::SplineMesh::setStaticF_s_IsConvexComputed(bool  value)  {
::cordl_internals::setStaticField<bool, "s_IsConvexComputed", ::UnityEngine::Splines::SplineMesh*>(std::forward<bool>(value));
}
inline bool UnityEngine::Splines::SplineMesh::getStaticF_s_IsConvexComputed()  {
return ::cordl_internals::getStaticField<bool, "s_IsConvexComputed", ::UnityEngine::Splines::SplineMesh*>();
}
template<typename TSpline,typename TShape,typename TVertex>
requires(::cordl_internals::type_constraint<TSpline, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<TShape, ::UnityEngine::Splines::IExtrudeShape*> && ::cordl_internals::type_constraint<TVertex, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertex> && ::cordl_internals::default_constructor_constraint<TVertex>)
inline void UnityEngine::Splines::SplineMesh::ExtrudeRing(TSpline  spline, ::UnityEngine::Splines::ExtrudeSettings_1<TShape>  settings, int32_t  segment, ::Unity::Collections::NativeArray_1<TVertex>  data, int32_t  start, bool  uvsAreCaps)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"ExtrudeRing", {::i2c::class_of<TSpline>(), ::i2c::class_of<TShape>(), ::i2c::class_of<TVertex>()}, {::i2c::type_of<TSpline>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<TShape>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TVertex>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSpline>(), ::i2c::class_of<TShape>(), ::i2c::class_of<TVertex>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, settings, segment, data, start, uvsAreCaps);
}
template<typename TVertex>
requires(::cordl_internals::type_constraint<TVertex, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertex> && ::cordl_internals::default_constructor_constraint<TVertex>)
inline void UnityEngine::Splines::SplineMesh::ComputeIsConvex(::Unity::Collections::NativeArray_1<TVertex>  data, ::Unity::Mathematics::float3  normal, int32_t  start, int32_t  sideCount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"ComputeIsConvex", {::i2c::class_of<TVertex>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<TVertex>>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TVertex>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, normal, start, sideCount);
}
inline bool UnityEngine::Splines::SplineMesh::GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, bool  closeRing, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                        {"GetVertexAndIndexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sides, segments, capped, closed, closeRing, vertexCount, indexCount);
}
inline void UnityEngine::Splines::SplineMesh::GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, ::UnityEngine::Vector2  range, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                        {"GetVertexAndIndexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sides, segments, capped, closed, range, vertexCount, indexCount);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline bool UnityEngine::Splines::SplineMesh::GetVertexAndIndexCount(T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"GetVertexAndIndexCount", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<K>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline, settings, vertexCount, indexCount);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, int32_t  segments, bool  capped)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, mesh, radius, sides, segments, capped);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  segments, bool  capped, K  shape)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<K>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, mesh, radius, segments, capped, shape);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, mesh, radius, sides, segments, capped, range);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range, K  shape)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float2>(), ::i2c::type_of<K>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, mesh, radius, segments, capped, range, shape);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline bool UnityEngine::Splines::SplineMesh::Extrude(T  spline, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<K>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline, mesh, settings);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, float_t  segmentsPerUnit, bool  capped, ::Unity::Mathematics::float2  range)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, splines, mesh, radius, sides, segmentsPerUnit, capped, range);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, float_t  segmentsPerUnit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<K>>(), ::i2c::type_of<float_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, splines, mesh, settings, segmentsPerUnit);
}
template<typename TSplineType,typename TVertexType,typename TIndexType>
requires(::cordl_internals::type_constraint<TSplineType, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<TVertexType, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertexType> && ::cordl_internals::default_constructor_constraint<TVertexType> && ::cordl_internals::value_type_constraint<TIndexType> && ::cordl_internals::default_constructor_constraint<TIndexType>)
inline void UnityEngine::Splines::SplineMesh::Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, float_t  radius, int32_t  sides, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<TSplineType>(), ::i2c::class_of<TVertexType>(), ::i2c::class_of<TIndexType>()}, {::i2c::type_of<TSplineType>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TVertexType>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TIndexType>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Mathematics::float2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSplineType>(), ::i2c::class_of<TVertexType>(), ::i2c::class_of<TIndexType>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, vertices, indices, radius, sides, segments, capped, range);
}
template<typename TSplineType,typename TVertexType,typename TIndexType,typename TShapeType>
requires(::cordl_internals::type_constraint<TSplineType, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<TVertexType, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertexType> && ::cordl_internals::default_constructor_constraint<TVertexType> && ::cordl_internals::value_type_constraint<TIndexType> && ::cordl_internals::default_constructor_constraint<TIndexType> && ::cordl_internals::type_constraint<TShapeType, ::UnityEngine::Splines::IExtrudeShape*>)
inline void UnityEngine::Splines::SplineMesh::Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, ::UnityEngine::Splines::ExtrudeSettings_1<TShapeType>  settings, int32_t  vertexArrayOffset, int32_t  indicesArrayOffset)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"Extrude", {::i2c::class_of<TSplineType>(), ::i2c::class_of<TVertexType>(), ::i2c::class_of<TIndexType>(), ::i2c::class_of<TShapeType>()}, {::i2c::type_of<TSplineType>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TVertexType>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<TIndexType>>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<TShapeType>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSplineType>(), ::i2c::class_of<TVertexType>(), ::i2c::class_of<TIndexType>(), ::i2c::class_of<TShapeType>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, vertices, indices, settings, vertexArrayOffset, indicesArrayOffset);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline void UnityEngine::Splines::SplineMesh::WindTris(::Unity::Collections::NativeArray_1<uint16_t>  indices, T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"WindTris", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint16_t>>(), ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<K>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indices, spline, settings, vertexArrayOffset, indexArrayOffset);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline void UnityEngine::Splines::SplineMesh::WindTris(::Unity::Collections::NativeArray_1<uint32_t>  indices, T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"WindTris", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint32_t>>(), ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Splines::ExtrudeSettings_1<K>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indices, spline, settings, vertexArrayOffset, indexArrayOffset);
}
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
inline int32_t UnityEngine::Splines::SplineMesh::_Extrude_g__GetSegmentCount_19_0(T  spline, ::by_ref<::GlobalNamespace::SplineMesh___c__DisplayClass19_0_2<T,K>>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh*>(),
                    {"<Extrude>g__GetSegmentCount|19_0", {::i2c::class_of<T>(), ::i2c::class_of<K>()}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SplineMesh___c__DisplayClass19_0_2<T,K>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<K>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, spline, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineMesh::SplineMesh()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh_ISplineVertexData.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineMesh_ISplineVertexData::*)()>(&::UnityEngine::Splines::SplineMesh_ISplineVertexData::get_position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh_ISplineVertexData.set_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineMesh_ISplineVertexData::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineMesh_ISplineVertexData::set_position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh_ISplineVertexData.get_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::Splines::SplineMesh_ISplineVertexData::*)()>(&::UnityEngine::Splines::SplineMesh_ISplineVertexData::get_normal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh_ISplineVertexData.set_normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineMesh_ISplineVertexData::*)(::UnityEngine::Vector3)>(&::UnityEngine::Splines::SplineMesh_ISplineVertexData::set_normal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh_ISplineVertexData.get_texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Splines::SplineMesh_ISplineVertexData::*)()>(&::UnityEngine::Splines::SplineMesh_ISplineVertexData::get_texture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineMesh_ISplineVertexData.set_texture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineMesh_ISplineVertexData::*)(::UnityEngine::Vector2)>(&::UnityEngine::Splines::SplineMesh_ISplineVertexData::set_texture)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(),
                    {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineMesh_ISplineVertexData::get_position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineMesh_ISplineVertexData::set_position(::UnityEngine::Vector3  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::Splines::SplineMesh_ISplineVertexData::get_normal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineMesh_ISplineVertexData::set_normal(::UnityEngine::Vector3  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Splines::SplineMesh_ISplineVertexData::get_texture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineMesh_ISplineVertexData::set_texture(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Splines::SplineMesh_ISplineVertexData*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
