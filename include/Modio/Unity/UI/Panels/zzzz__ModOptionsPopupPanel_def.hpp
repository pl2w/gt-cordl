#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModOptionsPopupPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModOptionsPopupPanel)
namespace Modio::Unity::UI::Components::Selectables {
class ModioUIButton;
}
namespace Modio::Unity::UI::Components {
class ModioUIMod;
}
namespace Modio::Unity::UI::Panels {
class ModioPopupPositioning;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModOptionsPopupPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModOptionsPopupPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModOptionsPopupPanel*, "Modio.Unity.UI.Panels", "ModOptionsPopupPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModOptionsPopupPanel
class CORDL_TYPE ModOptionsPopupPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Field _buttonToHighlight, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonToHighlight, put=__cordl_internal_set__buttonToHighlight)) ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  _buttonToHighlight;

/// @brief Field _modioUIMod, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__modioUIMod, put=__cordl_internal_set__modioUIMod)) ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  _modioUIMod;

/// @brief Field _popupPositioning, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__popupPositioning, put=__cordl_internal_set__popupPositioning)) ::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning>  _popupPositioning;

/// @brief Field _rectToPosition, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectToPosition, put=__cordl_internal_set__rectToPosition)) ::UnityW<::UnityEngine::RectTransform>  _rectToPosition;

/// @brief Field _rectToPositionWithin, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectToPositionWithin, put=__cordl_internal_set__rectToPositionWithin)) ::UnityW<::UnityEngine::RectTransform>  _rectToPositionWithin;

/// @brief Method Awake, addr 0x9fac29c, size 0x60, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method FocusedPanelLateUpdate, addr 0x9fac4d0, size 0x94, virtual true, abstract: false, final false
inline void FocusedPanelLateUpdate() ;

static inline ::Modio::Unity::UI::Panels::ModOptionsPopupPanel* New_ctor() ;

/// @brief Method OnLostFocus, addr 0x9fac448, size 0x88, virtual true, abstract: false, final false
inline void OnLostFocus() ;

/// @brief Method OpenPanel, addr 0x9fac2fc, size 0x14c, virtual false, abstract: false, final false
inline void OpenPanel(::Modio::Unity::UI::Components::ModioUIMod*  modUI) ;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton> const& __cordl_internal_get__buttonToHighlight() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>& __cordl_internal_get__buttonToHighlight() ;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& __cordl_internal_get__modioUIMod() const;

constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& __cordl_internal_get__modioUIMod() ;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning> const& __cordl_internal_get__popupPositioning() const;

constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning>& __cordl_internal_get__popupPositioning() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectToPosition() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectToPosition() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectToPositionWithin() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectToPositionWithin() ;

constexpr void __cordl_internal_set__buttonToHighlight(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  value) ;

constexpr void __cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value) ;

constexpr void __cordl_internal_set__popupPositioning(::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning>  value) ;

constexpr void __cordl_internal_set__rectToPosition(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__rectToPositionWithin(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x9fac564, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModOptionsPopupPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModOptionsPopupPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModOptionsPopupPanel(ModOptionsPopupPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModOptionsPopupPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModOptionsPopupPanel(ModOptionsPopupPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27085};

/// @brief Field _modioUIMod, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  ____modioUIMod;

/// @brief Field _rectToPosition, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectToPosition;

/// @brief Field _rectToPositionWithin, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectToPositionWithin;

/// @brief Field _popupPositioning, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning>  ____popupPositioning;

/// @brief Field _buttonToHighlight, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  ____buttonToHighlight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModOptionsPopupPanel, ____modioUIMod) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModOptionsPopupPanel, ____rectToPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModOptionsPopupPanel, ____rectToPositionWithin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModOptionsPopupPanel, ____popupPositioning) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModOptionsPopupPanel, ____buttonToHighlight) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModOptionsPopupPanel) == 0x80, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels
