#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/UX/TTSSpeakerErrorLabel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/UX/zzzz__TTSSpeakerObserver_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSSpeakerErrorLabel)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Meta::WitAi::TTS::UX {
class TTSSpeakerErrorLabel;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel*, "Meta.WitAi.TTS.UX", "TTSSpeakerErrorLabel");
// Dependencies Meta.WitAi.TTS.UX.TTSSpeakerObserver
namespace Meta::WitAi::TTS::UX {
// Is value type: false
// CS Name: Meta.WitAi.TTS.UX.TTSSpeakerErrorLabel
class CORDL_TYPE TTSSpeakerErrorLabel : public ::Meta::WitAi::TTS::UX::TTSSpeakerObserver {
public:
// Declarations
/// @brief Field _errorLabel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorLabel, put=__cordl_internal_set__errorLabel)) ::UnityW<::UnityEngine::UI::Text>  _errorLabel;

/// @brief Field _lastError, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastError, put=__cordl_internal_set__lastError)) ::StringW  _lastError;

/// @brief Field _lastLoadError, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastLoadError, put=__cordl_internal_set__lastLoadError)) ::StringW  _lastLoadError;

/// @brief Method Awake, addr 0x9e4f66c, size 0xbc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentError, addr 0x9e4fd24, size 0x128, virtual false, abstract: false, final false
inline ::StringW GetCurrentError() ;

static inline ::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel* New_ctor() ;

/// @brief Method OnEnable, addr 0x9e4f7dc, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLoadBegin, addr 0x9e4fcdc, size 0x20, virtual true, abstract: false, final false
inline void OnLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method OnLoadFailed, addr 0x9e4fd00, size 0x20, virtual true, abstract: false, final false
inline void OnLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeaker*  speaker, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::StringW  error) ;

/// @brief Method RefreshError, addr 0x9e4fbb4, size 0x128, virtual false, abstract: false, final false
inline void RefreshError() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__errorLabel() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__errorLabel() ;

constexpr ::StringW const& __cordl_internal_get__lastError() const;

constexpr ::StringW& __cordl_internal_get__lastError() ;

constexpr ::StringW const& __cordl_internal_get__lastLoadError() const;

constexpr ::StringW& __cordl_internal_get__lastLoadError() ;

constexpr void __cordl_internal_set__errorLabel(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__lastError(::StringW  value) ;

constexpr void __cordl_internal_set__lastLoadError(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e4ff28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeakerErrorLabel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerErrorLabel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeakerErrorLabel(TTSSpeakerErrorLabel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeakerErrorLabel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeakerErrorLabel(TTSSpeakerErrorLabel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29083};

/// [SerializeField]
/// @brief Field _errorLabel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____errorLabel;

/// @brief Field _lastError, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____lastError;

/// @brief Field _lastLoadError, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____lastLoadError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel, ____errorLabel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel, ____lastError) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel, ____lastLoadError) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::UX::TTSSpeakerErrorLabel) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::UX
