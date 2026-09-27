#pragma once
// IWYU pragma private; include "GlobalNamespace/WardrobeItemButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
CORDL_MODULE_EXPORT(WardrobeItemButton)
namespace GlobalNamespace {
class HeadModel;
}
// Forward declare root types
namespace GlobalNamespace {
class WardrobeItemButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WardrobeItemButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WardrobeItemButton*, "", "WardrobeItemButton");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: WardrobeItemButton
class CORDL_TYPE WardrobeItemButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field controlledModel, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlledModel, put=__cordl_internal_set_controlledModel)) ::UnityW<::GlobalNamespace::HeadModel>  controlledModel;

/// @brief Field currentCosmeticItem, offset 0xc0, size 0x98 
 __declspec(property(get=__cordl_internal_get_currentCosmeticItem, put=__cordl_internal_set_currentCosmeticItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  currentCosmeticItem;

static inline ::GlobalNamespace::WardrobeItemButton* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::HeadModel> const& __cordl_internal_get_controlledModel() const;

constexpr ::UnityW<::GlobalNamespace::HeadModel>& __cordl_internal_get_controlledModel() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_currentCosmeticItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_currentCosmeticItem() ;

constexpr void __cordl_internal_set_controlledModel(::UnityW<::GlobalNamespace::HeadModel>  value) ;

constexpr void __cordl_internal_set_currentCosmeticItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

/// @brief Method .ctor, addr 0x578944c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WardrobeItemButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WardrobeItemButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WardrobeItemButton(WardrobeItemButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WardrobeItemButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WardrobeItemButton(WardrobeItemButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1421};

/// @brief Field controlledModel, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeadModel>  ___controlledModel;

/// @brief Field currentCosmeticItem, offset: 0xc0, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___currentCosmeticItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WardrobeItemButton, ___controlledModel) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WardrobeItemButton, ___currentCosmeticItem) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WardrobeItemButton) == 0x158, "Size mismatch!");

} // namespace end def GlobalNamespace
