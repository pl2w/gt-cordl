#pragma once
// IWYU pragma private; include "Pathfinding/ProceduralGridMover.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "Pathfinding/zzzz__IntRect_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralGridMover)
namespace Pathfinding {
class GridGraph;
}
namespace Pathfinding {
class IWorkItemContext;
}
namespace Pathfinding {
class ProceduralGridMover__UpdateGraphCoroutine_d__13;
}
namespace Pathfinding {
class ProceduralGridMover___c__DisplayClass12_0;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class ProceduralGridMover;
}
namespace Pathfinding {
class ProceduralGridMover__UpdateGraphCoroutine_d__13;
}
namespace Pathfinding {
class ProceduralGridMover___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::ProceduralGridMover*);
MARK_REF_T(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*);
MARK_REF_T(::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ProceduralGridMover*, "Pathfinding", "ProceduralGridMover");
DEFINE_IL2CPP_CLASS(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13*, "Pathfinding", "ProceduralGridMover/<UpdateGraphCoroutine>d__13");
DEFINE_IL2CPP_CLASS(::Pathfinding::ProceduralGridMover___c__DisplayClass12_0*, "Pathfinding", "ProceduralGridMover/<>c__DisplayClass12_0");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_procedural_grid_mover.php")]
// Dependencies Pathfinding.GridNodeBase, Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ProceduralGridMover
class CORDL_TYPE ProceduralGridMover : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using _UpdateGraphCoroutine_d__13 = ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13;

using __c__DisplayClass12_0 = ::Pathfinding::ProceduralGridMover___c__DisplayClass12_0;

/// @brief Field <updatingGraph>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__updatingGraph_k__BackingField, put=__cordl_internal_set__updatingGraph_k__BackingField)) bool  _updatingGraph_k__BackingField;

/// @brief Field buffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<::Pathfinding::GridNodeBase*>  buffer;

/// @brief Field graph, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::GridGraph*  graph;

/// @brief Field graphIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphIndex, put=__cordl_internal_set_graphIndex)) int32_t  graphIndex;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::Transform>  target;

/// @brief Field updateDistance, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateDistance, put=__cordl_internal_set_updateDistance)) float_t  updateDistance;

 __declspec(property(get=get_updatingGraph, put=set_updatingGraph)) bool  updatingGraph;

static inline ::Pathfinding::ProceduralGridMover* New_ctor() ;

/// @brief Method PointToGraphSpace, addr 0x5eba754, size 0x24, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PointToGraphSpace(::UnityEngine::Vector3  p) ;

/// @brief Method Start, addr 0x5eba1a0, size 0x3d0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5eba6b4, size 0xa0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateGraph, addr 0x5eba570, size 0x144, virtual false, abstract: false, final false
inline void UpdateGraph() ;

/// [IteratorStateMachine(typeof(Pathfinding.ProceduralGridMover::<UpdateGraphCoroutine>d__13))]
/// @brief Method UpdateGraphCoroutine, addr 0x5eba780, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateGraphCoroutine() ;

constexpr bool const& __cordl_internal_get__updatingGraph_k__BackingField() const;

constexpr bool& __cordl_internal_get__updatingGraph_k__BackingField() ;

constexpr ::ArrayW<::Pathfinding::GridNodeBase*> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<::Pathfinding::GridNodeBase*>& __cordl_internal_get_buffer() ;

constexpr ::Pathfinding::GridGraph* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::GridGraph*& __cordl_internal_get_graph() ;

constexpr int32_t const& __cordl_internal_get_graphIndex() const;

constexpr int32_t& __cordl_internal_get_graphIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target() ;

constexpr float_t const& __cordl_internal_get_updateDistance() const;

constexpr float_t& __cordl_internal_get_updateDistance() ;

constexpr void __cordl_internal_set__updatingGraph_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<::Pathfinding::GridNodeBase*>  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::GridGraph*  value) ;

