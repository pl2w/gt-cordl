#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Examples/zzzz__TurnBasedManager_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TurnBasedManager)
namespace GlobalNamespace {
struct TurnBasedManager_State;
}
namespace Pathfinding::Examples {
class TurnBasedAI;
}
namespace Pathfinding::Examples {
class TurnBasedManager__MoveAlongPath_d__14;
}
namespace Pathfinding::Examples {
class TurnBasedManager__MoveToNode_d__13;
}
namespace Pathfinding {
class ABPath;
}
namespace Pathfinding {
class GraphNode;
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
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Ray;
}
// Forward declare root types
namespace Pathfinding::Examples {
class TurnBasedManager;
}
namespace Pathfinding::Examples {
class TurnBasedManager__MoveAlongPath_d__14;
}
namespace Pathfinding::Examples {
class TurnBasedManager__MoveToNode_d__13;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::TurnBasedManager*);
MARK_REF_T(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*);
MARK_REF_T(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::TurnBasedManager*, "Pathfinding.Examples", "TurnBasedManager");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14*, "Pathfinding.Examples", "TurnBasedManager/<MoveAlongPath>d__14");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13*, "Pathfinding.Examples", "TurnBasedManager/<MoveToNode>d__13");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_turn_based_manager.php")]
// Dependencies Pathfinding.Examples.TurnBasedManager::State, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.TurnBasedManager
class CORDL_TYPE TurnBasedManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using State = ::GlobalNamespace::TurnBasedManager_State;

using _MoveAlongPath_d__14 = ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14;

using _MoveToNode_d__13 = ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13;

/// @brief Field eventSystem, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_eventSystem, put=__cordl_internal_set_eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem>  eventSystem;

/// @brief Field layerMask, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_layerMask, put=__cordl_internal_set_layerMask)) ::UnityEngine::LayerMask  layerMask;

/// @brief Field movementSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementSpeed, put=__cordl_internal_set_movementSpeed)) float_t  movementSpeed;

/// @brief Field nodePrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodePrefab, put=__cordl_internal_set_nodePrefab)) ::UnityW<::UnityEngine::GameObject>  nodePrefab;

/// @brief Field possibleMoves, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_possibleMoves, put=__cordl_internal_set_possibleMoves)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  possibleMoves;

/// @brief Field selected, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_selected, put=__cordl_internal_set_selected)) ::UnityW<::Pathfinding::Examples::TurnBasedAI>  selected;

/// @brief Field state, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::TurnBasedManager_State  state;

/// @brief Method Awake, addr 0x5ef5550, size 0x78, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroyPossibleMoves, addr 0x5ef5838, size 0x18c, virtual false, abstract: false, final false
inline void DestroyPossibleMoves() ;

/// @brief Method GeneratePossibleMoves, addr 0x5ef59c4, size 0x3c0, virtual false, abstract: false, final false
inline void GeneratePossibleMoves(::Pathfinding::Examples::TurnBasedAI*  unit) ;

/// @brief Method GetByRay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T GetByRay(::UnityEngine::Ray  ray) ;

/// @brief Method HandleButtonUnderRay, addr 0x5ef573c, size 0xfc, virtual false, abstract: false, final false
inline void HandleButtonUnderRay(::UnityEngine::Ray  ray) ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.TurnBasedManager::<MoveAlongPath>d__14))]
/// @brief Method MoveAlongPath, addr 0x5ef5e50, size 0x98, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* MoveAlongPath(::Pathfinding::Examples::TurnBasedAI*  unit, ::Pathfinding::ABPath*  path, float_t  speed) ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.TurnBasedManager::<MoveToNode>d__13))]
/// @brief Method MoveToNode, addr 0x5ef5d84, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MoveToNode(::Pathfinding::Examples::TurnBasedAI*  unit, ::Pathfinding::GraphNode*  node) ;

static inline ::Pathfinding::Examples::TurnBasedManager* New_ctor() ;

/// @brief Method Select, addr 0x5ef5e20, size 0x8, virtual false, abstract: false, final false
inline void Select(::Pathfinding::Examples::TurnBasedAI*  unit) ;

