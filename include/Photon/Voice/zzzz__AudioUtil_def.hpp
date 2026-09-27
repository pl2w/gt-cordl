#pragma once
// IWYU pragma private; include "Photon/Voice/AudioUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioUtil)
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
class AudioUtil_LevelMeterFloat;
}
namespace Photon::Voice {
class AudioUtil_LevelMeterShort;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_LevelMeter_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_Resampler_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_TempoUp_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_ToneAudioPusher_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_ToneAudioReader_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceDetectorCalibration_1;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorDummy;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorFloat;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorShort;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceDetector_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceLevelDetectCalibrate_1;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
template<typename T>
class IAudioPusher_1;
}
namespace Photon::Voice {
template<typename T>
class IAudioReader_1;
}
namespace Photon::Voice {
template<typename T>
class IDataReader_1;
}
namespace Photon::Voice {
template<typename T>
class IProcessor_1;
}
namespace Photon::Voice {
template<typename TType,typename TInfo>
class ObjectFactory_2;
}
namespace Photon::Voice {
template<typename T>
class ToneAudioReader_1_AudioUtil___c;
}
namespace System::Timers {
class ElapsedEventArgs;
}
namespace System::Timers {
class Timer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice {
class AudioUtil;
}
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
class AudioUtil_LevelMeterFloat;
}
namespace Photon::Voice {
class AudioUtil_LevelMeterShort;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_LevelMeter_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_Resampler_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_TempoUp_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_ToneAudioPusher_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_ToneAudioReader_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceDetectorCalibration_1;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorDummy;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorFloat;
}
namespace Photon::Voice {
class AudioUtil_VoiceDetectorShort;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceDetector_1;
}
namespace Photon::Voice {
template<typename T>
class AudioUtil_VoiceLevelDetectCalibrate_1;
}
namespace Photon::Voice {
template<typename T>
class ToneAudioReader_1_AudioUtil___c;
}
// Write type traits
MARK_REF_T(::Photon::Voice::AudioUtil*);
MARK_REF_T(::Photon::Voice::AudioUtil_ILevelMeter*);
MARK_REF_T(::Photon::Voice::AudioUtil_IVoiceDetector*);
MARK_REF_T(::Photon::Voice::AudioUtil_LevelMeterDummy*);
MARK_REF_T(::Photon::Voice::AudioUtil_LevelMeterFloat*);
MARK_REF_T(::Photon::Voice::AudioUtil_LevelMeterShort*);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_LevelMeter_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_Resampler_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_TempoUp_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_ToneAudioPusher_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_ToneAudioReader_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1);
MARK_REF_T(::Photon::Voice::AudioUtil_VoiceDetectorDummy*);
MARK_REF_T(::Photon::Voice::AudioUtil_VoiceDetectorFloat*);
MARK_REF_T(::Photon::Voice::AudioUtil_VoiceDetectorShort*);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_VoiceDetector_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::ToneAudioReader_1_AudioUtil___c);
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil*, "Photon.Voice", "AudioUtil");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_ILevelMeter*, "Photon.Voice", "AudioUtil/ILevelMeter");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_IVoiceDetector*, "Photon.Voice", "AudioUtil/IVoiceDetector");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_LevelMeterDummy*, "Photon.Voice", "AudioUtil/LevelMeterDummy");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_LevelMeterFloat*, "Photon.Voice", "AudioUtil/LevelMeterFloat");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_LevelMeterShort*, "Photon.Voice", "AudioUtil/LevelMeterShort");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_LevelMeter_1, "Photon.Voice", "AudioUtil/LevelMeter`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_Resampler_1, "Photon.Voice", "AudioUtil/Resampler`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_TempoUp_1, "Photon.Voice", "AudioUtil/TempoUp`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_ToneAudioPusher_1, "Photon.Voice", "AudioUtil/ToneAudioPusher`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_ToneAudioReader_1, "Photon.Voice", "AudioUtil/ToneAudioReader`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1, "Photon.Voice", "AudioUtil/VoiceDetectorCalibration`1");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_VoiceDetectorDummy*, "Photon.Voice", "AudioUtil/VoiceDetectorDummy");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_VoiceDetectorFloat*, "Photon.Voice", "AudioUtil/VoiceDetectorFloat");
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioUtil_VoiceDetectorShort*, "Photon.Voice", "AudioUtil/VoiceDetectorShort");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_VoiceDetector_1, "Photon.Voice", "AudioUtil/VoiceDetector`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1, "Photon.Voice", "AudioUtil/VoiceLevelDetectCalibrate`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::ToneAudioReader_1_AudioUtil___c, "Photon.Voice", "AudioUtil/ToneAudioReader`1/<>c");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil
class CORDL_TYPE AudioUtil : public ::System::Object {
public:
// Declarations
using ILevelMeter = ::Photon::Voice::AudioUtil_ILevelMeter;

using IVoiceDetector = ::Photon::Voice::AudioUtil_IVoiceDetector;

using LevelMeterDummy = ::Photon::Voice::AudioUtil_LevelMeterDummy;

using LevelMeterFloat = ::Photon::Voice::AudioUtil_LevelMeterFloat;

using LevelMeterShort = ::Photon::Voice::AudioUtil_LevelMeterShort;

template<typename T>
using LevelMeter_1 = ::Photon::Voice::AudioUtil_LevelMeter_1<T>;

template<typename T>
using Resampler_1 = ::Photon::Voice::AudioUtil_Resampler_1<T>;

template<typename T>
using TempoUp_1 = ::Photon::Voice::AudioUtil_TempoUp_1<T>;

template<typename T>
using ToneAudioPusher_1 = ::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>;

template<typename T>
using ToneAudioReader_1 = ::Photon::Voice::AudioUtil_ToneAudioReader_1<T>;

template<typename T>
using VoiceDetectorCalibration_1 = ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>;

using VoiceDetectorDummy = ::Photon::Voice::AudioUtil_VoiceDetectorDummy;

using VoiceDetectorFloat = ::Photon::Voice::AudioUtil_VoiceDetectorFloat;

using VoiceDetectorShort = ::Photon::Voice::AudioUtil_VoiceDetectorShort;

template<typename T>
using VoiceDetector_1 = ::Photon::Voice::AudioUtil_VoiceDetector_1<T>;

template<typename T>
using VoiceLevelDetectCalibrate_1 = ::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>;

/// @brief Method Convert, addr 0xa745274, size 0x80, virtual false, abstract: false, final false
static inline void Convert(::ArrayW<float_t>  src, ::ArrayW<int16_t>  dst, int32_t  dstCount) ;

/// @brief Method Convert, addr 0xa7452f4, size 0x70, virtual false, abstract: false, final false
static inline void Convert(::ArrayW<int16_t>  src, ::ArrayW<float_t>  dst, int32_t  dstCount) ;

/// @brief Method ForceToStereo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ForceToStereo(::ArrayW<T>  src, ::ArrayW<T>  dst, int32_t  srcChannels) ;

/// @brief Method Resample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Resample(::ArrayW<T>  src, ::ArrayW<T>  dst, int32_t  dstCount, int32_t  channels) ;

/// @brief Method Resample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Resample(::ArrayW<T>  src, int32_t  srcOffset, int32_t  srcCount, ::ArrayW<T>  dst, int32_t  dstOffset, int32_t  dstCount, int32_t  channels) ;

/// @brief Method Resample, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Resample(::ArrayW<T>  src, int32_t  srcOffset, int32_t  srcCount, int32_t  srcChannels, ::ArrayW<T>  dst, int32_t  dstOffset, int32_t  dstCount, int32_t  dstChannels) ;

/// @brief Method ResampleAndConvert, addr 0xa745074, size 0x200, virtual false, abstract: false, final false
static inline void ResampleAndConvert(::ArrayW<float_t>  src, ::ArrayW<int16_t>  dst, int32_t  dstCount, int32_t  channels) ;

/// @brief Method ResampleAndConvert, addr 0xa744eb0, size 0x1c4, virtual false, abstract: false, final false
static inline void ResampleAndConvert(::ArrayW<int16_t>  src, ::ArrayW<float_t>  dst, int32_t  dstCount, int32_t  channels) ;

/// @brief Method tostr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW tostr(::ArrayW<T>  x, int32_t  lim) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil(AudioUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil(AudioUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioUtil) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1<T>
class CORDL_TYPE AudioUtil_VoiceLevelDetectCalibrate_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsCalibrating)) bool  IsCalibrating;

 __declspec(property(get=get_LevelMeter, put=set_LevelMeter)) ::Photon::Voice::AudioUtil_ILevelMeter*  LevelMeter;

 __declspec(property(get=get_VoiceDetector, put=set_VoiceDetector)) ::Photon::Voice::AudioUtil_IVoiceDetector*  VoiceDetector;

