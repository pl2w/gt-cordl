#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
#include "UnityEngine/Splines/zzzz__ISpline_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineMesh)
namespace GlobalNamespace {
struct SplineMesh_VertexData;
}
namespace GlobalNamespace {
template<typename T,typename K>
struct SplineMesh___c__DisplayClass19_0_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines::ExtrusionShapes {
class Circle;
}
namespace UnityEngine::Splines {
template<typename T>
struct ExtrudeSettings_1;
}
namespace UnityEngine::Splines {
class SplineMesh_ISplineVertexData;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplineMesh;
}
namespace UnityEngine::Splines {
class SplineMesh_ISplineVertexData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplineMesh*);
MARK_REF_T(::UnityEngine::Splines::SplineMesh_ISplineVertexData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineMesh*, "UnityEngine.Splines", "SplineMesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineMesh_ISplineVertexData*, "UnityEngine.Splines", "SplineMesh/ISplineVertexData");
// Dependencies System.Object, UnityEngine.Rendering.VertexAttributeDescriptor, UnityEngine.Splines.IExtrudeShape, UnityEngine.Splines.ISpline, UnityEngine.Splines.SplineMesh::ISplineVertexData
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineMesh
class CORDL_TYPE SplineMesh : public ::System::Object {
public:
// Declarations
using VertexData = ::GlobalNamespace::SplineMesh_VertexData;

template<typename T,typename K>
using __c__DisplayClass19_0_2 = ::GlobalNamespace::SplineMesh___c__DisplayClass19_0_2<T, K>;

using ISplineVertexData = ::UnityEngine::Splines::SplineMesh_ISplineVertexData;

/// @brief Field k_PipeVertexAttribs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_PipeVertexAttribs, put=setStaticF_k_PipeVertexAttribs)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  k_PipeVertexAttribs;

/// @brief Field s_DefaultShape, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_DefaultShape, put=setStaticF_s_DefaultShape)) ::UnityEngine::Splines::ExtrusionShapes::Circle*  s_DefaultShape;

/// @brief Field s_IsConvex, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IsConvex, put=setStaticF_s_IsConvex)) bool  s_IsConvex;

/// @brief Field s_IsConvexComputed, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_IsConvexComputed, put=setStaticF_s_IsConvexComputed)) bool  s_IsConvexComputed;

/// @brief Method ComputeIsConvex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TVertex>
requires(::cordl_internals::type_constraint<TVertex, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertex> && ::cordl_internals::default_constructor_constraint<TVertex>)
static inline void ComputeIsConvex(::Unity::Collections::NativeArray_1<TVertex>  data, ::Unity::Mathematics::float3  normal, int32_t  start, int32_t  sideCount) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline bool Extrude(T  spline, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range, K  shape) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  segments, bool  capped, K  shape) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, int32_t  segments, bool  capped) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void Extrude(T  spline, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSplineType,typename TVertexType,typename TIndexType>
requires(::cordl_internals::type_constraint<TSplineType, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<TVertexType, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertexType> && ::cordl_internals::default_constructor_constraint<TVertexType> && ::cordl_internals::value_type_constraint<TIndexType> && ::cordl_internals::default_constructor_constraint<TIndexType>)
static inline void Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, float_t  radius, int32_t  sides, int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSplineType,typename TVertexType,typename TIndexType,typename TShapeType>
requires(::cordl_internals::type_constraint<TSplineType, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<TVertexType, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertexType> && ::cordl_internals::default_constructor_constraint<TVertexType> && ::cordl_internals::value_type_constraint<TIndexType> && ::cordl_internals::default_constructor_constraint<TIndexType> && ::cordl_internals::type_constraint<TShapeType, ::UnityEngine::Splines::IExtrudeShape*>)
static inline void Extrude(TSplineType  spline, ::Unity::Collections::NativeArray_1<TVertexType>  vertices, ::Unity::Collections::NativeArray_1<TIndexType>  indices, ::UnityEngine::Splines::ExtrudeSettings_1<TShapeType>  settings, int32_t  vertexArrayOffset, int32_t  indicesArrayOffset) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*>)
static inline void Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, float_t  radius, int32_t  sides, float_t  segmentsPerUnit, bool  capped, ::Unity::Mathematics::float2  range) ;

