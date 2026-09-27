#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIToggleDeactivateWhenPanelLostFocus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ModioUIToggleDeactivateWhenPanelLostFocus)
namespace Modio::Unity::UI::Panels {
class ModioPanelBase;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIToggleDeactivateWhenPanelLostFocus;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*, "Modio.Unity.UI.Components.Selectables", "ModioUIToggleDeactivateWhenPanelLostFocus");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components::Selectables {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Selectables.ModioUIToggleDeactivateWhenPanelLostFocus
class CORDL_TYPE ModioUIToggleDeactivateWhenPanelLostFocus : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _panel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__panel, put=__cordl_internal_set__panel)) ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  _panel;

/// @brief Field _toggle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggle, put=__cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle>  _toggle;

/// @brief Method Awake, addr 0x9fc288c, size 0xd8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fc2a88, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnValueChanged, addr 0x9fc2964, size 0x124, virtual false, abstract: false, final false
inline void OnValueChanged(bool  isOn) ;

/// @brief Method PanelChangedFocus, addr 0x9fc2b58, size 0x24, virtual false, abstract: false, final false
inline void PanelChangedFocus(bool  hasFocus) ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& __cordl_internal_get__panel() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& __cordl_internal_get__panel() ;

constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle() ;

constexpr void __cordl_internal_set__panel(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value) ;

constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value) ;

/// @brief Method .ctor, addr 0x9fc2b7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIToggleDeactivateWhenPanelLostFocus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIToggleDeactivateWhenPanelLostFocus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIToggleDeactivateWhenPanelLostFocus(ModioUIToggleDeactivateWhenPanelLostFocus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIToggleDeactivateWhenPanelLostFocus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIToggleDeactivateWhenPanelLostFocus(ModioUIToggleDeactivateWhenPanelLostFocus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27189};

/// [SerializeField]
/// @brief Field _panel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  ____panel;

/// @brief Field _toggle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  ____toggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus, ____panel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus, ____toggle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Selectables
