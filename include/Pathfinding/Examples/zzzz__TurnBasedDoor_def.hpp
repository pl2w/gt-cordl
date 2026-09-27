#pragma once
// IWYU pragma private; include "Pathfinding/Examples/TurnBasedDoor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TurnBasedDoor)
namespace Pathfinding::Examples {
class TurnBasedDoor__WaitAndClose_d__6;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class SingleNodeBlocker;
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
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Pathfinding::Examples {
class TurnBasedDoor;
}
namespace Pathfinding::Examples {
class TurnBasedDoor__WaitAndClose_d__6;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::TurnBasedDoor*);
MARK_REF_T(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::TurnBasedDoor*, "Pathfinding.Examples", "TurnBasedDoor");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6*, "Pathfinding.Examples", "TurnBasedDoor/<WaitAndClose>d__6");
// [RequireComponent(typeof(UnityEngine.Animator))]
// [RequireComponent(typeof(Pathfinding.SingleNodeBlocker))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_turn_based_door.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.TurnBasedDoor
class CORDL_TYPE TurnBasedDoor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitAndClose_d__6 = ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6;

/// @brief Field animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field blocker, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocker, put=__cordl_internal_set_blocker)) ::UnityW<::Pathfinding::SingleNodeBlocker>  blocker;

/// @brief Field open, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_open, put=__cordl_internal_set_open)) bool  open;

/// @brief Method Awake, addr 0x5ef501c, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Close, addr 0x5ef5118, size 0x20, virtual false, abstract: false, final false
inline void Close() ;

static inline ::Pathfinding::Examples::TurnBasedDoor* New_ctor() ;

/// @brief Method Open, addr 0x5ef51cc, size 0x80, virtual false, abstract: false, final false
inline void Open() ;

/// @brief Method Start, addr 0x5ef50ac, size 0x6c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Toggle, addr 0x5ef524c, size 0x38, virtual false, abstract: false, final false
inline void Toggle() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.TurnBasedDoor::<WaitAndClose>d__6))]
/// @brief Method WaitAndClose, addr 0x5ef5138, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitAndClose() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker> const& __cordl_internal_get_blocker() const;

constexpr ::UnityW<::Pathfinding::SingleNodeBlocker>& __cordl_internal_get_blocker() ;

constexpr bool const& __cordl_internal_get_open() const;

constexpr bool& __cordl_internal_get_open() ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_blocker(::UnityW<::Pathfinding::SingleNodeBlocker>  value) ;

constexpr void __cordl_internal_set_open(bool  value) ;

/// @brief Method .ctor, addr 0x5ef5284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TurnBasedDoor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedDoor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnBasedDoor(TurnBasedDoor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedDoor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnBasedDoor(TurnBasedDoor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21533};

/// @brief Field animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field blocker, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::SingleNodeBlocker>  ___blocker;

/// @brief Field open, offset: 0x30, size: 0x1, def value: None
 bool  ___open;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor, ___animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor, ___blocker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor, ___open) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::TurnBasedDoor) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.TurnBasedDoor/<WaitAndClose>d__6
class CORDL_TYPE TurnBasedDoor__WaitAndClose_d__6 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::TurnBasedDoor>  __4__this;

/// @brief Field <node>5__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__node_5__3, put=__cordl_internal_set__node_5__3)) ::Pathfinding::GraphNode*  _node_5__3;

/// @brief Field <selector>5__2, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector_5__2, put=__cordl_internal_set__selector_5__2)) ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  _selector_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ef5290, size 0x278, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ef5508, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ef5510, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ef5548, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ef528c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedDoor> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::TurnBasedDoor>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get__node_5__3() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get__node_5__3() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>* const& __cordl_internal_get__selector_5__2() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*& __cordl_internal_get__selector_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::TurnBasedDoor>  value) ;

constexpr void __cordl_internal_set__node_5__3(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set__selector_5__2(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ef51a4, size 0x28, virtual false, abstract: false, final false
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
constexpr TurnBasedDoor__WaitAndClose_d__6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedDoor__WaitAndClose_d__6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TurnBasedDoor__WaitAndClose_d__6(TurnBasedDoor__WaitAndClose_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TurnBasedDoor__WaitAndClose_d__6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TurnBasedDoor__WaitAndClose_d__6(TurnBasedDoor__WaitAndClose_d__6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21532};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::TurnBasedDoor>  _____4__this;

/// @brief Field <selector>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::SingleNodeBlocker>>*  ____selector_5__2;

/// @brief Field <node>5__3, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ____node_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6, ____selector_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6, ____node_5__3) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::TurnBasedDoor__WaitAndClose_d__6) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Examples
