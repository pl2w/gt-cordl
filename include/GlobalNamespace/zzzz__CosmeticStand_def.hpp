#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticStand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CosmeticStand)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
class HeadModel;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticStand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticStand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticStand*, "", "CosmeticStand");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticStand
class CORDL_TYPE CosmeticStand : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field addToCartText, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_addToCartText, put=__cordl_internal_set_addToCartText)) ::UnityW<::UnityEngine::UI::Text>  addToCartText;

/// @brief Field skipMe, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipMe, put=__cordl_internal_set_skipMe)) bool  skipMe;

/// @brief Field slotPriceText, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotPriceText, put=__cordl_internal_set_slotPriceText)) ::UnityW<::UnityEngine::UI::Text>  slotPriceText;

/// @brief Field thisCosmeticItem, offset 0xb8, size 0x98 
 __declspec(property(get=__cordl_internal_get_thisCosmeticItem, put=__cordl_internal_set_thisCosmeticItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  thisCosmeticItem;

/// @brief Field thisCosmeticName, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisCosmeticName, put=__cordl_internal_set_thisCosmeticName)) ::StringW  thisCosmeticName;

/// @brief Field thisHeadModel, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisHeadModel, put=__cordl_internal_set_thisHeadModel)) ::UnityW<::GlobalNamespace::HeadModel>  thisHeadModel;

/// @brief Method ButtonActivation, addr 0x574c6d8, size 0x80, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// @brief Method InitializeCosmetic, addr 0x574c4fc, size 0x1dc, virtual false, abstract: false, final false
inline void InitializeCosmetic() ;

static inline ::GlobalNamespace::CosmeticStand* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <InitializeCosmetic>b__6_0, addr 0x574c760, size 0x60, virtual false, abstract: false, final false
inline bool _InitializeCosmetic_b__6_0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_addToCartText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_addToCartText() ;

constexpr bool const& __cordl_internal_get_skipMe() const;

constexpr bool& __cordl_internal_get_skipMe() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_slotPriceText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_slotPriceText() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_thisCosmeticItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_thisCosmeticItem() ;

constexpr ::StringW const& __cordl_internal_get_thisCosmeticName() const;

constexpr ::StringW& __cordl_internal_get_thisCosmeticName() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_thisHeadModel() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_thisHeadModel() ;

constexpr void __cordl_internal_set_addToCartText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_skipMe(bool  value) ;

constexpr void __cordl_internal_set_slotPriceText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_thisCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_thisCosmeticName(::StringW  value) ;

constexpr void __cordl_internal_set_thisHeadModel(::UnityW<::GlobalNamespace::HeadModel>  value) ;

/// @brief Method .ctor, addr 0x574c758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticStand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticStand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticStand(CosmeticStand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticStand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticStand(CosmeticStand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1296};

/// @brief Field thisCosmeticItem, offset: 0xb8, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___thisCosmeticItem;

/// @brief Field thisCosmeticName, offset: 0x150, size: 0x8, def value: None
 ::StringW  ___thisCosmeticName;

/// @brief Field thisHeadModel, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___thisHeadModel;

/// @brief Field slotPriceText, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___slotPriceText;

/// @brief Field addToCartText, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___addToCartText;

/// [Tooltip("If this is true then this cosmetic stand should have already been updated when the \'Update Cosmetic Stands\' button was pressed in the CosmeticsController inspector.")]
/// @brief Field skipMe, offset: 0x170, size: 0x1, def value: None
 bool  ___skipMe;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticStand, ___thisCosmeticItem) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticStand, ___thisCosmeticName) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticStand, ___thisHeadModel) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticStand, ___slotPriceText) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticStand, ___addToCartText) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticStand, ___skipMe) == 0x170, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticStand) == 0x178, "Size mismatch!");

} // namespace end def GlobalNamespace
