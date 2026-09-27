#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITokenPurchaseButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUITokenPurchaseButton)
namespace Modio::Unity::UI::Panels {
class ModioPanelBase;
}
namespace Modio {
class Error;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUITokenPurchaseButton;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITokenPurchaseButton*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITokenPurchaseButton*, "Modio.Unity.UI.Components", "ModioUITokenPurchaseButton");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITokenPurchaseButton
class CORDL_TYPE ModioUITokenPurchaseButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _panel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__panel, put=__cordl_internal_set__panel)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  _panel;

/// @brief Method Awake, addr 0x9fbdfb0, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::ModioUITokenPurchaseButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x9fbe1e8, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fbe008, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHasFocusChanged, addr 0x9fbe0e0, size 0x108, virtual false, abstract: false, final false
inline void OnHasFocusChanged(bool  panelHasFocus) ;

/// @brief Method OpenTokens, addr 0x9fbe2b8, size 0x35c, virtual false, abstract: false, final false
inline void OpenTokens() ;

/// @brief Method PlatformPurchaseFlowCompleted, addr 0x9fbe614, size 0x94, virtual false, abstract: false, final false
inline void PlatformPurchaseFlowCompleted(::Modio::Error*  error) ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& __cordl_internal_get__panel() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& __cordl_internal_get__panel() ;

constexpr void __cordl_internal_set__panel(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value) ;

/// @brief Method .ctor, addr 0x9fbe6a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITokenPurchaseButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPurchaseButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITokenPurchaseButton(ModioUITokenPurchaseButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITokenPurchaseButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITokenPurchaseButton(ModioUITokenPurchaseButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27164};

/// @brief Field _panel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  ____panel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITokenPurchaseButton, ____panel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITokenPurchaseButton) == 0x28, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