/// @brief Method Extrude, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline void Extrude(::System::Collections::Generic::IReadOnlyList_1<T>*  splines, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, float_t  segmentsPerUnit) ;

/// @brief Method ExtrudeRing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSpline,typename TShape,typename TVertex>
requires(::cordl_internals::type_constraint<TSpline, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<TShape, ::UnityEngine::Splines::IExtrudeShape*> && ::cordl_internals::type_constraint<TVertex, ::UnityEngine::Splines::SplineMesh_ISplineVertexData*> && ::cordl_internals::value_type_constraint<TVertex> && ::cordl_internals::default_constructor_constraint<TVertex>)
static inline void ExtrudeRing(TSpline  spline, ::UnityEngine::Splines::ExtrudeSettings_1<TShape>  settings, int32_t  segment, ::Unity::Collections::NativeArray_1<TVertex>  data, int32_t  start, bool  uvsAreCaps) ;

/// @brief Method GetVertexAndIndexCount, addr 0xb326648, size 0x5c, virtual false, abstract: false, final false
static inline bool GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, bool  closeRing, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method GetVertexAndIndexCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline bool GetVertexAndIndexCount(T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method GetVertexAndIndexCount, addr 0xb3266a4, size 0xb8, virtual false, abstract: false, final false
static inline void GetVertexAndIndexCount(int32_t  sides, int32_t  segments, bool  capped, bool  closed, ::UnityEngine::Vector2  range, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  indexCount) ;

/// @brief Method WindTris, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline void WindTris(::Unity::Collections::NativeArray_1<uint16_t>  indices, T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset) ;

/// @brief Method WindTris, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline void WindTris(::Unity::Collections::NativeArray_1<uint32_t>  indices, T  spline, ::UnityEngine::Splines::ExtrudeSettings_1<K>  settings, int32_t  vertexArrayOffset, int32_t  indexArrayOffset) ;

/// [CompilerGenerated]
/// @brief Method <Extrude>g__GetSegmentCount|19_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename K>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Splines::ISpline*> && ::cordl_internals::type_constraint<K, ::UnityEngine::Splines::IExtrudeShape*>)
static inline int32_t _Extrude_g__GetSegmentCount_19_0(T  spline, ::by_ref<::GlobalNamespace::SplineMesh___c__DisplayClass19_0_2<T,K>>  _cordl_fixed_empty_name_whitespace) ;

static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> getStaticF_k_PipeVertexAttribs() ;

static inline ::UnityEngine::Splines::ExtrusionShapes::Circle* getStaticF_s_DefaultShape() ;

static inline bool getStaticF_s_IsConvex() ;

static inline bool getStaticF_s_IsConvexComputed() ;

static inline void setStaticF_k_PipeVertexAttribs(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

static inline void setStaticF_s_DefaultShape(::UnityEngine::Splines::ExtrusionShapes::Circle*  value) ;

static inline void setStaticF_s_IsConvex(bool  value) ;

static inline void setStaticF_s_IsConvexComputed(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineMesh(SplineMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineMesh(SplineMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27988};

/// @brief Field k_SidesMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SidesMax{static_cast<int32_t>(0x824)};

/// @brief Field k_SidesMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SidesMin{static_cast<int32_t>(0x2)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplineMesh) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineMesh/ISplineVertexData
class CORDL_TYPE SplineMesh_ISplineVertexData {
public:
// Declarations
 __declspec(property(get=get_normal, put=set_normal)) ::UnityEngine::Vector3  normal;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_texture, put=set_texture)) ::UnityEngine::Vector2  texture;

/// @brief Method get_normal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Method get_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_texture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 get_texture() ;

/// @brief Method set_normal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_normal(::UnityEngine::Vector3  value) ;

/// @brief Method set_position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_texture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_texture(::UnityEngine::Vector2  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SplineMesh_ISplineVertexData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineMesh_ISplineVertexData(SplineMesh_ISplineVertexData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27985};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
