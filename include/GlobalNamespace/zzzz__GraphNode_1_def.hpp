#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphNode_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphNode_1)
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraverseBreadthFirstDistinct_d__21;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraverseBreadthFirst_d__20;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraversePreOrderDistinct_d__19;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraversePreOrder_d__18;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
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
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GraphNode_1;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraverseBreadthFirstDistinct_d__21;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraverseBreadthFirst_d__20;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraversePreOrderDistinct_d__19;
}
namespace GlobalNamespace {
template<typename T>
class GraphNode_1__TraversePreOrder_d__18;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::GraphNode_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19);
MARK_GEN_REF_T_PTR(::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GraphNode_1, "", "GraphNode`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21, "", "GraphNode`1/<TraverseBreadthFirstDistinct>d__21");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20, "", "GraphNode`1/<TraverseBreadthFirst>d__20");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19, "", "GraphNode`1/<TraversePreOrderDistinct>d__19");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18, "", "GraphNode`1/<TraversePreOrder>d__18");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GraphNode`1<T>
class CORDL_TYPE GraphNode_1 : public ::System::Object {
public:
// Declarations
using _TraverseBreadthFirstDistinct_d__21 = ::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>;

using _TraverseBreadthFirst_d__20 = ::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>;

using _TraversePreOrderDistinct_d__19 = ::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>;

using _TraversePreOrder_d__18 = ::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>;

 __declspec(property(get=get_ChildCount)) int32_t  ChildCount;

 __declspec(property(get=get_Children)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  Children;

 __declspec(property(get=get_Parents)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  Parents;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Field <Children>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Children_k__BackingField, put=__cordl_internal_set__Children_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  _Children_k__BackingField;

/// @brief Field <Parents>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parents_k__BackingField, put=__cordl_internal_set__Parents_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  _Parents_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) T  _Value_k__BackingField;

/// @brief Method AddChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphNode_1<T>* AddChild(::GlobalNamespace::GraphNode_1<T>*  child) ;

/// @brief Method AddChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::GraphNode_1<T>* AddChild(T  value) ;

/// @brief Method GetGraphDepth, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetGraphDepth() ;

/// @brief Method GetNodeDepth, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetNodeDepth() ;

/// @brief Method GetSubtreeWidth, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetSubtreeWidth(int32_t  depthLimit) ;

static inline ::GlobalNamespace::GraphNode_1<T>* New_ctor(T  value) ;

static inline ::GlobalNamespace::GraphNode_1<T>* New_ctor(T  value, ::GlobalNamespace::GraphNode_1<T>*  parent) ;

/// @brief Method RemoveChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveChild(::GlobalNamespace::GraphNode_1<T>*  child) ;

/// [IteratorStateMachine(typeof(GraphNode`1::<TraverseBreadthFirst>d__20<T>))]
/// @brief Method TraverseBreadthFirst, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* TraverseBreadthFirst() ;

/// [IteratorStateMachine(typeof(GraphNode`1::<TraverseBreadthFirstDistinct>d__21<T>))]
/// @brief Method TraverseBreadthFirstDistinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* TraverseBreadthFirstDistinct() ;

/// [IteratorStateMachine(typeof(GraphNode`1::<TraversePreOrder>d__18<T>))]
/// @brief Method TraversePreOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* TraversePreOrder() ;

/// [IteratorStateMachine(typeof(GraphNode`1::<TraversePreOrderDistinct>d__19<T>))]
/// @brief Method TraversePreOrderDistinct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* TraversePreOrderDistinct(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  visited) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get__Children_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get__Children_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get__Parents_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get__Parents_k__BackingField() ;

constexpr T const& __cordl_internal_get__Value_k__BackingField() const;

constexpr T& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

constexpr void __cordl_internal_set__Parents_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value, ::GlobalNamespace::GraphNode_1<T>*  parent) ;

/// @brief Method get_ChildCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_ChildCount() ;

/// [CompilerGenerated]
/// @brief Method get_Children, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* get_Children() ;

/// [CompilerGenerated]
/// @brief Method get_Parents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>* get_Parents() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Value() ;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode_1(GraphNode_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode_1(GraphNode_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{306};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 T  ____Value_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Parents>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  ____Parents_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Children>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GraphNode_1<T>*>*  ____Children_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GraphNode`1/<TraversePreOrderDistinct>d__19<T>
class CORDL_TYPE GraphNode_1__TraversePreOrderDistinct_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_GraphNode_T___get_Current)) ::GlobalNamespace::GraphNode_1<T>*  System_Collections_Generic_IEnumerator_GraphNode_T___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::GraphNode_1<T>*  __2__current;

/// @brief Field <>3__visited, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__visited, put=__cordl_internal_set___3__visited)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  __3__visited;

/// @brief Field <>4__this, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::GraphNode_1<T>*  __4__this;

/// @brief Field <>7__wrap1, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field visited, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_visited, put=__cordl_internal_set_visited)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  visited;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GraphNode_1__TraversePreOrderDistinct_d__19<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::GlobalNamespace::GraphNode_1<T>* System_Collections_Generic_IEnumerator_GraphNode_T___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___2__current() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get___3__visited() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get___3__visited() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get_visited() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get_visited() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___3__visited(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_visited(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode_1__TraversePreOrderDistinct_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraversePreOrderDistinct_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode_1__TraversePreOrderDistinct_d__19(GraphNode_1__TraversePreOrderDistinct_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraversePreOrderDistinct_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode_1__TraversePreOrderDistinct_d__19(GraphNode_1__TraversePreOrderDistinct_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{305};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field visited, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  ___visited;

/// @brief Field <>3__visited, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  _____3__visited;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x40, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Collections.Generic.List`1::Enumerator<T>, System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GraphNode`1/<TraversePreOrder>d__18<T>
class CORDL_TYPE GraphNode_1__TraversePreOrder_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_GraphNode_T___get_Current)) ::GlobalNamespace::GraphNode_1<T>*  System_Collections_Generic_IEnumerator_GraphNode_T___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::GraphNode_1<T>*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::GraphNode_1<T>*  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  __7__wrap1;

