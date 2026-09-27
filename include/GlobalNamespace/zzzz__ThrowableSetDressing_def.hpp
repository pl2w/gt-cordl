#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableSetDressing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableSetDressing)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class MagicIngredientType;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
class ThrowableSetDressing__RespawnTimerCoroutine_d__21;
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
class CapsuleCollider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableSetDressing;
}
namespace GlobalNamespace {
class ThrowableSetDressing__RespawnTimerCoroutine_d__21;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThrowableSetDressing*);
MARK_REF_T(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableSetDressing*, "", "ThrowableSetDressing");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21*, "", "ThrowableSetDressing/<RespawnTimerCoroutine>d__21");
// [RequireComponent(typeof(NetworkView))]
// Dependencies TransferrableObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableSetDressing
class CORDL_TYPE ThrowableSetDressing : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using _RespawnTimerCoroutine_d__21 = ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21;

/// @brief Field IngredientTypeSO, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_IngredientTypeSO, put=__cordl_internal_set_IngredientTypeSO)) ::UnityW<::GlobalNamespace::MagicIngredientType>  IngredientTypeSO;

/// @brief Field <inInitialPose>k__BackingField, offset 0x338, size 0x1 
 __declspec(property(get=__cordl_internal_get__inInitialPose_k__BackingField, put=__cordl_internal_set__inInitialPose_k__BackingField)) bool  _inInitialPose_k__BackingField;

/// @brief Field _respawnTimestamp, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get__respawnTimestamp, put=__cordl_internal_set__respawnTimestamp)) float_t  _respawnTimestamp;

/// @brief Field capsuleCollider, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_capsuleCollider, put=__cordl_internal_set_capsuleCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  capsuleCollider;

 __declspec(property(get=get_inInitialPose, put=set_inInitialPose)) bool  inInitialPose;

/// @brief Field netView, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_netView, put=__cordl_internal_set_netView)) ::UnityW<::GlobalNamespace::NetworkView>  netView;

/// @brief Field respawnAtPos, offset 0x360, size 0xc 
 __declspec(property(get=__cordl_internal_get_respawnAtPos, put=__cordl_internal_set_respawnAtPos)) ::UnityEngine::Vector3  respawnAtPos;

/// @brief Field respawnAtRot, offset 0x36c, size 0x10 
 __declspec(property(get=__cordl_internal_get_respawnAtRot, put=__cordl_internal_set_respawnAtRot)) ::UnityEngine::Quaternion  respawnAtRot;

/// @brief Field respawnTimer, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_respawnTimer, put=__cordl_internal_set_respawnTimer)) ::UnityEngine::Coroutine*  respawnTimer;

/// @brief Field respawnTimerDuration, offset 0x334, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnTimerDuration, put=__cordl_internal_set_respawnTimerDuration)) float_t  respawnTimerDuration;

/// @brief Method Awake, addr 0x5b34828, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DropItem, addr 0x5b34a24, size 0x20, virtual true, abstract: false, final false
inline void DropItem() ;

static inline ::GlobalNamespace::ThrowableSetDressing* New_ctor() ;

/// @brief Method OnGrab, addr 0x5b348fc, size 0x20, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5b3494c, size 0x38, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// [IteratorStateMachine(typeof(ThrowableSetDressing::<RespawnTimerCoroutine>d__21))]
/// @brief Method RespawnTimerCoroutine, addr 0x5b34a5c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* RespawnTimerCoroutine(float_t  timerDuration) ;

/// @brief Method SetWillTeleport, addr 0x5b34a44, size 0x18, virtual false, abstract: false, final false
inline void SetWillTeleport() ;

/// @brief Method ShouldBeKinematic, addr 0x5b34810, size 0x18, virtual true, abstract: false, final false
inline bool ShouldBeKinematic() ;

/// @brief Method Start, addr 0x5b3488c, size 0x70, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartRespawnTimer, addr 0x5b34984, size 0xa0, virtual false, abstract: false, final false
inline void StartRespawnTimer(float_t  overrideTimer) ;

/// @brief Method StopRespawnTimer, addr 0x5b3491c, size 0x30, virtual false, abstract: false, final false
inline void StopRespawnTimer() ;

constexpr ::UnityW<::GlobalNamespace::MagicIngredientType> const& __cordl_internal_get_IngredientTypeSO() const;

constexpr ::UnityW<::GlobalNamespace::MagicIngredientType>& __cordl_internal_get_IngredientTypeSO() ;

