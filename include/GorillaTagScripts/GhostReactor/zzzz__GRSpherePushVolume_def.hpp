#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRSpherePushVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/GhostReactor/zzzz__GRSpherePushVolume_PushKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSpherePushVolume)
namespace GlobalNamespace {
struct GRSpherePushVolume_PushKind;
}
namespace GorillaTagScripts::GhostReactor {
class GRSpherePushVolume__ActionCoroutine_d__13;
}
namespace GorillaTagScripts::GhostReactor {
class GRSpherePushVolume__DisableCoroutine_d__14;
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
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GRSpherePushVolume;
}
namespace GorillaTagScripts::GhostReactor {
class GRSpherePushVolume__ActionCoroutine_d__13;
}
namespace GorillaTagScripts::GhostReactor {
class GRSpherePushVolume__DisableCoroutine_d__14;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRSpherePushVolume*);
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*);
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRSpherePushVolume*, "GorillaTagScripts.GhostReactor", "GRSpherePushVolume");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13*, "GorillaTagScripts.GhostReactor", "GRSpherePushVolume/<ActionCoroutine>d__13");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14*, "GorillaTagScripts.GhostReactor", "GRSpherePushVolume/<DisableCoroutine>d__14");
// [RequireComponent(typeof(UnityEngine.SphereCollider))]
// Dependencies GorillaTagScripts.GhostReactor.GRSpherePushVolume::PushKind, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRSpherePushVolume
class CORDL_TYPE GRSpherePushVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PushKind = ::GlobalNamespace::GRSpherePushVolume_PushKind;

using _ActionCoroutine_d__13 = ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13;

using _DisableCoroutine_d__14 = ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14;

/// @brief Field _collider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::SphereCollider>  _collider;

/// @brief Field _coroutine, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutine, put=__cordl_internal_set__coroutine)) ::UnityEngine::Coroutine*  _coroutine;

/// @brief Field _disableAfter, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__disableAfter, put=__cordl_internal_set__disableAfter)) float_t  _disableAfter;

/// @brief Field _localFlung, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__localFlung, put=__cordl_internal_set__localFlung)) bool  _localFlung;

/// @brief Field _pushCooldown, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__pushCooldown, put=__cordl_internal_set__pushCooldown)) float_t  _pushCooldown;

/// @brief Field _pushDelay, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__pushDelay, put=__cordl_internal_set__pushDelay)) float_t  _pushDelay;

/// @brief Field _pushForce, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__pushForce, put=__cordl_internal_set__pushForce)) float_t  _pushForce;

/// @brief Field _pushKind, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__pushKind, put=__cordl_internal_set__pushKind)) ::GlobalNamespace::GRSpherePushVolume_PushKind  _pushKind;

/// @brief Field _pushScaling, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pushScaling, put=__cordl_internal_set__pushScaling)) ::UnityEngine::AnimationCurve*  _pushScaling;

/// [IteratorStateMachine(typeof(GorillaTagScripts.GhostReactor.GRSpherePushVolume::<ActionCoroutine>d__13))]
/// @brief Method ActionCoroutine, addr 0x5c1b950, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ActionCoroutine(::UnityEngine::Collider*  other) ;

/// @brief Method Awake, addr 0x5c1b6f8, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculatePushVector, addr 0x5c1ba28, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculatePushVector(::UnityEngine::Collider*  other) ;

/// @brief Method CalculateRadialPushVector, addr 0x5c1ba78, size 0x1ac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateRadialPushVector(::UnityEngine::Collider*  other) ;

/// @brief Method CalculateUpAndOutPushVector, addr 0x5c1bc24, size 0x22c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateUpAndOutPushVector(::UnityEngine::Collider*  other) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.GhostReactor.GRSpherePushVolume::<DisableCoroutine>d__14))]
/// @brief Method DisableCoroutine, addr 0x5c1b7a4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DisableCoroutine() ;

static inline ::GorillaTagScripts::GhostReactor::GRSpherePushVolume* New_ctor() ;

/// @brief Method OnTriggerStay, addr 0x5c1b810, size 0x140, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method Trigger, addr 0x5c1b768, size 0x3c, virtual false, abstract: false, final false
inline void Trigger() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get__collider() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__coroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__coroutine() ;

constexpr float_t const& __cordl_internal_get__disableAfter() const;

constexpr float_t& __cordl_internal_get__disableAfter() ;

constexpr bool const& __cordl_internal_get__localFlung() const;

constexpr bool& __cordl_internal_get__localFlung() ;

