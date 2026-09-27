#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWitVoiceSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Data/zzzz__TTSVoiceSettings_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TTSWitVoiceSettings)
namespace Meta::WitAi::Json {
class WitResponseClass;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Integrations {
class TTSWitVoiceSettings;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*, "Meta.WitAi.TTS.Integrations", "TTSWitVoiceSettings");
// Dependencies Meta.WitAi.TTS.Data.TTSVoiceSettings
namespace Meta::WitAi::TTS::Integrations {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings
class CORDL_TYPE TTSWitVoiceSettings : public ::Meta::WitAi::TTS::Data::TTSVoiceSettings {
public:
// Declarations
 __declspec(property(get=get_EncodedValues)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  EncodedValues;

 __declspec(property(get=get_UniqueId)) ::StringW  UniqueId;

/// @brief Field _encoded, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoded, put=__cordl_internal_set__encoded)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _encoded;

/// @brief Field _uniqueId, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__uniqueId, put=__cordl_internal_set__uniqueId)) ::StringW  _uniqueId;

/// @brief Field pitch, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) int32_t  pitch;

/// @brief Field speed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) int32_t  speed;

/// @brief Field style, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_style, put=__cordl_internal_set_style)) ::StringW  style;

/// @brief Field voice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_voice, put=__cordl_internal_set_voice)) ::StringW  voice;

/// @brief Method CanDecode, addr 0x9e56e30, size 0xe4, virtual false, abstract: false, final false
static inline bool CanDecode(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method DecodeInt, addr 0x9e5ba44, size 0x88, virtual false, abstract: false, final false
inline int32_t DecodeInt(::Meta::WitAi::Json::WitResponseClass*  responseClass, ::StringW  id, int32_t  defaultValue, int32_t  minValue, int32_t  maxValue) ;

/// @brief Method DecodeString, addr 0x9e5b9e0, size 0x64, virtual false, abstract: false, final false
inline ::StringW DecodeString(::Meta::WitAi::Json::WitResponseClass*  responseClass, ::StringW  id, ::StringW  defaultValue) ;

/// @brief Method DeserializeObject, addr 0x9e5b87c, size 0x164, virtual true, abstract: false, final false
inline bool DeserializeObject(::Meta::WitAi::Json::WitResponseClass*  jsonObject) ;

static inline ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings* New_ctor() ;

/// @brief Method RefreshEncodedValues, addr 0x9e5b650, size 0x22c, virtual false, abstract: false, final false
inline void RefreshEncodedValues() ;

/// @brief Method RefreshUniqueId, addr 0x9e5b41c, size 0x1b0, virtual false, abstract: false, final false
inline void RefreshUniqueId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__encoded() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__encoded() ;

constexpr ::StringW const& __cordl_internal_get__uniqueId() const;

constexpr ::StringW& __cordl_internal_get__uniqueId() ;

constexpr int32_t const& __cordl_internal_get_pitch() const;

constexpr int32_t& __cordl_internal_get_pitch() ;

constexpr int32_t const& __cordl_internal_get_speed() const;

constexpr int32_t& __cordl_internal_get_speed() ;

constexpr ::StringW const& __cordl_internal_get_style() const;

constexpr ::StringW& __cordl_internal_get_style() ;

constexpr ::StringW const& __cordl_internal_get_voice() const;

constexpr ::StringW& __cordl_internal_get_voice() ;

constexpr void __cordl_internal_set__encoded(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set__uniqueId(::StringW  value) ;

constexpr void __cordl_internal_set_pitch(int32_t  value) ;

constexpr void __cordl_internal_set_speed(int32_t  value) ;

constexpr void __cordl_internal_set_style(::StringW  value) ;

constexpr void __cordl_internal_set_voice(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e56f14, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EncodedValues, addr 0x9e5b5cc, size 0x84, virtual true, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_EncodedValues() ;

/// @brief Method get_UniqueId, addr 0x9e5b3f0, size 0x2c, virtual true, abstract: false, final false
inline ::StringW get_UniqueId() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSWitVoiceSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSWitVoiceSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSWitVoiceSettings(TTSWitVoiceSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSWitVoiceSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSWitVoiceSettings(TTSWitVoiceSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29134};

/// @brief Field voice, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___voice;

/// @brief Field style, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___style;

/// [Range(50, 200)]
/// @brief Field speed, offset: 0x38, size: 0x4, def value: None
 int32_t  ___speed;

/// [Range(25, 200)]
/// @brief Field pitch, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___pitch;

/// @brief Field _uniqueId, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____uniqueId;

/// @brief Field _encoded, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____encoded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings, ___voice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings, ___style) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings, ___speed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings, ___pitch) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings, ____uniqueId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings, ____encoded) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings) == 0x50, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Integrations
