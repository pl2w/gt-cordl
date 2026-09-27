#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableItemSlotTransformOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransferrableItemSlotTransformOverride)
namespace GlobalNamespace {
class AdvancedItemState;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SlotTransformOverride;
}
namespace GlobalNamespace {
class TransferrableObjectGripPosition;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableItemSlotTransformOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableItemSlotTransformOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableItemSlotTransformOverride*, "", "TransferrableItemSlotTransformOverride");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, TransferrableObject::PositionState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableItemSlotTransformOverride
class CORDL_TYPE TransferrableItemSlotTransformOverride : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field OnBringUpWindow, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnBringUpWindow, put=setStaticF_OnBringUpWindow)) ::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  OnBringUpWindow;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field anchor, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchor, put=__cordl_internal_set_anchor)) ::UnityW<::UnityEngine::Transform>  anchor;

/// @brief Field defaultPosition, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultPosition, put=__cordl_internal_set_defaultPosition)) ::GlobalNamespace::SlotTransformOverride*  defaultPosition;

/// @brief Field defaultTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultTransform, put=__cordl_internal_set_defaultTransform)) ::UnityW<::UnityEngine::Transform>  defaultTransform;

/// @brief Field followingTransferrableObject, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_followingTransferrableObject, put=__cordl_internal_set_followingTransferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  followingTransferrableObject;

/// @brief Field lastPosition, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::GlobalNamespace::TransferrableObject_PositionState  lastPosition;

/// @brief Field transformFromPosition, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformFromPosition, put=__cordl_internal_set_transformFromPosition)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>*  transformFromPosition;

/// @brief Field transformOverrides, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformOverrides, put=__cordl_internal_set_transformOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  transformOverrides;

/// @brief Field transformOverridesDeprecated, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformOverridesDeprecated, put=__cordl_internal_set_transformOverridesDeprecated)) ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  transformOverridesDeprecated;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method AddGripPosition, addr 0x576a56c, size 0x220, virtual false, abstract: false, final false
inline void AddGripPosition(::GlobalNamespace::TransferrableObject_PositionState  state, ::GlobalNamespace::TransferrableObjectGripPosition*  togp) ;

/// @brief Method Awake, addr 0x576a8a8, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Edit, addr 0x576b49c, size 0x8c, virtual false, abstract: false, final false
inline void Edit() ;

/// @brief Method GenerateTransformFromPositionState, addr 0x576a8ac, size 0x560, virtual false, abstract: false, final false
inline void GenerateTransformFromPositionState() ;

/// @brief Method GetAdvancedItemStateFromHand, addr 0x576b154, size 0x348, virtual false, abstract: false, final false
inline ::GlobalNamespace::AdvancedItemState* GetAdvancedItemStateFromHand(::GlobalNamespace::TransferrableObject_PositionState  currentState, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock) ;

/// [CanBeNull]
/// @brief Method GetTransformFromPositionState, addr 0x576ae0c, size 0x68, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetTransformFromPositionState(::GlobalNamespace::TransferrableObject_PositionState  currentState) ;

/// @brief Method GetTransformFromPositionState, addr 0x576ae74, size 0x2e0, virtual false, abstract: false, final false
inline bool GetTransformFromPositionState(::GlobalNamespace::TransferrableObject_PositionState  currentState, ::GlobalNamespace::AdvancedItemState*  advancedItemState, ::UnityEngine::Transform*  targetDockXf, ::by_ref<::UnityEngine::Matrix4x4>  matrix4X4) ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x576a568, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x576a3ec, size 0x17c, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x576a3dc, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x576a3cc, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x576a3e4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x576a3d4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::TransferrableItemSlotTransformOverride* New_ctor() ;

/// @brief Method OnDisable, addr 0x576a798, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x576a78c, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x576a7a4, size 0x104, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// [CompilerGenerated]
/// @brief Method <SliceUpdate>b__20_0, addr 0x576b530, size 0x2c, virtual false, abstract: false, final false
inline bool _SliceUpdate_b__20_0(::GlobalNamespace::SlotTransformOverride*  x) ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_anchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_anchor() ;

constexpr ::GlobalNamespace::SlotTransformOverride* const& __cordl_internal_get_defaultPosition() const;

constexpr ::GlobalNamespace::SlotTransformOverride*& __cordl_internal_get_defaultPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_defaultTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_defaultTransform() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_followingTransferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_followingTransferrableObject() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_lastPosition() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_lastPosition() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_transformFromPosition() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_transformFromPosition() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>* const& __cordl_internal_get_transformOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*& __cordl_internal_get_transformOverrides() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>* const& __cordl_internal_get_transformOverridesDeprecated() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*& __cordl_internal_get_transformOverridesDeprecated() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_defaultPosition(::GlobalNamespace::SlotTransformOverride*  value) ;

constexpr void __cordl_internal_set_defaultTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_followingTransferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_lastPosition(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_transformFromPosition(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_transformOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  value) ;

constexpr void __cordl_internal_set_transformOverridesDeprecated(::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  value) ;

/// @brief Method .ctor, addr 0x576b528, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>* getStaticF_OnBringUpWindow() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

static inline void setStaticF_OnBringUpWindow(::System::Action_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableItemSlotTransformOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableItemSlotTransformOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableItemSlotTransformOverride(TransferrableItemSlotTransformOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableItemSlotTransformOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableItemSlotTransformOverride(TransferrableItemSlotTransformOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1359};

/// [FormerlySerializedAs("transformOverridesList")]
/// @brief Field transformOverridesDeprecated, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  ___transformOverridesDeprecated;

/// [SerializeReference]
/// @brief Field transformOverrides, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SlotTransformOverride*>*  ___transformOverrides;

/// @brief Field lastPosition, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___lastPosition;

/// [Tooltip("(2024-08-20 MattO) For cosmetics this is almost always assigned to the TransferrableObject component in the same prefab and almost always belonging to the same gameobject as this Component.")]
/// @brief Field followingTransferrableObject, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___followingTransferrableObject;

/// [Tooltip("(2024-08-20 MattO) This is filled in automatically by the cosmetic spawner.")]
/// @brief Field defaultPosition, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::SlotTransformOverride*  ___defaultPosition;

/// [Obsolete("(2024-08-2024) This used to be assigned to `defaultPosition.overrideTransform` before, but was there ever an instance where it wasn\'t null? Keeping it serialized just in case there is a reason for it.")]
/// @brief Field defaultTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___defaultTransform;

/// @brief Field anchor, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___anchor;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field transformFromPosition, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::TransferrableObject_PositionState,::UnityW<::UnityEngine::Transform>>*  ___transformFromPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___transformOverridesDeprecated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___transformOverrides) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___lastPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___followingTransferrableObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___defaultPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___defaultTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___anchor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableItemSlotTransformOverride, ___transformFromPosition) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableItemSlotTransformOverride) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
