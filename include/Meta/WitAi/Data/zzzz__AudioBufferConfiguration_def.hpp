#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioBufferConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBufferConfiguration)
namespace Meta::WitAi::Data {
class AudioEncoding;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class AudioBufferConfiguration;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::AudioBufferConfiguration*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::AudioBufferConfiguration*, "Meta.WitAi.Data", "AudioBufferConfiguration");
// Dependencies System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.AudioBufferConfiguration
class CORDL_TYPE AudioBufferConfiguration : public ::System::Object {
public:
// Declarations
/// @brief Field encoding, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::Meta::WitAi::Data::AudioEncoding*  encoding;

/// @brief Field micBufferLengthInSeconds, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_micBufferLengthInSeconds, put=__cordl_internal_set_micBufferLengthInSeconds)) float_t  micBufferLengthInSeconds;

/// @brief Field sampleLengthInMs, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sampleLengthInMs, put=__cordl_internal_set_sampleLengthInMs)) int32_t  sampleLengthInMs;

static inline ::Meta::WitAi::Data::AudioBufferConfiguration* New_ctor() ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get_encoding() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get_encoding() ;

constexpr float_t const& __cordl_internal_get_micBufferLengthInSeconds() const;

constexpr float_t& __cordl_internal_get_micBufferLengthInSeconds() ;

constexpr int32_t const& __cordl_internal_get_sampleLengthInMs() const;

constexpr int32_t& __cordl_internal_get_sampleLengthInMs() ;

constexpr void __cordl_internal_set_encoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set_micBufferLengthInSeconds(float_t  value) ;

constexpr void __cordl_internal_set_sampleLengthInMs(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e9a14c, size 0x78, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBufferConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBufferConfiguration(AudioBufferConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBufferConfiguration(AudioBufferConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25695};

/// [Tooltip("The length of the individual samples read from the audio source")]
/// [Range(10, 500)]
/// [SerializeField]
/// @brief Field sampleLengthInMs, offset: 0x10, size: 0x4, def value: None
 int32_t  ___sampleLengthInMs;

/// [Tooltip("The total audio data that should be buffered for lookback purposes on sound based activations.")]
/// [SerializeField]
/// @brief Field micBufferLengthInSeconds, offset: 0x14, size: 0x4, def value: None
 float_t  ___micBufferLengthInSeconds;

/// [Tooltip("The audio encoding to be used for transmission of audio data, should keep as default in almost all scenarios.  Adjust encoding directly on IAudioInput script such as Mic to capture at different rates.")]
/// [SerializeField]
/// @brief Field encoding, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ___encoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::AudioBufferConfiguration, ___sampleLengthInMs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBufferConfiguration, ___micBufferLengthInSeconds) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBufferConfiguration, ___encoding) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::AudioBufferConfiguration) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
