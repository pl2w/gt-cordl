#pragma once
// IWYU pragma private; include "Pathfinding/Polygon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Polygon)
namespace Pathfinding {
struct Int2;
}
namespace Pathfinding {
struct Int3;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class Polygon;
}
// Write type traits
MARK_REF_T(::Pathfinding::Polygon*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Polygon*, "Pathfinding", "Polygon");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Polygon
class CORDL_TYPE Polygon : public ::System::Object {
public:
// Declarations
/// @brief Field cached_Int3_int_dict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cached_Int3_int_dict, put=setStaticF_cached_Int3_int_dict)) ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>*  cached_Int3_int_dict;

/// @brief Method ClosestPointOnTriangle, addr 0x5e4f98c, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ClosestPointOnTriangle(::UnityEngine::Vector2  a, ::UnityEngine::Vector2  b, ::UnityEngine::Vector2  c, ::UnityEngine::Vector2  p) ;

/// @brief Method ClosestPointOnTriangle, addr 0x5e4fd48, size 0x240, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnTriangle(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  p) ;

/// @brief Method ClosestPointOnTriangleXZ, addr 0x5e4fb18, size 0x230, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPointOnTriangleXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  p) ;

/// @brief Method CompressMesh, addr 0x5e4ff88, size 0x508, virtual false, abstract: false, final false
static inline void CompressMesh(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  vertices, ::System::Collections::Generic::List_1<int32_t>*  triangles, ::by_ref<::ArrayW<::Pathfinding::Int3>>  outVertices, ::by_ref<::ArrayW<int32_t>>  outTriangles) ;

/// @brief Method ContainsPoint, addr 0x5e4f294, size 0x90, virtual false, abstract: false, final false
static inline bool ContainsPoint(::Pathfinding::Int2  a, ::Pathfinding::Int2  b, ::Pathfinding::Int2  c, ::Pathfinding::Int2  p) ;

/// @brief Method ContainsPoint, addr 0x5e4f324, size 0xd4, virtual false, abstract: false, final false
static inline bool ContainsPoint(::ArrayW<::UnityEngine::Vector2>  polyPoints, ::UnityEngine::Vector2  p) ;

/// @brief Method ContainsPointXZ, addr 0x5e4f228, size 0x6c, virtual false, abstract: false, final false
static inline bool ContainsPointXZ(::Pathfinding::Int3  a, ::Pathfinding::Int3  b, ::Pathfinding::Int3  c, ::Pathfinding::Int3  p) ;

/// @brief Method ContainsPointXZ, addr 0x5e4f190, size 0x98, virtual false, abstract: false, final false
static inline bool ContainsPointXZ(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c, ::UnityEngine::Vector3  p) ;

/// @brief Method ContainsPointXZ, addr 0x5e4f3f8, size 0xdc, virtual false, abstract: false, final false
static inline bool ContainsPointXZ(::ArrayW<::UnityEngine::Vector3>  polyPoints, ::UnityEngine::Vector3  p) ;

/// @brief Method ConvexHullXZ, addr 0x5e4f684, size 0x308, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> ConvexHullXZ(::ArrayW<::UnityEngine::Vector3>  points) ;

/// @brief Method SampleYCoordinateInTriangle, addr 0x5e4f4d4, size 0x1b0, virtual false, abstract: false, final false
static inline int32_t SampleYCoordinateInTriangle(::Pathfinding::Int3  p1, ::Pathfinding::Int3  p2, ::Pathfinding::Int3  p3, ::Pathfinding::Int3  p) ;

/// @brief Method Subdivide, addr 0x5e50800, size 0x23c, virtual false, abstract: false, final false
static inline void Subdivide(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  result, int32_t  subSegments) ;

/// @brief Method TraceContours, addr 0x5e50490, size 0x370, virtual false, abstract: false, final false
static inline void TraceContours(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  outline, ::System::Collections::Generic::HashSet_1<int32_t>*  hasInEdge, ::System::Action_2<::System::Collections::Generic::List_1<int32_t>*,bool>*  results) ;

static inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>* getStaticF_cached_Int3_int_dict() ;

static inline void setStaticF_cached_Int3_int_dict(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int3,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Polygon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Polygon(Polygon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Polygon(Polygon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Polygon) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
