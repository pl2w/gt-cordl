#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSVoiceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TTSVoiceSettings)
namespace Meta::WitAi::Json {
class IJsonDeserializer;
}
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Data::TTSVoiceSettings*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Data::TTSVoiceSettings*, "Meta.WitAi.TTS.Data", "TTSVoiceSettings");
// Dependencies System.Object
namespace Meta::WitAi::TTS::Data {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Data.TTSVoiceSettings
class CORDL_TYPE TTSVoiceSettings : public ::System::Object {
public:
// Declarations
/// @brief Field AppendedText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppendedText, put=__cordl_internal_set_AppendedText)) ::StringW  AppendedText;

 __declspec(property(get=get_EncodedValues)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  EncodedValues;

/// @brief Field PrependedText, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrependedText, put=__cordl_internal_set_PrependedText)) ::StringW  PrependedText;

/// @brief Field SettingsId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SettingsId, put=__cordl_internal_set_SettingsId)) ::StringW  SettingsId;

 __declspec(property(get=get_UniqueId)) ::StringW  UniqueId;

/// @brief Convert operator to "::Meta::WitAi::Json::IJsonDeserializer"
constexpr operator  ::Meta::WitAi::Json::IJsonDeserializer*() noexcept;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool DeserializeObject(::Meta::WitAi::Json::WitResponseClass*  jsonObject) ;

static inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AppendedText() const;

constexpr ::StringW& __cordl_internal_get_AppendedText() ;

constexpr ::StringW const& __cordl_internal_get_PrependedText() const;

constexpr ::StringW& __cordl_internal_get_PrependedText() ;

constexpr ::StringW const& __cordl_internal_get_SettingsId() const;

constexpr ::StringW& __cordl_internal_get_SettingsId() ;

constexpr void __cordl_internal_set_AppendedText(::StringW  value) ;

constexpr void __cordl_internal_set_PrependedText(::StringW  value) ;

constexpr void __cordl_internal_set_SettingsId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e69728, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EncodedValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_EncodedValues() ;

/// @brief Method get_UniqueId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_UniqueId() ;

/// @brief Convert to "::Meta::WitAi::Json::IJsonDeserializer"
constexpr ::Meta::WitAi::Json::IJsonDeserializer* i___Meta__WitAi__Json__IJsonDeserializer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSVoiceSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSVoiceSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSVoiceSettings(TTSVoiceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSVoiceSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSVoiceSettings(TTSVoiceSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29197};

/// [Tooltip("A unique id used for linking these voice settings to a TTS Speaker")]
/// [FormerlySerializedAs("settingsID")]
/// @brief Field SettingsId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___SettingsId;

/// [Tooltip("Text that is added to the front of any TTS request using this voice setting")]
/// [TextArea]
/// @brief Field PrependedText, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PrependedText;

/// [TextArea]
/// [Tooltip("Text that is added to the end of any TTS request using this voice setting")]
/// @brief Field AppendedText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___AppendedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSVoiceSettings, ___SettingsId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSVoiceSettings, ___PrependedText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Data::TTSVoiceSettings, ___AppendedText) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Data::TTSVoiceSettings) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Data