/// @brief Method Update, addr 0x5ef55c8, size 0x174, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get_eventSystem() const;

constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get_eventSystem() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_layerMask() ;

constexpr float_t const& __cordl_internal_get_movementSpeed() const;

constexpr float_t& __cordl_internal_get_movementSpeed() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nodePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nodePrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_possibleMoves() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_possibleMoves() ;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI> const& __cordl_internal_get_selected() const;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI>& __cordl_internal_get_selected() ;

constexpr ::GlobalNamespace::TurnBasedManager_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::TurnBasedManager_State& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem>  value) ;

constexpr void __cordl_internal_set_layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_movementSpeed(float_t  value) ;

constexpr void __cordl_internal_set_nodePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_possibleMoves(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_selected(::UnityW<::Pathfinding::Examples::TurnBasedAI>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::TurnBasedManager_State  value) ;

/// @brief Method .ctor, addr 0x5ef5f10, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnBasedManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnBasedManager(TurnBasedManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnBasedManager(TurnBasedManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21537};

/// @brief Field selected, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::TurnBasedAI>  ___selected;

/// @brief Field movementSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___movementSpeed;

/// @brief Field nodePrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nodePrefab;

/// @brief Field layerMask, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___layerMask;

/// @brief Field possibleMoves, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___possibleMoves;

/// @brief Field eventSystem, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::EventSystems::EventSystem>  ___eventSystem;

/// @brief Field state, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::TurnBasedManager_State  ___state;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___selected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___movementSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___nodePrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___layerMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___possibleMoves) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___eventSystem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager, ___state) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::TurnBasedManager) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.TurnBasedManager/<MoveToNode>d__13
class CORDL_TYPE TurnBasedManager__MoveToNode_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::TurnBasedManager>  __4__this;

/// @brief Field <path>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__path_5__2, put=__cordl_internal_set__path_5__2)) ::Pathfinding::ABPath*  _path_5__2;

/// @brief Field node, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::Pathfinding::GraphNode*  node;

/// @brief Field unit, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unit, put=__cordl_internal_set_unit)) ::UnityW<::Pathfinding::Examples::TurnBasedAI>  unit;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef633c, size 0x318, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef6654, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef665c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef6694, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef6338, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedManager>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::ABPath* const& __cordl_internal_get__path_5__2() const;

constexpr ::Pathfinding::ABPath*& __cordl_internal_get__path_5__2() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_node() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_node() ;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI> const& __cordl_internal_get_unit() const;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI>& __cordl_internal_get_unit() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::TurnBasedManager>  value) ;

constexpr void __cordl_internal_set__path_5__2(::Pathfinding::ABPath*  value) ;

