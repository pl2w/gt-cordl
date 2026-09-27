#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AppendElements)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c__DisplayClass17_0;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class PolyShape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements___c__DisplayClass17_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::AppendElements*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::AppendElements*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c__DisplayClass17_0");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements
class CORDL_TYPE AppendElements : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c;

using __c__DisplayClass17_0 = ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0;

/// [Extension]
/// @brief Method AppendFace, addr 0xb0dc2d8, size 0x884, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Face* AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::ArrayW<::UnityEngine::Vector3>  positions, ::ArrayW<::UnityEngine::Color>  colors, ::ArrayW<::UnityEngine::Vector2>  uv0s, ::ArrayW<::UnityEngine::Vector4>  uv2s, ::ArrayW<::UnityEngine::Vector4>  uv3s, ::UnityEngine::ProBuilder::Face*  face, ::ArrayW<int32_t>  common) ;

/// [Extension]
/// @brief Method AppendFaces, addr 0xb0dcb5c, size 0x5c8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::ProBuilder::Face*> AppendFaces(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::ArrayW<::ArrayW<::UnityEngine::Vector3>>  positions, ::ArrayW<::ArrayW<::UnityEngine::Color>>  colors, ::ArrayW<::ArrayW<::UnityEngine::Vector2>>  uvs, ::ArrayW<::UnityEngine::ProBuilder::Face*>  faces, ::ArrayW<::ArrayW<int32_t>>  shared) ;

/// [Extension]
/// @brief Method AppendVerticesToEdge, addr 0xb0e1f24, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Edge  edge, int32_t  count) ;

/// [Extension]
/// @brief Method AppendVerticesToEdge, addr 0xb0e1fa4, size 0x1e28, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*  edges, int32_t  count) ;

/// [Extension]
/// @brief Method AppendVerticesToFace, addr 0xb0e1274, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Face* AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face, ::ArrayW<::UnityEngine::Vector3>  points) ;

/// [Extension]
/// @brief Method AppendVerticesToFace, addr 0xb0e127c, size 0xc20, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Face* AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face, ::ArrayW<::UnityEngine::Vector3>  points, bool  insertOnEdge) ;

/// [Extension]
/// @brief Method Bridge, addr 0xb0dfbe8, size 0x1388, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Face* Bridge(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Edge  a, ::UnityEngine::ProBuilder::Edge  b, bool  allowNonManifoldGeometry) ;

/// [Extension]
/// @brief Method ClearAndRefreshMesh, addr 0xb0de56c, size 0x3c, virtual false, abstract: false, final false
static inline void ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh) ;

/// [Extension]
/// @brief Method CreatePolygon, addr 0xb0dd124, size 0x53c, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Face* CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<int32_t>*  indexes, bool  unordered) ;

/// [Extension]
/// @brief Method CreatePolygonWithHole, addr 0xb0dd740, size 0x96c, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Face* CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<int32_t>*  indexes, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>*>*  holes) ;

/// [Extension]
/// @brief Method CreateShapeFromPolygon, addr 0xb0de564, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  points, float_t  extrude, bool  flipNormals) ;

/// [Extension]
/// [Obsolete("Face.CreateShapeFromPolygon is deprecated as it no longer relies on camera look at.")]
/// @brief Method CreateShapeFromPolygon, addr 0xb0df16c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  points, float_t  extrude, bool  flipNormals, ::UnityEngine::Vector3  cameraLookAt, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*  holePoints) ;

/// [Extension]
/// @brief Method CreateShapeFromPolygon, addr 0xb0de5a8, size 0xbc4, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*  points, float_t  extrude, bool  flipNormals, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*  holePoints) ;

/// [Extension]
/// @brief Method CreateShapeFromPolygon, addr 0xb0de534, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape*  poly) ;

/// [Extension]
/// @brief Method DuplicateAndFlip, addr 0xb0df174, size 0x6c0, virtual false, abstract: false, final false
static inline void DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::ArrayW<::UnityEngine::ProBuilder::Face*>  faces) ;

/// @brief Method FaceWithVertices, addr 0xb0dd660, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*  vertices, bool  unordered) ;

/// @brief Method FaceWithVerticesAndHole, addr 0xb0de0ac, size 0x488, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVerticesAndHole(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*  borderVertices, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*  holes) ;

