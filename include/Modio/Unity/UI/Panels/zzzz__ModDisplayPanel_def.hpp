#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModDisplayPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModDisplayPanel)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModDisplayPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModDisplayPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModDisplayPanel*, "Modio.Unity.UI.Panels", "ModDisplayPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModDisplayPanel
class CORDL_TYPE ModDisplayPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Field _modioUIMod, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioUIMod, put=__cordl_internal_set__modioUIMod)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _modioUIMod;

/// @brief Field _onMoreOptionsPressed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onMoreOptionsPressed, put=__cordl_internal_set__onMoreOptionsPressed)) ::UnityEngine::Events::UnityEvent*  _onMoreOptionsPressed;

/// @brief Method Awake, addr 0x9fa5a74, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method MoreFromCreatorPressed, addr 0x9fa5e90, size 0x70, virtual false, abstract: false, final false
inline void MoreFromCreatorPressed() ;

/// @brief Method MoreOptionsPressed, addr 0x9fa5e78, size 0x18, virtual false, abstract: false, final false
inline void MoreOptionsPressed() ;

static inline ::Modio::Unity::UI::Panels::ModDisplayPanel* New_ctor() ;

/// @brief Method OnGainedFocus, addr 0x9fa5ad4, size 0x174, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// @brief Method OnLostFocus, addr 0x9fa5c48, size 0x12c, virtual true, abstract: false, final false
inline void OnLostFocus() ;

/// @brief Method OpenPanel, addr 0x9fa5d74, size 0x34, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Mods::Mod*  mod) ;

/// @brief Method ReportPressed, addr 0x9fa5da8, size 0x5c, virtual false, abstract: false, final false
inline void ReportPressed() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__modioUIMod() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__modioUIMod() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onMoreOptionsPressed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onMoreOptionsPressed() ;

constexpr void __cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

constexpr void __cordl_internal_set__onMoreOptionsPressed(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x9fa5f00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModDisplayPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModDisplayPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModDisplayPanel(ModDisplayPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModDisplayPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModDisplayPanel(ModDisplayPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27051};

/// @brief Field _modioUIMod, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____modioUIMod;

/// [SerializeField]
/// @brief Field _onMoreOptionsPressed, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onMoreOptionsPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModDisplayPanel, ____modioUIMod) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModDisplayPanel, ____onMoreOptionsPressed) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModDisplayPanel) == 0x68, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
