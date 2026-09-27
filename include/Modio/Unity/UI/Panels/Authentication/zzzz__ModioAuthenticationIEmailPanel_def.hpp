#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationIEmailPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationIEmailPanel)
namespace GlobalNamespace {
struct ModioAuthenticationIEmailPanel__AuthenticationRequest_d__9;
}
namespace GlobalNamespace {
struct ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7;
}
namespace GlobalNamespace {
struct ModioAuthenticationIEmailPanel__OnPressSubmitEmail_d__6;
}
namespace GlobalNamespace {
struct ModioAuthenticationIEmailPanel__ShowCodePrompt_d__10;
}
namespace GlobalNamespace {
struct ModioPanelBase_GainedFocusCause;
}
namespace Modio::Authentication {
class IEmailCodePrompter;
}
namespace Modio::Authentication {
class ModioEmailAuthService;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_InputField;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationIEmailPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationIEmailPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationIEmailPanel
class CORDL_TYPE ModioAuthenticationIEmailPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _AuthenticationRequest_d__9 = ::GlobalNamespace::ModioAuthenticationIEmailPanel__AuthenticationRequest_d__9;

using _OnPressIHaveCode_d__7 = ::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7;

using _OnPressSubmitEmail_d__6 = ::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressSubmitEmail_d__6;

using _ShowCodePrompt_d__10 = ::GlobalNamespace::ModioAuthenticationIEmailPanel__ShowCodePrompt_d__10;

/// @brief Field _authCode, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__authCode, put=__cordl_internal_set__authCode)) ::StringW  _authCode;

/// @brief Field _authService, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__authService, put=__cordl_internal_set__authService)) ::Modio::Authentication::ModioEmailAuthService*  _authService;

/// @brief Field _emailField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailField, put=__cordl_internal_set__emailField)) ::UnityW<::TMPro::TMP_InputField>  _emailField;

/// @brief Field _isCodeEntered, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__isCodeEntered, put=__cordl_internal_set__isCodeEntered)) bool  _isCodeEntered;

/// @brief Field _onError, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onError, put=__cordl_internal_set__onError)) ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  _onError;

/// @brief Convert operator to "::Modio::Authentication::IEmailCodePrompter"
constexpr operator  ::Modio::Authentication::IEmailCodePrompter*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Authentication.ModioAuthenticationIEmailPanel::<AuthenticationRequest>d__9))]
/// @brief Method AuthenticationRequest, addr 0x9fade4c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AuthenticationRequest(::StringW  email, ::System::Threading::Tasks::Task_1<::Modio::Error*>*  authMethod) ;

static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel* New_ctor() ;

/// @brief Method OnCodeEntered, addr 0x9fade28, size 0x24, virtual false, abstract: false, final false
inline void OnCodeEntered(::StringW  code) ;

/// @brief Method OnGainedFocus, addr 0x9fadc2c, size 0xac, virtual true, abstract: false, final false
inline void OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  context) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Authentication.ModioAuthenticationIEmailPanel::<OnPressIHaveCode>d__7))]
/// @brief Method OnPressIHaveCode, addr 0x9fadd80, size 0xa8, virtual false, abstract: false, final false
inline void OnPressIHaveCode() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Authentication.ModioAuthenticationIEmailPanel::<OnPressSubmitEmail>d__6))]
/// @brief Method OnPressSubmitEmail, addr 0x9fadcd8, size 0xa8, virtual false, abstract: false, final false
inline void OnPressSubmitEmail() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Authentication.ModioAuthenticationIEmailPanel::<ShowCodePrompt>d__10))]
/// @brief Method ShowCodePrompt, addr 0x9fadf54, size 0x108, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* ShowCodePrompt() ;

constexpr ::StringW const& __cordl_internal_get__authCode() const;

constexpr ::StringW& __cordl_internal_get__authCode() ;

constexpr ::Modio::Authentication::ModioEmailAuthService* const& __cordl_internal_get__authService() const;

constexpr ::Modio::Authentication::ModioEmailAuthService*& __cordl_internal_get__authService() ;

constexpr ::UnityW<::TMPro::TMP_InputField> const& __cordl_internal_get__emailField() const;

constexpr ::UnityW<::TMPro::TMP_InputField>& __cordl_internal_get__emailField() ;

constexpr bool const& __cordl_internal_get__isCodeEntered() const;

constexpr bool& __cordl_internal_get__isCodeEntered() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& __cordl_internal_get__onError() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& __cordl_internal_get__onError() ;

constexpr void __cordl_internal_set__authCode(::StringW  value) ;

constexpr void __cordl_internal_set__authService(::Modio::Authentication::ModioEmailAuthService*  value) ;

constexpr void __cordl_internal_set__emailField(::UnityW<::TMPro::TMP_InputField>  value) ;

constexpr void __cordl_internal_set__isCodeEntered(bool  value) ;

constexpr void __cordl_internal_set__onError(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value) ;

/// @brief Method .ctor, addr 0x9fae05c, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Modio::Authentication::IEmailCodePrompter"
constexpr ::Modio::Authentication::IEmailCodePrompter* i___Modio__Authentication__IEmailCodePrompter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationIEmailPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationIEmailPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationIEmailPanel(ModioAuthenticationIEmailPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationIEmailPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationIEmailPanel(ModioAuthenticationIEmailPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27104};

/// [SerializeField]
/// @brief Field _emailField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_InputField>  ____emailField;

/// [SerializeField]
/// @brief Field _onError, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  ____onError;

/// @brief Field _authService, offset: 0x68, size: 0x8, def value: None
 ::Modio::Authentication::ModioEmailAuthService*  ____authService;

/// @brief Field _isCodeEntered, offset: 0x70, size: 0x1, def value: None
 bool  ____isCodeEntered;

/// @brief Field _authCode, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____authCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel, ____emailField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel, ____onError) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel, ____authService) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel, ____isCodeEntered) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel, ____authCode) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel) == 0x80, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
