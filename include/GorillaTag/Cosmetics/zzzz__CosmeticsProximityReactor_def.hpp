#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticsProximityReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_GorillaBodyPart_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_InteractionMode_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_ItemKind_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__CosmeticsProximityReactor_TargetType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticsProximityReactor)
namespace GlobalNamespace {
struct CosmeticsProximityReactor_GorillaBodyPart;
}
namespace GlobalNamespace {
struct CosmeticsProximityReactor_InteractionMode;
}
namespace GlobalNamespace {
struct CosmeticsProximityReactor_ItemKind;
}
namespace GlobalNamespace {
struct CosmeticsProximityReactor_TargetType;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag::Cosmetics {
class CosmeticsProximityReactor_InteractionSetting;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
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
class CosmeticsProximityReactor;
}
namespace GorillaTag::Cosmetics {
class CosmeticsProximityReactor_InteractionSetting;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticsProximityReactor*);
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticsProximityReactor*, "GorillaTag.Cosmetics", "CosmeticsProximityReactor");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*, "GorillaTag.Cosmetics", "CosmeticsProximityReactor/InteractionSetting");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, GorillaTag.Cosmetics.CosmeticsProximityReactor::GorillaBodyPart, GorillaTag.Cosmetics.CosmeticsProximityReactor::ItemKind, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticsProximityReactor
class CORDL_TYPE CosmeticsProximityReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GorillaBodyPart = ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart;

using InteractionMode = ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode;

using ItemKind = ::GlobalNamespace::CosmeticsProximityReactor_ItemKind;

using TargetType = ::GlobalNamespace::CosmeticsProximityReactor_TargetType;

using InteractionSetting = ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsBelow)) bool  IsBelow;

 __declspec(property(get=get_IsMatched, put=set_IsMatched)) bool  IsMatched;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

 __declspec(property(get=get_MyRig, put=set_MyRig)) ::UnityW<::GlobalNamespace::VRRig>  MyRig;

/// @brief Field PlayFabID, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabID, put=__cordl_internal_set_PlayFabID)) ::StringW  PlayFabID;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsMatched>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMatched_k__BackingField, put=__cordl_internal_set__IsMatched_k__BackingField)) bool  _IsMatched_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field <MyRig>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__MyRig_k__BackingField, put=__cordl_internal_set__MyRig_k__BackingField)) ::UnityW<::GlobalNamespace::VRRig>  _MyRig_k__BackingField;

/// @brief Field _events, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field blocks, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_blocks, put=__cordl_internal_set_blocks)) ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*  blocks;

/// @brief Field collider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field gorillaBodyParts, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gorillaBodyParts, put=__cordl_internal_set_gorillaBodyParts)) ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  gorillaBodyParts;

/// @brief Field ignoreSameCosmeticInstances, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreSameCosmeticInstances, put=__cordl_internal_set_ignoreSameCosmeticInstances)) bool  ignoreSameCosmeticInstances;

/// @brief Field itemKind, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_itemKind, put=__cordl_internal_set_itemKind)) ::GlobalNamespace::CosmeticsProximityReactor_ItemKind  itemKind;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method AcceptsAnySource, addr 0x5d86cf4, size 0x13c, virtual false, abstract: false, final false
inline bool AcceptsAnySource() ;

/// @brief Method AcceptsThisSource, addr 0x5d86e30, size 0x15c, virtual false, abstract: false, final false
inline bool AcceptsThisSource(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind) ;

/// @brief Method GetCosmeticPairThresholdWith, addr 0x5d86f8c, size 0x2e4, virtual false, abstract: false, final false
inline float_t GetCosmeticPairThresholdWith(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  other, ::by_ref<bool>  any) ;

/// @brief Method GetOwnerRig, addr 0x5d86238, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> GetOwnerRig() ;

/// @brief Method GetSourceThresholdFor, addr 0x5d87270, size 0x1bc, virtual false, abstract: false, final false
inline float_t GetSourceThresholdFor(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  gorillaBody, ::by_ref<bool>  any) ;

/// @brief Method GetTypes, addr 0x5d86828, size 0x4ac, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GetTypes() ;

