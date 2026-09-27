#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EnvironmentProximityReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentProximityReactor)
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTag::Cosmetics {
class CosmeticsProximityReactor;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactorManager;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactor_InteractionBlock;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactor;
}
namespace GorillaTag::Cosmetics {
class EnvironmentProximityReactor_InteractionBlock;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::EnvironmentProximityReactor*);
MARK_REF_T(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EnvironmentProximityReactor*, "GorillaTag.Cosmetics", "EnvironmentProximityReactor");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*, "GorillaTag.Cosmetics", "EnvironmentProximityReactor/InteractionBlock");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EnvironmentProximityReactor
class CORDL_TYPE EnvironmentProximityReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InteractionBlock = ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock;

/// @brief Field blocks, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocks, put=__cordl_internal_set_blocks)) ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>*  blocks;

/// @brief Field proximityCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityCollider, put=__cordl_internal_set_proximityCollider)) ::UnityW<::UnityEngine::Collider>  proximityCollider;

/// @brief Field reactorId, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_reactorId, put=__cordl_internal_set_reactorId)) int32_t  reactorId;

/// @brief Field staticId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_staticId, put=__cordl_internal_set_staticId)) ::StringW  staticId;

/// @brief Field useStaticId, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_useStaticId, put=__cordl_internal_set_useStaticId)) bool  useStaticId;

/// @brief Method ApplySharedProximity, addr 0x5d91448, size 0x178, virtual false, abstract: false, final false
inline void ApplySharedProximity(int32_t  blockIndex, bool  isBelow, int32_t  senderActorNumber) ;

/// @brief Method AreWithinThreshold, addr 0x5d90a50, size 0x1ec, virtual false, abstract: false, final false
inline bool AreWithinThreshold(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic, float_t  threshold, ::by_ref<::UnityEngine::Vector3>  contactPoint) ;

/// @brief Method CalculateId, addr 0x5d8f91c, size 0x290, virtual false, abstract: false, final false
inline void CalculateId(bool  force) ;

/// @brief Method ClearRemoteActors, addr 0x5d91130, size 0x224, virtual false, abstract: false, final false
inline void ClearRemoteActors() ;

/// @brief Method EdRecalculateId, addr 0x5d915c0, size 0x8, virtual false, abstract: false, final false
inline void EdRecalculateId() ;

static inline ::GorillaTag::Cosmetics::EnvironmentProximityReactor* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d8fcb0, size 0x5c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d8f8b4, size 0x68, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveSharedActor, addr 0x5d91354, size 0xf4, virtual false, abstract: false, final false
inline void RemoveSharedActor(int32_t  actorNumber) ;

/// @brief Method ResetBlockState, addr 0x5d8fe10, size 0x170, virtual false, abstract: false, final false
inline void ResetBlockState() ;

/// @brief Method SyncStateTo, addr 0x5d90e3c, size 0xb8, virtual false, abstract: false, final false
inline void SyncStateTo(::GlobalNamespace::NetPlayer*  newPlayer, ::GorillaTag::Cosmetics::EnvironmentProximityReactorManager*  manager) ;

/// @brief Method Update, addr 0x5d8ff80, size 0x6d0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>* const& __cordl_internal_get_blocks() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>*& __cordl_internal_get_blocks() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_proximityCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_proximityCollider() ;

constexpr int32_t const& __cordl_internal_get_reactorId() const;

constexpr int32_t& __cordl_internal_get_reactorId() ;

constexpr ::StringW const& __cordl_internal_get_staticId() const;

constexpr ::StringW& __cordl_internal_get_staticId() ;

constexpr bool const& __cordl_internal_get_useStaticId() const;

constexpr bool& __cordl_internal_get_useStaticId() ;

constexpr void __cordl_internal_set_blocks(::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>*  value) ;

constexpr void __cordl_internal_set_proximityCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_reactorId(int32_t  value) ;

constexpr void __cordl_internal_set_staticId(::StringW  value) ;

constexpr void __cordl_internal_set_useStaticId(bool  value) ;

/// @brief Method .ctor, addr 0x5d915c8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentProximityReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentProximityReactor(EnvironmentProximityReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentProximityReactor(EnvironmentProximityReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4919};

/// @brief Field blocks, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock*>*  ___blocks;

/// [Tooltip("Optional collider for precise proximity measurement. If unassigned, the transform position is used.")]
/// @brief Field proximityCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___proximityCollider;

/// @brief Field reactorId, offset: 0x30, size: 0x4, def value: None
 int32_t  ___reactorId;

/// @brief Field staticId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___staticId;

/// [Tooltip("Leave off for most objects- the ID is computed automatically from the hierarchy path, type name, and world position, so no manual setup is needed.\n\nEnable only if this object is expected to move or be renamed in the editor after the ID has already been referenced elsewhere When enabled, the ID is pinned to the Static ID string above so it stays stable across repositions. Hit Recalculate once to generate it, then leave it alone.")]
/// @brief Field useStaticId, offset: 0x40, size: 0x1, def value: None
 bool  ___useStaticId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor, ___blocks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor, ___proximityCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor, ___reactorId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor, ___staticId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor, ___useStaticId) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EnvironmentProximityReactor) == 0x48, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EnvironmentProximityReactor/InteractionBlock
class CORDL_TYPE EnvironmentProximityReactor_InteractionBlock : public ::System::Object {
public:
// Declarations
/// @brief Field activeSharedActors, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeSharedActors, put=__cordl_internal_set_activeSharedActors)) ::System::Collections::Generic::HashSet_1<int32_t>*  activeSharedActors;

/// @brief Field cooldownTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTime, put=__cordl_internal_set_cooldownTime)) float_t  cooldownTime;

/// @brief Field ignoreKeys, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ignoreKeys, put=__cordl_internal_set_ignoreKeys)) ::System::Collections::Generic::List_1<::StringW>*  ignoreKeys;

/// @brief Field interactionKeys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionKeys, put=__cordl_internal_set_interactionKeys)) ::System::Collections::Generic::List_1<::StringW>*  interactionKeys;

/// @brief Field lastTriggerTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggerTime, put=__cordl_internal_set_lastTriggerTime)) float_t  lastTriggerTime;

/// @brief Field listenerKeys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerKeys, put=__cordl_internal_set_listenerKeys)) ::System::Collections::Generic::List_1<::StringW>*  listenerKeys;

/// @brief Field localActorInSet, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_localActorInSet, put=__cordl_internal_set_localActorInSet)) int32_t  localActorInSet;

/// @brief Field onAboveLocal, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAboveLocal, put=__cordl_internal_set_onAboveLocal)) ::UnityEngine::Events::UnityEvent*  onAboveLocal;

/// @brief Field onAboveShared, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAboveShared, put=__cordl_internal_set_onAboveShared)) ::UnityEngine::Events::UnityEvent*  onAboveShared;

/// @brief Field onBelowLocal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowLocal, put=__cordl_internal_set_onBelowLocal)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  onBelowLocal;

/// @brief Field onBelowShared, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowShared, put=__cordl_internal_set_onBelowShared)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  onBelowShared;

/// @brief Field proximityThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityThreshold, put=__cordl_internal_set_proximityThreshold)) float_t  proximityThreshold;

/// @brief Field wasBelow, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasBelow, put=__cordl_internal_set_wasBelow)) bool  wasBelow;

/// @brief Field whileBelowLocal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_whileBelowLocal, put=__cordl_internal_set_whileBelowLocal)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  whileBelowLocal;

/// @brief Field whileBelowShared, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_whileBelowShared, put=__cordl_internal_set_whileBelowShared)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  whileBelowShared;

/// @brief Method CanPlay, addr 0x5d90c3c, size 0x18, virtual false, abstract: false, final false
inline bool CanPlay(float_t  now) ;

/// @brief Method CanTriggerFrom, addr 0x5d90650, size 0x400, virtual false, abstract: false, final false
inline bool CanTriggerFrom(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  cosmetic) ;

static inline ::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock* New_ctor() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_activeSharedActors() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_activeSharedActors() ;

constexpr float_t const& __cordl_internal_get_cooldownTime() const;

constexpr float_t& __cordl_internal_get_cooldownTime() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ignoreKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ignoreKeys() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_interactionKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_interactionKeys() ;

constexpr float_t const& __cordl_internal_get_lastTriggerTime() const;

constexpr float_t& __cordl_internal_get_lastTriggerTime() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_listenerKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_listenerKeys() ;

constexpr int32_t const& __cordl_internal_get_localActorInSet() const;

constexpr int32_t& __cordl_internal_get_localActorInSet() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onAboveLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onAboveLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onAboveShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onAboveShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_onBelowLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_onBelowLocal() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_onBelowShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_onBelowShared() ;

constexpr float_t const& __cordl_internal_get_proximityThreshold() const;

constexpr float_t& __cordl_internal_get_proximityThreshold() ;

constexpr bool const& __cordl_internal_get_wasBelow() const;

constexpr bool& __cordl_internal_get_wasBelow() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_whileBelowLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_whileBelowLocal() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_whileBelowShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_whileBelowShared() ;

constexpr void __cordl_internal_set_activeSharedActors(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_cooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_ignoreKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_interactionKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_lastTriggerTime(float_t  value) ;

constexpr void __cordl_internal_set_listenerKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_localActorInSet(int32_t  value) ;

constexpr void __cordl_internal_set_onAboveLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onAboveShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_onBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_proximityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_wasBelow(bool  value) ;

constexpr void __cordl_internal_set_whileBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_whileBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x5d91650, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnvironmentProximityReactor_InteractionBlock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactor_InteractionBlock", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnvironmentProximityReactor_InteractionBlock(EnvironmentProximityReactor_InteractionBlock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentProximityReactor_InteractionBlock", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnvironmentProximityReactor_InteractionBlock(EnvironmentProximityReactor_InteractionBlock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4918};

/// [Tooltip("Keys this block broadcasts. Cosmetics whose Key List or Listener List contains a matching key can trigger this block.")]
/// @brief Field interactionKeys, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___interactionKeys;

/// [Tooltip("If the cosmetic broadcasts any of these keys this block will not fire, even if another key matches.")]
/// @brief Field ignoreKeys, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ignoreKeys;

/// [Tooltip("React when a cosmetic broadcasts one of these keys. Listener keys are never broadcast outward, so two Listener-only objects will never trigger each other.")]
/// @brief Field listenerKeys, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___listenerKeys;

/// [Tooltip("Distance (m) at which a cosmetic triggers this block.")]
/// @brief Field proximityThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___proximityThreshold;

/// [Tooltip("Minimum seconds between consecutive OnBelow triggers for this block.")]
/// [SerializeField]
/// @brief Field cooldownTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ___cooldownTime;

/// [Tooltip("Fires immediately on the client whose cosmetic crossed below the threshold. Local-only")]
/// @brief Field onBelowLocal, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___onBelowLocal;

/// [Tooltip("Fires on aLL clients when any player\'s cosmetic crosses below the threshold.")]
/// @brief Field onBelowShared, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___onBelowShared;

/// [Tooltip("Fires every frame on the triggering client while the cosmetic remains below the threshold. Local-only")]
/// @brief Field whileBelowLocal, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___whileBelowLocal;

/// [Tooltip("Fires every frame on ALL clients while any player\'s cosmetic remains below the threshold.")]
/// @brief Field whileBelowShared, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___whileBelowShared;

/// [Tooltip("Fires on the triggering client when the cosmetic goes back above the threshold.")]
/// @brief Field onAboveLocal, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAboveLocal;

/// [Tooltip("Fires on aLL clients when the cosmetic goes back above the threshold.")]
/// @brief Field onAboveShared, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAboveShared;

/// @brief Field wasBelow, offset: 0x60, size: 0x1, def value: None
 bool  ___wasBelow;

/// @brief Field activeSharedActors, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___activeSharedActors;

/// @brief Field localActorInSet, offset: 0x70, size: 0x4, def value: None
 int32_t  ___localActorInSet;

/// @brief Field lastTriggerTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___lastTriggerTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___interactionKeys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___ignoreKeys) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___listenerKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___proximityThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___cooldownTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___onBelowLocal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___onBelowShared) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___whileBelowLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___whileBelowShared) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___onAboveLocal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___onAboveShared) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___wasBelow) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___activeSharedActors) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___localActorInSet) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock, ___lastTriggerTime) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EnvironmentProximityReactor_InteractionBlock) == 0x78, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
