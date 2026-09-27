#pragma once
// IWYU pragma private; include "Photon/Voice/LocalVoiceAudioDummy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/zzzz__LocalVoice_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalVoiceAudioDummy)
namespace Photon::Voice {
class AudioUtil_ILevelMeter;
}
namespace Photon::Voice {
class AudioUtil_IVoiceDetector;
}
namespace Photon::Voice {
class AudioUtil_LevelMeterDummy;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorDummy;
}
namespace Photon::Voice {
class ILocalVoiceAudio;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Photon::Voice {
class LocalVoiceAudioDummy;
}
// Write type traits
MARK_REF_T(::Photon::Voice::LocalVoiceAudioDummy*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::LocalVoiceAudioDummy*, "Photon.Voice", "LocalVoiceAudioDummy");
// Dependencies Photon.Voice.LocalVoice
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.LocalVoiceAudioDummy
class CORDL_TYPE LocalVoiceAudioDummy : public ::Photon::Voice::LocalVoice {
public:
// Declarations
/// @brief Field Dummy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Dummy, put=setStaticF_Dummy)) ::Photon::Voice::LocalVoiceAudioDummy*  Dummy;

 __declspec(property(get=get_LevelMeter)) ::Photon::Voice::AudioUtil_ILevelMeter*  LevelMeter;

 __declspec(property(get=get_VoiceDetector)) ::Photon::Voice::AudioUtil_IVoiceDetector*  VoiceDetector;

 __declspec(property(get=get_VoiceDetectorCalibrating)) bool  VoiceDetectorCalibrating;

/// @brief Field levelMeter, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelMeter, put=__cordl_internal_set_levelMeter)) ::Photon::Voice::AudioUtil_LevelMeterDummy*  levelMeter;

/// @brief Field voiceDetector, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceDetector, put=__cordl_internal_set_voiceDetector)) ::Photon::Voice::AudioUtil_VoiceDetectorDummy*  voiceDetector;

/// @brief Convert operator to "::Photon::Voice::ILocalVoiceAudio"
constexpr operator  ::Photon::Voice::ILocalVoiceAudio*() noexcept;

static inline ::Photon::Voice::LocalVoiceAudioDummy* New_ctor() ;

/// @brief Method VoiceDetectorCalibrate, addr 0xa74c1a0, size 0x4, virtual true, abstract: false, final true
inline void VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated) ;

constexpr ::Photon::Voice::AudioUtil_LevelMeterDummy* const& __cordl_internal_get_levelMeter() const;

constexpr ::Photon::Voice::AudioUtil_LevelMeterDummy*& __cordl_internal_get_levelMeter() ;

constexpr ::Photon::Voice::AudioUtil_VoiceDetectorDummy* const& __cordl_internal_get_voiceDetector() const;

constexpr ::Photon::Voice::AudioUtil_VoiceDetectorDummy*& __cordl_internal_get_voiceDetector() ;

constexpr void __cordl_internal_set_levelMeter(::Photon::Voice::AudioUtil_LevelMeterDummy*  value) ;

constexpr void __cordl_internal_set_voiceDetector(::Photon::Voice::AudioUtil_VoiceDetectorDummy*  value) ;

/// @brief Method .ctor, addr 0xa74c1a4, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Voice::LocalVoiceAudioDummy* getStaticF_Dummy() ;

/// @brief Method get_LevelMeter, addr 0xa74c190, size 0x8, virtual true, abstract: false, final true
inline ::Photon::Voice::AudioUtil_ILevelMeter* get_LevelMeter() ;

/// @brief Method get_VoiceDetector, addr 0xa74c188, size 0x8, virtual true, abstract: false, final true
inline ::Photon::Voice::AudioUtil_IVoiceDetector* get_VoiceDetector() ;

/// @brief Method get_VoiceDetectorCalibrating, addr 0xa74c198, size 0x8, virtual true, abstract: false, final true
inline bool get_VoiceDetectorCalibrating() ;

/// @brief Convert to "::Photon::Voice::ILocalVoiceAudio"
constexpr ::Photon::Voice::ILocalVoiceAudio* i___Photon__Voice__ILocalVoiceAudio() noexcept;

static inline void setStaticF_Dummy(::Photon::Voice::LocalVoiceAudioDummy*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalVoiceAudioDummy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceAudioDummy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalVoiceAudioDummy(LocalVoiceAudioDummy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalVoiceAudioDummy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalVoiceAudioDummy(LocalVoiceAudioDummy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28448};

/// @brief Field voiceDetector, offset: 0xb8, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_VoiceDetectorDummy*  ___voiceDetector;

/// @brief Field levelMeter, offset: 0xc0, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_LevelMeterDummy*  ___levelMeter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::LocalVoiceAudioDummy, ___voiceDetector) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::LocalVoiceAudioDummy, ___levelMeter) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::LocalVoiceAudioDummy) == 0xc8, "Size mismatch!");

} // namespace end def Photon::Voice
