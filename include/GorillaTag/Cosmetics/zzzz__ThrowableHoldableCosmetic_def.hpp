#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ThrowableHoldableCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableHoldableCosmetic)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class CosmeticEffectsOnPlayers;
}
namespace GorillaTag::Cosmetics {
class IProjectile;
}
namespace GorillaTag::Cosmetics {
class ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19;
}
namespace GorillaTag::Shared::Scripts {
class FirecrackerProjectile;
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
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ThrowableHoldableCosmetic;
}
namespace GorillaTag::Cosmetics {
class ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*);
MARK_REF_T(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic*, "GorillaTag.Cosmetics", "ThrowableHoldableCosmetic");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19*, "GorillaTag.Cosmetics", "ThrowableHoldableCosmetic/<ReEnableAfterDelay>d__19");
// Dependencies TransferrableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ThrowableHoldableCosmetic
class CORDL_TYPE ThrowableHoldableCosmetic : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using _ReEnableAfterDelay_d__19 = ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19;

/// @brief Field _events, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field alternativeProjectileHash, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_alternativeProjectileHash, put=__cordl_internal_set_alternativeProjectileHash)) int32_t  alternativeProjectileHash;

/// @brief Field alternativeProjectilePrefab, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_alternativeProjectilePrefab, put=__cordl_internal_set_alternativeProjectilePrefab)) ::UnityW<::UnityEngine::GameObject>  alternativeProjectilePrefab;

/// @brief Field currentProjectileHash, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentProjectileHash, put=__cordl_internal_set_currentProjectileHash)) int32_t  currentProjectileHash;

/// @brief Field disableWhenThrown, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableWhenThrown, put=__cordl_internal_set_disableWhenThrown)) ::UnityW<::UnityEngine::GameObject>  disableWhenThrown;

/// @brief Field firecrackerCallLimiter, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_firecrackerCallLimiter, put=__cordl_internal_set_firecrackerCallLimiter)) ::GlobalNamespace::CallLimiter*  firecrackerCallLimiter;

/// @brief Field forceBackToDock, offset 0x374, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceBackToDock, put=__cordl_internal_set_forceBackToDock)) bool  forceBackToDock;

/// @brief Field playersEffect, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersEffect, put=__cordl_internal_set_playersEffect)) ::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers>  playersEffect;

/// @brief Field projectileHash, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileHash, put=__cordl_internal_set_projectileHash)) int32_t  projectileHash;

/// @brief Field projectilePrefab, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field respawnCooldown, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnCooldown, put=__cordl_internal_set_respawnCooldown)) float_t  respawnCooldown;

/// @brief Field respawnWait, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnWait, put=__cordl_internal_set_respawnWait)) ::UnityEngine::WaitForSeconds*  respawnWait;

/// @brief Method Awake, addr 0x5d7891c, size 0x11c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ForceBackToDock, addr 0x5d79540, size 0xc, virtual false, abstract: false, final false
inline void ForceBackToDock() ;

/// @brief Method HitComplete, addr 0x5d79a00, size 0x2ac, virtual false, abstract: false, final false
inline void HitComplete(::GorillaTag::Cosmetics::IProjectile*  projectile) ;

/// @brief Method HitStart, addr 0x5d79918, size 0xe8, virtual false, abstract: false, final false
inline void HitStart(::GorillaTag::Shared::Scripts::FirecrackerProjectile*  firecracker, ::UnityEngine::Vector3  contactPos) ;

static inline ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d7938c, size 0x144, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d786a8, size 0x274, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5d78a38, size 0x60, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5d78a98, size 0x534, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnThrowEvent, addr 0x5d795fc, size 0x31c, virtual false, abstract: false, final false
inline void OnThrowEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnThrowLocal, addr 0x5d78fcc, size 0x3c0, virtual false, abstract: false, final false
inline void OnThrowLocal(::UnityEngine::Vector3  startPos, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::VRRig*  ownerRig) ;

/// [IteratorStateMachine(typeof(GorillaTag.Cosmetics.ThrowableHoldableCosmetic::<ReEnableAfterDelay>d__19))]
/// @brief Method ReEnableAfterDelay, addr 0x5d7954c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReEnableAfterDelay(::UnityEngine::GameObject*  obj) ;

/// @brief Method UseAlternativeProjectile, addr 0x5d794d0, size 0x70, virtual false, abstract: false, final false
inline void UseAlternativeProjectile() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr int32_t const& __cordl_internal_get_alternativeProjectileHash() const;

constexpr int32_t& __cordl_internal_get_alternativeProjectileHash() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_alternativeProjectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_alternativeProjectilePrefab() ;

constexpr int32_t const& __cordl_internal_get_currentProjectileHash() const;

constexpr int32_t& __cordl_internal_get_currentProjectileHash() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disableWhenThrown() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disableWhenThrown() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_firecrackerCallLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_firecrackerCallLimiter() ;

constexpr bool const& __cordl_internal_get_forceBackToDock() const;

constexpr bool& __cordl_internal_get_forceBackToDock() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers> const& __cordl_internal_get_playersEffect() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers>& __cordl_internal_get_playersEffect() ;

constexpr int32_t const& __cordl_internal_get_projectileHash() const;

constexpr int32_t& __cordl_internal_get_projectileHash() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr float_t const& __cordl_internal_get_respawnCooldown() const;

constexpr float_t& __cordl_internal_get_respawnCooldown() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get_respawnWait() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get_respawnWait() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_alternativeProjectileHash(int32_t  value) ;

constexpr void __cordl_internal_set_alternativeProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentProjectileHash(int32_t  value) ;

constexpr void __cordl_internal_set_disableWhenThrown(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_firecrackerCallLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_forceBackToDock(bool  value) ;

constexpr void __cordl_internal_set_playersEffect(::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers>  value) ;

constexpr void __cordl_internal_set_projectileHash(int32_t  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_respawnCooldown(float_t  value) ;

constexpr void __cordl_internal_set_respawnWait(::UnityEngine::WaitForSeconds*  value) ;

/// @brief Method .ctor, addr 0x5d79cac, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableHoldableCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableHoldableCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableHoldableCosmetic(ThrowableHoldableCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableHoldableCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableHoldableCosmetic(ThrowableHoldableCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4866};

/// [Tooltip("Projectile prefab from the global object pool that gets spawned when this object is thrown")]
/// [FormerlySerializedAs("firecrackerProjectilePrefab")]
/// [SerializeField]
/// @brief Field projectilePrefab, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// [Tooltip(" A second projectile prefab that will be spawned if UseAlternativeProjectile is called")]
/// [SerializeField]
/// @brief Field alternativeProjectilePrefab, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___alternativeProjectilePrefab;

/// [Tooltip("Objects on the body that should be hidden when the projectile is spawned")]
/// [SerializeField]
/// @brief Field disableWhenThrown, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disableWhenThrown;

/// @brief Field firecrackerCallLimiter, offset: 0x350, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___firecrackerCallLimiter;

/// [SerializeField]
/// @brief Field respawnCooldown, offset: 0x358, size: 0x4, def value: None
 float_t  ___respawnCooldown;

/// @brief Field playersEffect, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::CosmeticEffectsOnPlayers>  ___playersEffect;

/// @brief Field projectileHash, offset: 0x368, size: 0x4, def value: None
 int32_t  ___projectileHash;

/// @brief Field alternativeProjectileHash, offset: 0x36c, size: 0x4, def value: None
 int32_t  ___alternativeProjectileHash;

/// @brief Field currentProjectileHash, offset: 0x370, size: 0x4, def value: None
 int32_t  ___currentProjectileHash;

/// @brief Field forceBackToDock, offset: 0x374, size: 0x1, def value: None
 bool  ___forceBackToDock;

/// @brief Field respawnWait, offset: 0x378, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ___respawnWait;

/// @brief Field _events, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Size padding 0x3b8 - 0x388 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___projectilePrefab) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___alternativeProjectilePrefab) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___disableWhenThrown) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___firecrackerCallLimiter) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___respawnCooldown) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___playersEffect) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___projectileHash) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___alternativeProjectileHash) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___currentProjectileHash) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___forceBackToDock) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ___respawnWait) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic, ____events) == 0x380, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic) == 0x3b8, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ThrowableHoldableCosmetic/<ReEnableAfterDelay>d__19
class CORDL_TYPE ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic>  __4__this;

/// @brief Field obj, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_obj, put=__cordl_internal_set_obj)) ::UnityW<::UnityEngine::GameObject>  obj;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d79d5c, size 0x7c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d79dd8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d79de0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d79e18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d79d58, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_obj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_obj() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic>  value) ;

constexpr void __cordl_internal_set_obj(::UnityW<::UnityEngine::GameObject>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d795d4, size 0x28, virtual false, abstract: false, final false
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
constexpr ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19(ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19(ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4865};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::ThrowableHoldableCosmetic>  _____4__this;

/// @brief Field obj, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___obj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19, ___obj) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ThrowableHoldableCosmetic__ReEnableAfterDelay_d__19) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