constexpr bool const& __cordl_internal_get__inInitialPose_k__BackingField() const;

constexpr bool& __cordl_internal_get__inInitialPose_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__respawnTimestamp() const;

constexpr float_t& __cordl_internal_get__respawnTimestamp() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_capsuleCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_capsuleCollider() ;

constexpr ::UnityW<::GlobalNamespace::NetworkView> const& __cordl_internal_get_netView() const;

constexpr ::UnityW<::GlobalNamespace::NetworkView>& __cordl_internal_get_netView() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_respawnAtPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_respawnAtPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_respawnAtRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_respawnAtRot() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_respawnTimer() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_respawnTimer() ;

constexpr float_t const& __cordl_internal_get_respawnTimerDuration() const;

constexpr float_t& __cordl_internal_get_respawnTimerDuration() ;

constexpr void __cordl_internal_set_IngredientTypeSO(::UnityW<::GlobalNamespace::MagicIngredientType>  value) ;

constexpr void __cordl_internal_set__inInitialPose_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__respawnTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_capsuleCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_netView(::UnityW<::GlobalNamespace::NetworkView>  value) ;

constexpr void __cordl_internal_set_respawnAtPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_respawnAtRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_respawnTimer(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_respawnTimerDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x5b34b00, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_inInitialPose, addr 0x5b34800, size 0x8, virtual false, abstract: false, final false
inline bool get_inInitialPose() ;

/// [CompilerGenerated]
/// @brief Method set_inInitialPose, addr 0x5b34808, size 0x8, virtual false, abstract: false, final false
inline void set_inInitialPose(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableSetDressing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableSetDressing", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableSetDressing(ThrowableSetDressing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableSetDressing", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableSetDressing(ThrowableSetDressing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3672};

/// @brief Field respawnTimerDuration, offset: 0x334, size: 0x4, def value: None
 float_t  ___respawnTimerDuration;

/// [CompilerGenerated]
/// @brief Field <inInitialPose>k__BackingField, offset: 0x338, size: 0x1, def value: None
 bool  ____inInitialPose_k__BackingField;

/// [Tooltip("set this only if this set dressing is using as an ingredient for the magic cauldron - Halloween")]
/// @brief Field IngredientTypeSO, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MagicIngredientType>  ___IngredientTypeSO;

/// @brief Field _respawnTimestamp, offset: 0x348, size: 0x4, def value: None
 float_t  ____respawnTimestamp;

/// [SerializeField]
/// @brief Field capsuleCollider, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___capsuleCollider;

/// @brief Field netView, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NetworkView>  ___netView;

/// @brief Field respawnAtPos, offset: 0x360, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___respawnAtPos;

/// @brief Field respawnAtRot, offset: 0x36c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___respawnAtRot;

/// @brief Field respawnTimer, offset: 0x380, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___respawnTimer;

/// @brief Size padding 0x3b8 - 0x388 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___respawnTimerDuration) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ____inInitialPose_k__BackingField) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___IngredientTypeSO) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ____respawnTimestamp) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___capsuleCollider) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___netView) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___respawnAtPos) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___respawnAtRot) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing, ___respawnTimer) == 0x380, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableSetDressing) == 0x3b8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableSetDressing/<RespawnTimerCoroutine>d__21
class CORDL_TYPE ThrowableSetDressing__RespawnTimerCoroutine_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ThrowableSetDressing>  __4__this;

/// @brief Field timerDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_timerDuration, put=__cordl_internal_set_timerDuration)) float_t  timerDuration;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b34b64, size 0x13c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b34ca0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b34ca8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b34ce0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b34b60, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_timerDuration() const;

constexpr float_t& __cordl_internal_get_timerDuration() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ThrowableSetDressing>  value) ;

constexpr void __cordl_internal_set_timerDuration(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b34ad8, size 0x28, virtual false, abstract: false, final false
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
constexpr ThrowableSetDressing__RespawnTimerCoroutine_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableSetDressing__RespawnTimerCoroutine_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableSetDressing__RespawnTimerCoroutine_d__21(ThrowableSetDressing__RespawnTimerCoroutine_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableSetDressing__RespawnTimerCoroutine_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableSetDressing__RespawnTimerCoroutine_d__21(ThrowableSetDressing__RespawnTimerCoroutine_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3671};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field timerDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___timerDuration;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThrowableSetDressing>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21, ___timerDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableSetDressing__RespawnTimerCoroutine_d__21) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
