#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ObjectPlacer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPlacer)
namespace Pathfinding::Examples {
class ObjectPlacer__RemoveObject_d__5;
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
class GameObject;
}
// Forward declare root types
namespace Pathfinding::Examples {
class ObjectPlacer;
}
namespace Pathfinding::Examples {
class ObjectPlacer__RemoveObject_d__5;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::ObjectPlacer*);
MARK_REF_T(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ObjectPlacer*, "Pathfinding.Examples", "ObjectPlacer");
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5*, "Pathfinding.Examples", "ObjectPlacer/<RemoveObject>d__5");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_object_placer.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ObjectPlacer
class CORDL_TYPE ObjectPlacer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RemoveObject_d__5 = ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5;

/// @brief Field direct, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_direct, put=__cordl_internal_set_direct)) bool  direct;

/// @brief Field go, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_go, put=__cordl_internal_set_go)) ::UnityW<::UnityEngine::GameObject>  go;

/// @brief Field issueGUOs, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_issueGUOs, put=__cordl_internal_set_issueGUOs)) bool  issueGUOs;

static inline ::Pathfinding::Examples::ObjectPlacer* New_ctor() ;

/// @brief Method PlaceObject, addr 0x5efae9c, size 0x274, virtual false, abstract: false, final false
inline void PlaceObject() ;

/// [IteratorStateMachine(typeof(Pathfinding.Examples.ObjectPlacer::<RemoveObject>d__5))]
/// @brief Method RemoveObject, addr 0x5efb110, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RemoveObject() ;

/// @brief Method Update, addr 0x5efae00, size 0x9c, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_direct() const;

constexpr bool& __cordl_internal_get_direct() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_go() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_go() ;

constexpr bool const& __cordl_internal_get_issueGUOs() const;

constexpr bool& __cordl_internal_get_issueGUOs() ;

constexpr void __cordl_internal_set_direct(bool  value) ;

constexpr void __cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_issueGUOs(bool  value) ;

/// @brief Method .ctor, addr 0x5efb1a4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPlacer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPlacer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPlacer(ObjectPlacer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPlacer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPlacer(ObjectPlacer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21550};

/// @brief Field go, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___go;

/// @brief Field direct, offset: 0x28, size: 0x1, def value: None
 bool  ___direct;

/// @brief Field issueGUOs, offset: 0x29, size: 0x1, def value: None
 bool  ___issueGUOs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer, ___go) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer, ___direct) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer, ___issueGUOs) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ObjectPlacer) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding::Examples
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Bounds
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.ObjectPlacer/<RemoveObject>d__5
class CORDL_TYPE ObjectPlacer__RemoveObject_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::Examples::ObjectPlacer>  __4__this;

/// @brief Field <b>5__2, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__b_5__2, put=__cordl_internal_set__b_5__2)) ::UnityEngine::Bounds  _b_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5efb1b8, size 0x2f0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5efb4a8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5efb4b0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5efb4e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5efb1b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Pathfinding::Examples::ObjectPlacer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::Examples::ObjectPlacer>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__b_5__2() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__b_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::ObjectPlacer>  value) ;

constexpr void __cordl_internal_set__b_5__2(::UnityEngine::Bounds  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5efb17c, size 0x28, virtual false, abstract: false, final false
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
constexpr ObjectPlacer__RemoveObject_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPlacer__RemoveObject_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPlacer__RemoveObject_d__5(ObjectPlacer__RemoveObject_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPlacer__RemoveObject_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPlacer__RemoveObject_d__5(ObjectPlacer__RemoveObject_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21549};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::Examples::ObjectPlacer>  _____4__this;

/// @brief Field <b>5__2, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____b_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5, ____b_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::ObjectPlacer__RemoveObject_d__5) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Examples
