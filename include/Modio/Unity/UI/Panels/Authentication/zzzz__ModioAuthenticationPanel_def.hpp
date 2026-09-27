#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationPanel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
CORDL_MODULE_EXPORT(ModioAuthenticationPanel)
namespace GlobalNamespace {
struct ModioAuthenticationPanel__AttemptSso_d__12;
}
namespace GlobalNamespace {
struct ModioAuthenticationPanel__GetTermsAndShowPanel_d__10;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
class Task;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationPanel;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel*, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationPanel");
// Dependencies Modio.Unity.UI.Panels.ModioPanelBase
namespace Modio::Unity::UI::Panels::Authentication {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationPanel
class CORDL_TYPE ModioAuthenticationPanel : public ::Modio::Unity::UI::Panels::ModioPanelBase {
public:
// Declarations
using _AttemptSso_d__12 = ::GlobalNamespace::ModioAuthenticationPanel__AttemptSso_d__12;

using _GetTermsAndShowPanel_d__10 = ::GlobalNamespace::ModioAuthenticationPanel__GetTermsAndShowPanel_d__10;

/// @brief Field <ForceShowTermsOfUse>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ForceShowTermsOfUse_k__BackingField, put=setStaticF__ForceShowTermsOfUse_k__BackingField)) bool  _ForceShowTermsOfUse_k__BackingField;

/// @brief Field _fallbackToEmailAuth, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__fallbackToEmailAuth, put=__cordl_internal_set__fallbackToEmailAuth)) bool  _fallbackToEmailAuth;

/// @brief Field _onError, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onError, put=__cordl_internal_set__onError)) ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  _onError;

/// @brief Field _onOffline, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onOffline, put=__cordl_internal_set__onOffline)) ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  _onOffline;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Authentication.ModioAuthenticationPanel::<AttemptSso>d__12))]
/// @brief Method AttemptSso, addr 0x9faf084, size 0xec, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AttemptSso(bool  agreedToTerms) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Panels.Authentication.ModioAuthenticationPanel::<GetTermsAndShowPanel>d__10))]
/// @brief Method GetTermsAndShowPanel, addr 0x9faf170, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetTermsAndShowPanel() ;

/// @brief Method LateUpdate, addr 0x9faf24c, size 0x7c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9faeef8, size 0xa8, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPluginReady, addr 0x9faefa0, size 0xe4, virtual false, abstract: false, final false
inline void OnPluginReady() ;

/// @brief Method OpenAuthFlow, addr 0x9fa51dc, size 0x1e4, virtual false, abstract: false, final false
inline void OpenAuthFlow() ;

constexpr bool const& __cordl_internal_get__fallbackToEmailAuth() const;

constexpr bool& __cordl_internal_get__fallbackToEmailAuth() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& __cordl_internal_get__onError() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& __cordl_internal_get__onError() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>* const& __cordl_internal_get__onOffline() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*& __cordl_internal_get__onOffline() ;

constexpr void __cordl_internal_set__fallbackToEmailAuth(bool  value) ;

constexpr void __cordl_internal_set__onError(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value) ;

constexpr void __cordl_internal_set__onOffline(::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  value) ;

/// @brief Method .ctor, addr 0x9faf2c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__ForceShowTermsOfUse_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_ForceShowTermsOfUse, addr 0x9faee60, size 0x48, virtual false, abstract: false, final false
static inline bool get_ForceShowTermsOfUse() ;

static inline void setStaticF__ForceShowTermsOfUse_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ForceShowTermsOfUse, addr 0x9faeea8, size 0x50, virtual false, abstract: false, final false
static inline void set_ForceShowTermsOfUse(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationPanel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationPanel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAuthenticationPanel(ModioAuthenticationPanel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAuthenticationPanel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAuthenticationPanel(ModioAuthenticationPanel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27108};

/// [SerializeField]
/// @brief Field _onError, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  ____onError;

/// [SerializeField]
/// @brief Field _onOffline, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::Modio::Error*>*  ____onOffline;

/// @brief Field _fallbackToEmailAuth, offset: 0x68, size: 0x1, def value: None
 bool  ____fallbackToEmailAuth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel, ____onError) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel, ____onOffline) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel, ____fallbackToEmailAuth) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationPanel) == 0x70, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels::Authentication