/// @brief Field <>7__wrap2, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GraphNode_1__TraversePreOrder_d__18<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::GlobalNamespace::GraphNode_1<T>* System_Collections_Generic_IEnumerator_GraphNode_T___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>& __cordl_internal_get___7__wrap1() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __m__Finally2() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode_1__TraversePreOrder_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraversePreOrder_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode_1__TraversePreOrder_d__18(GraphNode_1__TraversePreOrder_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraversePreOrder_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode_1__TraversePreOrder_d__18(GraphNode_1__TraversePreOrder_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{304};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::GraphNode_1<T>*>  _____7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GraphNode`1/<TraverseBreadthFirstDistinct>d__21<T>
class CORDL_TYPE GraphNode_1__TraverseBreadthFirstDistinct_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_GraphNode_T___get_Current)) ::GlobalNamespace::GraphNode_1<T>*  System_Collections_Generic_IEnumerator_GraphNode_T___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::GraphNode_1<T>*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::GraphNode_1<T>*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <current>5__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__current_5__4, put=__cordl_internal_set__current_5__4)) ::GlobalNamespace::GraphNode_1<T>*  _current_5__4;

/// @brief Field <queue>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__queue_5__2, put=__cordl_internal_set__queue_5__2)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  _queue_5__2;

/// @brief Field <visited>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__visited_5__3, put=__cordl_internal_set__visited_5__3)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  _visited_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GraphNode_1__TraverseBreadthFirstDistinct_d__21<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::GlobalNamespace::GraphNode_1<T>* System_Collections_Generic_IEnumerator_GraphNode_T___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get__current_5__4() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get__current_5__4() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get__queue_5__2() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get__queue_5__2() ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get__visited_5__3() const;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get__visited_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__current_5__4(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

constexpr void __cordl_internal_set__visited_5__3(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode_1__TraverseBreadthFirstDistinct_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraverseBreadthFirstDistinct_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode_1__TraverseBreadthFirstDistinct_d__21(GraphNode_1__TraverseBreadthFirstDistinct_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraverseBreadthFirstDistinct_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode_1__TraverseBreadthFirstDistinct_d__21(GraphNode_1__TraverseBreadthFirstDistinct_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{303};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____4__this;

/// @brief Field <queue>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  ____queue_5__2;

/// @brief Field <visited>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GraphNode_1<T>*>*  ____visited_5__3;

/// @brief Field <current>5__4, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  ____current_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GraphNode`1/<TraverseBreadthFirst>d__20<T>
class CORDL_TYPE GraphNode_1__TraverseBreadthFirst_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_GraphNode_T___get_Current)) ::GlobalNamespace::GraphNode_1<T>*  System_Collections_Generic_IEnumerator_GraphNode_T___Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::GraphNode_1<T>*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::GlobalNamespace::GraphNode_1<T>*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <current>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__current_5__3, put=__cordl_internal_set__current_5__3)) ::GlobalNamespace::GraphNode_1<T>*  _current_5__3;

/// @brief Field <queue>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__queue_5__2, put=__cordl_internal_set__queue_5__2)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  _queue_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GraphNode_1__TraverseBreadthFirst_d__20<T>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<GraphNode<T>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* System_Collections_Generic_IEnumerable_GraphNode_T___GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<GraphNode<T>>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::GlobalNamespace::GraphNode_1<T>* System_Collections_Generic_IEnumerator_GraphNode_T___get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get___4__this() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::GlobalNamespace::GraphNode_1<T>* const& __cordl_internal_get__current_5__3() const;

constexpr ::GlobalNamespace::GraphNode_1<T>*& __cordl_internal_get__current_5__3() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>* const& __cordl_internal_get__queue_5__2() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*& __cordl_internal_get__queue_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___4__this(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__current_5__3(::GlobalNamespace::GraphNode_1<T>*  value) ;

constexpr void __cordl_internal_set__queue_5__2(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::GraphNode_1<T>*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__GraphNode_1_T___() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphNode_1__TraverseBreadthFirst_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraverseBreadthFirst_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphNode_1__TraverseBreadthFirst_d__20(GraphNode_1__TraverseBreadthFirst_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphNode_1__TraverseBreadthFirst_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphNode_1__TraverseBreadthFirst_d__20(GraphNode_1__TraverseBreadthFirst_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{302};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  _____4__this;

/// @brief Field <queue>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphNode_1<T>*>*  ____queue_5__2;

/// @brief Field <current>5__3, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<T>*  ____current_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
