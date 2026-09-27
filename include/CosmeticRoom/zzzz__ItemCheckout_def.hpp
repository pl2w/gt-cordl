#pragma once
// IWYU pragma private; include "CosmeticRoom/ItemCheckout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CheckoutCartButton_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ItemCheckout)
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class HeadModel;
}
namespace GlobalNamespace {
class PurchaseItemButton;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace CosmeticRoom {
class ItemCheckout;
}
// Write type traits
MARK_REF_T(::CosmeticRoom::ItemCheckout*);
DEFINE_IL2CPP_CLASS(::CosmeticRoom::ItemCheckout*, "CosmeticRoom", "ItemCheckout");
// Dependencies CheckoutCartButton, UnityEngine.MonoBehaviour, UnityEngine.SceneManagement.Scene
namespace CosmeticRoom {
// Is value type: false
// CS Name: CosmeticRoom.ItemCheckout
class CORDL_TYPE ItemCheckout : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field addOnEnable, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_addOnEnable, put=__cordl_internal_set_addOnEnable)) bool  addOnEnable;

/// @brief Field checkoutCartButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkoutCartButtons, put=__cordl_internal_set_checkoutCartButtons)) ::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>>  checkoutCartButtons;

/// @brief Field checkoutCounterMesh, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkoutCounterMesh, put=__cordl_internal_set_checkoutCounterMesh)) ::UnityW<::UnityEngine::GameObject>  checkoutCounterMesh;

/// @brief Field checkoutHeadModel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkoutHeadModel, put=__cordl_internal_set_checkoutHeadModel)) ::UnityW<::GlobalNamespace::HeadModel>  checkoutHeadModel;

/// @brief Field checkoutTryOnArea, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkoutTryOnArea, put=__cordl_internal_set_checkoutTryOnArea)) ::UnityW<::UnityEngine::Collider>  checkoutTryOnArea;

/// @brief Field iterator, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_iterator, put=__cordl_internal_set_iterator)) int32_t  iterator;

/// @brief Field leftPurchaseButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftPurchaseButton, put=__cordl_internal_set_leftPurchaseButton)) ::UnityW<::GlobalNamespace::PurchaseItemButton>  leftPurchaseButton;

/// @brief Field originalScene, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_originalScene, put=__cordl_internal_set_originalScene)) ::UnityEngine::SceneManagement::Scene  originalScene;

/// @brief Field purchaseScreenMesh, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseScreenMesh, put=__cordl_internal_set_purchaseScreenMesh)) ::UnityW<::UnityEngine::GameObject>  purchaseScreenMesh;

/// @brief Field purchaseText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseText, put=__cordl_internal_set_purchaseText)) ::UnityW<::UnityEngine::UI::Text>  purchaseText;

/// @brief Field purchaseTextTMP, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseTextTMP, put=__cordl_internal_set_purchaseTextTMP)) ::UnityW<::TMPro::TMP_Text>  purchaseTextTMP;

/// @brief Field rightPurchaseButton, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightPurchaseButton, put=__cordl_internal_set_rightPurchaseButton)) ::UnityW<::GlobalNamespace::PurchaseItemButton>  rightPurchaseButton;

/// @brief Method InitializeForCustomMap, addr 0x5c4e6b8, size 0xc8, virtual false, abstract: false, final false
inline void InitializeForCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea, ::UnityEngine::SceneManagement::Scene  customMapScene, bool  useCustomCounterMesh) ;

/// @brief Method IsFromScene, addr 0x5c4eb04, size 0x14, virtual false, abstract: false, final false
inline bool IsFromScene(::UnityEngine::SceneManagement::Scene  unloadingScene) ;

static inline ::CosmeticRoom::ItemCheckout* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c4e5b4, size 0x84, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5c4e41c, size 0x84, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveFromCustomMap, addr 0x5c4e780, size 0x90, virtual false, abstract: false, final false
inline void RemoveFromCustomMap(::GlobalNamespace::CompositeTriggerEvents*  customMapTryOnArea) ;

/// @brief Method UpdateFromCart, addr 0x5c4e810, size 0x150, virtual false, abstract: false, final false
inline void UpdateFromCart(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticsController_CosmeticItem>*  currentCart, ::GlobalNamespace::CosmeticsController_CosmeticItem  itemToBuy) ;