/// @brief Method HasAnyCosmeticMatch, addr 0x5d880e4, size 0x138, virtual false, abstract: false, final false
inline bool HasAnyCosmeticMatch() ;

/// @brief Method HasAnyGorillaBodyPartMatch, addr 0x5d8821c, size 0x13c, virtual false, abstract: false, final false
inline bool HasAnyGorillaBodyPartMatch() ;

/// @brief Method IsCosmeticItem, addr 0x5d86ce4, size 0x10, virtual false, abstract: false, final false
inline bool IsCosmeticItem() ;

/// @brief Method IsGorillaBody, addr 0x5d86cd4, size 0x10, virtual false, abstract: false, final false
inline bool IsGorillaBody() ;

static inline ::GorillaTag::Cosmetics::CosmeticsProximityReactor* New_ctor() ;

/// @brief Method OnCosmeticAboveAll, addr 0x5d87a48, size 0x154, virtual false, abstract: false, final false
inline void OnCosmeticAboveAll() ;

/// @brief Method OnCosmeticBelowWith, addr 0x5d8742c, size 0x330, virtual false, abstract: false, final false
inline void OnCosmeticBelowWith(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  other, ::UnityEngine::Vector3  contact) ;

/// @brief Method OnDespawn, addr 0x5d86420, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x5d866f4, size 0x134, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d86560, size 0x194, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSourceAboveAll, addr 0x5d87f8c, size 0x158, virtual false, abstract: false, final false
inline void OnSourceAboveAll() ;

/// @brief Method OnSourceBelow, addr 0x5d87bd4, size 0x1f8, virtual false, abstract: false, final false
inline void OnSourceBelow(::UnityEngine::Vector3  contact, ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind, ::GlobalNamespace::VRRig*  sourceRig) ;

/// @brief Method OnSpawn, addr 0x5d86390, size 0x90, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method RefreshAggregateMatched, addr 0x5d87b9c, size 0x38, virtual false, abstract: false, final false
inline void RefreshAggregateMatched() ;

/// @brief Method Start, addr 0x5d86424, size 0x13c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method WhileCosmeticBelowWith, addr 0x5d8775c, size 0x2ec, virtual false, abstract: false, final false
inline void WhileCosmeticBelowWith(::GorillaTag::Cosmetics::CosmeticsProximityReactor*  other, ::UnityEngine::Vector3  contact) ;

/// @brief Method WhileSourceBelow, addr 0x5d87dcc, size 0x1c0, virtual false, abstract: false, final false
inline void WhileSourceBelow(::UnityEngine::Vector3  contact, ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind, ::GlobalNamespace::VRRig*  sourceRig) ;

constexpr ::StringW const& __cordl_internal_get_PlayFabID() const;

constexpr ::StringW& __cordl_internal_get_PlayFabID() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsMatched_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMatched_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__MyRig_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__MyRig_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>* const& __cordl_internal_get_blocks() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*& __cordl_internal_get_blocks() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart const& __cordl_internal_get_gorillaBodyParts() const;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart& __cordl_internal_get_gorillaBodyParts() ;

constexpr bool const& __cordl_internal_get_ignoreSameCosmeticInstances() const;

constexpr bool& __cordl_internal_get_ignoreSameCosmeticInstances() ;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_ItemKind const& __cordl_internal_get_itemKind() const;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_ItemKind& __cordl_internal_get_itemKind() ;

constexpr void __cordl_internal_set_PlayFabID(::StringW  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsMatched_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MyRig_k__BackingField(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_blocks(::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_gorillaBodyParts(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  value) ;

constexpr void __cordl_internal_set_ignoreSameCosmeticInstances(bool  value) ;

constexpr void __cordl_internal_set_itemKind(::GlobalNamespace::CosmeticsProximityReactor_ItemKind  value) ;

/// @brief Method .ctor, addr 0x5d88358, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5d86250, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// @brief Method get_IsBelow, addr 0x5d86260, size 0x130, virtual false, abstract: false, final false
inline bool get_IsBelow() ;

/// [CompilerGenerated]
/// @brief Method get_IsMatched, addr 0x5d86218, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMatched() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5d86240, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method get_MyRig, addr 0x5d86228, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> get_MyRig() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5d86258, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMatched, addr 0x5d86220, size 0x8, virtual false, abstract: false, final false
inline void set_IsMatched(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5d86248, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MyRig, addr 0x5d86230, size 0x8, virtual false, abstract: false, final false
inline void set_MyRig(::GlobalNamespace::VRRig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsProximityReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsProximityReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsProximityReactor(CosmeticsProximityReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsProximityReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsProximityReactor(CosmeticsProximityReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4906};

/// [Tooltip("Is this object a Cosmetic or a gorilla body part like hand? (gorilla body slot is reserved for Gorilla Player Networked)")]
/// @brief Field itemKind, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsProximityReactor_ItemKind  ___itemKind;

/// [FormerlySerializedAs("sourceKinds")]
/// @brief Field gorillaBodyParts, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  ___gorillaBodyParts;

/// @brief Field blocks, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*  ___blocks;

/// [Tooltip("If enabled, this cosmetic ignores other instances that share the same PlayFabID.")]
/// @brief Field ignoreSameCosmeticInstances, offset: 0x30, size: 0x1, def value: None
 bool  ___ignoreSameCosmeticInstances;

/// @brief Field PlayFabID, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___PlayFabID;

/// [Tooltip("If collider is not assigned, we will use the position of this object to find the distance between two cosmetic/body part")]
/// @brief Field collider, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// [CompilerGenerated]
/// @brief Field <IsMatched>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____IsMatched_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MyRig>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____MyRig_k__BackingField;

/// @brief Field _events, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x64, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ___itemKind) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ___gorillaBodyParts) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ___blocks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ___ignoreSameCosmeticInstances) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ___PlayFabID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ___collider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ____IsMatched_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ____MyRig_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ____events) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ____IsSpawned_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor, ____CosmeticSelectedSide_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticsProximityReactor) == 0x68, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.CosmeticsProximityReactor::GorillaBodyPart, GorillaTag.Cosmetics.CosmeticsProximityReactor::InteractionMode, GorillaTag.Cosmetics.CosmeticsProximityReactor::TargetType, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticsProximityReactor/InteractionSetting
class CORDL_TYPE CosmeticsProximityReactor_InteractionSetting : public ::System::Object {
public:
// Declarations
/// @brief Field cooldownTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownTime, put=__cordl_internal_set_cooldownTime)) float_t  cooldownTime;

/// @brief Field gorillaBodyMask, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_gorillaBodyMask, put=__cordl_internal_set_gorillaBodyMask)) ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  gorillaBodyMask;

/// @brief Field ignoreKeys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ignoreKeys, put=__cordl_internal_set_ignoreKeys)) ::System::Collections::Generic::List_1<::StringW>*  ignoreKeys;

/// @brief Field interactionKeys, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionKeys, put=__cordl_internal_set_interactionKeys)) ::System::Collections::Generic::List_1<::StringW>*  interactionKeys;

/// @brief Field isMatched, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMatched, put=__cordl_internal_set_isMatched)) bool  isMatched;

/// @brief Field lastEffectTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastEffectTime, put=__cordl_internal_set_lastEffectTime)) float_t  lastEffectTime;

/// @brief Field listenerKeys, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerKeys, put=__cordl_internal_set_listenerKeys)) ::System::Collections::Generic::List_1<::StringW>*  listenerKeys;

/// @brief Field mode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_mode, put=__cordl_internal_set_mode)) ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode  mode;

/// @brief Field onAboveLocal, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAboveLocal, put=__cordl_internal_set_onAboveLocal)) ::UnityEngine::Events::UnityEvent*  onAboveLocal;

/// @brief Field onAboveShared, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onAboveShared, put=__cordl_internal_set_onAboveShared)) ::UnityEngine::Events::UnityEvent*  onAboveShared;

/// @brief Field onBelowLocal, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowLocal, put=__cordl_internal_set_onBelowLocal)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  onBelowLocal;

/// @brief Field onBelowShared, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBelowShared, put=__cordl_internal_set_onBelowShared)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  onBelowShared;

/// @brief Field proximityThreshold, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityThreshold, put=__cordl_internal_set_proximityThreshold)) float_t  proximityThreshold;

/// @brief Field targetType, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetType, put=__cordl_internal_set_targetType)) ::GlobalNamespace::CosmeticsProximityReactor_TargetType  targetType;

/// @brief Field wasBelow, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasBelow, put=__cordl_internal_set_wasBelow)) bool  wasBelow;

/// @brief Field whileBelowLocal, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_whileBelowLocal, put=__cordl_internal_set_whileBelowLocal)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  whileBelowLocal;

/// @brief Field whileBelowShared, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_whileBelowShared, put=__cordl_internal_set_whileBelowShared)) ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  whileBelowShared;

/// @brief Method AcceptsGorillaBodyPart, addr 0x5d88434, size 0x24, virtual false, abstract: false, final false
inline bool AcceptsGorillaBodyPart(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  kind) ;

/// @brief Method AllowsRig, addr 0x5d889d4, size 0xc4, virtual false, abstract: false, final false
inline bool AllowsRig(::GlobalNamespace::VRRig*  myRig, ::GlobalNamespace::VRRig*  otherRig) ;

/// @brief Method CanPlay, addr 0x5d886f0, size 0x18, virtual false, abstract: false, final false
inline bool CanPlay(float_t  now) ;

/// @brief Method CanTriggerFrom, addr 0x5d88458, size 0x298, virtual false, abstract: false, final false
inline bool CanTriggerFrom(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting*  other) ;

/// @brief Method FireAbove, addr 0x5d88928, size 0xac, virtual false, abstract: false, final false
inline void FireAbove(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method FireBelow, addr 0x5d88708, size 0x11c, virtual false, abstract: false, final false
inline void FireBelow(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  contact, float_t  now) ;

/// @brief Method FireWhile, addr 0x5d88824, size 0x104, virtual false, abstract: false, final false
inline void FireWhile(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  contact) ;

/// @brief Method IsCosmeticToCosmetic, addr 0x5d88404, size 0x10, virtual false, abstract: false, final false
inline bool IsCosmeticToCosmetic() ;

/// @brief Method IsCosmeticToEnvironment, addr 0x5d88414, size 0x10, virtual false, abstract: false, final false
inline bool IsCosmeticToEnvironment() ;

/// @brief Method IsGorillaBodyToCosmetic, addr 0x5d88424, size 0x10, virtual false, abstract: false, final false
inline bool IsGorillaBodyToCosmetic() ;

static inline ::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting* New_ctor() ;

constexpr float_t const& __cordl_internal_get_cooldownTime() const;

constexpr float_t& __cordl_internal_get_cooldownTime() ;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart const& __cordl_internal_get_gorillaBodyMask() const;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart& __cordl_internal_get_gorillaBodyMask() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_ignoreKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ignoreKeys() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_interactionKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_interactionKeys() ;

constexpr bool const& __cordl_internal_get_isMatched() const;

constexpr bool& __cordl_internal_get_isMatched() ;

constexpr float_t const& __cordl_internal_get_lastEffectTime() const;

constexpr float_t& __cordl_internal_get_lastEffectTime() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_listenerKeys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_listenerKeys() ;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode const& __cordl_internal_get_mode() const;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode& __cordl_internal_get_mode() ;

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

constexpr ::GlobalNamespace::CosmeticsProximityReactor_TargetType const& __cordl_internal_get_targetType() const;

constexpr ::GlobalNamespace::CosmeticsProximityReactor_TargetType& __cordl_internal_get_targetType() ;

constexpr bool const& __cordl_internal_get_wasBelow() const;

constexpr bool& __cordl_internal_get_wasBelow() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_whileBelowLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_whileBelowLocal() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>* const& __cordl_internal_get_whileBelowShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_whileBelowShared() ;

constexpr void __cordl_internal_set_cooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_gorillaBodyMask(::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  value) ;

constexpr void __cordl_internal_set_ignoreKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_interactionKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_isMatched(bool  value) ;

constexpr void __cordl_internal_set_lastEffectTime(float_t  value) ;

constexpr void __cordl_internal_set_listenerKeys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_mode(::GlobalNamespace::CosmeticsProximityReactor_InteractionMode  value) ;

constexpr void __cordl_internal_set_onAboveLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onAboveShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_onBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_proximityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_targetType(::GlobalNamespace::CosmeticsProximityReactor_TargetType  value) ;

constexpr void __cordl_internal_set_wasBelow(bool  value) ;

constexpr void __cordl_internal_set_whileBelowLocal(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_whileBelowShared(::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x5d88a98, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsProximityReactor_InteractionSetting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsProximityReactor_InteractionSetting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsProximityReactor_InteractionSetting(CosmeticsProximityReactor_InteractionSetting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsProximityReactor_InteractionSetting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsProximityReactor_InteractionSetting(CosmeticsProximityReactor_InteractionSetting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4905};

/// [Tooltip("Determines what type of interaction this block handles.\n\u{2022} CosmeticToCosmetic: triggers when two cosmetics with matching keys are nearby.\n\u{2022} CosmeticToEnvironment: broadcasts keys that EnvironmentProximityReactor objects listen for. Use this to mark a cosmetic as a trigger for scene objects.\n\u{2022} GorillaBodyToCosmetic: triggers when a Gorilla body part (hand, head, etc.) is near this cosmetic.")]
/// @brief Field mode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsProximityReactor_InteractionMode  ___mode;

/// [Tooltip("Keys this block broadcasts. Other cosmetics or environment objects whose Key list or Listener list contain a matching key can react to this block.")]
/// @brief Field interactionKeys, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___interactionKeys;

/// [Tooltip("If the other side is broadcasting any of these keys, this block will not fire, even if another key matches.")]
/// @brief Field ignoreKeys, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___ignoreKeys;

/// [Tooltip("Keys this block silently listens for. When the other side broadcasts one of these keys, this block fires. Listener keys are never broadcast outward, so two Listener-only objects will never trigger each other.")]
/// @brief Field listenerKeys, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___listenerKeys;

/// [Tooltip("Specifies which Gorilla body parts (e.g., Hands, Head) can trigger this interaction.\nUse this when the Mode is set to GorillaBodyToCosmetic.")]
/// @brief Field gorillaBodyMask, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsProximityReactor_GorillaBodyPart  ___gorillaBodyMask;

/// [Tooltip("The distance threshold (in meters) for triggering the interaction.\nIf another object enters this range, the OnBelow and WhileBelow events are fired.")]
/// @brief Field proximityThreshold, offset: 0x34, size: 0x4, def value: None
 float_t  ___proximityThreshold;

/// [Tooltip("Minimum time (in seconds) between consecutive triggers for this interaction block.\nPrevents rapid re-triggering when objects remain within proximity.")]
/// [SerializeField]
/// @brief Field cooldownTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___cooldownTime;

/// [Tooltip("Who is allowed to trigger this block (if gorilla body part is selected).\n\u{2022} Owner: only this cosmetic\'s own rig/body can trigger this.\n\u{2022} Others: only other players\' rigs/bodies can trigger this.\n\u{2022} All: anyone can trigger.\n\nNote: everyone will still be able to see the result when it triggers.")]
/// @brief Field targetType, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsProximityReactor_TargetType  ___targetType;

/// @brief Field onBelowLocal, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___onBelowLocal;

/// @brief Field onBelowShared, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___onBelowShared;

/// @brief Field whileBelowLocal, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___whileBelowLocal;

/// @brief Field whileBelowShared, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3>*  ___whileBelowShared;

/// @brief Field onAboveLocal, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAboveLocal;

/// @brief Field onAboveShared, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onAboveShared;

/// @brief Field wasBelow, offset: 0x70, size: 0x1, def value: None
 bool  ___wasBelow;

/// @brief Field isMatched, offset: 0x71, size: 0x1, def value: None
 bool  ___isMatched;

/// @brief Field lastEffectTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___lastEffectTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___mode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___interactionKeys) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___ignoreKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___listenerKeys) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___gorillaBodyMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___proximityThreshold) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___cooldownTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___targetType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___onBelowLocal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___onBelowShared) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___whileBelowLocal) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___whileBelowShared) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___onAboveLocal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___onAboveShared) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___wasBelow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___isMatched) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting, ___lastEffectTime) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticsProximityReactor_InteractionSetting) == 0x78, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
