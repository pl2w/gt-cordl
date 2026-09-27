#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModDependenciesPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModDependenciesPanel)
namespace GlobalNamespace {
struct ModDependenciesPanel__SubscribeWithDependenciesAndHandleResult_d__8;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModDependenciesPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModDependenciesPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModDependenciesPanel*, "Modio.Unity.UI.Panels", "ModDependenciesPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase, UnityEngine.GameObject
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModDependenciesPanel
class CORDL_TYPE ModDependenciesPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _SubscribeWithDependenciesAndHandleResult_d__8 = ::GlobalNamespace::ModDependenciesPanel__SubscribeWithDependenciesAndHandleResult_d__8;

/// @brief Field _hideForSubscribeFlow, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__hideForSubscribeFlow, put=__cordl_internal_set__hideForSubscribeFlow)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _hideForSubscribeFlow;

/// @brief Field _modioUIMod, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioUIMod, put=__cordl_internal_set__modioUIMod)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _modioUIMod;

/// @brief Field _showForSubscribeFlowOnly, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__showForSubscribeFlowOnly, put=__cordl_internal_set__showForSubscribeFlowOnly)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _showForSubscribeFlowOnly;

/// @brief Method Awake, addr 0x9fa5428, size 0x6c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ConfirmPressed, addr 0x9fa55bc, size 0x4, virtual false, abstract: false, final false
inline void ConfirmPressed() ;

/// @brief Method IsSubscribeFlow, addr 0x9fa54b4, size 0xc0, virtual false, abstract: false, final false
inline void IsSubscribeFlow(bool  isSubscribe) ;

static inline ::Modio::Unity::UI::Panels::ModDependenciesPanel* New_ctor() ;

/// @brief Method OpenPanel, addr 0x9fa5588, size 0x34, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Mods::Mod*  mod) ;

/// @brief Method OpenPanel, addr 0x9fa5574, size 0x14, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Unity::UI::Components::ModioUIMod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.ModDependenciesPanel::<SubscribeWithDependenciesAndHandleResult>d__8))]
/// @brief Method SubscribeWithDependenciesAndHandleResult, addr 0x9fa55c0, size 0xa8, virtual false, abstract: false, final false
inline void SubscribeWithDependenciesAndHandleResult() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__hideForSubscribeFlow() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__hideForSubscribeFlow() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__modioUIMod() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__modioUIMod() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__showForSubscribeFlowOnly() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__showForSubscribeFlowOnly() ;

constexpr void __cordl_internal_set__hideForSubscribeFlow(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

constexpr void __cordl_internal_set__showForSubscribeFlowOnly(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x9fa5668, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModDependenciesPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModDependenciesPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModDependenciesPanel(ModDependenciesPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModDependenciesPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModDependenciesPanel(ModDependenciesPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27050};

/// @brief Field _modioUIMod, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____modioUIMod;

/// [SerializeField]
/// @brief Field _showForSubscribeFlowOnly, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____showForSubscribeFlowOnly;

/// [SerializeField]
/// @brief Field _hideForSubscribeFlow, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____hideForSubscribeFlow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModDependenciesPanel, ____modioUIMod) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModDependenciesPanel, ____showForSubscribeFlowOnly) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModDependenciesPanel, ____hideForSubscribeFlow) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModDependenciesPanel) == 0x70, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
