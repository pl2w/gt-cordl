#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Monetization/ModioConfirmPurchasePanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioConfirmPurchasePanel)
namespace GlobalNamespace {
struct ModioConfirmPurchasePanel__ConfirmPurchaseFlow_d__5;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Monetization {
class ModioConfirmPurchasePanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel*, "Modio.Unity.UI.Panels.Monetization", "ModioConfirmPurchasePanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Monetization {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Monetization.ModioConfirmPurchasePanel
class CORDL_TYPE ModioConfirmPurchasePanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _ConfirmPurchaseFlow_d__5 = ::GlobalNamespace::ModioConfirmPurchasePanel__ConfirmPurchaseFlow_d__5;

/// @brief Field _modioUIMod, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioUIMod, put=__cordl_internal_set__modioUIMod)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _modioUIMod;

/// @brief Field _subscribeOnPurchase, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__subscribeOnPurchase, put=__cordl_internal_set__subscribeOnPurchase)) bool  _subscribeOnPurchase;

/// @brief Method Awake, addr 0x9fad584, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ConfirmPurchase, addr 0x9fad618, size 0x4, virtual false, abstract: false, final false
inline void ConfirmPurchase() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Monetization.ModioConfirmPurchasePanel::<ConfirmPurchaseFlow>d__5))]
/// @brief Method ConfirmPurchaseFlow, addr 0x9fad61c, size 0xa8, virtual false, abstract: false, final false
inline void ConfirmPurchaseFlow() ;

static inline ::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel* New_ctor() ;

/// @brief Method OpenPanel, addr 0x9fad5e4, size 0x34, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Mods::Mod*  mod) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__modioUIMod() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__modioUIMod() ;

constexpr bool const& __cordl_internal_get__subscribeOnPurchase() const;

constexpr bool& __cordl_internal_get__subscribeOnPurchase() ;

constexpr void __cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

constexpr void __cordl_internal_set__subscribeOnPurchase(bool  value) ;

/// @brief Method .ctor, addr 0x9fad6c4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioConfirmPurchasePanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioConfirmPurchasePanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioConfirmPurchasePanel(ModioConfirmPurchasePanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioConfirmPurchasePanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioConfirmPurchasePanel(ModioConfirmPurchasePanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27097};

/// @brief Field _modioUIMod, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____modioUIMod;

/// [SerializeField]
/// @brief Field _subscribeOnPurchase, offset: 0x60, size: 0x1, def value: None
 bool  ____subscribeOnPurchase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel, ____modioUIMod) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel, ____subscribeOnPurchase) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::Monetization::ModioConfirmPurchasePanel) == 0x68, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Monetization
