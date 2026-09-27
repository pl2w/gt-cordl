#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceAudio_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LocalVoiceFramed_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoiceAudio_1)
namespace Photon::Voice {
class AudioUtil_ILevelMeter;
}
namespace Photon::Voice {
class AudioUtil_IVoiceDetector;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_LevelMeter_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceDetectorCalibration_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceDetector_1;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class ILocalVoiceAudio;
}
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class LocalVoiceAudio_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::LocalVoiceAudio_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::LocalVoiceAudio_1, "Photon.Voice", "LocalVoiceAudio`1");
// Dependencies Photon.Voice.LocalVoiceFramed`1<T>
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.LocalVoiceAudio`1<T>
class CORDL_TYPE LocalVoiceAudio_1 : public ::Photon::Voice::LocalVoiceFramed_1<T> {
public:
// Declarations
 __declspec(property(get=get_LevelMeter)) ::Photon::Voice::AudioUtil_ILevelMeter*  LevelMeter;

 __declspec(property(get=get_VoiceDetector)) ::Photon::Voice::AudioUtil_IVoiceDetector*  VoiceDetector;

 __declspec(property(get=get_VoiceDetectorCalibrating)) bool  VoiceDetectorCalibrating;

/// @brief Field channels, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field levelMeter, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelMeter, put=__cordl_internal_set_levelMeter)) ::Photon::Voice::AudioUtil_LevelMeter_1<T>*  levelMeter;

/// @brief Field resampleSource, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_resampleSource, put=__cordl_internal_set_resampleSource)) bool  resampleSource;

/// @brief Field voiceDetector, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceDetector, put=__cordl_internal_set_voiceDetector)) ::Photon::Voice::AudioUtil_VoiceDetector_1<T>*  voiceDetector;

/// @brief Field voiceDetectorCalibration, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceDetectorCalibration, put=__cordl_internal_set_voiceDetectorCalibration)) ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  voiceDetectorCalibration;

/// @brief Convert operator to "::Photon::Voice::ILocalVoiceAudio"
constexpr operator  ::Photon::Voice::ILocalVoiceAudio*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Photon::Voice::LocalVoiceAudio_1<T>* Create(::Photon::Voice::VoiceClient*  voiceClient, uint8_t  voiceId, ::Photon::Voice::IEncoder*  encoder, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId) ;

static inline ::Photon::Voice::LocalVoiceAudio_1<T>* New_ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId) ;

/// @brief Method VoiceDetectorCalibrate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated) ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr ::Photon::Voice::AudioUtil_LevelMeter_1<T>* const& __cordl_internal_get_levelMeter() const;

constexpr ::Photon::Voice::AudioUtil_LevelMeter_1<T>*& __cordl_internal_get_levelMeter() ;

constexpr bool const& __cordl_internal_get_resampleSource() const;

constexpr bool& __cordl_internal_get_resampleSource() ;

constexpr ::Photon::Voice::AudioUtil_VoiceDetector_1<T>* const& __cordl_internal_get_voiceDetector() const;

constexpr ::Photon::Voice::AudioUtil_VoiceDetector_1<T>*& __cordl_internal_get_voiceDetector() ;

constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>* const& __cordl_internal_get_voiceDetectorCalibration() const;

constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*& __cordl_internal_get_voiceDetectorCalibration() ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_levelMeter(::Photon::Voice::AudioUtil_LevelMeter_1<T>*  value) ;

constexpr void __cordl_internal_set_resampleSource(bool  value) ;

constexpr void __cordl_internal_set_voiceDetector(::Photon::Voice::AudioUtil_VoiceDetector_1<T>*  value) ;

constexpr void __cordl_internal_set_voiceDetectorCalibration(::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceClient*  voiceClient, ::Photon::Voice::IEncoder*  encoder, uint8_t  id, ::Photon::Voice::VoiceInfo  voiceInfo, ::Photon::Voice::IAudioDesc*  audioSourceDesc, int32_t  channelId) ;

/// @brief Method get_LevelMeter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Photon::Voice::AudioUtil_ILevelMeter* get_LevelMeter() ;

/// @brief Method get_VoiceDetector, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Photon::Voice::AudioUtil_IVoiceDetector* get_VoiceDetector() ;

/// @brief Method get_VoiceDetectorCalibrating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_VoiceDetectorCalibrating() ;

/// @brief Convert to "::Photon::Voice::ILocalVoiceAudio"
constexpr ::Photon::Voice::ILocalVoiceAudio* i___Photon__Voice__ILocalVoiceAudio() noexcept;

/// @brief Method initBuiltinProcessors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void initBuiltinProcessors() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceAudio_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceAudio_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceAudio_1(LocalVoiceAudio_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceAudio_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceAudio_1(LocalVoiceAudio_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28447};

/// @brief Field voiceDetector, offset: 0x108, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_VoiceDetector_1<T>*  ___voiceDetector;

/// @brief Field voiceDetectorCalibration, offset: 0x110, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  ___voiceDetectorCalibration;

/// @brief Field levelMeter, offset: 0x118, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_LevelMeter_1<T>*  ___levelMeter;

/// @brief Field channels, offset: 0x120, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field resampleSource, offset: 0x124, size: 0x1, def value: None
 bool  ___resampleSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