/// @brief Field <LevelMeter>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__LevelMeter_k__BackingField, put=__cordl_internal_set__LevelMeter_k__BackingField)) ::Photon::Voice::AudioUtil_ILevelMeter*  _LevelMeter_k__BackingField;

/// @brief Field <VoiceDetector>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__VoiceDetector_k__BackingField, put=__cordl_internal_set__VoiceDetector_k__BackingField)) ::Photon::Voice::AudioUtil_IVoiceDetector*  _VoiceDetector_k__BackingField;

/// @brief Field calibration, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibration, put=__cordl_internal_set_calibration)) ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  calibration;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
constexpr operator  ::Photon::Voice::IProcessor_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Calibrate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Calibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>* New_ctor(int32_t  samplingRate, int32_t  channels) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<T> Process(::ArrayW<T>  buf) ;

constexpr ::Photon::Voice::AudioUtil_ILevelMeter* const& __cordl_internal_get__LevelMeter_k__BackingField() const;

constexpr ::Photon::Voice::AudioUtil_ILevelMeter*& __cordl_internal_get__LevelMeter_k__BackingField() ;

constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* const& __cordl_internal_get__VoiceDetector_k__BackingField() const;

constexpr ::Photon::Voice::AudioUtil_IVoiceDetector*& __cordl_internal_get__VoiceDetector_k__BackingField() ;

constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>* const& __cordl_internal_get_calibration() const;

constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*& __cordl_internal_get_calibration() ;

constexpr void __cordl_internal_set__LevelMeter_k__BackingField(::Photon::Voice::AudioUtil_ILevelMeter*  value) ;

constexpr void __cordl_internal_set__VoiceDetector_k__BackingField(::Photon::Voice::AudioUtil_IVoiceDetector*  value) ;

constexpr void __cordl_internal_set_calibration(::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  channels) ;

/// @brief Method get_IsCalibrating, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCalibrating() ;

/// [CompilerGenerated]
/// @brief Method get_LevelMeter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Photon::Voice::AudioUtil_ILevelMeter* get_LevelMeter() ;

