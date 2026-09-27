#pragma once
// IWYU pragma private; include "GorillaTagScripts/RandomProjectileThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomProjectileThrowable)
namespace GorillaTagScripts {
class RandomProjectileThrowable__DestroyProjectileCoroutine_d__29;
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
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts {
class RandomProjectileThrowable;
}
namespace GorillaTagScripts {
class RandomProjectileThrowable__DestroyProjectileCoroutine_d__29;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::RandomProjectileThrowable*);
MARK_REF_T(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::RandomProjectileThrowable*, "GorillaTagScripts", "RandomProjectileThrowable");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29*, "GorillaTagScripts", "RandomProjectileThrowable/<DestroyProjectileCoroutine>d__29");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.RandomProjectileThrowable
class CORDL_TYPE RandomProjectileThrowable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DestroyProjectileCoroutine_d__29 = ::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29;

 __declspec(property(get=get_ForceDestroy, put=set_ForceDestroy)) bool  ForceDestroy;

/// @brief Field OnDestroyRandomProjectile, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDestroyRandomProjectile, put=__cordl_internal_set_OnDestroyRandomProjectile)) ::UnityEngine::Events::UnityAction_1<bool>*  OnDestroyRandomProjectile;

/// @brief Field OnDestroyed, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDestroyed, put=__cordl_internal_set_OnDestroyed)) ::UnityEngine::Events::UnityEvent*  OnDestroyed;

 __declspec(property(get=get_TimeEnabled, put=set_TimeEnabled)) float_t  TimeEnabled;

/// @brief Field <ForceDestroy>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__ForceDestroy_k__BackingField, put=__cordl_internal_set__ForceDestroy_k__BackingField)) bool  _ForceDestroy_k__BackingField;

/// @brief Field <TimeEnabled>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__TimeEnabled_k__BackingField, put=__cordl_internal_set__TimeEnabled_k__BackingField)) float_t  _TimeEnabled_k__BackingField;

/// @brief Field alternativeProjectilePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_alternativeProjectilePrefab, put=__cordl_internal_set_alternativeProjectilePrefab)) ::UnityW<::UnityEngine::GameObject>  alternativeProjectilePrefab;

/// @brief Field audioSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field autoDestroyAfterSeconds, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoDestroyAfterSeconds, put=__cordl_internal_set_autoDestroyAfterSeconds)) float_t  autoDestroyAfterSeconds;

/// @brief Field currentProjectile, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentProjectile, put=__cordl_internal_set_currentProjectile)) ::UnityW<::UnityEngine::GameObject>  currentProjectile;

/// @brief Field destroyAfterRelease, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyAfterRelease, put=__cordl_internal_set_destroyAfterRelease)) bool  destroyAfterRelease;

/// @brief Field destroyOnTrigger, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_destroyOnTrigger, put=__cordl_internal_set_destroyOnTrigger)) bool  destroyOnTrigger;

/// @brief Field interactEventName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactEventName, put=__cordl_internal_set_interactEventName)) ::StringW  interactEventName;

/// @brief Field moveOverPassedLifeTime, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_moveOverPassedLifeTime, put=__cordl_internal_set_moveOverPassedLifeTime)) bool  moveOverPassedLifeTime;

/// @brief Field projectilePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field spawnChance, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnChance, put=__cordl_internal_set_spawnChance)) float_t  spawnChance;

/// @brief Field triggerClip, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerClip, put=__cordl_internal_set_triggerClip)) ::UnityW<::UnityEngine::AudioClip>  triggerClip;

/// @brief Field triggerTag, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerTag, put=__cordl_internal_set_triggerTag)) ::StringW  triggerTag;

/// @brief Method DestroyProjectile, addr 0x5bd3df4, size 0x24, virtual false, abstract: false, final false
inline void DestroyProjectile() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.RandomProjectileThrowable::<DestroyProjectileCoroutine>d__29))]
/// @brief Method DestroyProjectileCoroutine, addr 0x5bd3e18, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DestroyProjectileCoroutine(float_t  delay) ;

