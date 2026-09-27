#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRSquishVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSquishVolume)
namespace GlobalNamespace {
class GREnemyBossMoon;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GorillaTagScripts::GhostReactor {
class GRSquishVolume__ReenableCoroutine_d__18;
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
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GRSquishVolume;
}
namespace GorillaTagScripts::GhostReactor {
class GRSquishVolume__ReenableCoroutine_d__18;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRSquishVolume*);
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRSquishVolume*, "GorillaTagScripts.GhostReactor", "GRSquishVolume");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18*, "GorillaTagScripts.GhostReactor", "GRSquishVolume/<ReenableCoroutine>d__18");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRSquishVolume
class CORDL_TYPE GRSquishVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ReenableCoroutine_d__18 = ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18;

/// @brief Field _collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Field _collidersToDisable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__collidersToDisable, put=__cordl_internal_set__collidersToDisable)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _collidersToDisable;

/// @brief Field _launchDeflectionDegrees, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__launchDeflectionDegrees, put=__cordl_internal_set__launchDeflectionDegrees)) float_t  _launchDeflectionDegrees;

/// @brief Field _launchStrength, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__launchStrength, put=__cordl_internal_set__launchStrength)) float_t  _launchStrength;

/// @brief Field _reenableCoroutine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__reenableCoroutine, put=__cordl_internal_set__reenableCoroutine)) ::UnityEngine::Coroutine*  _reenableCoroutine;

/// @brief Field _reenableDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__reenableDelay, put=__cordl_internal_set__reenableDelay)) float_t  _reenableDelay;

/// @brief Field facingDownDegrees, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_facingDownDegrees, put=__cordl_internal_set_facingDownDegrees)) float_t  facingDownDegrees;

/// @brief Field moonBoss, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_moonBoss, put=__cordl_internal_set_moonBoss)) ::UnityW<::GlobalNamespace::GREnemyBossMoon>  moonBoss;

/// @brief Field overrideDisabled, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideDisabled, put=__cordl_internal_set_overrideDisabled)) bool  overrideDisabled;

/// @brief Field rotationOffset, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

/// @brief Field squishHeight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_squishHeight, put=__cordl_internal_set_squishHeight)) float_t  squishHeight;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method GetLaunchVector, addr 0x5c1c7f8, size 0x3bc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLaunchVector() ;

static inline ::GorillaTagScripts::GhostReactor::GRSquishVolume* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c1c1d4, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c1c1cc, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5c1c60c, size 0x1ec, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.GhostReactor.GRSquishVolume::<ReenableCoroutine>d__18))]
/// @brief Method ReenableCoroutine, addr 0x5c1cbb4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReenableCoroutine() ;

/// @brief Method SetCollider, addr 0x5c1c35c, size 0x1c, virtual false, abstract: false, final false
inline void SetCollider(bool  colliderEnabled) ;

/// @brief Method SetTentacleColliders, addr 0x5c1c378, size 0x70, virtual false, abstract: false, final false
inline void SetTentacleColliders(bool  enabled) ;

/// @brief Method SliceUpdate, addr 0x5c1c3e8, size 0x224, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5c1c1dc, size 0x180, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__collidersToDisable() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__collidersToDisable() ;

constexpr float_t const& __cordl_internal_get__launchDeflectionDegrees() const;

constexpr float_t& __cordl_internal_get__launchDeflectionDegrees() ;

constexpr float_t const& __cordl_internal_get__launchStrength() const;

constexpr float_t& __cordl_internal_get__launchStrength() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__reenableCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__reenableCoroutine() ;

constexpr float_t const& __cordl_internal_get__reenableDelay() const;

constexpr float_t& __cordl_internal_get__reenableDelay() ;

constexpr float_t const& __cordl_internal_get_facingDownDegrees() const;

constexpr float_t& __cordl_internal_get_facingDownDegrees() ;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& __cordl_internal_get_moonBoss() const;

constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& __cordl_internal_get_moonBoss() ;

constexpr bool const& __cordl_internal_get_overrideDisabled() const;

constexpr bool& __cordl_internal_get_overrideDisabled() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotationOffset() ;

constexpr float_t const& __cordl_internal_get_squishHeight() const;

constexpr float_t& __cordl_internal_get_squishHeight() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__collidersToDisable(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__launchDeflectionDegrees(float_t  value) ;

constexpr void __cordl_internal_set__launchStrength(float_t  value) ;

constexpr void __cordl_internal_set__reenableCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__reenableDelay(float_t  value) ;

constexpr void __cordl_internal_set_facingDownDegrees(float_t  value) ;

constexpr void __cordl_internal_set_moonBoss(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value) ;

constexpr void __cordl_internal_set_overrideDisabled(bool  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_squishHeight(float_t  value) ;

/// @brief Method .ctor, addr 0x5c1cc48, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSquishVolume() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSquishVolume", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSquishVolume(GRSquishVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSquishVolume", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSquishVolume(GRSquishVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4137};

/// [SerializeField]
/// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

/// [SerializeField]
/// @brief Field _collidersToDisable, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____collidersToDisable;

/// [SerializeField]
/// @brief Field _reenableDelay, offset: 0x30, size: 0x4, def value: None
 float_t  ____reenableDelay;

/// [SerializeField]
/// @brief Field _launchStrength, offset: 0x34, size: 0x4, def value: None
 float_t  ____launchStrength;

/// [SerializeField]
/// @brief Field _launchDeflectionDegrees, offset: 0x38, size: 0x4, def value: None
 float_t  ____launchDeflectionDegrees;

/// @brief Field _reenableCoroutine, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____reenableCoroutine;

/// @brief Field moonBoss, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoon>  ___moonBoss;

/// @brief Field squishHeight, offset: 0x50, size: 0x4, def value: None
 float_t  ___squishHeight;

/// @brief Field rotationOffset, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotationOffset;

/// @brief Field facingDownDegrees, offset: 0x60, size: 0x4, def value: None
 float_t  ___facingDownDegrees;

/// @brief Field overrideDisabled, offset: 0x64, size: 0x1, def value: None
 bool  ___overrideDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ____collider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ____collidersToDisable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ____reenableDelay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ____launchStrength) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ____launchDeflectionDegrees) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ____reenableCoroutine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ___moonBoss) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ___squishHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ___rotationOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ___facingDownDegrees) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume, ___overrideDisabled) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRSquishVolume) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRSquishVolume/<ReenableCoroutine>d__18
class CORDL_TYPE GRSquishVolume__ReenableCoroutine_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5c1cc70, size 0xe8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5c1cd58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5c1cd60, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5c1cd98, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5c1cc6c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5c1cc20, size 0x28, virtual false, abstract: false, final false
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
constexpr GRSquishVolume__ReenableCoroutine_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSquishVolume__ReenableCoroutine_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSquishVolume__ReenableCoroutine_d__18(GRSquishVolume__ReenableCoroutine_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSquishVolume__ReenableCoroutine_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSquishVolume__ReenableCoroutine_d__18(GRSquishVolume__ReenableCoroutine_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4136};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRSquishVolume__ReenableCoroutine_d__18) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
