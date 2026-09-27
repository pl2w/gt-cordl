#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationCodePanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationCodePanel)
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio {
class Error;
}
namespace System {
template<typename T>
class Action_1;
}
namespace TMPro {
class TMP_InputField;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationCodePanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationCodePanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationCodePanel
class CORDL_TYPE ModioAuthenticationCodePanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
/// @brief Field _codeCallback, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__codeCallback, put=__cordl_internal_set__codeCallback)) ::System::Action_1<::StringW>*  _codeCallback;

/// @brief Field _codeField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__codeField, put=__cordl_internal_set__codeField)) ::UnityW<::TMPro::TMP_InputField>  _codeField;

/// @brief Field _emailDisplay, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailDisplay, put=__cordl_internal_set__emailDisplay)) ::UnityW<::TMPro::TMP_Text>  _emailDisplay;

/// @brief Field _onError, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onError, put=__cordl_internal_set__onError)) ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  _onError;

/// @brief Method CancelPressed, addr 0x9fadb38, size 0x18, virtual true, abstract: false, final false
inline void CancelPressed() ;

static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel* New_ctor() ;

/// @brief Method OnGainedFocus, addr 0x9fad9a8, size 0x68, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour) ;

/// @brief Method OnPressCancel, addr 0x9fadbdc, size 0x40, virtual false, abstract: false, final false
inline void OnPressCancel() ;

/// @brief Method OnPressSubmitCode, addr 0x9fadabc, size 0x7c, virtual false, abstract: false, final false
inline void OnPressSubmitCode() ;

/// @brief Method OnPressUseAnotherEmail, addr 0x9fadb50, size 0x8c, virtual false, abstract: false, final false
inline void OnPressUseAnotherEmail() ;

/// @brief Method OpenPanel, addr 0x9fada10, size 0xac, virtual false, abstract: false, final false
inline void OpenPanel(::StringW  emailFieldText, ::System::Action_1<::StringW>*  codeCallback) ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get__codeCallback() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get__codeCallback() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__codeField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__codeField() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__emailDisplay() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__emailDisplay() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& __cordl_internal_get__onError() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& __cordl_internal_get__onError() ;

constexpr void __cordl_internal_set__codeCallback(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__codeField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__emailDisplay(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__onError(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value) ;

/// @brief Method .ctor, addr 0x9fadc1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationCodePanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationCodePanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationCodePanel(ModioAuthenticationCodePanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationCodePanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationCodePanel(ModioAuthenticationCodePanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27098};

/// [SerializeField]
/// @brief Field _codeField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____codeField;

/// [SerializeField]
/// @brief Field _emailDisplay, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____emailDisplay;

/// [SerializeField]
/// @brief Field _onError, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  ____onError;

/// @brief Field _codeCallback, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ____codeCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel, ____codeField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel, ____emailDisplay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel, ____onError) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel, ____codeCallback) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationCodePanel) == 0x78, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
