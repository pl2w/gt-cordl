#pragma once
// IWYU pragma private; include "Meta/WitAi/AudioDurationTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDurationTracker)
namespace Meta::WitAi::Data {
class AudioEncoding;
}
// Forward declare root types
namespace Meta::WitAi {
class AudioDurationTracker;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::AudioDurationTracker*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::AudioDurationTracker*, "Meta.WitAi", "AudioDurationTracker");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.AudioDurationTracker
class CORDL_TYPE AudioDurationTracker : public ::System::Object {
public:
// Declarations
/// @brief Field _audioDurationMs, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioDurationMs, put=__cordl_internal_set__audioDurationMs)) double_t  _audioDurationMs;

/// @brief Field _audioEncoding, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioEncoding, put=__cordl_internal_set__audioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  _audioEncoding;

/// @brief Field _bytesCaptured, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytesCaptured, put=__cordl_internal_set__bytesCaptured)) double_t  _bytesCaptured;

/// @brief Field _bytesPerSample, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__bytesPerSample, put=__cordl_internal_set__bytesPerSample)) int32_t  _bytesPerSample;

/// @brief Field _finalizeTimeStamp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__finalizeTimeStamp, put=__cordl_internal_set__finalizeTimeStamp)) int64_t  _finalizeTimeStamp;

/// @brief Field _requestId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestId, put=__cordl_internal_set__requestId)) ::StringW  _requestId;

/// @brief Method AddBytes, addr 0x9e70e24, size 0x14, virtual false, abstract: false, final false
inline void AddBytes(int64_t  bytes) ;

/// @brief Method FinalizeAudio, addr 0x9e70e38, size 0xcc, virtual false, abstract: false, final false
inline void FinalizeAudio() ;

/// @brief Method GetAudioDuration, addr 0x9e70f0c, size 0x8, virtual false, abstract: false, final false
inline double_t GetAudioDuration() ;

/// @brief Method GetFinalizeTimeStamp, addr 0x9e70f04, size 0x8, virtual false, abstract: false, final false
inline int64_t GetFinalizeTimeStamp() ;

/// @brief Method GetRequestId, addr 0x9e70f14, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetRequestId() ;

static inline ::Meta::WitAi::AudioDurationTracker* New_ctor(::StringW  requestId, ::Meta::WitAi::Data::AudioEncoding*  audioEncoding) ;

constexpr double_t const& __cordl_internal_get__audioDurationMs() const;

constexpr double_t& __cordl_internal_get__audioDurationMs() ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get__audioEncoding() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get__audioEncoding() ;

constexpr double_t const& __cordl_internal_get__bytesCaptured() const;

constexpr double_t& __cordl_internal_get__bytesCaptured() ;

constexpr int32_t const& __cordl_internal_get__bytesPerSample() const;

constexpr int32_t& __cordl_internal_get__bytesPerSample() ;

constexpr int64_t const& __cordl_internal_get__finalizeTimeStamp() const;

constexpr int64_t& __cordl_internal_get__finalizeTimeStamp() ;

constexpr ::StringW const& __cordl_internal_get__requestId() const;

constexpr ::StringW& __cordl_internal_get__requestId() ;

constexpr void __cordl_internal_set__audioDurationMs(double_t  value) ;

constexpr void __cordl_internal_set__audioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set__bytesCaptured(double_t  value) ;

constexpr void __cordl_internal_set__bytesPerSample(int32_t  value) ;

constexpr void __cordl_internal_set__finalizeTimeStamp(int64_t  value) ;

constexpr void __cordl_internal_set__requestId(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e70db4, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  requestId, ::Meta::WitAi::Data::AudioEncoding*  audioEncoding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDurationTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDurationTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDurationTracker(AudioDurationTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDurationTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDurationTracker(AudioDurationTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25530};

/// @brief Field _requestId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____requestId;

/// @brief Field _bytesCaptured, offset: 0x18, size: 0x8, def value: None
 double_t  ____bytesCaptured;

/// @brief Field _bytesPerSample, offset: 0x20, size: 0x4, def value: None
 int32_t  ____bytesPerSample;

/// @brief Field _audioEncoding, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ____audioEncoding;

/// @brief Field _finalizeTimeStamp, offset: 0x30, size: 0x8, def value: None
 int64_t  ____finalizeTimeStamp;

/// @brief Field _audioDurationMs, offset: 0x38, size: 0x8, def value: None
 double_t  ____audioDurationMs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::AudioDurationTracker, ____requestId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::AudioDurationTracker, ____bytesCaptured) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::AudioDurationTracker, ____bytesPerSample) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::AudioDurationTracker, ____audioEncoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::AudioDurationTracker, ____finalizeTimeStamp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::AudioDurationTracker, ____audioDurationMs) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::AudioDurationTracker) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi
