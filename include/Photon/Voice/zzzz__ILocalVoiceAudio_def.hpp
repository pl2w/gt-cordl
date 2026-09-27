#pragma once
// IWYU pragma private; include "Photon/Voice/ILocalVoiceAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ILocalVoiceAudio)
namespace Photon::Voice {
class AudioUtil_ILevelMeter;
}
namespace Photon::Voice {
class AudioUtil_IVoiceDetector;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Photon::Voice {
class ILocalVoiceAudio;
}
// Write type traits
MARK_REF_T(::Photon::Voice::ILocalVoiceAudio*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::ILocalVoiceAudio*, "Photon.Voice", "ILocalVoiceAudio");
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.ILocalVoiceAudio
class CORDL_TYPE ILocalVoiceAudio {
public:
// Declarations
 __declspec(property(get=get_LevelMeter)) ::Photon::Voice::AudioUtil_ILevelMeter*  LevelMeter;

 __declspec(property(get=get_VoiceDetector)) ::Photon::Voice::AudioUtil_IVoiceDetector*  VoiceDetector;

 __declspec(property(get=get_VoiceDetectorCalibrating)) bool  VoiceDetectorCalibrating;

/// @brief Method VoiceDetectorCalibrate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated) ;

/// @brief Method get_LevelMeter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Photon::Voice::AudioUtil_ILevelMeter* get_LevelMeter() ;

/// @brief Method get_VoiceDetector, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Photon::Voice::AudioUtil_IVoiceDetector* get_VoiceDetector() ;

/// @brief Method get_VoiceDetectorCalibrating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_VoiceDetectorCalibrating() ;

// Ctor Parameters [CppParam { name: "", ty: "ILocalVoiceAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILocalVoiceAudio(ILocalVoiceAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28445};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