/// [Extension]
/// @brief Method InsertVertexInFace, addr 0xb0e42c4, size 0xe60, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::ProBuilder::Face*> InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Face*  face, ::UnityEngine::Vector3  point) ;

/// [Extension]
/// @brief Method InsertVertexInMesh, addr 0xb0e6534, size 0x398, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Vertex* InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::Vector3  point, ::UnityEngine::Vector3  normal) ;

/// [Extension]
/// @brief Method InsertVertexOnEdge, addr 0xb0e5124, size 0x1410, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Vertex* InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh*  mesh, ::UnityEngine::ProBuilder::Edge  originalEdge, ::UnityEngine::Vector3  point) ;

/// @brief Method TentCapWithVertices, addr 0xb0df834, size 0x3b4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppendElements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppendElements", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppendElements(AppendElements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppendElements", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppendElements(AppendElements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::AppendElements) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c__DisplayClass17_0
class CORDL_TYPE AppendElements___c__DisplayClass17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field delCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_delCount, put=__cordl_internal_set_delCount)) int32_t  delCount;

static inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0* New_ctor() ;

/// @brief Method <AppendVerticesToEdge>b__0, addr 0xb0e6994, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::Edge _AppendVerticesToEdge_b__0(::UnityEngine::ProBuilder::EdgeLookup  x) ;

constexpr int32_t const& __cordl_internal_get_delCount() const;

constexpr int32_t& __cordl_internal_get_delCount() ;

constexpr void __cordl_internal_set_delCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xb0e3dcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppendElements___c__DisplayClass17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppendElements___c__DisplayClass17_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppendElements___c__DisplayClass17_0(AppendElements___c__DisplayClass17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppendElements___c__DisplayClass17_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppendElements___c__DisplayClass17_0(AppendElements___c__DisplayClass17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24327};

/// @brief Field delCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___delCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0, ___delCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c__DisplayClass17_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c
class CORDL_TYPE AppendElements___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>*  __9__10_0;

/// @brief Field <>9__10_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_1, put=setStaticF___9__10_1)) ::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>*  __9__10_1;

/// @brief Field <>9__18_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__18_0, put=setStaticF___9__18_0)) ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*,::UnityEngine::ProBuilder::Face*>*  __9__18_0;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::ArrayW<::UnityEngine::Vector3>,int32_t>*  __9__8_0;

static inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* New_ctor() ;

/// @brief Method <CreateShapeFromPolygon>b__8_0, addr 0xb0e693c, size 0x14, virtual false, abstract: false, final false
inline int32_t _CreateShapeFromPolygon_b__8_0(::ArrayW<::UnityEngine::Vector3>  arr) ;

/// @brief Method <FaceWithVerticesAndHole>b__10_0, addr 0xb0e6950, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_0(::UnityEngine::ProBuilder::Vertex*  v) ;

/// @brief Method <FaceWithVerticesAndHole>b__10_1, addr 0xb0e6968, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_1(::UnityEngine::ProBuilder::Vertex*  v) ;

/// @brief Method <InsertVertexInFace>b__18_0, addr 0xb0e6980, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::Face* _InsertVertexInFace_b__18_0(::UnityEngine::ProBuilder::FaceRebuildData*  f) ;

/// @brief Method .ctor, addr 0xb0e6934, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::ProBuilder::MeshOperations::AppendElements___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>* getStaticF___9__10_0() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>* getStaticF___9__10_1() ;

static inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*,::UnityEngine::ProBuilder::Face*>* getStaticF___9__18_0() ;

static inline ::System::Func_2<::ArrayW<::UnityEngine::Vector3>,int32_t>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c*  value) ;

static inline void setStaticF___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>*  value) ;

static inline void setStaticF___9__10_1(::System::Func_2<::UnityEngine::ProBuilder::Vertex*,::UnityEngine::Vector3>*  value) ;

static inline void setStaticF___9__18_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*,::UnityEngine::ProBuilder::Face*>*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::ArrayW<::UnityEngine::Vector3>,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AppendElements___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AppendElements___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AppendElements___c(AppendElements___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppendElements___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppendElements___c(AppendElements___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::AppendElements___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
