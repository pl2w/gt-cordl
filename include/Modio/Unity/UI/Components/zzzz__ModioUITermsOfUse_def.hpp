#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUITermsOfUse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUITermsOfUse)
namespace GlobalNamespace {
struct ModioUITermsOfUse__GetTermsOfUse_d__9;
}
namespace Modio::Platforms {
class IWebBrowserHandler;
}
namespace Modio {
struct LinkType;
}
namespace Modio {
class TermsOfUse;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace Modio::Unity::UI::Components {
class ModioUITermsOfUse;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::ModioUITermsOfUse*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::ModioUITermsOfUse*, "Modio.Unity.UI.Components", "ModioUITermsOfUse");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.ModioUITermsOfUse
class CORDL_TYPE ModioUITermsOfUse : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetTermsOfUse_d__9 = ::GlobalNamespace::ModioUITermsOfUse__GetTermsOfUse_d__9;

/// @brief Field _agreeText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__agreeText, put=__cordl_internal_set__agreeText)) ::UnityW<::TMPro::TMP_Text>  _agreeText;

/// @brief Field _browserHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__browserHandler, put=setStaticF__browserHandler)) ::Modio::Platforms::IWebBrowserHandler*  _browserHandler;

/// @brief Field _disagreeText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__disagreeText, put=__cordl_internal_set__disagreeText)) ::UnityW<::TMPro::TMP_Text>  _disagreeText;

/// @brief Field _privacyPolicyLinkButtonText, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__privacyPolicyLinkButtonText, put=__cordl_internal_set__privacyPolicyLinkButtonText)) ::UnityW<::TMPro::TMP_Text>  _privacyPolicyLinkButtonText;

/// @brief Field _termsOfUse, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__termsOfUse, put=setStaticF__termsOfUse)) ::Modio::TermsOfUse*  _termsOfUse;

/// @brief Field _termsOfUseLinkButtonText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__termsOfUseLinkButtonText, put=__cordl_internal_set__termsOfUseLinkButtonText)) ::UnityW<::TMPro::TMP_Text>  _termsOfUseLinkButtonText;

/// @brief Field _termsOfUseText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__termsOfUseText, put=__cordl_internal_set__termsOfUseText)) ::UnityW<::TMPro::TMP_Text>  _termsOfUseText;

/// @brief Method ApplyTermsOfUse, addr 0x9fbc2d0, size 0x2a8, virtual false, abstract: false, final false
inline void ApplyTermsOfUse() ;

/// @brief Method GetLinkButtonText, addr 0x9fbc6fc, size 0x218, virtual false, abstract: false, final false
inline ::StringW GetLinkButtonText(::Modio::LinkType  type) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Components.ModioUITermsOfUse::<GetTermsOfUse>d__9))]
/// @brief Method GetTermsOfUse, addr 0x9fbc624, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* GetTermsOfUse() ;

/// @brief Method HyperLinkToPrivacyPolicy, addr 0x9fbcaf0, size 0x44, virtual false, abstract: false, final false
inline void HyperLinkToPrivacyPolicy() ;

/// @brief Method HyperLinkToRefundPolicy, addr 0x9fbcb34, size 0x44, virtual false, abstract: false, final false
inline void HyperLinkToRefundPolicy() ;

/// @brief Method HyperLinkToTOS, addr 0x9fbc914, size 0x44, virtual false, abstract: false, final false
inline void HyperLinkToTOS() ;

/// @brief Method HyperlinkTo, addr 0x9fbc958, size 0x198, virtual false, abstract: false, final false
static inline void HyperlinkTo(::Modio::LinkType  type, ::StringW  fallbackLink) ;

static inline ::Modio::Unity::UI::Components::ModioUITermsOfUse* New_ctor() ;

/// @brief Method OnPluginReady, addr 0x9fbc578, size 0xac, virtual false, abstract: false, final false
inline void OnPluginReady() ;

/// @brief Method Start, addr 0x9fbc224, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__agreeText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__agreeText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__disagreeText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__disagreeText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__privacyPolicyLinkButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__privacyPolicyLinkButtonText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__termsOfUseLinkButtonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__termsOfUseLinkButtonText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__termsOfUseText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__termsOfUseText() ;

constexpr void __cordl_internal_set__agreeText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__disagreeText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__privacyPolicyLinkButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__termsOfUseLinkButtonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__termsOfUseText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x9fbcb78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Platforms::IWebBrowserHandler* getStaticF__browserHandler() ;

static inline ::Modio::TermsOfUse* getStaticF__termsOfUse() ;

static inline void setStaticF__browserHandler(::Modio::Platforms::IWebBrowserHandler*  value) ;

static inline void setStaticF__termsOfUse(::Modio::TermsOfUse*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUITermsOfUse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUITermsOfUse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUITermsOfUse(ModioUITermsOfUse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUITermsOfUse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUITermsOfUse(ModioUITermsOfUse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27158};

/// [SerializeField]
/// @brief Field _termsOfUseText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____termsOfUseText;

/// [SerializeField]
/// @brief Field _agreeText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____agreeText;

/// [SerializeField]
/// @brief Field _disagreeText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____disagreeText;

/// [SerializeField]
/// @brief Field _termsOfUseLinkButtonText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____termsOfUseLinkButtonText;

/// [SerializeField]
/// @brief Field _privacyPolicyLinkButtonText, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____privacyPolicyLinkButtonText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITermsOfUse, ____termsOfUseText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITermsOfUse, ____agreeText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITermsOfUse, ____disagreeText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITermsOfUse, ____termsOfUseLinkButtonText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::ModioUITermsOfUse, ____privacyPolicyLinkButtonText) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::ModioUITermsOfUse) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components