constexpr float_t const& __cordl_internal_get__pushCooldown() const;

constexpr float_t& __cordl_internal_get__pushCooldown() ;

constexpr float_t const& __cordl_internal_get__pushDelay() const;

constexpr float_t& __cordl_internal_get__pushDelay() ;

constexpr float_t const& __cordl_internal_get__pushForce() const;

constexpr float_t& __cordl_internal_get__pushForce() ;

constexpr ::GlobalNamespace::GRSpherePushVolume_PushKind const& __cordl_internal_get__pushKind() const;

constexpr ::GlobalNamespace::GRSpherePushVolume_PushKind& __cordl_internal_get__pushKind() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__pushScaling() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__pushScaling() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set__coroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__disableAfter(float_t  value) ;

constexpr void __cordl_internal_set__localFlung(bool  value) ;

constexpr void __cordl_internal_set__pushCooldown(float_t  value) ;

constexpr void __cordl_internal_set__pushDelay(float_t  value) ;

constexpr void __cordl_internal_set__pushForce(float_t  value) ;

constexpr void __cordl_internal_set__pushKind(::GlobalNamespace::GRSpherePushVolume_PushKind  value) ;

constexpr void __cordl_internal_set__pushScaling(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method .ctor, addr 0x5c1be50, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSpherePushVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSpherePushVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSpherePushVolume(GRSpherePushVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSpherePushVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSpherePushVolume(GRSpherePushVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4135};

/// [SerializeField]
/// @brief Field _pushKind, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GRSpherePushVolume_PushKind  ____pushKind;

/// [SerializeField]
/// @brief Field _pushDelay, offset: 0x24, size: 0x4, def value: None
 float_t  ____pushDelay;

/// [SerializeField]
/// @brief Field _pushCooldown, offset: 0x28, size: 0x4, def value: None
 float_t  ____pushCooldown;

/// [SerializeField]
/// @brief Field _pushScaling, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____pushScaling;

/// [SerializeField]
/// @brief Field _pushForce, offset: 0x38, size: 0x4, def value: None
 float_t  ____pushForce;

/// [SerializeField]
/// @brief Field _disableAfter, offset: 0x3c, size: 0x4, def value: None
 float_t  ____disableAfter;

/// @brief Field _collider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ____collider;

/// @brief Field _localFlung, offset: 0x48, size: 0x1, def value: None
 bool  ____localFlung;

/// @brief Field _coroutine, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____coroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____pushKind) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____pushDelay) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____pushCooldown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____pushScaling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____pushForce) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____disableAfter) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____collider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____localFlung) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume, ____coroutine) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume) == 0x58, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRSpherePushVolume/<DisableCoroutine>d__14
class CORDL_TYPE GRSpherePushVolume__DisableCoroutine_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c1c0b8, size 0xcc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c1c184, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c1c18c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c1c1c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c1c0b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c1ba00, size 0x28, virtual false, abstract: false, final false
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
constexpr GRSpherePushVolume__DisableCoroutine_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSpherePushVolume__DisableCoroutine_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSpherePushVolume__DisableCoroutine_d__14(GRSpherePushVolume__DisableCoroutine_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSpherePushVolume__DisableCoroutine_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSpherePushVolume__DisableCoroutine_d__14(GRSpherePushVolume__DisableCoroutine_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4134};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__DisableCoroutine_d__14) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRSpherePushVolume/<ActionCoroutine>d__13
class CORDL_TYPE GRSpherePushVolume__ActionCoroutine_d__13 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  __4__this;

/// @brief Field other, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_other, put=__cordl_internal_set_other)) ::UnityW<::UnityEngine::Collider>  other;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c1bea4, size 0x1c8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c1c06c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c1c074, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c1c0ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c1bea0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_other() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_other() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  value) ;

constexpr void __cordl_internal_set_other(::UnityW<::UnityEngine::Collider>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c1b9d8, size 0x28, virtual false, abstract: false, final false
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
constexpr GRSpherePushVolume__ActionCoroutine_d__13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSpherePushVolume__ActionCoroutine_d__13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSpherePushVolume__ActionCoroutine_d__13(GRSpherePushVolume__ActionCoroutine_d__13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSpherePushVolume__ActionCoroutine_d__13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSpherePushVolume__ActionCoroutine_d__13(GRSpherePushVolume__ActionCoroutine_d__13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4133};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  _____4__this;

/// @brief Field other, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___other;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13, ___other) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRSpherePushVolume__ActionCoroutine_d__13) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
