#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/UX/VoiceActivationButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceActivationButton)
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class VoiceService;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Oculus::VoiceSDK::UX {
class VoiceActivationButton;
}
// Write type traits
MARK_REF_T(::Oculus::VoiceSDK::UX::VoiceActivationButton*);
DEFINE_IL2CPP_CLASS(::Oculus::VoiceSDK::UX::VoiceActivationButton*, "Oculus.VoiceSDK.UX", "VoiceActivationButton");
// [RequireComponent(typeof(UnityEngine.UI.Button))]
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::VoiceSDK::UX {
// Is value type: false
// CS Name: Oculus.VoiceSDK.UX.VoiceActivationButton
class CORDL_TYPE VoiceActivationButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _activateImmediately, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateImmediately, put=__cordl_internal_set__activateImmediately)) bool  _activateImmediately;

/// @brief Field _activateText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateText, put=__cordl_internal_set__activateText)) ::StringW  _activateText;

/// @brief Field _button, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__button, put=__cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button>  _button;

/// @brief Field _buttonLabel, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonLabel, put=__cordl_internal_set__buttonLabel)) ::UnityW<::UnityEngine::UI::Text>  _buttonLabel;

/// @brief Field _deactivateAndAbort, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__deactivateAndAbort, put=__cordl_internal_set__deactivateAndAbort)) bool  _deactivateAndAbort;

/// @brief Field _deactivateText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__deactivateText, put=__cordl_internal_set__deactivateText)) ::StringW  _deactivateText;

/// @brief Field _isActive, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _request, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__request, put=__cordl_internal_set__request)) ::Meta::WitAi::Requests::VoiceServiceRequest*  _request;

/// @brief Field _voiceService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceService, put=__cordl_internal_set__voiceService)) ::UnityW<::Meta::WitAi::VoiceService>  _voiceService;

/// @brief Method Activate, addr 0xb942ee0, size 0x1c8, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Awake, addr 0xb942950, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Deactivate, addr 0xb9430a8, size 0xa4, virtual false, abstract: false, final false
inline void Deactivate() ;

static inline ::Oculus::VoiceSDK::UX::VoiceActivationButton* New_ctor() ;

/// @brief Method OnClick, addr 0xb942ed0, size 0x10, virtual false, abstract: false, final false
inline void OnClick() ;

/// @brief Method OnDisable, addr 0xb942cf0, size 0x1e0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb942a68, size 0x1e4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStartListening, addr 0xb94314c, size 0xc, virtual false, abstract: false, final false
inline void OnStartListening() ;

/// @brief Method OnStopListening, addr 0xb943158, size 0x24, virtual false, abstract: false, final false
inline void OnStopListening() ;

/// @brief Method RefreshActive, addr 0xb942c4c, size 0xa4, virtual false, abstract: false, final false
inline void RefreshActive() ;

constexpr bool const& __cordl_internal_get__activateImmediately() const;

constexpr bool& __cordl_internal_get__activateImmediately() ;

constexpr ::StringW const& __cordl_internal_get__activateText() const;

constexpr ::StringW& __cordl_internal_get__activateText() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__buttonLabel() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__buttonLabel() ;

constexpr bool const& __cordl_internal_get__deactivateAndAbort() const;

constexpr bool& __cordl_internal_get__deactivateAndAbort() ;

constexpr ::StringW const& __cordl_internal_get__deactivateText() const;

constexpr ::StringW& __cordl_internal_get__deactivateText() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get__request() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get__request() ;

constexpr ::UnityW<::Meta::WitAi::VoiceService> const& __cordl_internal_get__voiceService() const;

constexpr ::UnityW<::Meta::WitAi::VoiceService>& __cordl_internal_get__voiceService() ;

constexpr void __cordl_internal_set__activateImmediately(bool  value) ;

constexpr void __cordl_internal_set__activateText(::StringW  value) ;

constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__buttonLabel(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__deactivateAndAbort(bool  value) ;

constexpr void __cordl_internal_set__deactivateText(::StringW  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__request(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

constexpr void __cordl_internal_set__voiceService(::UnityW<::Meta::WitAi::VoiceService>  value) ;

/// @brief Method .ctor, addr 0xb94317c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceActivationButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceActivationButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceActivationButton(VoiceActivationButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceActivationButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceActivationButton(VoiceActivationButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31682};

/// [Tooltip("Reference to the current voice service")]
/// [SerializeField]
/// @brief Field _voiceService, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::VoiceService>  ____voiceService;

/// [Tooltip("Text to be shown while the voice service is not actively recording")]
/// [SerializeField]
/// @brief Field _activateText, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____activateText;

/// [Tooltip("Whether to immediately send data to service or to wait for the audio threshold")]
/// [SerializeField]
/// @brief Field _activateImmediately, offset: 0x30, size: 0x1, def value: None
 bool  ____activateImmediately;

/// [Tooltip("Text to be shown while the voice service is actively recording")]
/// [SerializeField]
/// @brief Field _deactivateText, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____deactivateText;

/// [Tooltip("Whether to immediately abort request activation on deactivate")]
/// [SerializeField]
/// @brief Field _deactivateAndAbort, offset: 0x40, size: 0x1, def value: None
 bool  ____deactivateAndAbort;

/// @brief Field _button, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____button;

/// @brief Field _buttonLabel, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____buttonLabel;

/// @brief Field _request, offset: 0x58, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ____request;

/// @brief Field _isActive, offset: 0x60, size: 0x1, def value: None
 bool  ____isActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____voiceService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____activateText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____activateImmediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____deactivateText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____deactivateAndAbort) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____button) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____buttonLabel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____request) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceActivationButton, ____isActive) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::VoiceSDK::UX::VoiceActivationButton) == 0x68, "Size mismatch!");

} // namespace end def Oculus::VoiceSDK::UX
