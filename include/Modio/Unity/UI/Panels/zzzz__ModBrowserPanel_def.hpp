#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModBrowserPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModBrowserPanel)
namespace GlobalNamespace {
struct ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5;
}
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Unity::UI::Navigation {
class ModioInputFieldSelectionWrapper;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModBrowserPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModBrowserPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModBrowserPanel*, "Modio.Unity.UI.Panels", "ModBrowserPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModBrowserPanel
class CORDL_TYPE ModBrowserPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _OpenAuthFlowAfterWaitingIfNeeded_d__5 = ::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5;

/// @brief Field _isWaitingBeforeAuthFlow, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isWaitingBeforeAuthFlow, put=setStaticF__isWaitingBeforeAuthFlow)) bool  _isWaitingBeforeAuthFlow;

/// @brief Field _openingPanelFromClosed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__openingPanelFromClosed, put=__cordl_internal_set__openingPanelFromClosed)) ::UnityEngine::Events::UnityEvent*  _openingPanelFromClosed;

/// @brief Field _searchField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchField, put=__cordl_internal_set__searchField)) ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  _searchField;

/// @brief Method ClearSearch, addr 0x9fa4450, size 0x48, virtual false, abstract: false, final false
inline void ClearSearch() ;

/// @brief Method HookUpCancelOrClearFilter, addr 0x9fa3b4c, size 0x198, virtual false, abstract: false, final false
inline void HookUpCancelOrClearFilter() ;

static inline ::Modio::Unity::UI::Panels::ModBrowserPanel* New_ctor() ;

/// @brief Method OnGainedFocus, addr 0x9fa32e0, size 0x350, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// @brief Method OnLostFocus, addr 0x9fa3e48, size 0x290, virtual true, abstract: false, final false
inline void OnLostFocus() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModBrowserPanel::<OpenAuthFlowAfterWaitingIfNeeded>d__5))]
/// @brief Method OpenAuthFlowAfterWaitingIfNeeded, addr 0x9fa3d80, size 0xc8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* OpenAuthFlowAfterWaitingIfNeeded() ;

/// @brief Method OpenFilter, addr 0x9fa4498, size 0x54, virtual false, abstract: false, final false
inline void OpenFilter() ;

/// @brief Method OpenSearch, addr 0x9fa439c, size 0x94, virtual false, abstract: false, final false
inline void OpenSearch() ;

/// @brief Method OpenSort, addr 0x9fa44ec, size 0x54, virtual false, abstract: false, final false
inline void OpenSort() ;

/// @brief Method Start, addr 0x9fa3230, size 0xb0, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__openingPanelFromClosed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__openingPanelFromClosed() ;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper> const& __cordl_internal_get__searchField() const;

constexpr ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>& __cordl_internal_get__searchField() ;

constexpr void __cordl_internal_set__openingPanelFromClosed(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__searchField(::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  value) ;

/// @brief Method .ctor, addr 0x9fa4540, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__isWaitingBeforeAuthFlow() ;

static inline void setStaticF__isWaitingBeforeAuthFlow(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModBrowserPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModBrowserPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModBrowserPanel(ModBrowserPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModBrowserPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModBrowserPanel(ModBrowserPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27048};

/// [SerializeField]
/// @brief Field _searchField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Navigation::ModioInputFieldSelectionWrapper>  ____searchField;

/// [SerializeField]
/// @brief Field _openingPanelFromClosed, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____openingPanelFromClosed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModBrowserPanel, ____searchField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModBrowserPanel, ____openingPanelFromClosed) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModBrowserPanel) == 0x68, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