/// @brief Method UpdatePurchaseText, addr 0x5c4e960, size 0x1a4, virtual false, abstract: false, final false
inline void UpdatePurchaseText(::StringW  newText, ::StringW  leftPurchaseButtonText, ::StringW  rightPurchaseButtonText, bool  leftButtonOn, bool  rightButtonOn) ;

constexpr bool const& __cordl_internal_get_addOnEnable() const;

constexpr bool& __cordl_internal_get_addOnEnable() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>> const& __cordl_internal_get_checkoutCartButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>>& __cordl_internal_get_checkoutCartButtons() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_checkoutCounterMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_checkoutCounterMesh() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_checkoutHeadModel() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_checkoutHeadModel() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_checkoutTryOnArea() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_checkoutTryOnArea() ;

constexpr int32_t const& __cordl_internal_get_iterator() const;

constexpr int32_t& __cordl_internal_get_iterator() ;

constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton> const& __cordl_internal_get_leftPurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton>& __cordl_internal_get_leftPurchaseButton() ;

constexpr ::UnityEngine::SceneManagement::Scene const& __cordl_internal_get_originalScene() const;

constexpr ::UnityEngine::SceneManagement::Scene& __cordl_internal_get_originalScene() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchaseScreenMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchaseScreenMesh() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_purchaseText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_purchaseText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_purchaseTextTMP() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_purchaseTextTMP() ;

constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton> const& __cordl_internal_get_rightPurchaseButton() const;

constexpr ::UnityW<::GlobalNamespace::PurchaseItemButton>& __cordl_internal_get_rightPurchaseButton() ;

constexpr void __cordl_internal_set_addOnEnable(bool  value) ;

constexpr void __cordl_internal_set_checkoutCartButtons(::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>>  value) ;

constexpr void __cordl_internal_set_checkoutCounterMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_checkoutHeadModel(::UnityW<::GlobalNamespace::HeadModel>  value) ;

constexpr void __cordl_internal_set_checkoutTryOnArea(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_iterator(int32_t  value) ;

constexpr void __cordl_internal_set_leftPurchaseButton(::UnityW<::GlobalNamespace::PurchaseItemButton>  value) ;

constexpr void __cordl_internal_set_originalScene(::UnityEngine::SceneManagement::Scene  value) ;

constexpr void __cordl_internal_set_purchaseScreenMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchaseText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_purchaseTextTMP(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_rightPurchaseButton(::UnityW<::GlobalNamespace::PurchaseItemButton>  value) ;

/// @brief Method .ctor, addr 0x5c4eb18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ItemCheckout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ItemCheckout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ItemCheckout(ItemCheckout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ItemCheckout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ItemCheckout(ItemCheckout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4242};

/// @brief Field checkoutCartButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::CheckoutCartButton>>  ___checkoutCartButtons;

/// @brief Field leftPurchaseButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PurchaseItemButton>  ___leftPurchaseButton;

/// @brief Field rightPurchaseButton, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PurchaseItemButton>  ___rightPurchaseButton;

/// [HideInInspector]
/// @brief Field purchaseText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___purchaseText;

/// @brief Field purchaseTextTMP, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___purchaseTextTMP;

/// @brief Field checkoutHeadModel, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___checkoutHeadModel;

/// @brief Field checkoutTryOnArea, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___checkoutTryOnArea;

/// @brief Field checkoutCounterMesh, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___checkoutCounterMesh;

/// @brief Field purchaseScreenMesh, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchaseScreenMesh;

/// @brief Field originalScene, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::SceneManagement::Scene  ___originalScene;

/// @brief Field iterator, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___iterator;

/// @brief Field addOnEnable, offset: 0x70, size: 0x1, def value: None
 bool  ___addOnEnable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___checkoutCartButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___leftPurchaseButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___rightPurchaseButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___purchaseText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___purchaseTextTMP) == 0x40, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___checkoutHeadModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___checkoutTryOnArea) == 0x50, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___checkoutCounterMesh) == 0x58, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___purchaseScreenMesh) == 0x60, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___originalScene) == 0x68, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___iterator) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::CosmeticRoom::ItemCheckout, ___addOnEnable) == 0x70, "Offset mismatch!");

static_assert(sizeof(::CosmeticRoom::ItemCheckout) == 0x78, "Size mismatch!");

} // namespace end def CosmeticRoom
