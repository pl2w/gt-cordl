#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/UX/VoiceTranscriptionLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/zzzz__VoiceService_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VoiceTranscriptionLabel)
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Oculus::VoiceSDK::UX {
class VoiceTranscriptionLabel;
}
// Write type traits
MARK_REF_T(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*);
DEFINE_IL2CPP_CLASS(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel*, "Oculus.VoiceSDK.UX", "VoiceTranscriptionLabel");
// [RequireComponent(typeof(UnityEngine.UI.Text))]
// [ExecuteInEditMode]
// Dependencies Meta.WitAi.VoiceService, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::VoiceSDK::UX {
// Is value type: false
// CS Name: Oculus.VoiceSDK.UX.VoiceTranscriptionLabel
class CORDL_TYPE VoiceTranscriptionLabel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Label)) ::UnityW<::UnityEngine::UI::Text>  Label;

/// @brief Field _errorColor, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get__errorColor, put=__cordl_internal_set__errorColor)) ::UnityEngine::Color  _errorColor;

/// @brief Field _label, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__label, put=__cordl_internal_set__label)) ::UnityW<::UnityEngine::UI::Text>  _label;

/// @brief Field _promptColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__promptColor, put=__cordl_internal_set__promptColor)) ::UnityEngine::Color  _promptColor;

/// @brief Field _promptDefault, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__promptDefault, put=__cordl_internal_set__promptDefault)) ::StringW  _promptDefault;

/// @brief Field _promptListening, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__promptListening, put=__cordl_internal_set__promptListening)) ::StringW  _promptListening;

/// @brief Field _transcriptionColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__transcriptionColor, put=__cordl_internal_set__transcriptionColor)) ::UnityEngine::Color  _transcriptionColor;

/// @brief Field _voiceServices, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceServices, put=__cordl_internal_set__voiceServices)) ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  _voiceServices;

/// @brief Method Awake, addr 0xb9432b0, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel* New_ctor() ;

/// @brief Method OnComplete, addr 0xb943b4c, size 0xbc, virtual false, abstract: false, final false
inline void OnComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method OnDisable, addr 0xb943630, size 0x2e8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb943348, size 0x2e8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnError, addr 0xb943ab8, size 0x94, virtual false, abstract: false, final false
inline void OnError(::StringW  status, ::StringW  error) ;

/// @brief Method OnStartListening, addr 0xb943918, size 0x10, virtual false, abstract: false, final false
inline void OnStartListening() ;

/// @brief Method OnTranscriptionChange, addr 0xb943aac, size 0xc, virtual false, abstract: false, final false
inline void OnTranscriptionChange(::StringW  text) ;

/// @brief Method SetText, addr 0xb943928, size 0x184, virtual false, abstract: false, final false
inline void SetText(::StringW  newText, ::UnityEngine::Color  newColor) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__errorColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__errorColor() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__label() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__label() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__promptColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__promptColor() ;

constexpr ::StringW const& __cordl_internal_get__promptDefault() const;

constexpr ::StringW& __cordl_internal_get__promptDefault() ;

constexpr ::StringW const& __cordl_internal_get__promptListening() const;

constexpr ::StringW& __cordl_internal_get__promptListening() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__transcriptionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__transcriptionColor() ;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>> const& __cordl_internal_get__voiceServices() const;

constexpr ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>& __cordl_internal_get__voiceServices() ;

constexpr void __cordl_internal_set__errorColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__label(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__promptColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__promptDefault(::StringW  value) ;

constexpr void __cordl_internal_set__promptListening(::StringW  value) ;

constexpr void __cordl_internal_set__transcriptionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__voiceServices(::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  value) ;

/// @brief Method .ctor, addr 0xb943c08, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Label, addr 0xb943200, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Text> get_Label() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceTranscriptionLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceTranscriptionLabel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceTranscriptionLabel(VoiceTranscriptionLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceTranscriptionLabel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceTranscriptionLabel(VoiceTranscriptionLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31683};

/// @brief Field _label, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____label;

/// [Header("Listen Settings")]
/// [Tooltip("Various voice services to be observed")]
/// [SerializeField]
/// @brief Field _voiceServices, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::WitAi::VoiceService>>  ____voiceServices;

/// [Tooltip("Text color while receiving text")]
/// [SerializeField]
/// @brief Field _transcriptionColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ____transcriptionColor;

/// [Header("Prompt Settings")]
/// [Tooltip("Color to be used for prompt text")]
/// [SerializeField]
/// @brief Field _promptColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ____promptColor;

/// [Tooltip("Prompt text that displays while listening but prior to completion")]
/// [SerializeField]
/// @brief Field _promptDefault, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____promptDefault;

/// [Tooltip("Prompt text that displays while listening but prior to completion")]
/// [SerializeField]
/// @brief Field _promptListening, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____promptListening;

/// [Header("Error Settings")]
/// [Tooltip("Color to be used for error text")]
/// [SerializeField]
/// @brief Field _errorColor, offset: 0x60, size: 0x10, def value: None
 ::UnityEngine::Color  ____errorColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____label) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____voiceServices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____transcriptionColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____promptColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____promptDefault) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____promptListening) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel, ____errorColor) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::VoiceSDK::UX::VoiceTranscriptionLabel) == 0x70, "Size mismatch!");

} // namespace end def Oculus::VoiceSDK::UX
