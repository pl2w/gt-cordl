#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticWardrobe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticCategory_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticWardrobe)
namespace GlobalNamespace {
class CosmeticButton;
}
namespace GlobalNamespace {
class CosmeticCategoryButton;
}
namespace GlobalNamespace {
class CosmeticWardrobe_CosmeticWardrobeCategory;
}
namespace GlobalNamespace {
class CosmeticWardrobe_CosmeticWardrobeSelection;
}
namespace GlobalNamespace {
struct CosmeticWardrobe__RepressButton_d__26;
}
namespace GlobalNamespace {
struct CosmeticWardrobe__RepressUniqueButton_d__28;
}
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class HeadModel;
}
namespace System {
class Action;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticWardrobe;
}
namespace GlobalNamespace {
class CosmeticWardrobe_CosmeticWardrobeCategory;
}
namespace GlobalNamespace {
class CosmeticWardrobe_CosmeticWardrobeSelection;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticWardrobe*);
MARK_REF_T(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*);
MARK_REF_T(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticWardrobe*, "", "CosmeticWardrobe");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*, "", "CosmeticWardrobe/CosmeticWardrobeCategory");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*, "", "CosmeticWardrobe/CosmeticWardrobeSelection");
// Dependencies CosmeticButton, CosmeticWardrobe::CosmeticWardrobeCategory, CosmeticWardrobe::CosmeticWardrobeSelection, GorillaNetworking.CosmeticsController::CosmeticCategory, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticWardrobe
class CORDL_TYPE CosmeticWardrobe : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CosmeticWardrobeCategory = ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory;

using CosmeticWardrobeSelection = ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection;

using _RepressButton_d__26 = ::GlobalNamespace::CosmeticWardrobe__RepressButton_d__26;

using _RepressUniqueButton_d__28 = ::GlobalNamespace::CosmeticWardrobe__RepressUniqueButton_d__28;

/// @brief Field OnWardrobeUpdateCategories, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnWardrobeUpdateCategories, put=setStaticF_OnWardrobeUpdateCategories)) ::System::Action*  OnWardrobeUpdateCategories;

/// @brief Field OnWardrobeUpdateDisplays, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnWardrobeUpdateDisplays, put=setStaticF_OnWardrobeUpdateDisplays)) ::System::Action*  OnWardrobeUpdateDisplays;

 __declspec(property(get=get_UseTemporarySet, put=set_UseTemporarySet)) bool  UseTemporarySet;

/// @brief Field cosmeticCategoryButtons, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticCategoryButtons, put=__cordl_internal_set_cosmeticCategoryButtons)) ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>  cosmeticCategoryButtons;

/// @brief Field cosmeticCollectionDisplays, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticCollectionDisplays, put=__cordl_internal_set_cosmeticCollectionDisplays)) ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>  cosmeticCollectionDisplays;

/// @brief Field currentEquippedDisplay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentEquippedDisplay, put=__cordl_internal_set_currentEquippedDisplay)) ::UnityW<::GlobalNamespace::HeadModel>  currentEquippedDisplay;

/// @brief Field m_useTemporarySet, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_useTemporarySet, put=__cordl_internal_set_m_useTemporarySet)) bool  m_useTemporarySet;

/// @brief Field nextOutfit, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextOutfit, put=__cordl_internal_set_nextOutfit)) ::UnityW<::GlobalNamespace::CosmeticButton>  nextOutfit;

/// @brief Field nextSelection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSelection, put=__cordl_internal_set_nextSelection)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  nextSelection;

/// @brief Field outfitText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_outfitText, put=__cordl_internal_set_outfitText)) ::UnityW<::TMPro::TMP_Text>  outfitText;

/// @brief Field prevSelection, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevSelection, put=__cordl_internal_set_prevSelection)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  prevSelection;

/// @brief Field previousOutfit, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousOutfit, put=__cordl_internal_set_previousOutfit)) ::UnityW<::GlobalNamespace::CosmeticButton>  previousOutfit;

/// @brief Field selectedCategory, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_selectedCategory, put=setStaticF_selectedCategory)) ::GlobalNamespace::CosmeticsController_CosmeticCategory  selectedCategory;

/// @brief Field selectedCategoryIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_selectedCategoryIndex, put=setStaticF_selectedCategoryIndex)) int32_t  selectedCategoryIndex;

/// @brief Field selectedOutfitIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_selectedOutfitIndex, put=setStaticF_selectedOutfitIndex)) int32_t  selectedOutfitIndex;

/// @brief Field startingDisplayIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_startingDisplayIndex, put=setStaticF_startingDisplayIndex)) int32_t  startingDisplayIndex;