/// @brief Method ForceDestroyThrowable, addr 0x5bd3bf8, size 0xc, virtual false, abstract: false, final false
inline void ForceDestroyThrowable() ;

/// @brief Method GetProjectilePrefab, addr 0x5bd3c10, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetProjectilePrefab() ;

static inline ::GorillaTagScripts::RandomProjectileThrowable* New_ctor() ;

/// @brief Method OnDisable, addr 0x5bd3bf0, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5bd3bc8, size 0x28, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5bd3c18, size 0x1dc, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method UpdateProjectilePrefab, addr 0x5bd3c04, size 0xc, virtual false, abstract: false, final false
inline void UpdateProjectilePrefab() ;

constexpr ::UnityEngine::Events::UnityAction_1<bool>* const& __cordl_internal_get_OnDestroyRandomProjectile() const;

constexpr ::UnityEngine::Events::UnityAction_1<bool>*& __cordl_internal_get_OnDestroyRandomProjectile() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnDestroyed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnDestroyed() ;

constexpr bool const& __cordl_internal_get__ForceDestroy_k__BackingField() const;

constexpr bool& __cordl_internal_get__ForceDestroy_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__TimeEnabled_k__BackingField() const;

constexpr float_t& __cordl_internal_get__TimeEnabled_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_alternativeProjectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_alternativeProjectilePrefab() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_autoDestroyAfterSeconds() const;

constexpr float_t& __cordl_internal_get_autoDestroyAfterSeconds() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_currentProjectile() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_currentProjectile() ;

constexpr bool const& __cordl_internal_get_destroyAfterRelease() const;

constexpr bool& __cordl_internal_get_destroyAfterRelease() ;

constexpr bool const& __cordl_internal_get_destroyOnTrigger() const;

constexpr bool& __cordl_internal_get_destroyOnTrigger() ;

constexpr ::StringW const& __cordl_internal_get_interactEventName() const;

constexpr ::StringW& __cordl_internal_get_interactEventName() ;

constexpr bool const& __cordl_internal_get_moveOverPassedLifeTime() const;

constexpr bool& __cordl_internal_get_moveOverPassedLifeTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr float_t const& __cordl_internal_get_spawnChance() const;

constexpr float_t& __cordl_internal_get_spawnChance() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_triggerClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_triggerClip() ;

constexpr ::StringW const& __cordl_internal_get_triggerTag() const;

constexpr ::StringW& __cordl_internal_get_triggerTag() ;