constexpr void __cordl_internal_set_node(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_unit(::UnityW<::Pathfinding::Examples::TurnBasedAI>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef5e28, size 0x28, virtual false, abstract: false, final false
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
constexpr TurnBasedManager__MoveToNode_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedManager__MoveToNode_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnBasedManager__MoveToNode_d__13(TurnBasedManager__MoveToNode_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedManager__MoveToNode_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnBasedManager__MoveToNode_d__13(TurnBasedManager__MoveToNode_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21536};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field unit, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::TurnBasedAI>  ___unit;

/// @brief Field node, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___node;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::TurnBasedManager>  _____4__this;

/// @brief Field <path>5__2, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::ABPath*  ____path_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13, ___unit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13, ___node) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13, ____path_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::TurnBasedManager__MoveToNode_d__13) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.TurnBasedManager/<MoveAlongPath>d__14
class CORDL_TYPE TurnBasedManager__MoveAlongPath_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <distanceAlongSegment>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__distanceAlongSegment_5__2, put=__cordl_internal_set__distanceAlongSegment_5__2)) float_t  _distanceAlongSegment_5__2;

/// @brief Field <i>5__3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__3, put=__cordl_internal_set__i_5__3)) int32_t  _i_5__3;

/// @brief Field <p0>5__4, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__p0_5__4, put=__cordl_internal_set__p0_5__4)) ::UnityEngine::Vector3  _p0_5__4;

/// @brief Field <p1>5__5, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__p1_5__5, put=__cordl_internal_set__p1_5__5)) ::UnityEngine::Vector3  _p1_5__5;

/// @brief Field <p2>5__6, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get__p2_5__6, put=__cordl_internal_set__p2_5__6)) ::UnityEngine::Vector3  _p2_5__6;

/// @brief Field <p3>5__7, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get__p3_5__7, put=__cordl_internal_set__p3_5__7)) ::UnityEngine::Vector3  _p3_5__7;

/// @brief Field <segmentLength>5__8, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__segmentLength_5__8, put=__cordl_internal_set__segmentLength_5__8)) float_t  _segmentLength_5__8;

/// @brief Field path, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::ABPath*  path;

/// @brief Field speed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) float_t  speed;

/// @brief Field unit, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unit, put=__cordl_internal_set_unit)) ::UnityW<::Pathfinding::Examples::TurnBasedAI>  unit;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef5f9c, size 0x354, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef62f0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef62f8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef6330, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef5f98, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get__distanceAlongSegment_5__2() const;

constexpr float_t& __cordl_internal_get__distanceAlongSegment_5__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__3() const;

constexpr int32_t& __cordl_internal_get__i_5__3() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__p0_5__4() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__p0_5__4() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__p1_5__5() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__p1_5__5() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__p2_5__6() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__p2_5__6() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__p3_5__7() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__p3_5__7() ;

constexpr float_t const& __cordl_internal_get__segmentLength_5__8() const;

constexpr float_t& __cordl_internal_get__segmentLength_5__8() ;

constexpr ::Pathfinding::ABPath* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::ABPath*& __cordl_internal_get_path() ;

constexpr float_t const& __cordl_internal_get_speed() const;

constexpr float_t& __cordl_internal_get_speed() ;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI> const& __cordl_internal_get_unit() const;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedAI>& __cordl_internal_get_unit() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__distanceAlongSegment_5__2(float_t  value) ;

constexpr void __cordl_internal_set__i_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__p0_5__4(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__p1_5__5(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__p2_5__6(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__p3_5__7(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__segmentLength_5__8(float_t  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::ABPath*  value) ;

constexpr void __cordl_internal_set_speed(float_t  value) ;

constexpr void __cordl_internal_set_unit(::UnityW<::Pathfinding::Examples::TurnBasedAI>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef5ee8, size 0x28, virtual false, abstract: false, final false
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
constexpr TurnBasedManager__MoveAlongPath_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedManager__MoveAlongPath_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnBasedManager__MoveAlongPath_d__14(TurnBasedManager__MoveAlongPath_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedManager__MoveAlongPath_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnBasedManager__MoveAlongPath_d__14(TurnBasedManager__MoveAlongPath_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21535};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field path, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::ABPath*  ___path;

/// @brief Field unit, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::TurnBasedAI>  ___unit;

/// @brief Field speed, offset: 0x30, size: 0x4, def value: None
 float_t  ___speed;

/// @brief Field <distanceAlongSegment>5__2, offset: 0x34, size: 0x4, def value: None
 float_t  ____distanceAlongSegment_5__2;

/// @brief Field <i>5__3, offset: 0x38, size: 0x4, def value: None
 int32_t  ____i_5__3;

/// @brief Field <p0>5__4, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____p0_5__4;

/// @brief Field <p1>5__5, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____p1_5__5;

/// @brief Field <p2>5__6, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____p2_5__6;

/// @brief Field <p3>5__7, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____p3_5__7;

/// @brief Field <segmentLength>5__8, offset: 0x6c, size: 0x4, def value: None
 float_t  ____segmentLength_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ___path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ___unit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ___speed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____distanceAlongSegment_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____i_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____p0_5__4) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____p1_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____p2_5__6) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____p3_5__7) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14, ____segmentLength_5__8) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::TurnBasedManager__MoveAlongPath_d__14) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding::Examples