/// @brief Field startingHeadSize, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingHeadSize, put=__cordl_internal_set_startingHeadSize)) ::UnityEngine::Vector3  startingHeadSize;

/// @brief Field uniqueCosmeticButtons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_uniqueCosmeticButtons, put=__cordl_internal_set_uniqueCosmeticButtons)) ::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>>  uniqueCosmeticButtons;

/// @brief Method HandleChangeCategory, addr 0x578550c, size 0x6e4, virtual false, abstract: false, final false
inline void HandleChangeCategory(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method HandleCosmeticsUpdated, addr 0x5783684, size 0xd0, virtual false, abstract: false, final false
inline void HandleCosmeticsUpdated() ;

/// @brief Method HandleLocalColorChanged, addr 0x57840b0, size 0xf0, virtual false, abstract: false, final false
inline void HandleLocalColorChanged(::UnityEngine::Color  newColor) ;

/// @brief Method HandlePressedNextOutfitButton, addr 0x57863a4, size 0x70, virtual false, abstract: false, final false
inline void HandlePressedNextOutfitButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method HandlePressedNextSelection, addr 0x578490c, size 0x120, virtual false, abstract: false, final false
inline void HandlePressedNextSelection(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method HandlePressedPrevOutfitButton, addr 0x5786334, size 0x70, virtual false, abstract: false, final false
inline void HandlePressedPrevOutfitButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method HandlePressedPrevSelection, addr 0x5784a2c, size 0x14c, virtual false, abstract: false, final false
inline void HandlePressedPrevSelection(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method HandlePressedSelectCosmeticButton, addr 0x5784c68, size 0x398, virtual false, abstract: false, final false
inline void HandlePressedSelectCosmeticButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

/// @brief Method HandlePressedSelectCosmeticButtonUnique, addr 0x57850f0, size 0x41c, virtual false, abstract: false, final false
inline void HandlePressedSelectCosmeticButtonUnique(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft) ;

static inline ::GlobalNamespace::CosmeticWardrobe* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57841a0, size 0x76c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [AsyncStateMachine(typeof(CosmeticWardrobe::<RepressButton>d__26))]
/// @brief Method RepressButton, addr 0x5784b78, size 0xf0, virtual false, abstract: false, final false
inline void RepressButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft, ::StringW  itemName) ;

/// [AsyncStateMachine(typeof(CosmeticWardrobe::<RepressUniqueButton>d__28))]
/// @brief Method RepressUniqueButton, addr 0x5785000, size 0xf0, virtual false, abstract: false, final false
inline void RepressUniqueButton(::GlobalNamespace::GorillaPressableButton*  button, bool  isLeft, ::StringW  itemName) ;

/// @brief Method Start, addr 0x5783754, size 0x95c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateCategoryButtons, addr 0x5785bf0, size 0x248, virtual false, abstract: false, final false
inline void UpdateCategoryButtons() ;

/// @brief Method UpdateCosmeticDisplays, addr 0x5785e38, size 0x3a8, virtual false, abstract: false, final false
inline void UpdateCosmeticDisplays() ;

/// @brief Method UpdateOutfitButtons, addr 0x57861e0, size 0x154, virtual false, abstract: false, final false
inline void UpdateOutfitButtons() ;

/// @brief Method WardrobeButtonsInitialized, addr 0x5786414, size 0xc8, virtual false, abstract: false, final false
inline bool WardrobeButtonsInitialized() ;

constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*> const& __cordl_internal_get_cosmeticCategoryButtons() const;

constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>& __cordl_internal_get_cosmeticCategoryButtons() ;

constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*> const& __cordl_internal_get_cosmeticCollectionDisplays() const;

constexpr ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>& __cordl_internal_get_cosmeticCollectionDisplays() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_currentEquippedDisplay() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_currentEquippedDisplay() ;

constexpr bool const& __cordl_internal_get_m_useTemporarySet() const;

constexpr bool& __cordl_internal_get_m_useTemporarySet() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticButton> const& __cordl_internal_get_nextOutfit() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticButton>& __cordl_internal_get_nextOutfit() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_nextSelection() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_nextSelection() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_outfitText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_outfitText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_prevSelection() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_prevSelection() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticButton> const& __cordl_internal_get_previousOutfit() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticButton>& __cordl_internal_get_previousOutfit() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingHeadSize() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingHeadSize() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>> const& __cordl_internal_get_uniqueCosmeticButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>>& __cordl_internal_get_uniqueCosmeticButtons() ;

constexpr void __cordl_internal_set_cosmeticCategoryButtons(::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>  value) ;

constexpr void __cordl_internal_set_cosmeticCollectionDisplays(::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>  value) ;

constexpr void __cordl_internal_set_currentEquippedDisplay(::UnityW<::GlobalNamespace::HeadModel>  value) ;

constexpr void __cordl_internal_set_m_useTemporarySet(bool  value) ;

constexpr void __cordl_internal_set_nextOutfit(::UnityW<::GlobalNamespace::CosmeticButton>  value) ;

constexpr void __cordl_internal_set_nextSelection(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_outfitText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_prevSelection(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_previousOutfit(::UnityW<::GlobalNamespace::CosmeticButton>  value) ;

constexpr void __cordl_internal_set_startingHeadSize(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_uniqueCosmeticButtons(::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>>  value) ;

/// @brief Method .ctor, addr 0x57864dc, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnWardrobeUpdateCategories() ;

static inline ::System::Action* getStaticF_OnWardrobeUpdateDisplays() ;

static inline ::GlobalNamespace::CosmeticsController_CosmeticCategory getStaticF_selectedCategory() ;

static inline int32_t getStaticF_selectedCategoryIndex() ;

static inline int32_t getStaticF_selectedOutfitIndex() ;

static inline int32_t getStaticF_startingDisplayIndex() ;

/// @brief Method get_UseTemporarySet, addr 0x5783660, size 0x8, virtual false, abstract: false, final false
inline bool get_UseTemporarySet() ;

static inline void setStaticF_OnWardrobeUpdateCategories(::System::Action*  value) ;

static inline void setStaticF_OnWardrobeUpdateDisplays(::System::Action*  value) ;

static inline void setStaticF_selectedCategory(::GlobalNamespace::CosmeticsController_CosmeticCategory  value) ;

static inline void setStaticF_selectedCategoryIndex(int32_t  value) ;

static inline void setStaticF_selectedOutfitIndex(int32_t  value) ;

static inline void setStaticF_startingDisplayIndex(int32_t  value) ;

/// @brief Method set_UseTemporarySet, addr 0x5783668, size 0x1c, virtual false, abstract: false, final false
inline void set_UseTemporarySet(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticWardrobe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticWardrobe(CosmeticWardrobe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticWardrobe(CosmeticWardrobe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1413};

/// [SerializeField]
/// @brief Field cosmeticCollectionDisplays, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection*>  ___cosmeticCollectionDisplays;

/// [SerializeField]
/// @brief Field uniqueCosmeticButtons, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::CosmeticButton>>  ___uniqueCosmeticButtons;

/// [SerializeField]
/// @brief Field cosmeticCategoryButtons, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory*>  ___cosmeticCategoryButtons;

/// [SerializeField]
/// @brief Field currentEquippedDisplay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___currentEquippedDisplay;

/// [SerializeField]
/// @brief Field nextSelection, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___nextSelection;

/// [SerializeField]
/// @brief Field prevSelection, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___prevSelection;

/// [SerializeField]
/// @brief Field m_useTemporarySet, offset: 0x50, size: 0x1, def value: None
 bool  ___m_useTemporarySet;

/// [SerializeField]
/// @brief Field previousOutfit, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticButton>  ___previousOutfit;

/// [SerializeField]
/// @brief Field nextOutfit, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticButton>  ___nextOutfit;

/// [SerializeField]
/// @brief Field outfitText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___outfitText;

/// @brief Field startingHeadSize, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingHeadSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___cosmeticCollectionDisplays) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___uniqueCosmeticButtons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___cosmeticCategoryButtons) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___currentEquippedDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___nextSelection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___prevSelection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___m_useTemporarySet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___previousOutfit) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___nextOutfit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___outfitText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe, ___startingHeadSize) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticWardrobe) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaNetworking.CosmeticsController::CosmeticCategory, GorillaNetworking.CosmeticsController::CosmeticItem, GorillaNetworking.CosmeticsController::CosmeticSlots, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticWardrobe/CosmeticWardrobeCategory
class CORDL_TYPE CosmeticWardrobe_CosmeticWardrobeCategory : public ::System::Object {
public:
// Declarations
/// @brief Field button, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::CosmeticCategoryButton>  button;

/// @brief Field category, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_category, put=__cordl_internal_set_category)) ::GlobalNamespace::CosmeticsController_CosmeticCategory  category;

/// @brief Field slot1, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slot1, put=__cordl_internal_set_slot1)) ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot1;

/// @brief Field slot1RemovedItem, offset 0x28, size 0x98 
 __declspec(property(get=__cordl_internal_get_slot1RemovedItem, put=__cordl_internal_set_slot1RemovedItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  slot1RemovedItem;

/// @brief Field slot2, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_slot2, put=__cordl_internal_set_slot2)) ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot2;

/// @brief Field slot2RemovedItem, offset 0xc0, size 0x98 
 __declspec(property(get=__cordl_internal_get_slot2RemovedItem, put=__cordl_internal_set_slot2RemovedItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  slot2RemovedItem;

static inline ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticCategoryButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticCategoryButton>& __cordl_internal_get_button() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory const& __cordl_internal_get_category() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticCategory& __cordl_internal_get_category() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& __cordl_internal_get_slot1() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& __cordl_internal_get_slot1() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_slot1RemovedItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_slot1RemovedItem() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& __cordl_internal_get_slot2() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& __cordl_internal_get_slot2() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_slot2RemovedItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_slot2RemovedItem() ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::CosmeticCategoryButton>  value) ;

constexpr void __cordl_internal_set_category(::GlobalNamespace::CosmeticsController_CosmeticCategory  value) ;

constexpr void __cordl_internal_set_slot1(::GlobalNamespace::CosmeticsController_CosmeticSlots  value) ;

constexpr void __cordl_internal_set_slot1RemovedItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_slot2(::GlobalNamespace::CosmeticsController_CosmeticSlots  value) ;

constexpr void __cordl_internal_set_slot2RemovedItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

/// @brief Method .ctor, addr 0x578654c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticWardrobe_CosmeticWardrobeCategory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobe_CosmeticWardrobeCategory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticWardrobe_CosmeticWardrobeCategory(CosmeticWardrobe_CosmeticWardrobeCategory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobe_CosmeticWardrobeCategory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticWardrobe_CosmeticWardrobeCategory(CosmeticWardrobe_CosmeticWardrobeCategory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1410};

/// @brief Field button, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticCategoryButton>  ___button;

/// @brief Field category, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticCategory  ___category;

/// @brief Field slot1, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticSlots  ___slot1;

/// @brief Field slot2, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticSlots  ___slot2;

/// @brief Field slot1RemovedItem, offset: 0x28, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___slot1RemovedItem;

/// @brief Field slot2RemovedItem, offset: 0xc0, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___slot2RemovedItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory, ___button) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory, ___category) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory, ___slot1) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory, ___slot2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory, ___slot1RemovedItem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory, ___slot2RemovedItem) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeCategory) == 0x158, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticWardrobe/CosmeticWardrobeSelection
class CORDL_TYPE CosmeticWardrobe_CosmeticWardrobeSelection : public ::System::Object {
public:
// Declarations
/// @brief Field currentCosmeticItem, offset 0x20, size 0x98 
 __declspec(property(get=__cordl_internal_get_currentCosmeticItem, put=__cordl_internal_set_currentCosmeticItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  currentCosmeticItem;

/// @brief Field displayHead, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayHead, put=__cordl_internal_set_displayHead)) ::UnityW<::GlobalNamespace::HeadModel>  displayHead;

/// @brief Field selectButton, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectButton, put=__cordl_internal_set_selectButton)) ::UnityW<::GlobalNamespace::CosmeticButton>  selectButton;

static inline ::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection* New_ctor() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_currentCosmeticItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_currentCosmeticItem() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_displayHead() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_displayHead() ;

constexpr ::UnityW<::GlobalNamespace::CosmeticButton> const& __cordl_internal_get_selectButton() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticButton>& __cordl_internal_get_selectButton() ;

constexpr void __cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_displayHead(::UnityW<::GlobalNamespace::HeadModel>  value) ;

constexpr void __cordl_internal_set_selectButton(::UnityW<::GlobalNamespace::CosmeticButton>  value) ;

/// @brief Method .ctor, addr 0x5786544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticWardrobe_CosmeticWardrobeSelection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobe_CosmeticWardrobeSelection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticWardrobe_CosmeticWardrobeSelection(CosmeticWardrobe_CosmeticWardrobeSelection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticWardrobe_CosmeticWardrobeSelection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticWardrobe_CosmeticWardrobeSelection(CosmeticWardrobe_CosmeticWardrobeSelection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1409};

/// @brief Field displayHead, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___displayHead;

/// @brief Field selectButton, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticButton>  ___selectButton;

/// @brief Field currentCosmeticItem, offset: 0x20, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___currentCosmeticItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection, ___displayHead) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection, ___selectButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection, ___currentCosmeticItem) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticWardrobe_CosmeticWardrobeSelection) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
