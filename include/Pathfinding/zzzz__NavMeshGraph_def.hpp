#pragma once
// IWYU pragma private; include "Pathfinding/NavMeshGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__NavmeshBase_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshGraph)
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
struct GraphUpdateThreading;
}
namespace Pathfinding {
class INavmeshHolder;
}
namespace Pathfinding {
class IUpdatableGraph;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NavMeshGraph__ScanInternal_d__20;
}
namespace Pathfinding {
class NavMeshGraph___c__DisplayClass19_0;
}
namespace Pathfinding {
struct Progress;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Pathfinding {
class NavMeshGraph;
}
namespace Pathfinding {
class NavMeshGraph__ScanInternal_d__20;
}
namespace Pathfinding {
class NavMeshGraph___c__DisplayClass19_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavMeshGraph*);
MARK_REF_T(::Pathfinding::NavMeshGraph__ScanInternal_d__20*);
MARK_REF_T(::Pathfinding::NavMeshGraph___c__DisplayClass19_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavMeshGraph*, "Pathfinding", "NavMeshGraph");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavMeshGraph__ScanInternal_d__20*, "Pathfinding", "NavMeshGraph/<ScanInternal>d__20");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavMeshGraph___c__DisplayClass19_0*, "Pathfinding", "NavMeshGraph/<>c__DisplayClass19_0");
// [JsonOptIn]
// [Preserve]
// Dependencies Pathfinding.NavmeshBase, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavMeshGraph
class CORDL_TYPE NavMeshGraph : public ::Pathfinding::NavmeshBase {
public:
// Declarations
using _ScanInternal_d__20 = ::Pathfinding::NavMeshGraph__ScanInternal_d__20;

using __c__DisplayClass19_0 = ::Pathfinding::NavMeshGraph___c__DisplayClass19_0;

 __declspec(property(get=get_MaxTileConnectionEdgeDistance)) float_t  MaxTileConnectionEdgeDistance;

 __declspec(property(get=get_RecalculateNormals)) bool  RecalculateNormals;

 __declspec(property(get=get_TileWorldSizeX)) float_t  TileWorldSizeX;

