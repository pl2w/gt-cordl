#pragma once
// IWYU pragma private; include "GlobalNamespace/FittingRoomButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FittingRoomButton)
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
class FittingRoomButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FittingRoomButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FittingRoomButton*, "", "FittingRoomButton");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: FittingRoomButton
class CORDL_TYPE FittingRoomButton : public ::GlobalNamespace::GorillaPressableButton {
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

/// @brief Method ButtonActivationWithHand, addr 0x574ef24, size 0x94, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

/// @brief Method ClearItem, addr 0x574f074, size 0xf4, virtual false, abstract: false, final false
inline void ClearItem() ;

static inline ::GlobalNamespace::FittingRoomButton* New_ctor() ;

/// @brief Method SetItem, addr 0x574efb8, size 0xbc, virtual false, abstract: false, final false
inline void SetItem(::GlobalNamespace::CosmeticsController_CosmeticItem  item, bool  isInTryOnSet) ;

/// @brief Method Start, addr 0x574ebd8, size 0xb4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0x574ec8c, size 0x298, virtual true, abstract: false, final false
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

/// @brief Method .ctor, addr 0x574f168, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FittingRoomButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FittingRoomButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FittingRoomButton(FittingRoomButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FittingRoomButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FittingRoomButton(FittingRoomButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1303};

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
static_assert(offsetof(::GlobalNamespace::FittingRoomButton, ___currentCosmeticItem) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FittingRoomButton, ___currentCosmeticSprite) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FittingRoomButton, ___blankSprite) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FittingRoomButton, ___noCosmeticText) == 0x160, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FittingRoomButton) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