constexpr void __cordl_internal_set_graphIndex(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_updateDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x5eba814, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_updatingGraph, addr 0x5eba190, size 0x8, virtual false, abstract: false, final false
inline bool get_updatingGraph() ;

/// [CompilerGenerated]
/// @brief Method set_updatingGraph, addr 0x5eba198, size 0x8, virtual false, abstract: false, final false
inline void set_updatingGraph(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralGridMover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralGridMover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralGridMover(ProceduralGridMover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralGridMover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralGridMover(ProceduralGridMover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21421};

/// @brief Field updateDistance, offset: 0x24, size: 0x4, def value: None
 float_t  ___updateDistance;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___target;

/// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GridNodeBase*>  ___buffer;

/// [CompilerGenerated]
/// @brief Field <updatingGraph>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____updatingGraph_k__BackingField;

/// @brief Field graph, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::GridGraph*  ___graph;

/// [HideInInspector]
/// @brief Field graphIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___graphIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ProceduralGridMover, ___updateDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover, ___target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover, ___buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover, ____updatingGraph_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover, ___graph) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover, ___graphIndex) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ProceduralGridMover) == 0x50, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.GridNodeBase, Pathfinding.Int2, Pathfinding.IntRect, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ProceduralGridMover/<UpdateGraphCoroutine>d__13
class CORDL_TYPE ProceduralGridMover__UpdateGraphCoroutine_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::ProceduralGridMover>  __4__this;

/// @brief Field <connectionRect>5__8, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get__connectionRect_5__8, put=__cordl_internal_set__connectionRect_5__8)) ::Pathfinding::IntRect  _connectionRect_5__8;

/// @brief Field <counter>5__10, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__counter_5__10, put=__cordl_internal_set__counter_5__10)) int32_t  _counter_5__10;

/// @brief Field <depth>5__4, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__depth_5__4, put=__cordl_internal_set__depth_5__4)) int32_t  _depth_5__4;

/// @brief Field <l>5__11, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__l_5__11, put=__cordl_internal_set__l_5__11)) int32_t  _l_5__11;

/// @brief Field <layerOffset>5__12, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerOffset_5__12, put=__cordl_internal_set__layerOffset_5__12)) int32_t  _layerOffset_5__12;

/// @brief Field <layers>5__6, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__layers_5__6, put=__cordl_internal_set__layers_5__6)) int32_t  _layers_5__6;

/// @brief Field <nodes>5__5, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodes_5__5, put=__cordl_internal_set__nodes_5__5)) ::ArrayW<::Pathfinding::GridNodeBase*>  _nodes_5__5;

/// @brief Field <offset>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__offset_5__2, put=__cordl_internal_set__offset_5__2)) ::Pathfinding::Int2  _offset_5__2;

/// @brief Field <recalculateRect>5__7, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get__recalculateRect_5__7, put=__cordl_internal_set__recalculateRect_5__7)) ::Pathfinding::IntRect  _recalculateRect_5__7;

/// @brief Field <width>5__3, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__width_5__3, put=__cordl_internal_set__width_5__3)) int32_t  _width_5__3;

/// @brief Field <yieldEvery>5__9, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__yieldEvery_5__9, put=__cordl_internal_set__yieldEvery_5__9)) int32_t  _yieldEvery_5__9;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5eba9f8, size 0xdd4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ebb7cc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ebb7d4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ebb80c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5eba9f4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::ProceduralGridMover> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::ProceduralGridMover>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::IntRect const& __cordl_internal_get__connectionRect_5__8() const;

constexpr ::Pathfinding::IntRect& __cordl_internal_get__connectionRect_5__8() ;

constexpr int32_t const& __cordl_internal_get__counter_5__10() const;

constexpr int32_t& __cordl_internal_get__counter_5__10() ;

constexpr int32_t const& __cordl_internal_get__depth_5__4() const;

constexpr int32_t& __cordl_internal_get__depth_5__4() ;

constexpr int32_t const& __cordl_internal_get__l_5__11() const;

constexpr int32_t& __cordl_internal_get__l_5__11() ;

constexpr int32_t const& __cordl_internal_get__layerOffset_5__12() const;

constexpr int32_t& __cordl_internal_get__layerOffset_5__12() ;

constexpr int32_t const& __cordl_internal_get__layers_5__6() const;

constexpr int32_t& __cordl_internal_get__layers_5__6() ;

constexpr ::ArrayW<::Pathfinding::GridNodeBase*> const& __cordl_internal_get__nodes_5__5() const;

constexpr ::ArrayW<::Pathfinding::GridNodeBase*>& __cordl_internal_get__nodes_5__5() ;

constexpr ::Pathfinding::Int2 const& __cordl_internal_get__offset_5__2() const;

constexpr ::Pathfinding::Int2& __cordl_internal_get__offset_5__2() ;

constexpr ::Pathfinding::IntRect const& __cordl_internal_get__recalculateRect_5__7() const;

constexpr ::Pathfinding::IntRect& __cordl_internal_get__recalculateRect_5__7() ;

constexpr int32_t const& __cordl_internal_get__width_5__3() const;

constexpr int32_t& __cordl_internal_get__width_5__3() ;

constexpr int32_t const& __cordl_internal_get__yieldEvery_5__9() const;

constexpr int32_t& __cordl_internal_get__yieldEvery_5__9() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::ProceduralGridMover>  value) ;

constexpr void __cordl_internal_set__connectionRect_5__8(::Pathfinding::IntRect  value) ;

constexpr void __cordl_internal_set__counter_5__10(int32_t  value) ;

constexpr void __cordl_internal_set__depth_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__l_5__11(int32_t  value) ;

constexpr void __cordl_internal_set__layerOffset_5__12(int32_t  value) ;

constexpr void __cordl_internal_set__layers_5__6(int32_t  value) ;

constexpr void __cordl_internal_set__nodes_5__5(::ArrayW<::Pathfinding::GridNodeBase*>  value) ;

constexpr void __cordl_internal_set__offset_5__2(::Pathfinding::Int2  value) ;

constexpr void __cordl_internal_set__recalculateRect_5__7(::Pathfinding::IntRect  value) ;

constexpr void __cordl_internal_set__width_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__yieldEvery_5__9(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5eba7ec, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralGridMover__UpdateGraphCoroutine_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralGridMover__UpdateGraphCoroutine_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralGridMover__UpdateGraphCoroutine_d__13(ProceduralGridMover__UpdateGraphCoroutine_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralGridMover__UpdateGraphCoroutine_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralGridMover__UpdateGraphCoroutine_d__13(ProceduralGridMover__UpdateGraphCoroutine_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21420};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::ProceduralGridMover>  _____4__this;

/// @brief Field <offset>5__2, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Int2  ____offset_5__2;

/// @brief Field <width>5__3, offset: 0x30, size: 0x4, def value: None
 int32_t  ____width_5__3;

/// @brief Field <depth>5__4, offset: 0x34, size: 0x4, def value: None
 int32_t  ____depth_5__4;

/// @brief Field <nodes>5__5, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GridNodeBase*>  ____nodes_5__5;

/// @brief Field <layers>5__6, offset: 0x40, size: 0x4, def value: None
 int32_t  ____layers_5__6;

/// @brief Field <recalculateRect>5__7, offset: 0x44, size: 0x10, def value: None
 ::Pathfinding::IntRect  ____recalculateRect_5__7;

/// @brief Field <connectionRect>5__8, offset: 0x54, size: 0x10, def value: None
 ::Pathfinding::IntRect  ____connectionRect_5__8;

/// @brief Field <yieldEvery>5__9, offset: 0x64, size: 0x4, def value: None
 int32_t  ____yieldEvery_5__9;

/// @brief Field <counter>5__10, offset: 0x68, size: 0x4, def value: None
 int32_t  ____counter_5__10;

/// @brief Field <l>5__11, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____l_5__11;

/// @brief Field <layerOffset>5__12, offset: 0x70, size: 0x4, def value: None
 int32_t  ____layerOffset_5__12;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____offset_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____width_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____depth_5__4) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____nodes_5__5) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____layers_5__6) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____recalculateRect_5__7) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____connectionRect_5__8) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____yieldEvery_5__9) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____counter_5__10) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____l_5__11) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13, ____layerOffset_5__12) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ProceduralGridMover__UpdateGraphCoroutine_d__13) == 0x78, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.ProceduralGridMover/<>c__DisplayClass12_0