 __declspec(property(get=get_TileWorldSizeZ)) float_t  TileWorldSizeZ;

/// @brief Field cachedSourceMeshBoundsMin, offset 0x158, size 0xc 
 __declspec(property(get=__cordl_internal_get_cachedSourceMeshBoundsMin, put=__cordl_internal_set_cachedSourceMeshBoundsMin)) ::UnityEngine::Vector3  cachedSourceMeshBoundsMin;

/// @brief Field offset, offset 0x138, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field recalculateNormals, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get_recalculateNormals, put=__cordl_internal_set_recalculateNormals)) bool  recalculateNormals;

/// @brief Field rotation, offset 0x144, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Vector3  rotation;

/// @brief Field scale, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field sourceMesh, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceMesh, put=__cordl_internal_set_sourceMesh)) ::UnityW<::UnityEngine::Mesh>  sourceMesh;

/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr operator  ::Pathfinding::IUpdatableGraph*() noexcept;

/// @brief Method CalculateTransform, addr 0x5e84f6c, size 0x310, virtual true, abstract: false, final false
inline ::Pathfinding::Util::GraphTransform* CalculateTransform() ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x5e8584c, size 0x114, virtual true, abstract: false, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

static inline ::Pathfinding::NavMeshGraph* New_ctor() ;

/// @brief Method Pathfinding.IUpdatableGraph.CanUpdateAsync, addr 0x5e8527c, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::GraphUpdateThreading Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateArea, addr 0x5e8528c, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaInit, addr 0x5e85284, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaPost, addr 0x5e85288, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o) ;

/// [IteratorStateMachine(typeof(Pathfinding.NavMeshGraph::<ScanInternal>d__20))]
/// @brief Method ScanInternal, addr 0x5e85798, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method UpdateArea, addr 0x5e8529c, size 0x4f4, virtual false, abstract: false, final false
static inline void UpdateArea(::Pathfinding::GraphUpdateObject*  o, ::Pathfinding::INavmeshHolder*  graph) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cachedSourceMeshBoundsMin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cachedSourceMeshBoundsMin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr bool const& __cordl_internal_get_recalculateNormals() const;

constexpr bool& __cordl_internal_get_recalculateNormals() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotation() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_sourceMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_sourceMesh() ;

constexpr void __cordl_internal_set_cachedSourceMeshBoundsMin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_recalculateNormals(bool  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_sourceMesh(::UnityW<::UnityEngine::Mesh>  value) ;

/// @brief Method .ctor, addr 0x5e85960, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MaxTileConnectionEdgeDistance, addr 0x5e84f64, size 0x8, virtual true, abstract: false, final false
inline float_t get_MaxTileConnectionEdgeDistance() ;

/// @brief Method get_RecalculateNormals, addr 0x5e84f4c, size 0x8, virtual true, abstract: false, final false
inline bool get_RecalculateNormals() ;

/// @brief Method get_TileWorldSizeX, addr 0x5e84f54, size 0x8, virtual true, abstract: false, final false
inline float_t get_TileWorldSizeX() ;

/// @brief Method get_TileWorldSizeZ, addr 0x5e84f5c, size 0x8, virtual true, abstract: false, final false
inline float_t get_TileWorldSizeZ() ;

/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* i___Pathfinding__IUpdatableGraph() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshGraph(NavMeshGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshGraph(NavMeshGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21321};

/// [JsonMember]
/// @brief Field sourceMesh, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___sourceMesh;

/// [JsonMember]
/// @brief Field offset, offset: 0x138, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// [JsonMember]
/// @brief Field rotation, offset: 0x144, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotation;

/// [JsonMember]
/// @brief Field scale, offset: 0x150, size: 0x4, def value: None
 float_t  ___scale;

/// [JsonMember]
/// @brief Field recalculateNormals, offset: 0x154, size: 0x1, def value: None
 bool  ___recalculateNormals;

/// [JsonMember]
/// @brief Field cachedSourceMeshBoundsMin, offset: 0x158, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cachedSourceMeshBoundsMin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavMeshGraph, ___sourceMesh) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph, ___offset) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph, ___rotation) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph, ___scale) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph, ___recalculateNormals) == 0x154, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph, ___cachedSourceMeshBoundsMin) == 0x158, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavMeshGraph) == 0x168, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Int3, Pathfinding.Progress, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavMeshGraph/<ScanInternal>d__20
class CORDL_TYPE NavMeshGraph__ScanInternal_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::NavMeshGraph*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <compressedTriangles>5__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressedTriangles_5__4, put=__cordl_internal_set__compressedTriangles_5__4)) ::ArrayW<int32_t>  _compressedTriangles_5__4;

/// @brief Field <compressedVertices>5__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__compressedVertices_5__3, put=__cordl_internal_set__compressedVertices_5__3)) ::ArrayW<::Pathfinding::Int3>  _compressedVertices_5__3;

/// @brief Field <intVertices>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__intVertices_5__2, put=__cordl_internal_set__intVertices_5__2)) ::System::Collections::Generic::List_1<::Pathfinding::Int3>*  _intVertices_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e85ef8, size 0x760, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::NavMeshGraph__ScanInternal_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e86920, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e86880, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e869c4, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e8688c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e868c4, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e85ef4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::NavMeshGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::NavMeshGraph*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__compressedTriangles_5__4() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__compressedTriangles_5__4() ;

constexpr ::ArrayW<::Pathfinding::Int3> const& __cordl_internal_get__compressedVertices_5__3() const;

constexpr ::ArrayW<::Pathfinding::Int3>& __cordl_internal_get__compressedVertices_5__3() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>* const& __cordl_internal_get__intVertices_5__2() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Int3>*& __cordl_internal_get__intVertices_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::NavMeshGraph*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__compressedTriangles_5__4(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__compressedVertices_5__3(::ArrayW<::Pathfinding::Int3>  value) ;

constexpr void __cordl_internal_set__intVertices_5__2(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e85818, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshGraph__ScanInternal_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshGraph__ScanInternal_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshGraph__ScanInternal_d__20(NavMeshGraph__ScanInternal_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshGraph__ScanInternal_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshGraph__ScanInternal_d__20(NavMeshGraph__ScanInternal_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21320};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::NavMeshGraph*  _____4__this;

/// @brief Field <intVertices>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Int3>*  ____intVertices_5__2;

/// @brief Field <compressedVertices>5__3, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Int3>  ____compressedVertices_5__3;

/// @brief Field <compressedTriangles>5__4, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____compressedTriangles_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, ____intVertices_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, ____compressedVertices_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph__ScanInternal_d__20, ____compressedTriangles_5__4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavMeshGraph__ScanInternal_d__20) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Int3, Pathfinding.IntRect, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavMeshGraph/<>c__DisplayClass19_0
class CORDL_TYPE NavMeshGraph___c__DisplayClass19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field a, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_a, put=__cordl_internal_set_a)) ::Pathfinding::Int3  a;

/// @brief Field b, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_b, put=__cordl_internal_set_b)) ::Pathfinding::Int3  b;

/// @brief Field c, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_c, put=__cordl_internal_set_c)) ::Pathfinding::Int3  c;

/// @brief Field d, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_d, put=__cordl_internal_set_d)) ::Pathfinding::Int3  d;

/// @brief Field irect, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_irect, put=__cordl_internal_set_irect)) ::Pathfinding::IntRect  irect;

/// @brief Field o, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_o, put=__cordl_internal_set_o)) ::Pathfinding::GraphUpdateObject*  o;

/// @brief Field ymax, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_ymax, put=__cordl_internal_set_ymax)) int32_t  ymax;

/// @brief Field ymin, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_ymin, put=__cordl_internal_set_ymin)) int32_t  ymin;

static inline ::Pathfinding::NavMeshGraph___c__DisplayClass19_0* New_ctor() ;

/// @brief Method <UpdateArea>b__0, addr 0x5e859c8, size 0x40c, virtual false, abstract: false, final false
inline void _UpdateArea_b__0(::Pathfinding::GraphNode*  _node) ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_a() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_a() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_b() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_b() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_c() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_c() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_d() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_d() ;

constexpr ::Pathfinding::IntRect const& __cordl_internal_get_irect() const;

constexpr ::Pathfinding::IntRect& __cordl_internal_get_irect() ;

constexpr ::Pathfinding::GraphUpdateObject* const& __cordl_internal_get_o() const;

constexpr ::Pathfinding::GraphUpdateObject*& __cordl_internal_get_o() ;

constexpr int32_t const& __cordl_internal_get_ymax() const;

constexpr int32_t& __cordl_internal_get_ymax() ;

constexpr int32_t const& __cordl_internal_get_ymin() const;

constexpr int32_t& __cordl_internal_get_ymin() ;

constexpr void __cordl_internal_set_a(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_b(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_c(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_d(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_irect(::Pathfinding::IntRect  value) ;

constexpr void __cordl_internal_set_o(::Pathfinding::GraphUpdateObject*  value) ;

constexpr void __cordl_internal_set_ymax(int32_t  value) ;

constexpr void __cordl_internal_set_ymin(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e85790, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshGraph___c__DisplayClass19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavMeshGraph___c__DisplayClass19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavMeshGraph___c__DisplayClass19_0(NavMeshGraph___c__DisplayClass19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavMeshGraph___c__DisplayClass19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavMeshGraph___c__DisplayClass19_0(NavMeshGraph___c__DisplayClass19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21319};

/// @brief Field irect, offset: 0x10, size: 0x10, def value: None
 ::Pathfinding::IntRect  ___irect;

/// @brief Field a, offset: 0x20, size: 0xc, def value: None
 ::Pathfinding::Int3  ___a;

/// @brief Field b, offset: 0x2c, size: 0xc, def value: None
 ::Pathfinding::Int3  ___b;

/// @brief Field c, offset: 0x38, size: 0xc, def value: None
 ::Pathfinding::Int3  ___c;

/// @brief Field d, offset: 0x44, size: 0xc, def value: None
 ::Pathfinding::Int3  ___d;

/// @brief Field ymin, offset: 0x50, size: 0x4, def value: None
 int32_t  ___ymin;

/// @brief Field ymax, offset: 0x54, size: 0x4, def value: None
 int32_t  ___ymax;

/// @brief Field o, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::GraphUpdateObject*  ___o;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___irect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___a) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___b) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___c) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___d) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___ymin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___ymax) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0, ___o) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavMeshGraph___c__DisplayClass19_0) == 0x60, "Size mismatch!");

} // namespace end def Pathfinding
