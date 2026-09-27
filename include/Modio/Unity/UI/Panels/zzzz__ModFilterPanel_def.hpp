#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModFilterPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModFilterPanel)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModFilterPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModFilterPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModFilterPanel*, "Modio.Unity.UI.Panels", "ModFilterPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModFilterPanel
class CORDL_TYPE ModFilterPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Field _filterDisplay, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__filterDisplay, put=__cordl_internal_set__filterDisplay)) ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  _filterDisplay;

/// @brief Method Awake, addr 0x9fa5f08, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelPressed, addr 0x9fa5f68, size 0x24, virtual true, abstract: false, final false
inline void CancelPressed() ;

/// @brief Method DoDefaultSelection, addr 0x9fa5f8c, size 0x9c, virtual true, abstract: false, final false
inline void DoDefaultSelection() ;

static inline ::Modio::Unity::UI::Panels::ModFilterPanel* New_ctor() ;

/// @brief Method OnGainedFocus, addr 0x9fa60dc, size 0xf4, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// @brief Method OnLostFocus, addr 0x9fa61d0, size 0xe4, virtual true, abstract: false, final false
inline void OnLostFocus() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay> const& __cordl_internal_get__filterDisplay() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>& __cordl_internal_get__filterDisplay() ;

constexpr void __cordl_internal_set__filterDisplay(::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  value) ;

/// @brief Method .ctor, addr 0x9fa62b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModFilterPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModFilterPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModFilterPanel(ModFilterPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModFilterPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModFilterPanel(ModFilterPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27052};

/// @brief Field _filterDisplay, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  ____filterDisplay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModFilterPanel, ____filterDisplay) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModFilterPanel) == 0x60, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
