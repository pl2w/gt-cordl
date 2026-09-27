#pragma once
// IWYU pragma private; include "GlobalNamespace/CheckoutCartButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CheckoutCartButton)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CheckoutCartButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CheckoutCartButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CheckoutCartButton*, "", "CheckoutCartButton");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: CheckoutCartButton
class CORDL_TYPE CheckoutCartButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field blankSprite, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_blankSprite, put=__cordl_internal_set_blankSprite)) ::UnityW<::UnityEngine::Sprite>  blankSprite;

/// @brief Field currentCosmeticItem, offset 0xb8, size 0x98 
 __declspec(property(get=__cordl_internal_get_currentCosmeticItem, put=__cordl_internal_set_currentCosmeticItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  currentCosmeticItem;

/// @brief Field currentCosmeticSprite, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentCosmeticSprite, put=__cordl_internal_set_currentCosmeticSprite)) ::UnityW<::UnityEngine::SpriteRenderer>  currentCosmeticSprite;

/// @brief Field noCosmeticText, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_noCosmeticText, put=__cordl_internal_set_noCosmeticText)) ::StringW  noCosmeticText;

/// @brief Method ButtonActivationWithHand, addr 0x574ac00, size 0x90, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

/// @brief Method ClearItem, addr 0x574ad4c, size 0xe0, virtual false, abstract: false, final false
inline void ClearItem() ;

static inline ::GlobalNamespace::CheckoutCartButton* New_ctor() ;

/// @brief Method SetItem, addr 0x574ac90, size 0xbc, virtual false, abstract: false, final false
inline void SetItem(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isCurrentItemToBuy) ;

/// @brief Method Start, addr 0x574a8e8, size 0x80, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0x574a968, size 0x298, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_blankSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_blankSprite() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_currentCosmeticItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_currentCosmeticItem() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_currentCosmeticSprite() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_currentCosmeticSprite() ;

constexpr ::StringW const& __cordl_internal_get_noCosmeticText() const;

constexpr ::StringW& __cordl_internal_get_noCosmeticText() ;

constexpr void __cordl_internal_set_blankSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_currentCosmeticSprite(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_noCosmeticText(::StringW  value) ;

/// @brief Method .ctor, addr 0x574ae2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckoutCartButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckoutCartButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckoutCartButton(CheckoutCartButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckoutCartButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckoutCartButton(CheckoutCartButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1287};

/// @brief Field currentCosmeticItem, offset: 0xb8, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___currentCosmeticItem;

/// [SerializeField]
/// @brief Field currentCosmeticSprite, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___currentCosmeticSprite;

/// [SerializeField]
/// @brief Field blankSprite, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___blankSprite;

/// @brief Field noCosmeticText, offset: 0x160, size: 0x8, def value: None
 ::StringW  ___noCosmeticText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CheckoutCartButton, ___currentCosmeticItem) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckoutCartButton, ___currentCosmeticSprite) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckoutCartButton, ___blankSprite) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CheckoutCartButton, ___noCosmeticText) == 0x160, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CheckoutCartButton) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