/// [CompilerGenerated]
/// @brief Method get_VoiceDetector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Photon::Voice::AudioUtil_IVoiceDetector* get_VoiceDetector() ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
constexpr ::Photon::Voice::IProcessor_1<T>* i___Photon__Voice__IProcessor_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_LevelMeter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_LevelMeter(::Photon::Voice::AudioUtil_ILevelMeter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_VoiceDetector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_VoiceDetector(::Photon::Voice::AudioUtil_IVoiceDetector*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_VoiceLevelDetectCalibrate_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceLevelDetectCalibrate_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_VoiceLevelDetectCalibrate_1(AudioUtil_VoiceLevelDetectCalibrate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceLevelDetectCalibrate_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_VoiceLevelDetectCalibrate_1(AudioUtil_VoiceLevelDetectCalibrate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28394};

/// [CompilerGenerated]
/// @brief Field <LevelMeter>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_ILevelMeter*  ____LevelMeter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <VoiceDetector>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_IVoiceDetector*  ____VoiceDetector_k__BackingField;

/// @brief Field calibration, offset: 0x20, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  ___calibration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies Photon.Voice.AudioUtil::VoiceDetector`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/VoiceDetectorShort
class CORDL_TYPE AudioUtil_VoiceDetectorShort : public ::Photon::Voice::AudioUtil_VoiceDetector_1<int16_t> {
public:
// Declarations
static inline ::Photon::Voice::AudioUtil_VoiceDetectorShort* New_ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method Process, addr 0xa745854, size 0x118, virtual true, abstract: false, final false
inline ::ArrayW<int16_t> Process(::ArrayW<int16_t>  buffer) ;

/// @brief Method .ctor, addr 0xa7457e4, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  numChannels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_VoiceDetectorShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_VoiceDetectorShort(AudioUtil_VoiceDetectorShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_VoiceDetectorShort(AudioUtil_VoiceDetectorShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioUtil_VoiceDetectorShort) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies Photon.Voice.AudioUtil::VoiceDetector`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/VoiceDetectorFloat
class CORDL_TYPE AudioUtil_VoiceDetectorFloat : public ::Photon::Voice::AudioUtil_VoiceDetector_1<float_t> {
public:
// Declarations
static inline ::Photon::Voice::AudioUtil_VoiceDetectorFloat* New_ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method Process, addr 0xa7456d0, size 0x114, virtual true, abstract: false, final false
inline ::ArrayW<float_t> Process(::ArrayW<float_t>  buffer) ;

/// @brief Method .ctor, addr 0xa745664, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  numChannels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_VoiceDetectorFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_VoiceDetectorFloat(AudioUtil_VoiceDetectorFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_VoiceDetectorFloat(AudioUtil_VoiceDetectorFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioUtil_VoiceDetectorFloat) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.DateTime, System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/VoiceDetector`1<T>
class CORDL_TYPE AudioUtil_VoiceDetector_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActivityDelayMs, put=set_ActivityDelayMs)) int32_t  ActivityDelayMs;

 __declspec(property(get=get_Detected, put=set_Detected)) bool  Detected;

 __declspec(property(get=get_DetectedTime, put=set_DetectedTime)) ::System::DateTime  DetectedTime;

 __declspec(property(get=get_On, put=set_On)) bool  On;

/// @brief Field OnDetected, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDetected, put=__cordl_internal_set_OnDetected)) ::System::Action*  OnDetected;

 __declspec(property(get=get_Threshold, put=set_Threshold)) float_t  Threshold;

/// @brief Field <DetectedTime>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DetectedTime_k__BackingField, put=__cordl_internal_set__DetectedTime_k__BackingField)) ::System::DateTime  _DetectedTime_k__BackingField;

/// @brief Field <On>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__On_k__BackingField, put=__cordl_internal_set__On_k__BackingField)) bool  _On_k__BackingField;

/// @brief Field activityDelay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_activityDelay, put=__cordl_internal_set_activityDelay)) int32_t  activityDelay;

/// @brief Field activityDelayValuesCount, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activityDelayValuesCount, put=__cordl_internal_set_activityDelayValuesCount)) int32_t  activityDelayValuesCount;

/// @brief Field autoSilenceCounter, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoSilenceCounter, put=__cordl_internal_set_autoSilenceCounter)) int32_t  autoSilenceCounter;

/// @brief Field detected, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_detected, put=__cordl_internal_set_detected)) bool  detected;

/// @brief Field norm, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_norm, put=__cordl_internal_set_norm)) float_t  norm;

/// @brief Field threshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_threshold, put=__cordl_internal_set_threshold)) float_t  threshold;

/// @brief Field valuesCountPerSec, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_valuesCountPerSec, put=__cordl_internal_set_valuesCountPerSec)) int32_t  valuesCountPerSec;

/// @brief Convert operator to "::Photon::Voice::AudioUtil_IVoiceDetector"
constexpr operator  ::Photon::Voice::AudioUtil_IVoiceDetector*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
constexpr operator  ::Photon::Voice::IProcessor_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_VoiceDetector_1<T>* New_ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<T> Process(::ArrayW<T>  buf) ;

constexpr ::System::Action* const& __cordl_internal_get_OnDetected() const;

constexpr ::System::Action*& __cordl_internal_get_OnDetected() ;

constexpr ::System::DateTime const& __cordl_internal_get__DetectedTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DetectedTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get__On_k__BackingField() const;

constexpr bool& __cordl_internal_get__On_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_activityDelay() const;

constexpr int32_t& __cordl_internal_get_activityDelay() ;

constexpr int32_t const& __cordl_internal_get_activityDelayValuesCount() const;

constexpr int32_t& __cordl_internal_get_activityDelayValuesCount() ;

constexpr int32_t const& __cordl_internal_get_autoSilenceCounter() const;

constexpr int32_t& __cordl_internal_get_autoSilenceCounter() ;

constexpr bool const& __cordl_internal_get_detected() const;

constexpr bool& __cordl_internal_get_detected() ;

constexpr float_t const& __cordl_internal_get_norm() const;

constexpr float_t& __cordl_internal_get_norm() ;

constexpr float_t const& __cordl_internal_get_threshold() const;

constexpr float_t& __cordl_internal_get_threshold() ;

constexpr int32_t const& __cordl_internal_get_valuesCountPerSec() const;

constexpr int32_t& __cordl_internal_get_valuesCountPerSec() ;

constexpr void __cordl_internal_set_OnDetected(::System::Action*  value) ;

constexpr void __cordl_internal_set__DetectedTime_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__On_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activityDelay(int32_t  value) ;

constexpr void __cordl_internal_set_activityDelayValuesCount(int32_t  value) ;

constexpr void __cordl_internal_set_autoSilenceCounter(int32_t  value) ;

constexpr void __cordl_internal_set_detected(bool  value) ;

constexpr void __cordl_internal_set_norm(float_t  value) ;

constexpr void __cordl_internal_set_threshold(float_t  value) ;

constexpr void __cordl_internal_set_valuesCountPerSec(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// [CompilerGenerated]
/// @brief Method add_OnDetected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_OnDetected(::System::Action*  value) ;

/// @brief Method get_ActivityDelayMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_ActivityDelayMs() ;

/// @brief Method get_Detected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_Detected() ;

/// [CompilerGenerated]
/// @brief Method get_DetectedTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::DateTime get_DetectedTime() ;

/// [CompilerGenerated]
/// @brief Method get_On, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_On() ;

/// @brief Method get_Threshold, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_Threshold() ;

/// @brief Convert to "::Photon::Voice::AudioUtil_IVoiceDetector"
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* i___Photon__Voice__AudioUtil_IVoiceDetector() noexcept;

/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
constexpr ::Photon::Voice::IProcessor_1<T>* i___Photon__Voice__IProcessor_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnDetected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_OnDetected(::System::Action*  value) ;

/// @brief Method set_ActivityDelayMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_ActivityDelayMs(int32_t  value) ;

/// @brief Method set_Detected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Detected(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_DetectedTime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DetectedTime(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_On, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_On(bool  value) ;

/// @brief Method set_Threshold, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Threshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_VoiceDetector_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetector_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_VoiceDetector_1(AudioUtil_VoiceDetector_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetector_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_VoiceDetector_1(AudioUtil_VoiceDetector_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28391};

/// [CompilerGenerated]
/// @brief Field <On>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____On_k__BackingField;

/// @brief Field norm, offset: 0x14, size: 0x4, def value: None
 float_t  ___norm;

/// @brief Field threshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___threshold;

/// @brief Field detected, offset: 0x1c, size: 0x1, def value: None
 bool  ___detected;

/// [CompilerGenerated]
/// @brief Field <DetectedTime>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ____DetectedTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnDetected, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnDetected;

/// @brief Field activityDelay, offset: 0x30, size: 0x4, def value: None
 int32_t  ___activityDelay;

/// @brief Field autoSilenceCounter, offset: 0x34, size: 0x4, def value: None
 int32_t  ___autoSilenceCounter;

/// @brief Field valuesCountPerSec, offset: 0x38, size: 0x4, def value: None
 int32_t  ___valuesCountPerSec;

/// @brief Field activityDelayValuesCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___activityDelayValuesCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.DateTime, System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/VoiceDetectorDummy
class CORDL_TYPE AudioUtil_VoiceDetectorDummy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ActivityDelayMs, put=set_ActivityDelayMs)) int32_t  ActivityDelayMs;

 __declspec(property(get=get_Detected)) bool  Detected;

 __declspec(property(get=get_DetectedTime, put=set_DetectedTime)) ::System::DateTime  DetectedTime;

 __declspec(property(get=get_On, put=set_On)) bool  On;

 __declspec(property(get=get_Threshold, put=set_Threshold)) float_t  Threshold;

/// @brief Field <DetectedTime>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DetectedTime_k__BackingField, put=__cordl_internal_set__DetectedTime_k__BackingField)) ::System::DateTime  _DetectedTime_k__BackingField;

/// @brief Convert operator to "::Photon::Voice::AudioUtil_IVoiceDetector"
constexpr operator  ::Photon::Voice::AudioUtil_IVoiceDetector*() noexcept;

static inline ::Photon::Voice::AudioUtil_VoiceDetectorDummy* New_ctor() ;

constexpr ::System::DateTime const& __cordl_internal_get__DetectedTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DetectedTime_k__BackingField() ;

constexpr void __cordl_internal_set__DetectedTime_k__BackingField(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0xa74565c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnDetected, addr 0xa745654, size 0x4, virtual true, abstract: false, final true
inline void add_OnDetected(::System::Action*  value) ;

/// @brief Method get_ActivityDelayMs, addr 0xa745638, size 0x8, virtual true, abstract: false, final true
inline int32_t get_ActivityDelayMs() ;

/// @brief Method get_Detected, addr 0xa745630, size 0x8, virtual true, abstract: false, final true
inline bool get_Detected() ;

/// [CompilerGenerated]
/// @brief Method get_DetectedTime, addr 0xa745644, size 0x8, virtual true, abstract: false, final true
inline ::System::DateTime get_DetectedTime() ;

/// @brief Method get_On, addr 0xa745618, size 0x8, virtual true, abstract: false, final true
inline bool get_On() ;

/// @brief Method get_Threshold, addr 0xa745624, size 0x8, virtual true, abstract: false, final true
inline float_t get_Threshold() ;

/// @brief Convert to "::Photon::Voice::AudioUtil_IVoiceDetector"
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* i___Photon__Voice__AudioUtil_IVoiceDetector() noexcept;

/// @brief Method remove_OnDetected, addr 0xa745658, size 0x4, virtual true, abstract: false, final true
inline void remove_OnDetected(::System::Action*  value) ;

/// @brief Method set_ActivityDelayMs, addr 0xa745640, size 0x4, virtual true, abstract: false, final true
inline void set_ActivityDelayMs(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DetectedTime, addr 0xa74564c, size 0x8, virtual false, abstract: false, final false
inline void set_DetectedTime(::System::DateTime  value) ;

/// @brief Method set_On, addr 0xa745620, size 0x4, virtual true, abstract: false, final true
inline void set_On(bool  value) ;

/// @brief Method set_Threshold, addr 0xa74562c, size 0x4, virtual true, abstract: false, final true
inline void set_Threshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_VoiceDetectorDummy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorDummy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_VoiceDetectorDummy(AudioUtil_VoiceDetectorDummy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorDummy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_VoiceDetectorDummy(AudioUtil_VoiceDetectorDummy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28390};

/// [CompilerGenerated]
/// @brief Field <DetectedTime>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ____DetectedTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::AudioUtil_VoiceDetectorDummy, ____DetectedTime_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::AudioUtil_VoiceDetectorDummy) == 0x18, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T>
class CORDL_TYPE AudioUtil_VoiceDetectorCalibration_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsCalibrating)) bool  IsCalibrating;

/// @brief Field calibrateCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_calibrateCount, put=__cordl_internal_set_calibrateCount)) int32_t  calibrateCount;

/// @brief Field levelMeter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_levelMeter, put=__cordl_internal_set_levelMeter)) ::Photon::Voice::AudioUtil_ILevelMeter*  levelMeter;

/// @brief Field onCalibrated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCalibrated, put=__cordl_internal_set_onCalibrated)) ::System::Action_1<float_t>*  onCalibrated;

/// @brief Field valuesPerSec, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_valuesPerSec, put=__cordl_internal_set_valuesPerSec)) int32_t  valuesPerSec;

/// @brief Field voiceDetector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceDetector, put=__cordl_internal_set_voiceDetector)) ::Photon::Voice::AudioUtil_IVoiceDetector*  voiceDetector;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
constexpr operator  ::Photon::Voice::IProcessor_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Calibrate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Calibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>* New_ctor(::Photon::Voice::AudioUtil_IVoiceDetector*  voiceDetector, ::Photon::Voice::AudioUtil_ILevelMeter*  levelMeter, int32_t  samplingRate, int32_t  channels) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<T> Process(::ArrayW<T>  buf) ;

constexpr int32_t const& __cordl_internal_get_calibrateCount() const;

constexpr int32_t& __cordl_internal_get_calibrateCount() ;

constexpr ::Photon::Voice::AudioUtil_ILevelMeter* const& __cordl_internal_get_levelMeter() const;

constexpr ::Photon::Voice::AudioUtil_ILevelMeter*& __cordl_internal_get_levelMeter() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_onCalibrated() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_onCalibrated() ;

constexpr int32_t const& __cordl_internal_get_valuesPerSec() const;

constexpr int32_t& __cordl_internal_get_valuesPerSec() ;

constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* const& __cordl_internal_get_voiceDetector() const;

constexpr ::Photon::Voice::AudioUtil_IVoiceDetector*& __cordl_internal_get_voiceDetector() ;

constexpr void __cordl_internal_set_calibrateCount(int32_t  value) ;

constexpr void __cordl_internal_set_levelMeter(::Photon::Voice::AudioUtil_ILevelMeter*  value) ;

constexpr void __cordl_internal_set_onCalibrated(::System::Action_1<float_t>*  value) ;

constexpr void __cordl_internal_set_valuesPerSec(int32_t  value) ;

constexpr void __cordl_internal_set_voiceDetector(::Photon::Voice::AudioUtil_IVoiceDetector*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::AudioUtil_IVoiceDetector*  voiceDetector, ::Photon::Voice::AudioUtil_ILevelMeter*  levelMeter, int32_t  samplingRate, int32_t  channels) ;

/// @brief Method get_IsCalibrating, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCalibrating() ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
constexpr ::Photon::Voice::IProcessor_1<T>* i___Photon__Voice__IProcessor_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_VoiceDetectorCalibration_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorCalibration_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_VoiceDetectorCalibration_1(AudioUtil_VoiceDetectorCalibration_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_VoiceDetectorCalibration_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_VoiceDetectorCalibration_1(AudioUtil_VoiceDetectorCalibration_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28389};

/// @brief Field voiceDetector, offset: 0x10, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_IVoiceDetector*  ___voiceDetector;

/// @brief Field levelMeter, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::AudioUtil_ILevelMeter*  ___levelMeter;

/// @brief Field valuesPerSec, offset: 0x20, size: 0x4, def value: None
 int32_t  ___valuesPerSec;

/// @brief Field calibrateCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___calibrateCount;

/// @brief Field onCalibrated, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___onCalibrated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/IVoiceDetector
class CORDL_TYPE AudioUtil_IVoiceDetector {
public:
// Declarations
 __declspec(property(get=get_ActivityDelayMs, put=set_ActivityDelayMs)) int32_t  ActivityDelayMs;

 __declspec(property(get=get_Detected)) bool  Detected;

 __declspec(property(get=get_DetectedTime)) ::System::DateTime  DetectedTime;

 __declspec(property(get=get_On, put=set_On)) bool  On;

 __declspec(property(get=get_Threshold, put=set_Threshold)) float_t  Threshold;

/// [CompilerGenerated]
/// @brief Method add_OnDetected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnDetected(::System::Action*  value) ;

/// @brief Method get_ActivityDelayMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_ActivityDelayMs() ;

/// @brief Method get_Detected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Detected() ;

/// @brief Method get_DetectedTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::DateTime get_DetectedTime() ;

/// @brief Method get_On, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_On() ;

/// @brief Method get_Threshold, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Threshold() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDetected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnDetected(::System::Action*  value) ;

/// @brief Method set_ActivityDelayMs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ActivityDelayMs(int32_t  value) ;

/// @brief Method set_On, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_On(bool  value) ;

/// @brief Method set_Threshold, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Threshold(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_IVoiceDetector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_IVoiceDetector(AudioUtil_IVoiceDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies Photon.Voice.AudioUtil::LevelMeter`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/LevelMeterShort
class CORDL_TYPE AudioUtil_LevelMeterShort : public ::Photon::Voice::AudioUtil_LevelMeter_1<int16_t> {
public:
// Declarations
static inline ::Photon::Voice::AudioUtil_LevelMeterShort* New_ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method Process, addr 0xa74553c, size 0xdc, virtual true, abstract: false, final false
inline ::ArrayW<int16_t> Process(::ArrayW<int16_t>  buf) ;

/// @brief Method .ctor, addr 0xa7454cc, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  numChannels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_LevelMeterShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeterShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_LevelMeterShort(AudioUtil_LevelMeterShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeterShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_LevelMeterShort(AudioUtil_LevelMeterShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioUtil_LevelMeterShort) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies Photon.Voice.AudioUtil::LevelMeter`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/LevelMeterFloat
class CORDL_TYPE AudioUtil_LevelMeterFloat : public ::Photon::Voice::AudioUtil_LevelMeter_1<float_t> {
public:
// Declarations
static inline ::Photon::Voice::AudioUtil_LevelMeterFloat* New_ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method Process, addr 0xa7453f4, size 0xd8, virtual true, abstract: false, final false
inline ::ArrayW<float_t> Process(::ArrayW<float_t>  buf) ;

/// @brief Method .ctor, addr 0xa745388, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  numChannels) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_LevelMeterFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeterFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_LevelMeterFloat(AudioUtil_LevelMeterFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeterFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_LevelMeterFloat(AudioUtil_LevelMeterFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioUtil_LevelMeterFloat) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/LevelMeter`1<T>
class CORDL_TYPE AudioUtil_LevelMeter_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AccumAvgPeakAmp)) float_t  AccumAvgPeakAmp;

 __declspec(property(get=get_CurrentAvgAmp)) float_t  CurrentAvgAmp;

 __declspec(property(get=get_CurrentPeakAmp, put=set_CurrentPeakAmp)) float_t  CurrentPeakAmp;

/// @brief Field accumAvgPeakAmpCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_accumAvgPeakAmpCount, put=__cordl_internal_set_accumAvgPeakAmpCount)) int32_t  accumAvgPeakAmpCount;

/// @brief Field accumAvgPeakAmpSum, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_accumAvgPeakAmpSum, put=__cordl_internal_set_accumAvgPeakAmpSum)) float_t  accumAvgPeakAmpSum;

/// @brief Field ampPeak, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ampPeak, put=__cordl_internal_set_ampPeak)) float_t  ampPeak;

/// @brief Field ampSum, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ampSum, put=__cordl_internal_set_ampSum)) float_t  ampSum;

/// @brief Field bufferSize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferSize, put=__cordl_internal_set_bufferSize)) int32_t  bufferSize;

/// @brief Field currentPeakAmp, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentPeakAmp, put=__cordl_internal_set_currentPeakAmp)) float_t  currentPeakAmp;

/// @brief Field norm, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_norm, put=__cordl_internal_set_norm)) float_t  norm;

/// @brief Field prevValues, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevValues, put=__cordl_internal_set_prevValues)) ::ArrayW<float_t>  prevValues;

/// @brief Field prevValuesHead, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevValuesHead, put=__cordl_internal_set_prevValuesHead)) int32_t  prevValuesHead;

/// @brief Convert operator to "::Photon::Voice::AudioUtil_ILevelMeter"
constexpr operator  ::Photon::Voice::AudioUtil_ILevelMeter*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
constexpr operator  ::Photon::Voice::IProcessor_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_LevelMeter_1<T>* New_ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<T> Process(::ArrayW<T>  buf) ;

/// @brief Method ResetAccumAvgPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ResetAccumAvgPeakAmp() ;

constexpr int32_t const& __cordl_internal_get_accumAvgPeakAmpCount() const;

constexpr int32_t& __cordl_internal_get_accumAvgPeakAmpCount() ;

constexpr float_t const& __cordl_internal_get_accumAvgPeakAmpSum() const;

constexpr float_t& __cordl_internal_get_accumAvgPeakAmpSum() ;

constexpr float_t const& __cordl_internal_get_ampPeak() const;

constexpr float_t& __cordl_internal_get_ampPeak() ;

constexpr float_t const& __cordl_internal_get_ampSum() const;

constexpr float_t& __cordl_internal_get_ampSum() ;

constexpr int32_t const& __cordl_internal_get_bufferSize() const;

constexpr int32_t& __cordl_internal_get_bufferSize() ;

constexpr float_t const& __cordl_internal_get_currentPeakAmp() const;

constexpr float_t& __cordl_internal_get_currentPeakAmp() ;

constexpr float_t const& __cordl_internal_get_norm() const;

constexpr float_t& __cordl_internal_get_norm() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_prevValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_prevValues() ;

constexpr int32_t const& __cordl_internal_get_prevValuesHead() const;

constexpr int32_t& __cordl_internal_get_prevValuesHead() ;

constexpr void __cordl_internal_set_accumAvgPeakAmpCount(int32_t  value) ;

constexpr void __cordl_internal_set_accumAvgPeakAmpSum(float_t  value) ;

constexpr void __cordl_internal_set_ampPeak(float_t  value) ;

constexpr void __cordl_internal_set_ampSum(float_t  value) ;

constexpr void __cordl_internal_set_bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set_currentPeakAmp(float_t  value) ;

constexpr void __cordl_internal_set_norm(float_t  value) ;

constexpr void __cordl_internal_set_prevValues(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_prevValuesHead(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  samplingRate, int32_t  numChannels) ;

/// @brief Method get_AccumAvgPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_AccumAvgPeakAmp() ;

/// @brief Method get_CurrentAvgAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_CurrentAvgAmp() ;

/// @brief Method get_CurrentPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_CurrentPeakAmp() ;

/// @brief Convert to "::Photon::Voice::AudioUtil_ILevelMeter"
constexpr ::Photon::Voice::AudioUtil_ILevelMeter* i___Photon__Voice__AudioUtil_ILevelMeter() noexcept;

/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
constexpr ::Photon::Voice::IProcessor_1<T>* i___Photon__Voice__IProcessor_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_CurrentPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentPeakAmp(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_LevelMeter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_LevelMeter_1(AudioUtil_LevelMeter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_LevelMeter_1(AudioUtil_LevelMeter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28385};

/// @brief Field ampSum, offset: 0x10, size: 0x4, def value: None
 float_t  ___ampSum;

/// @brief Field ampPeak, offset: 0x14, size: 0x4, def value: None
 float_t  ___ampPeak;

/// @brief Field bufferSize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___bufferSize;

/// @brief Field prevValues, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___prevValues;

/// @brief Field prevValuesHead, offset: 0x28, size: 0x4, def value: None
 int32_t  ___prevValuesHead;

/// @brief Field accumAvgPeakAmpSum, offset: 0x2c, size: 0x4, def value: None
 float_t  ___accumAvgPeakAmpSum;

/// @brief Field accumAvgPeakAmpCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___accumAvgPeakAmpCount;

/// @brief Field currentPeakAmp, offset: 0x34, size: 0x4, def value: None
 float_t  ___currentPeakAmp;

/// @brief Field norm, offset: 0x38, size: 0x4, def value: None
 float_t  ___norm;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/LevelMeterDummy
class CORDL_TYPE AudioUtil_LevelMeterDummy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AccumAvgPeakAmp)) float_t  AccumAvgPeakAmp;

 __declspec(property(get=get_CurrentAvgAmp)) float_t  CurrentAvgAmp;

 __declspec(property(get=get_CurrentPeakAmp)) float_t  CurrentPeakAmp;

/// @brief Convert operator to "::Photon::Voice::AudioUtil_ILevelMeter"
constexpr operator  ::Photon::Voice::AudioUtil_ILevelMeter*() noexcept;

static inline ::Photon::Voice::AudioUtil_LevelMeterDummy* New_ctor() ;

/// @brief Method ResetAccumAvgPeakAmp, addr 0xa74537c, size 0x4, virtual true, abstract: false, final true
inline void ResetAccumAvgPeakAmp() ;

/// @brief Method .ctor, addr 0xa745380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AccumAvgPeakAmp, addr 0xa745374, size 0x8, virtual true, abstract: false, final true
inline float_t get_AccumAvgPeakAmp() ;

/// @brief Method get_CurrentAvgAmp, addr 0xa745364, size 0x8, virtual true, abstract: false, final true
inline float_t get_CurrentAvgAmp() ;

/// @brief Method get_CurrentPeakAmp, addr 0xa74536c, size 0x8, virtual true, abstract: false, final true
inline float_t get_CurrentPeakAmp() ;

/// @brief Convert to "::Photon::Voice::AudioUtil_ILevelMeter"
constexpr ::Photon::Voice::AudioUtil_ILevelMeter* i___Photon__Voice__AudioUtil_ILevelMeter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_LevelMeterDummy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeterDummy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_LevelMeterDummy(AudioUtil_LevelMeterDummy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_LevelMeterDummy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_LevelMeterDummy(AudioUtil_LevelMeterDummy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::AudioUtil_LevelMeterDummy) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies 
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/ILevelMeter
class CORDL_TYPE AudioUtil_ILevelMeter {
public:
// Declarations
 __declspec(property(get=get_AccumAvgPeakAmp)) float_t  AccumAvgPeakAmp;

 __declspec(property(get=get_CurrentAvgAmp)) float_t  CurrentAvgAmp;

 __declspec(property(get=get_CurrentPeakAmp)) float_t  CurrentPeakAmp;

/// @brief Method ResetAccumAvgPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetAccumAvgPeakAmp() ;

/// @brief Method get_AccumAvgPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_AccumAvgPeakAmp() ;

/// @brief Method get_CurrentAvgAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_CurrentAvgAmp() ;

/// @brief Method get_CurrentPeakAmp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_CurrentPeakAmp() ;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_ILevelMeter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_ILevelMeter(AudioUtil_ILevelMeter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/Resampler`1<T>
class CORDL_TYPE AudioUtil_Resampler_1 : public ::System::Object {
public:
// Declarations
/// @brief Field channels, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field frameResampled, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameResampled, put=__cordl_internal_set_frameResampled)) ::ArrayW<T>  frameResampled;

/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
constexpr operator  ::Photon::Voice::IProcessor_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_Resampler_1<T>* New_ctor(int32_t  dstSize, int32_t  channels) ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<T> Process(::ArrayW<T>  buf) ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_frameResampled() const;

constexpr ::ArrayW<T>& __cordl_internal_get_frameResampled() ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_frameResampled(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  dstSize, int32_t  channels) ;

/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
constexpr ::Photon::Voice::IProcessor_1<T>* i___Photon__Voice__IProcessor_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_Resampler_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_Resampler_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_Resampler_1(AudioUtil_Resampler_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_Resampler_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_Resampler_1(AudioUtil_Resampler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28382};

/// @brief Field frameResampled, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___frameResampled;

/// @brief Field channels, offset: 0x18, size: 0x4, def value: None
 int32_t  ___channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/TempoUp`1<T>
class CORDL_TYPE AudioUtil_TempoUp_1 : public ::System::Object {
public:
// Declarations
/// @brief Field channels, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field sign, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sign, put=__cordl_internal_set_sign)) int32_t  sign;

/// @brief Field sizeofT, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeofT, put=__cordl_internal_set_sizeofT)) int32_t  sizeofT;

/// @brief Field skipFactor, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_skipFactor, put=__cordl_internal_set_skipFactor)) int32_t  skipFactor;

/// @brief Field skipGroup, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_skipGroup, put=__cordl_internal_set_skipGroup)) int32_t  skipGroup;

/// @brief Field skipping, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipping, put=__cordl_internal_set_skipping)) bool  skipping;

/// @brief Field waveCnt, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_waveCnt, put=__cordl_internal_set_waveCnt)) int32_t  waveCnt;

/// @brief Method Begin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Begin(int32_t  channels, int32_t  changePerc, int32_t  skipGroup) ;

/// @brief Method End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t End(::ArrayW<T>  s) ;

static inline ::Photon::Voice::AudioUtil_TempoUp_1<T>* New_ctor() ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Process(::ArrayW<T>  s, ::ArrayW<T>  d) ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_sign() const;

constexpr int32_t& __cordl_internal_get_sign() ;

constexpr int32_t const& __cordl_internal_get_sizeofT() const;

constexpr int32_t& __cordl_internal_get_sizeofT() ;

constexpr int32_t const& __cordl_internal_get_skipFactor() const;

constexpr int32_t& __cordl_internal_get_skipFactor() ;

constexpr int32_t const& __cordl_internal_get_skipGroup() const;

constexpr int32_t& __cordl_internal_get_skipGroup() ;

constexpr bool const& __cordl_internal_get_skipping() const;

constexpr bool& __cordl_internal_get_skipping() ;

constexpr int32_t const& __cordl_internal_get_waveCnt() const;

constexpr int32_t& __cordl_internal_get_waveCnt() ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_sign(int32_t  value) ;

constexpr void __cordl_internal_set_sizeofT(int32_t  value) ;

constexpr void __cordl_internal_set_skipFactor(int32_t  value) ;

constexpr void __cordl_internal_set_skipGroup(int32_t  value) ;

constexpr void __cordl_internal_set_skipping(bool  value) ;

constexpr void __cordl_internal_set_waveCnt(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method endFloat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t endFloat(::ArrayW<float_t>  s) ;

/// @brief Method endShort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t endShort(::ArrayW<int16_t>  s) ;

/// @brief Method processFloat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t processFloat(::ArrayW<float_t>  s, ::ArrayW<float_t>  d) ;

/// @brief Method processShort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t processShort(::ArrayW<int16_t>  s, ::ArrayW<int16_t>  d) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_TempoUp_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_TempoUp_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_TempoUp_1(AudioUtil_TempoUp_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_TempoUp_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_TempoUp_1(AudioUtil_TempoUp_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28381};

/// @brief Field sizeofT, offset: 0x10, size: 0x4, def value: None
 int32_t  ___sizeofT;

/// @brief Field channels, offset: 0x14, size: 0x4, def value: None
 int32_t  ___channels;

/// @brief Field skipGroup, offset: 0x18, size: 0x4, def value: None
 int32_t  ___skipGroup;

/// @brief Field skipFactor, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___skipFactor;

/// @brief Field sign, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sign;

/// @brief Field waveCnt, offset: 0x24, size: 0x4, def value: None
 int32_t  ___waveCnt;

/// @brief Field skipping, offset: 0x28, size: 0x1, def value: None
 bool  ___skipping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/ToneAudioPusher`1<T>
class CORDL_TYPE AudioUtil_ToneAudioPusher_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Error>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field bufSizeSamples, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufSizeSamples, put=__cordl_internal_set_bufSizeSamples)) int32_t  bufSizeSamples;

/// @brief Field bufferFactory, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bufferFactory, put=__cordl_internal_set_bufferFactory)) ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  bufferFactory;

/// @brief Field callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<::ArrayW<T>>*  callback;

/// @brief Field channels, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field cntFrame, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cntFrame, put=__cordl_internal_set_cntFrame)) int32_t  cntFrame;

/// @brief Field k, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_k, put=__cordl_internal_set_k)) double_t  k;

/// @brief Field posSamples, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_posSamples, put=__cordl_internal_set_posSamples)) int32_t  posSamples;

/// @brief Field samplingRate, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_samplingRate, put=__cordl_internal_set_samplingRate)) int32_t  samplingRate;

/// @brief Field timer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::System::Timers::Timer*  timer;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioPusher_1<T>"
constexpr operator  ::Photon::Voice::IAudioPusher_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>* New_ctor(int32_t  frequency, int32_t  bufSizeMs, int32_t  samplingRate, int32_t  channels) ;

/// @brief Method OnTimedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnTimedEvent(::System::Object*  source, ::System::Timers::ElapsedEventArgs*  e) ;

/// @brief Method SetCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetCallback(::System::Action_1<::ArrayW<T>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  bufferFactory) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_bufSizeSamples() const;

constexpr int32_t& __cordl_internal_get_bufSizeSamples() ;

constexpr ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>* const& __cordl_internal_get_bufferFactory() const;

constexpr ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*& __cordl_internal_get_bufferFactory() ;

constexpr ::System::Action_1<::ArrayW<T>>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<::ArrayW<T>>*& __cordl_internal_get_callback() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr int32_t const& __cordl_internal_get_cntFrame() const;

constexpr int32_t& __cordl_internal_get_cntFrame() ;

constexpr double_t const& __cordl_internal_get_k() const;

constexpr double_t& __cordl_internal_get_k() ;

constexpr int32_t const& __cordl_internal_get_posSamples() const;

constexpr int32_t& __cordl_internal_get_posSamples() ;

constexpr int32_t const& __cordl_internal_get_samplingRate() const;

constexpr int32_t& __cordl_internal_get_samplingRate() ;

constexpr ::System::Timers::Timer* const& __cordl_internal_get_timer() const;

constexpr ::System::Timers::Timer*& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_bufSizeSamples(int32_t  value) ;

constexpr void __cordl_internal_set_bufferFactory(::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<::ArrayW<T>>*  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_cntFrame(int32_t  value) ;

constexpr void __cordl_internal_set_k(double_t  value) ;

constexpr void __cordl_internal_set_posSamples(int32_t  value) ;

constexpr void __cordl_internal_set_samplingRate(int32_t  value) ;

constexpr void __cordl_internal_set_timer(::System::Timers::Timer*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  frequency, int32_t  bufSizeMs, int32_t  samplingRate, int32_t  channels) ;

/// @brief Method get_Channels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_SamplingRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioPusher_1<T>"
constexpr ::Photon::Voice::IAudioPusher_1<T>* i___Photon__Voice__IAudioPusher_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_ToneAudioPusher_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_ToneAudioPusher_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_ToneAudioPusher_1(AudioUtil_ToneAudioPusher_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_ToneAudioPusher_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_ToneAudioPusher_1(AudioUtil_ToneAudioPusher_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28380};

/// @brief Field k, offset: 0x10, size: 0x8, def value: None
 double_t  ___k;

/// @brief Field timer, offset: 0x18, size: 0x8, def value: None
 ::System::Timers::Timer*  ___timer;

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<T>>*  ___callback;

/// @brief Field bufferFactory, offset: 0x28, size: 0x8, def value: None
 ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  ___bufferFactory;

/// @brief Field cntFrame, offset: 0x30, size: 0x4, def value: None
 int32_t  ___cntFrame;

/// @brief Field posSamples, offset: 0x34, size: 0x4, def value: None
 int32_t  ___posSamples;

/// @brief Field bufSizeSamples, offset: 0x38, size: 0x4, def value: None
 int32_t  ___bufSizeSamples;

/// @brief Field samplingRate, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___samplingRate;

/// @brief Field channels, offset: 0x40, size: 0x4, def value: None
 int32_t  ___channels;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/ToneAudioReader`1<T>
class CORDL_TYPE AudioUtil_ToneAudioReader_1 : public ::System::Object {
public:
// Declarations
using __c = ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>;

 __declspec(property(get=get_Channels)) int32_t  Channels;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_SamplingRate)) int32_t  SamplingRate;

/// @brief Field <Error>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field channels, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) int32_t  channels;

/// @brief Field clockSec, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clockSec, put=__cordl_internal_set_clockSec)) ::System::Func_1<double_t>*  clockSec;

/// @brief Field k, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_k, put=__cordl_internal_set_k)) double_t  k;

/// @brief Field samplingRate, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_samplingRate, put=__cordl_internal_set_samplingRate)) int32_t  samplingRate;

/// @brief Field timeSamples, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSamples, put=__cordl_internal_set_timeSamples)) int64_t  timeSamples;

/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
constexpr operator  ::Photon::Voice::IAudioDesc*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<T>"
constexpr operator  ::Photon::Voice::IAudioReader_1<T>*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IDataReader_1<T>"
constexpr operator  ::Photon::Voice::IDataReader_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Photon::Voice::AudioUtil_ToneAudioReader_1<T>* New_ctor(::System::Func_1<double_t>*  clockSec, double_t  frequency, int32_t  samplingRate, int32_t  channels) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Read(::ArrayW<T>  buf) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_channels() const;

constexpr int32_t& __cordl_internal_get_channels() ;

constexpr ::System::Func_1<double_t>* const& __cordl_internal_get_clockSec() const;

constexpr ::System::Func_1<double_t>*& __cordl_internal_get_clockSec() ;

constexpr double_t const& __cordl_internal_get_k() const;

constexpr double_t& __cordl_internal_get_k() ;

constexpr int32_t const& __cordl_internal_get_samplingRate() const;

constexpr int32_t& __cordl_internal_get_samplingRate() ;

constexpr int64_t const& __cordl_internal_get_timeSamples() const;

constexpr int64_t& __cordl_internal_get_timeSamples() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_channels(int32_t  value) ;

constexpr void __cordl_internal_set_clockSec(::System::Func_1<double_t>*  value) ;

constexpr void __cordl_internal_set_k(double_t  value) ;

constexpr void __cordl_internal_set_samplingRate(int32_t  value) ;

constexpr void __cordl_internal_set_timeSamples(int64_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<double_t>*  clockSec, double_t  frequency, int32_t  samplingRate, int32_t  channels) ;

/// @brief Method get_Channels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Channels() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Method get_SamplingRate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_SamplingRate() ;

/// @brief Convert to "::Photon::Voice::IAudioDesc"
constexpr ::Photon::Voice::IAudioDesc* i___Photon__Voice__IAudioDesc() noexcept;

/// @brief Convert to "::Photon::Voice::IAudioReader_1<T>"
constexpr ::Photon::Voice::IAudioReader_1<T>* i___Photon__Voice__IAudioReader_1_T_() noexcept;

/// @brief Convert to "::Photon::Voice::IDataReader_1<T>"
constexpr ::Photon::Voice::IDataReader_1<T>* i___Photon__Voice__IDataReader_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioUtil_ToneAudioReader_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_ToneAudioReader_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioUtil_ToneAudioReader_1(AudioUtil_ToneAudioReader_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioUtil_ToneAudioReader_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioUtil_ToneAudioReader_1(AudioUtil_ToneAudioReader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28379};

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// @brief Field k, offset: 0x18, size: 0x8, def value: None
 double_t  ___k;

/// @brief Field timeSamples, offset: 0x20, size: 0x8, def value: None
 int64_t  ___timeSamples;

/// @brief Field clockSec, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<double_t>*  ___clockSec;

/// @brief Field samplingRate, offset: 0x30, size: 0x4, def value: None
 int32_t  ___samplingRate;

/// @brief Field channels, offset: 0x34, size: 0x4, def value: None
 int32_t  ___channels;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.AudioUtil/ToneAudioReader`1/<>c<T>
class CORDL_TYPE ToneAudioReader_1_AudioUtil___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Func_1<double_t>*  __9__0_0;

static inline ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>* New_ctor() ;

/// @brief Method <.ctor>b__0_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline double_t __ctor_b__0_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>* getStaticF___9() ;

static inline ::System::Func_1<double_t>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*  value) ;

static inline void setStaticF___9__0_0(::System::Func_1<double_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ToneAudioReader_1_AudioUtil___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ToneAudioReader_1_AudioUtil___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ToneAudioReader_1_AudioUtil___c(ToneAudioReader_1_AudioUtil___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ToneAudioReader_1_AudioUtil___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ToneAudioReader_1_AudioUtil___c(ToneAudioReader_1_AudioUtil___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
