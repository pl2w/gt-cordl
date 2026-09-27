#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/MeshOperations/Triangulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Triangulation)
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
class Triangulation___c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation___c__DisplayClass8_0;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation___c__DisplayClass7_0;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class Triangulation___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::Triangulation*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*);
MARK_REF_T(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::Triangulation*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0*, "UnityEngine.ProBuilder.MeshOperations", "Triangulation/<>c__DisplayClass8_0");
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Triangulation
class CORDL_TYPE Triangulation : public ::System::Object {
public:
// Declarations
using __c__DisplayClass7_0 = ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0;

using __c__DisplayClass8_0 = ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0;

/// @brief Field s_TriangulationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TriangulationContext, put=setStaticF_s_TriangulationContext)) ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*  s_TriangulationContext;

/// @brief Method SortAndTriangulate, addr 0xb108af8, size 0x2fc, virtual false, abstract: false, final false
static inline bool SortAndTriangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  indexes, bool  convex) ;

/// @brief Method Triangulate, addr 0xb109ee8, size 0xb98, virtual false, abstract: false, final false
static inline bool Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*>*  holes, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  indexes) ;

/// @brief Method Triangulate, addr 0xb108df4, size 0xb38, virtual false, abstract: false, final false
static inline bool Triangulate(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>*  points, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  indexes, bool  convex) ;

/// @brief Method TriangulateVertices, addr 0xb109d64, size 0x184, virtual false, abstract: false, final false
static inline bool TriangulateVertices(::ArrayW<::UnityEngine::Vector3>  vertices, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  triangles, ::ArrayW<::ArrayW<::UnityEngine::Vector3>>  holes) ;

/// @brief Method TriangulateVertices, addr 0xb109b34, size 0x230, virtual false, abstract: false, final false
static inline bool TriangulateVertices(::ArrayW<::UnityEngine::Vector3>  vertices, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  triangles, bool  unordered, bool  convex) ;

/// @brief Method TriangulateVertices, addr 0xb10992c, size 0x208, virtual false, abstract: false, final false
static inline bool TriangulateVertices(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*  vertices, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  triangles, bool  unordered, bool  convex) ;

static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* getStaticF_s_TriangulationContext() ;

/// @brief Method get_triangulationContext, addr 0xb108a5c, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* get_triangulationContext() ;

static inline void setStaticF_s_TriangulationContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Triangulation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangulation(Triangulation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulation(Triangulation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24371};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::Triangulation) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass8_0
class CORDL_TYPE Triangulation___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  __9__1;

/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <Triangulate>b__0, addr 0xb10ab90, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__0(::UnityEngine::Vector2  x) ;

/// @brief Method <Triangulate>b__1, addr 0xb10ac10, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2  x) ;

constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*& __cordl_internal_get___9__1() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set___9__1(::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0xb10aa88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Triangulation___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Triangulation___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangulation___c__DisplayClass8_0(Triangulation___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulation___c__DisplayClass8_0(Triangulation___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24370};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field <>9__1, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::Vector2,::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0, _____9__1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass8_0) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.MeshOperations.Triangulation/<>c__DisplayClass7_0
class CORDL_TYPE Triangulation___c__DisplayClass7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

static inline ::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0* New_ctor() ;

/// @brief Method <Triangulate>b__0, addr 0xb10aa90, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* _Triangulate_b__0(::UnityEngine::Vector2  x) ;

/// @brief Method <Triangulate>b__1, addr 0xb10ab10, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint* _Triangulate_b__1(::UnityEngine::Vector2  x) ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// @brief Method .ctor, addr 0xb10aa80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Triangulation___c__DisplayClass7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Triangulation___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangulation___c__DisplayClass7_0(Triangulation___c__DisplayClass7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangulation___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulation___c__DisplayClass7_0(Triangulation___c__DisplayClass7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24369};

/// @brief Field index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0, ___index) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::MeshOperations::Triangulation___c__DisplayClass7_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder::MeshOperations
