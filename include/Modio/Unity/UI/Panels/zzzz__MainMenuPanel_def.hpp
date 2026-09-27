#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/MainMenuPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(MainMenuPanel)
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class MainMenuPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::MainMenuPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::MainMenuPanel*, "Modio.Unity.UI.Panels", "MainMenuPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.MainMenuPanel
class CORDL_TYPE MainMenuPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Method CancelPressed, addr 0x9fa321c, size 0x4, virtual true, abstract: false, final false
inline void CancelPressed() ;

static inline ::Modio::Unity::UI::Panels::MainMenuPanel* New_ctor() ;

/// @brief Method Start, addr 0x9fa2f60, size 0x18, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0x9fa3220, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MainMenuPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MainMenuPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MainMenuPanel(MainMenuPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainMenuPanel(MainMenuPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27046};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Panels::MainMenuPanel) == 0x58, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
