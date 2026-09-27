#pragma once
// IWYU pragma private; include "GlobalNamespace/DeployedChild.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DeployedChild)
namespace GlobalNamespace {
class DeployableObject;
}
namespace GlobalNamespace {
class DeployedChild__ReturnToParentDelayed_d__5;
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
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DeployedChild;
}
namespace GlobalNamespace {
class DeployedChild__ReturnToParentDelayed_d__5;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DeployedChild*);
MARK_REF_T(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeployedChild*, "", "DeployedChild");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5*, "", "DeployedChild/<ReturnToParentDelayed>d__5");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeployedChild
class CORDL_TYPE DeployedChild : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ReturnToParentDelayed_d__5 = ::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5;

/// @brief Field _isRemote, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRemote, put=__cordl_internal_set__isRemote)) bool  _isRemote;

/// @brief Field _parent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::UnityW<::GlobalNamespace::DeployableObject>  _parent;

/// @brief Field _rigidbody, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Method Deploy, addr 0x564ae28, size 0x10c, virtual false, abstract: false, final false
inline void Deploy(::GlobalNamespace::DeployableObject*  parent, ::UnityEngine::Vector3  launchPos, ::UnityEngine::Quaternion  launchRot, ::UnityEngine::Vector3  releaseVel, bool  isRemote) ;

static inline ::GlobalNamespace::DeployedChild* New_ctor() ;

/// @brief Method ReturnToParent, addr 0x564b478, size 0xc0, virtual false, abstract: false, final false
inline void ReturnToParent(float_t  delay) ;

/// [IteratorStateMachine(typeof(DeployedChild::<ReturnToParentDelayed>d__5))]
/// @brief Method ReturnToParentDelayed, addr 0x564b538, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReturnToParentDelayed(float_t  delay) ;

constexpr bool const& __cordl_internal_get__isRemote() const;

constexpr bool& __cordl_internal_get__isRemote() ;

constexpr ::UnityW<::GlobalNamespace::DeployableObject> const& __cordl_internal_get__parent() const;

constexpr ::UnityW<::GlobalNamespace::DeployableObject>& __cordl_internal_get__parent() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr void __cordl_internal_set__isRemote(bool  value) ;

constexpr void __cordl_internal_set__parent(::UnityW<::GlobalNamespace::DeployableObject>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

/// @brief Method .ctor, addr 0x564b5dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeployedChild() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeployedChild", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeployedChild(DeployedChild && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeployedChild", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeployedChild(DeployedChild const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{704};

/// [SerializeField]
/// @brief Field _rigidbody, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// [SerializeReference]
/// @brief Field _parent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DeployableObject>  ____parent;

/// @brief Field _isRemote, offset: 0x30, size: 0x1, def value: None
 bool  ____isRemote;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeployedChild, ____rigidbody) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployedChild, ____parent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployedChild, ____isRemote) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeployedChild) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DeployedChild/<ReturnToParentDelayed>d__5
class CORDL_TYPE DeployedChild__ReturnToParentDelayed_d__5 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DeployedChild>  __4__this;

/// @brief Field <start>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__start_5__2, put=__cordl_internal_set__start_5__2)) float_t  _start_5__2;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x564b5e8, size 0xec, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x564b6d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x564b6dc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x564b714, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x564b5e4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::DeployedChild> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::DeployedChild>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__start_5__2() const;

constexpr float_t& __cordl_internal_get__start_5__2() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DeployedChild>  value) ;

constexpr void __cordl_internal_set__start_5__2(float_t  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x564b5b4, size 0x28, virtual false, abstract: false, final false
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
constexpr DeployedChild__ReturnToParentDelayed_d__5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeployedChild__ReturnToParentDelayed_d__5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeployedChild__ReturnToParentDelayed_d__5(DeployedChild__ReturnToParentDelayed_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeployedChild__ReturnToParentDelayed_d__5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeployedChild__ReturnToParentDelayed_d__5(DeployedChild__ReturnToParentDelayed_d__5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{703};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DeployedChild>  _____4__this;

/// @brief Field <start>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____start_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5, ____start_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DeployedChild__ReturnToParentDelayed_d__5) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