constexpr void __cordl_internal_set_OnDestroyRandomProjectile(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnDestroyed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__ForceDestroy_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TimeEnabled_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_alternativeProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_autoDestroyAfterSeconds(float_t  value) ;

constexpr void __cordl_internal_set_currentProjectile(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_destroyAfterRelease(bool  value) ;

constexpr void __cordl_internal_set_destroyOnTrigger(bool  value) ;

constexpr void __cordl_internal_set_interactEventName(::StringW  value) ;

constexpr void __cordl_internal_set_moveOverPassedLifeTime(bool  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spawnChance(float_t  value) ;

constexpr void __cordl_internal_set_triggerClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_triggerTag(::StringW  value) ;

/// @brief Method .ctor, addr 0x5bd3ebc, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ForceDestroy, addr 0x5bd3bb8, size 0x8, virtual false, abstract: false, final false
inline bool get_ForceDestroy() ;

/// [CompilerGenerated]
/// @brief Method get_TimeEnabled, addr 0x5bd3ba8, size 0x8, virtual false, abstract: false, final false
inline float_t get_TimeEnabled() ;

/// [CompilerGenerated]
/// @brief Method set_ForceDestroy, addr 0x5bd3bc0, size 0x8, virtual false, abstract: false, final false
inline void set_ForceDestroy(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TimeEnabled, addr 0x5bd3bb0, size 0x8, virtual false, abstract: false, final false
inline void set_TimeEnabled(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RandomProjectileThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomProjectileThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomProjectileThrowable(RandomProjectileThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomProjectileThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomProjectileThrowable(RandomProjectileThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4011};

/// @brief Field projectilePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// [Tooltip("Use for a different/updated version of the projectile if needed.")]
/// @brief Field alternativeProjectilePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___alternativeProjectilePrefab;

/// [FormerlySerializedAs("weightedChance")]
/// [Range(0, 1)]
/// @brief Field spawnChance, offset: 0x30, size: 0x4, def value: None
 float_t  ___spawnChance;

/// [Tooltip("(Optional) name broadcast by PlayerGameEvents when the local player eats this projectile")]
/// @brief Field interactEventName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___interactEventName;

/// [Tooltip("Requires a collider")]
/// @brief Field destroyOnTrigger, offset: 0x40, size: 0x1, def value: None
 bool  ___destroyOnTrigger;

/// @brief Field triggerTag, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___triggerTag;

/// [FormerlySerializedAs("onMoveToHead")]
/// @brief Field OnDestroyed, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnDestroyed;

/// @brief Field audioSource, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field triggerClip, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___triggerClip;

/// [Tooltip("Immediately destroys after the release")]
/// @brief Field destroyAfterRelease, offset: 0x68, size: 0x1, def value: None
 bool  ___destroyAfterRelease;

/// [Tooltip("Set a timer to destroy after X seconds is passed and the object is not thrown yet")]
/// [FormerlySerializedAs("destroyAfterSeconds")]
/// @brief Field autoDestroyAfterSeconds, offset: 0x6c, size: 0x4, def value: None
 float_t  ___autoDestroyAfterSeconds;

/// [Tooltip("If checked, any amount of passed time will be deducted from the lifetime of the slingshot projectile when thrownShould be less than or equal to lifetime of the slingshot projectile")]
/// @brief Field moveOverPassedLifeTime, offset: 0x70, size: 0x1, def value: None
 bool  ___moveOverPassedLifeTime;

/// [CompilerGenerated]
/// @brief Field <TimeEnabled>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____TimeEnabled_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ForceDestroy>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____ForceDestroy_k__BackingField;

/// @brief Field OnDestroyRandomProjectile, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<bool>*  ___OnDestroyRandomProjectile;

/// @brief Field currentProjectile, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___currentProjectile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___projectilePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___alternativeProjectilePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___spawnChance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___interactEventName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___destroyOnTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___triggerTag) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___OnDestroyed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___audioSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___triggerClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___destroyAfterRelease) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___autoDestroyAfterSeconds) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___moveOverPassedLifeTime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ____TimeEnabled_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ____ForceDestroy_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___OnDestroyRandomProjectile) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable, ___currentProjectile) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::RandomProjectileThrowable) == 0x90, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.RandomProjectileThrowable/<DestroyProjectileCoroutine>d__29
class CORDL_TYPE RandomProjectileThrowable__DestroyProjectileCoroutine_d__29 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::RandomProjectileThrowable>  __4__this;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bd3f30, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bd4000, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bd4008, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bd4040, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bd3f2c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::RandomProjectileThrowable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::RandomProjectileThrowable>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::RandomProjectileThrowable>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bd3e94, size 0x28, virtual false, abstract: false, final false
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
constexpr RandomProjectileThrowable__DestroyProjectileCoroutine_d__29() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RandomProjectileThrowable__DestroyProjectileCoroutine_d__29", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomProjectileThrowable__DestroyProjectileCoroutine_d__29(RandomProjectileThrowable__DestroyProjectileCoroutine_d__29 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomProjectileThrowable__DestroyProjectileCoroutine_d__29", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomProjectileThrowable__DestroyProjectileCoroutine_d__29(RandomProjectileThrowable__DestroyProjectileCoroutine_d__29 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4010};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::RandomProjectileThrowable>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::RandomProjectileThrowable__DestroyProjectileCoroutine_d__29) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts
