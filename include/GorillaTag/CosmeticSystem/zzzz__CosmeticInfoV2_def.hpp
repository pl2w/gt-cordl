#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticInfoV2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__StringEnum_1_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiIntersectOffsets_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticCollectionParentLink_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticCollectionSlotDefinition_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticPart_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticInfoV2)
namespace GlobalNamespace {
struct ECosmeticPartType;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticCollectionParentLink;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticCollectionSlotDefinition;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticPart;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace GorillaTag::CosmeticSystem {
class SeasonSO;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticInfoV2;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticInfoV2);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticInfoV2, "GorillaTag.CosmeticSystem", "CosmeticInfoV2");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticCategory, GorillaTag.CosmeticSystem.CosmeticAnchorAntiIntersectOffsets, GorillaTag.CosmeticSystem.CosmeticCollectionParentLink, GorillaTag.CosmeticSystem.CosmeticCollectionSlotDefinition, GorillaTag.CosmeticSystem.CosmeticPart, GorillaTag.CosmeticSystem.CosmeticSO, StringEnum`1<TEnum>
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticInfoV2
struct CORDL_TYPE CosmeticInfoV2 {
public:
// Declarations
 __declspec(property(get=get_hasFirstPersonViewParts)) bool  hasFirstPersonViewParts;

 __declspec(property(get=get_hasFunctionalParts)) bool  hasFunctionalParts;

 __declspec(property(get=get_hasHoldableParts)) bool  hasHoldableParts;

 __declspec(property(get=get_hasLocalRigParts)) bool  hasLocalRigParts;

 __declspec(property(get=get_hasStoreParts)) bool  hasStoreParts;

 __declspec(property(get=get_hasWardrobeParts)) bool  hasWardrobeParts;

 __declspec(property(get=get_isCollectionSubItem)) bool  isCollectionSubItem;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method GetSeriesIndexForParent, addr 0x5d4714c, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetSeriesIndexForParent(::StringW  parentPlayFabID) ;

/// @brief Method GetTargetSlotIndexForParent, addr 0x5d470b0, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetTargetSlotIndexForParent(::StringW  parentPlayFabID) ;

/// @brief Method IsSubItemOfParent, addr 0x5d47030, size 0x80, virtual false, abstract: false, final false
inline bool IsSubItemOfParent(::StringW  parentPlayFabID) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x5d4754c, size 0x21c, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x5d47548, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method _OnAfterDeserialize_InitializePartsArray, addr 0x5d47768, size 0x146c, virtual false, abstract: false, final false
inline void _OnAfterDeserialize_InitializePartsArray(::by_ref<::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>>  parts, ::GlobalNamespace::ECosmeticPartType  partType) ;

/// @brief Method .ctor, addr 0x5d471e8, size 0x360, virtual false, abstract: false, final false
inline void _ctor(::StringW  displayName) ;

/// @brief Method get_hasFirstPersonViewParts, addr 0x5d46fd0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasFirstPersonViewParts() ;

/// @brief Method get_hasFunctionalParts, addr 0x5d46fb0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasFunctionalParts() ;

/// @brief Method get_hasHoldableParts, addr 0x5d46f50, size 0x20, virtual false, abstract: false, final false
inline bool get_hasHoldableParts() ;

/// @brief Method get_hasLocalRigParts, addr 0x5d46ff0, size 0x20, virtual false, abstract: false, final false
inline bool get_hasLocalRigParts() ;

/// @brief Method get_hasStoreParts, addr 0x5d46f90, size 0x20, virtual false, abstract: false, final false
inline bool get_hasStoreParts() ;

/// @brief Method get_hasWardrobeParts, addr 0x5d46f70, size 0x20, virtual false, abstract: false, final false
inline bool get_hasWardrobeParts() ;

/// @brief Method get_isCollectionSubItem, addr 0x5d47010, size 0x20, virtual false, abstract: false, final false
inline bool get_isCollectionSubItem() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticInfoV2() ;

// Ctor Parameters [CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "season", ty: "::UnityW<::GorillaTag::CosmeticSystem::SeasonSO>", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "playFabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "icon", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: None, comment: None }, CppParam { name: "category", ty: "::GlobalNamespace::StringEnum_1<::GlobalNamespace::CosmeticsController_CosmeticCategory>", modifiers: "", def_value: None, comment: None }, CppParam { name: "isHoldable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isThrowable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "throwableMaterialGrabIndices", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "throwableIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "usesBothHandSlots", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hideWardrobeMannequin", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "holdableParts", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "functionalParts", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "wardrobeParts", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "storeParts", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstPersonViewParts", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRigParts", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchorAntiIntersectOffsets", ty: "::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets", modifiers: "", def_value: None, comment: None }, CppParam { name: "setCosmetics", ty: "::ArrayW<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionSlots", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionSlotDefinition>", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionIsCycling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionUsesIndexTargeting", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionUsesSeriesOrder", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionParentLinks", ty: "::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionParentPlayFabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionTargetSlotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectionSeriesIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "appliedCosmeticPlayFabID", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "debugCosmeticSOName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticInfoV2(bool  enabled, ::UnityW<::GorillaTag::CosmeticSystem::SeasonSO>  season, ::StringW  displayName, ::StringW  playFabID, ::UnityW<::UnityEngine::Sprite>  icon, ::GlobalNamespace::StringEnum_1<::GlobalNamespace::CosmeticsController_CosmeticCategory>  category, bool  isHoldable, bool  isThrowable, ::ArrayW<int32_t>  throwableMaterialGrabIndices, int32_t  throwableIndex, bool  usesBothHandSlots, bool  hideWardrobeMannequin, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  holdableParts, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  functionalParts, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  wardrobeParts, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  storeParts, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  firstPersonViewParts, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  localRigParts, ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  anchorAntiIntersectOffsets, ::ArrayW<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>  setCosmetics, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionSlotDefinition>  collectionSlots, bool  collectionIsCycling, bool  collectionUsesIndexTargeting, bool  collectionUsesSeriesOrder, ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>  collectionParentLinks, ::StringW  collectionParentPlayFabID, int32_t  collectionTargetSlotIndex, int32_t  collectionSeriesIndex, ::StringW  appliedCosmeticPlayFabID, ::StringW  debugCosmeticSOName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4749};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2a8};

/// @brief Field firstPersonViewParts_infoBoxDetailedMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  firstPersonViewParts_infoBoxDetailedMsg{u"\"First Person View Parts\" will be attached to the local monke\'s camera.\nFirst person parts are enabled instead of \"Wearable Parts\" for the local player\nThese are used for any peripheral view meshes on the No Mirror layer, usually on HAT or FACE items"};

/// @brief Field firstPersonViewParts_infoBoxShortMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  firstPersonViewParts_infoBoxShortMsg{u"\"First Person View Parts\" will be attached to the local monke\'s camera.\nFirst person parts are enabled instead of \"Wearable Parts\" for the local player"};

/// @brief Field functionalParts_infoBoxDetailedMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  functionalParts_infoBoxDetailedMsg{u"\"Wearable Parts\" will be attached to \"Gorilla Player Networked.prefab\" instances.\n\nThese individual parts which also handle the core functionality of the cosmetic. In most cases there will only be one part, there can be multiple parts for cases like rings which might be on both left and right hands.\n\nThese parts will be parented to the bones of  \"Gorilla Player Networked.prefab\" instances which includes the VRRig component.\n\nIf a \"First Person View\" part or \"Local Rig Part\" is set it will be enabled instead of the wearable parts for the local player"};

/// @brief Field functionalParts_infoBoxShortMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  functionalParts_infoBoxShortMsg{u"\"Wearable Parts\" will be attached to \"Gorilla Player Networked.prefab\" instances."};

/// @brief Field holdableParts_infoBoxDetailedMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  holdableParts_infoBoxDetailedMsg{u"\"Holdable Parts\" must have a Holdable component (or inherits like TransferrableObject).\n\nHoldables are prefabs that have Holdable components. The prefab asset\'s transform will be moved between the listed \n attach points on \"Gorilla Player Networked.prefab\" when grabbed by the player \n"};

/// @brief Field holdableParts_infoBoxShortMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  holdableParts_infoBoxShortMsg{u"\"Holdable Parts\" must have a Holdable component (or inherits like TransferrableObject)."};

/// @brief Field localRigParts_infoBoxDetailedMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  localRigParts_infoBoxDetailedMsg{u"\"Local Mirror Parts\" will be attached to the local player\'s rig instead of \"Wearable Parts\".\nThese objects can be used in addition to first person view parts.\nThese can be used for mirror view meshes (usually HAT or FACE items)\nAny item with GTPosRotConstraints should be parented to the rig and not the camera"};

/// @brief Field localRigParts_infoBoxShortMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  localRigParts_infoBoxShortMsg{u"\"Local Mirror Parts\" will be attached to the local player\'s rig instead of \"Wearable Parts\"."};

/// @brief Field storeParts_infoBoxDetailedMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  storeParts_infoBoxDetailedMsg{u"\"Store Parts\" are spawned into the Dynamic Cosmetic Stands in city.\nStore parts only need to be specified if the store display should be different than the wardrobe display"};

/// @brief Field storeParts_infoBoxShortMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  storeParts_infoBoxShortMsg{u"\"Store Parts\" are spawned into the Dynamic Cosmetic Stands in city."};

/// @brief Field wardrobeParts_infoBoxDetailedMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  wardrobeParts_infoBoxDetailedMsg{u"\"Wardrobe Parts\" will be attached to \"Head Model.prefab\" instances.\n\nThese parts should be static meshes not skinned and not have any scripts attached. They should only be simple visual representations.\n\nThese prefabs are shown on the satellite wardrobe, and in the store (if \"Store Parts\" is left empty)"};

/// @brief Field wardrobeParts_infoBoxShortMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  wardrobeParts_infoBoxShortMsg{u"\"Wardrobe Parts\" will be attached to \"Head Model.prefab\" instances."};

/// @brief Field enabled, offset: 0x0, size: 0x1, def value: None
 bool  enabled;

/// [Tooltip("// TODO: (2024-09-27 MattO) season will determine what addressables bundle it will be in and wheter it should be active based on release time of season.\n\nThe assigned season will determine what folder the Cosmetic will go in and how it will be listed in the Cosmetic Browser.")]
/// [Delayed]
/// @brief Field season, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::CosmeticSystem::SeasonSO>  season;

/// [Tooltip("Name that is displayed in the store during purchasing.")]
/// [Delayed]
/// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  displayName;

/// [Tooltip("ID used on the PlayFab servers that must be unique. If this does not exist on the playfab servers then an error will be thrown. In notion search for \"Cosmetics - Adding a PlayFab ID\".")]
/// [Delayed]
/// @brief Field playFabID, offset: 0x18, size: 0x8, def value: None
 ::StringW  playFabID;

/// @brief Field icon, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  icon;

/// [Tooltip("Category determines which category button in the user\'s wardrobe (which are the two rows of buttons with equivalent names) have to be pressed to access the cosmetic along with others in the same category.")]
/// @brief Field category, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::StringEnum_1<::GlobalNamespace::CosmeticsController_CosmeticCategory>  category;

/// [Obsolete("(2024-08-13 MattO) Will be removed after holdables array is fully implemented. Check length of `holdableParts` instead.")]
/// [HideInInspector]
/// @brief Field isHoldable, offset: 0x30, size: 0x1, def value: None
 bool  isHoldable;

/// @brief Field isThrowable, offset: 0x31, size: 0x1, def value: None
 bool  isThrowable;

/// [HideInInspector]
/// @brief Field throwableMaterialGrabIndices, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  throwableMaterialGrabIndices;

/// [HideInInspector]
/// @brief Field throwableIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  throwableIndex;

/// @brief Field usesBothHandSlots, offset: 0x44, size: 0x1, def value: None
 bool  usesBothHandSlots;

/// @brief Field hideWardrobeMannequin, offset: 0x45, size: 0x1, def value: None
 bool  hideWardrobeMannequin;

/// [Space]
/// [Tooltip("\"Holdable Parts\" must have a Holdable component (or inherits like TransferrableObject).\n\nHoldables are prefabs that have Holdable components. The prefab asset\'s transform will be moved between the listed \n attach points on \"Gorilla Player Networked.prefab\" when grabbed by the player \n")]
/// @brief Field holdableParts, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  holdableParts;

/// [Space]
/// [Tooltip("\"Wearable Parts\" will be attached to \"Gorilla Player Networked.prefab\" instances.\n\nThese individual parts which also handle the core functionality of the cosmetic. In most cases there will only be one part, there can be multiple parts for cases like rings which might be on both left and right hands.\n\nThese parts will be parented to the bones of  \"Gorilla Player Networked.prefab\" instances which includes the VRRig component.\n\nIf a \"First Person View\" part or \"Local Rig Part\" is set it will be enabled instead of the wearable parts for the local player")]
/// @brief Field functionalParts, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  functionalParts;

/// [Space]
/// [Tooltip("\"Wardrobe Parts\" will be attached to \"Head Model.prefab\" instances.\n\nThese parts should be static meshes not skinned and not have any scripts attached. They should only be simple visual representations.\n\nThese prefabs are shown on the satellite wardrobe, and in the store (if \"Store Parts\" is left empty)")]
/// @brief Field wardrobeParts, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  wardrobeParts;

/// [Space]
/// [Tooltip("\"Store Parts\" are spawned into the Dynamic Cosmetic Stands in city.\nStore parts only need to be specified if the store display should be different than the wardrobe display")]
/// @brief Field storeParts, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  storeParts;

/// [Space]
/// [Tooltip("\"First Person View Parts\" will be attached to the local monke\'s camera.\nFirst person parts are enabled instead of \"Wearable Parts\" for the local player\nThese are used for any peripheral view meshes on the No Mirror layer, usually on HAT or FACE items")]
/// @brief Field firstPersonViewParts, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  firstPersonViewParts;

/// [Space]
/// [Tooltip("\"Local Mirror Parts\" will be attached to the local player\'s rig instead of \"Wearable Parts\".\nThese objects can be used in addition to first person view parts.\nThese can be used for mirror view meshes (usually HAT or FACE items)\nAny item with GTPosRotConstraints should be parented to the rig and not the camera")]
/// @brief Field localRigParts, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticPart>  localRigParts;

/// [Space]
/// [Tooltip("When this cosmetic is equipped, these offsets will be applied to the other objects on the player that are likely to clip\nSHIRT items ususally offset the badge, nametag, and chest items\n PAW items usually offset the hunt computer and builder watch")]
/// @brief Field anchorAntiIntersectOffsets, offset: 0x78, size: 0x1f8, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  anchorAntiIntersectOffsets;

/// [Space]
/// [Tooltip("TODO COMMENT")]
/// @brief Field setCosmetics, offset: 0x270, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>>  setCosmetics;

/// [Space]
/// [Tooltip("For parent (collection) cosmetics: the slots that collectables snap into. Each entry defines the slot type and its local space offset from the cosmetic\'s root. Edit slot positions visually via the Cosmetic Editor Stage. The slot count is implicit from this array\'s length.")]
/// @brief Field collectionSlots, offset: 0x278, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionSlotDefinition>  collectionSlots;

/// [Tooltip("For parent (collection) cosmetics: when true only one collectable is visible at a time and the player can cycle through them. When false all slots are shown simultaneously")]
/// @brief Field collectionIsCycling, offset: 0x280, size: 0x1, def value: None
 bool  collectionIsCycling;

/// [Tooltip("[Non-cycling collections only] When true, each sub-item is placed at the specific physical slot position declared by its \'Target Slot Index\', rather than filling slots in purchase order. Use this when sub-items must always occupy a fixed dedicated position on the parent ")]
/// @brief Field collectionUsesIndexTargeting, offset: 0x281, size: 0x1, def value: None
 bool  collectionUsesIndexTargeting;

/// [Tooltip("[Cycling collections only] When true, sub-items are cycled through in ascending Series Index order rather than purchase order, regardless of when they were acquired. Gaps in the series are skipped only owned items appear, but always in their correct numbered sequence (e.g. comic reade always cycle as #1 \u{2192} #2 \u{2192} #3 even if bought out of order).")]
/// @brief Field collectionUsesSeriesOrder, offset: 0x282, size: 0x1, def value: None
 bool  collectionUsesSeriesOrder;

/// [Space]
/// [Tooltip("For sub-item (collectable) cosmetics: the parent cosmetics this sub-item attaches to. A sub-item can list multiple parents; it is shown on every listed parent that is equipped, and each entry carries its own target slot index, so the same sub-item can occupy a different slot on different parents. At least one listed parent must be owned before this sub-item can be purchased. Leave empty if this is not a sub-item.")]
/// @brief Field collectionParentLinks, offset: 0x288, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticCollectionParentLink>  collectionParentLinks;

/// [HideInInspector]
/// @brief Field collectionParentPlayFabID, offset: 0x290, size: 0x8, def value: None
 ::StringW  collectionParentPlayFabID;

/// [HideInInspector]
/// @brief Field collectionTargetSlotIndex, offset: 0x298, size: 0x4, def value: None
 int32_t  collectionTargetSlotIndex;

/// [HideInInspector]
/// @brief Field collectionSeriesIndex, offset: 0x29c, size: 0x4, def value: None
 int32_t  collectionSeriesIndex;

/// [Tooltip("PlayFab ID of the cosmetic to apply to a hit player via Cosmetic Swapper (e.g. chicken sword) tech. Distinct from this sub-item\'s own visual.")]
/// @brief Field appliedCosmeticPlayFabID, offset: 0x2a0, size: 0x8, def value: None
 ::StringW  appliedCosmeticPlayFabID;

/// @brief Size padding 0x2a8 - 0x2b0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field debugCosmeticSOName, offset: 0x2a8, size: 0x8, def value: None
 ::StringW  debugCosmeticSOName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, season) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, playFabID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, icon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, category) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, isHoldable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, isThrowable) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, throwableMaterialGrabIndices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, throwableIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, usesBothHandSlots) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, hideWardrobeMannequin) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, holdableParts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, functionalParts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, wardrobeParts) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, storeParts) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, firstPersonViewParts) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, localRigParts) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, anchorAntiIntersectOffsets) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, setCosmetics) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionSlots) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionIsCycling) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionUsesIndexTargeting) == 0x281, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionUsesSeriesOrder) == 0x282, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionParentLinks) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionParentPlayFabID) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionTargetSlotIndex) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, collectionSeriesIndex) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, appliedCosmeticPlayFabID) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticInfoV2, debugCosmeticSOName) == 0x2a8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticInfoV2) == 0x2a8, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