class CORDL_TYPE ProceduralGridMover___c__DisplayClass12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::ProceduralGridMover>  __4__this;

/// @brief Field ie, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ie, put=__cordl_internal_set_ie)) ::System::Collections::IEnumerator*  ie;

static inline ::Pathfinding::ProceduralGridMover___c__DisplayClass12_0* New_ctor() ;

/// @brief Method <UpdateGraph>b__0, addr 0x5eba824, size 0x1d0, virtual false, abstract: false, final false
inline bool _UpdateGraph_b__0(::Pathfinding::IWorkItemContext*  context, bool  force) ;

constexpr ::UnityW<::Pathfinding::ProceduralGridMover> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::ProceduralGridMover>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_ie() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_ie() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::ProceduralGridMover>  value) ;

constexpr void __cordl_internal_set_ie(::System::Collections::IEnumerator*  value) ;

/// @brief Method .ctor, addr 0x5eba778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProceduralGridMover___c__DisplayClass12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProceduralGridMover___c__DisplayClass12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProceduralGridMover___c__DisplayClass12_0(ProceduralGridMover___c__DisplayClass12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProceduralGridMover___c__DisplayClass12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProceduralGridMover___c__DisplayClass12_0(ProceduralGridMover___c__DisplayClass12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21419};

/// @brief Field ie, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___ie;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Pathfinding::ProceduralGridMover>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ProceduralGridMover___c__DisplayClass12_0, ___ie) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::ProceduralGridMover___c__DisplayClass12_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ProceduralGridMover___c__DisplayClass12_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
