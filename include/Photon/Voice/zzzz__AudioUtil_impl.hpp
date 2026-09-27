#pragma once
// IWYU pragma private; include "Photon/Voice/AudioUtil.hpp"
#include "Photon/Voice/zzzz__AudioUtil_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "Photon/Voice/zzzz__AudioUtil_def.hpp"
#include "Photon/Voice/zzzz__IAudioDesc_def.hpp"
#include "Photon/Voice/zzzz__IAudioPusher_1_def.hpp"
#include "Photon/Voice/zzzz__IAudioReader_1_def.hpp"
#include "Photon/Voice/zzzz__IDataReader_1_def.hpp"
#include "Photon/Voice/zzzz__IProcessor_1_def.hpp"
#include "Photon/Voice/zzzz__ObjectFactory_2_def.hpp"
#include "System/Timers/zzzz__ElapsedEventArgs_def.hpp"
#include "System/Timers/zzzz__Timer_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::AudioUtil.ResampleAndConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, ::ArrayW<float_t>, int32_t, int32_t)>(&::Photon::Voice::AudioUtil::ResampleAndConvert)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa744eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"ResampleAndConvert", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil.ResampleAndConvert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, ::ArrayW<int16_t>, int32_t, int32_t)>(&::Photon::Voice::AudioUtil::ResampleAndConvert)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa745074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"ResampleAndConvert", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<float_t>, ::ArrayW<int16_t>, int32_t)>(&::Photon::Voice::AudioUtil::Convert)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa745274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"Convert", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil.Convert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int16_t>, ::ArrayW<float_t>, int32_t)>(&::Photon::Voice::AudioUtil::Convert)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7452f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"Convert", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void Photon::Voice::AudioUtil::Resample(::ArrayW<T>  src, ::ArrayW<T>  dst, int32_t  dstCount, int32_t  channels)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                    {"Resample", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, dstCount, channels);
}
template<typename T>
inline void Photon::Voice::AudioUtil::Resample(::ArrayW<T>  src, int32_t  srcOffset, int32_t  srcCount, ::ArrayW<T>  dst, int32_t  dstOffset, int32_t  dstCount, int32_t  channels)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                    {"Resample", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcOffset, srcCount, dst, dstOffset, dstCount, channels);
}
template<typename T>
inline void Photon::Voice::AudioUtil::Resample(::ArrayW<T>  src, int32_t  srcOffset, int32_t  srcCount, int32_t  srcChannels, ::ArrayW<T>  dst, int32_t  dstOffset, int32_t  dstCount, int32_t  dstChannels)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                    {"Resample", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcOffset, srcCount, srcChannels, dst, dstOffset, dstCount, dstChannels);
}
inline void Photon::Voice::AudioUtil::ResampleAndConvert(::ArrayW<int16_t>  src, ::ArrayW<float_t>  dst, int32_t  dstCount, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"ResampleAndConvert", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, dstCount, channels);
}
inline void Photon::Voice::AudioUtil::ResampleAndConvert(::ArrayW<float_t>  src, ::ArrayW<int16_t>  dst, int32_t  dstCount, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"ResampleAndConvert", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, dstCount, channels);
}
inline void Photon::Voice::AudioUtil::Convert(::ArrayW<float_t>  src, ::ArrayW<int16_t>  dst, int32_t  dstCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"Convert", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, dstCount);
}
inline void Photon::Voice::AudioUtil::Convert(::ArrayW<int16_t>  src, ::ArrayW<float_t>  dst, int32_t  dstCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                        {"Convert", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, dstCount);
}
template<typename T>
inline void Photon::Voice::AudioUtil::ForceToStereo(::ArrayW<T>  src, ::ArrayW<T>  dst, int32_t  srcChannels)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                    {"ForceToStereo", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, srcChannels);
}
template<typename T>
inline ::StringW Photon::Voice::AudioUtil::tostr(::ArrayW<T>  x, int32_t  lim)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil*>(),
                    {"tostr", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, x, lim);
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil::AudioUtil()   {
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ILevelMeter*& Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_get__LevelMeter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelMeter_k__BackingField;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ILevelMeter* const& Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_get__LevelMeter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LevelMeter_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_set__LevelMeter_k__BackingField(::Photon::Voice::AudioUtil_ILevelMeter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LevelMeter_k__BackingField = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector*& Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_get__VoiceDetector_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceDetector_k__BackingField;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* const& Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_get__VoiceDetector_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____VoiceDetector_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_set__VoiceDetector_k__BackingField(::Photon::Voice::AudioUtil_IVoiceDetector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____VoiceDetector_k__BackingField = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*& Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_get_calibration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibration;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>* const& Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_get_calibration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibration;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::__cordl_internal_set_calibration(::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calibration = value;
}
template<typename T>
inline ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::get_LevelMeter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"get_LevelMeter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_ILevelMeter*>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::set_LevelMeter(::Photon::Voice::AudioUtil_ILevelMeter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"set_LevelMeter", {}, {::i2c::type_of<::Photon::Voice::AudioUtil_ILevelMeter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::get_VoiceDetector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"get_VoiceDetector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::AudioUtil_IVoiceDetector*>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::set_VoiceDetector(::Photon::Voice::AudioUtil_IVoiceDetector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"set_VoiceDetector", {}, {::i2c::type_of<::Photon::Voice::AudioUtil_IVoiceDetector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::_ctor(int32_t  samplingRate, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, channels);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::Calibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"Calibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMs, onCalibrated);
}
template<typename T>
inline bool Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::get_IsCalibrating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"get_IsCalibrating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::Process(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>* Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::New_ctor(int32_t  samplingRate, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>*>(samplingRate, channels));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::operator ::Photon::Voice::IProcessor_1<T>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr ::Photon::Voice::IProcessor_1<T>* Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::i___Photon__Voice__IProcessor_1_T_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceLevelDetectCalibrate_1<T>::AudioUtil_VoiceLevelDetectCalibrate_1()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorShort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorShort::*)(int32_t, int32_t)>(&::Photon::Voice::AudioUtil_VoiceDetectorShort::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7457e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorShort*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorShort.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (::Photon::Voice::AudioUtil_VoiceDetectorShort::*)(::ArrayW<int16_t>)>(&::Photon::Voice::AudioUtil_VoiceDetectorShort::Process)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa745854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorShort*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorShort*>(), 16}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::AudioUtil_VoiceDetectorShort::_ctor(int32_t  samplingRate, int32_t  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorShort*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, numChannels);
}
inline ::ArrayW<int16_t> Photon::Voice::AudioUtil_VoiceDetectorShort::Process(::ArrayW<int16_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorShort*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(this, ___internal_method, buffer);
}
inline ::Photon::Voice::AudioUtil_VoiceDetectorShort* Photon::Voice::AudioUtil_VoiceDetectorShort::New_ctor(int32_t  samplingRate, int32_t  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_VoiceDetectorShort*>(samplingRate, numChannels));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorShort::AudioUtil_VoiceDetectorShort()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorFloat::*)(int32_t, int32_t)>(&::Photon::Voice::AudioUtil_VoiceDetectorFloat::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa745664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorFloat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorFloat.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Photon::Voice::AudioUtil_VoiceDetectorFloat::*)(::ArrayW<float_t>)>(&::Photon::Voice::AudioUtil_VoiceDetectorFloat::Process)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa7456d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorFloat*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorFloat*>(), 16}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::AudioUtil_VoiceDetectorFloat::_ctor(int32_t  samplingRate, int32_t  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorFloat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, numChannels);
}
inline ::ArrayW<float_t> Photon::Voice::AudioUtil_VoiceDetectorFloat::Process(::ArrayW<float_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorFloat*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, buffer);
}
inline ::Photon::Voice::AudioUtil_VoiceDetectorFloat* Photon::Voice::AudioUtil_VoiceDetectorFloat::New_ctor(int32_t  samplingRate, int32_t  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_VoiceDetectorFloat*>(samplingRate, numChannels));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorFloat::AudioUtil_VoiceDetectorFloat()   {
}
template<typename T>
constexpr bool& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get__On_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____On_k__BackingField;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get__On_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____On_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set__On_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____On_k__BackingField = value;
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_norm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___norm;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_norm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___norm;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_norm(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___norm = value;
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_detected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detected;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_detected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detected;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_detected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detected = value;
}
template<typename T>
constexpr ::System::DateTime& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get__DetectedTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DetectedTime_k__BackingField;
}
template<typename T>
constexpr ::System::DateTime const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get__DetectedTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DetectedTime_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set__DetectedTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DetectedTime_k__BackingField = value;
}
template<typename T>
constexpr ::System::Action*& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_OnDetected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetected;
}
template<typename T>
constexpr ::System::Action* const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_OnDetected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetected;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_OnDetected(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDetected = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_activityDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activityDelay;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_activityDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activityDelay;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_activityDelay(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activityDelay = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_autoSilenceCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSilenceCounter;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_autoSilenceCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoSilenceCounter;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_autoSilenceCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoSilenceCounter = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_valuesCountPerSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valuesCountPerSec;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_valuesCountPerSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valuesCountPerSec;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_valuesCountPerSec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valuesCountPerSec = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_activityDelayValuesCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activityDelayValuesCount;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_get_activityDelayValuesCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activityDelayValuesCount;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetector_1<T>::__cordl_internal_set_activityDelayValuesCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activityDelayValuesCount = value;
}
template<typename T>
inline bool Photon::Voice::AudioUtil_VoiceDetector_1<T>::get_On()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"get_On", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::set_On(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"set_On", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline float_t Photon::Voice::AudioUtil_VoiceDetector_1<T>::get_Threshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"get_Threshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::set_Threshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"set_Threshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool Photon::Voice::AudioUtil_VoiceDetector_1<T>::get_Detected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"get_Detected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::set_Detected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"set_Detected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::DateTime Photon::Voice::AudioUtil_VoiceDetector_1<T>::get_DetectedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"get_DetectedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::set_DetectedTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"set_DetectedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_VoiceDetector_1<T>::get_ActivityDelayMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"get_ActivityDelayMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::set_ActivityDelayMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"set_ActivityDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::add_OnDetected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"add_OnDetected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::remove_OnDetected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"remove_OnDetected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::_ctor(int32_t  samplingRate, int32_t  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, numChannels);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::AudioUtil_VoiceDetector_1<T>::Process(::ArrayW<T>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetector_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_VoiceDetector_1<T>* Photon::Voice::AudioUtil_VoiceDetector_1<T>::New_ctor(int32_t  samplingRate, int32_t  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_VoiceDetector_1<T>*>(samplingRate, numChannels));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceDetector_1<T>::operator ::Photon::Voice::IProcessor_1<T>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr ::Photon::Voice::IProcessor_1<T>* Photon::Voice::AudioUtil_VoiceDetector_1<T>::i___Photon__Voice__IProcessor_1_T_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceDetector_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_VoiceDetector_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::AudioUtil_IVoiceDetector"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceDetector_1<T>::operator ::Photon::Voice::AudioUtil_IVoiceDetector*() noexcept {
return static_cast<::Photon::Voice::AudioUtil_IVoiceDetector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::AudioUtil_IVoiceDetector"
template<typename T>
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::AudioUtil_VoiceDetector_1<T>::i___Photon__Voice__AudioUtil_IVoiceDetector() noexcept {
return static_cast<::Photon::Voice::AudioUtil_IVoiceDetector*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetector_1<T>::AudioUtil_VoiceDetector_1()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.get_On
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)()>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::get_On)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_On", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.set_On
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)(bool)>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::set_On)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa745620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_On", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.get_Threshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)()>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::get_Threshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_Threshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.set_Threshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)(float_t)>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::set_Threshold)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa74562c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_Threshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.get_Detected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)()>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::get_Detected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_Detected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.get_ActivityDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)()>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::get_ActivityDelayMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_ActivityDelayMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.set_ActivityDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)(int32_t)>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::set_ActivityDelayMs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa745640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_ActivityDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.get_DetectedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)()>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::get_DetectedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_DetectedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.set_DetectedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)(::System::DateTime)>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::set_DetectedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74564c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_DetectedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.add_OnDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)(::System::Action*)>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::add_OnDetected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa745654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"add_OnDetected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy.remove_OnDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)(::System::Action*)>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::remove_OnDetected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa745658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"remove_OnDetected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_VoiceDetectorDummy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_VoiceDetectorDummy::*)()>(&::Photon::Voice::AudioUtil_VoiceDetectorDummy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& Photon::Voice::AudioUtil_VoiceDetectorDummy::__cordl_internal_get__DetectedTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DetectedTime_k__BackingField;
}
constexpr ::System::DateTime const& Photon::Voice::AudioUtil_VoiceDetectorDummy::__cordl_internal_get__DetectedTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DetectedTime_k__BackingField;
}
constexpr void Photon::Voice::AudioUtil_VoiceDetectorDummy::__cordl_internal_set__DetectedTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DetectedTime_k__BackingField = value;
}
inline bool Photon::Voice::AudioUtil_VoiceDetectorDummy::get_On()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_On", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::set_On(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_On", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::AudioUtil_VoiceDetectorDummy::get_Threshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_Threshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::set_Threshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_Threshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::AudioUtil_VoiceDetectorDummy::get_Detected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_Detected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Photon::Voice::AudioUtil_VoiceDetectorDummy::get_ActivityDelayMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_ActivityDelayMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::set_ActivityDelayMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_ActivityDelayMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime Photon::Voice::AudioUtil_VoiceDetectorDummy::get_DetectedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"get_DetectedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::set_DetectedTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"set_DetectedTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::add_OnDetected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"add_OnDetected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::remove_OnDetected(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {"remove_OnDetected", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::AudioUtil_VoiceDetectorDummy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::AudioUtil_VoiceDetectorDummy* Photon::Voice::AudioUtil_VoiceDetectorDummy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_VoiceDetectorDummy*>());
}
/// @brief Convert operator to "::Photon::Voice::AudioUtil_IVoiceDetector"
constexpr  Photon::Voice::AudioUtil_VoiceDetectorDummy::operator ::Photon::Voice::AudioUtil_IVoiceDetector*() noexcept {
return static_cast<::Photon::Voice::AudioUtil_IVoiceDetector*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::AudioUtil_IVoiceDetector"
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* Photon::Voice::AudioUtil_VoiceDetectorDummy::i___Photon__Voice__AudioUtil_IVoiceDetector() noexcept {
return static_cast<::Photon::Voice::AudioUtil_IVoiceDetector*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorDummy::AudioUtil_VoiceDetectorDummy()   {
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector*& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_voiceDetector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetector;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_IVoiceDetector* const& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_voiceDetector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voiceDetector;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_set_voiceDetector(::Photon::Voice::AudioUtil_IVoiceDetector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voiceDetector = value;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ILevelMeter*& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_levelMeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelMeter;
}
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ILevelMeter* const& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_levelMeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelMeter;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_set_levelMeter(::Photon::Voice::AudioUtil_ILevelMeter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelMeter = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_valuesPerSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valuesPerSec;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_valuesPerSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valuesPerSec;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_set_valuesPerSec(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valuesPerSec = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_calibrateCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibrateCount;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_calibrateCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calibrateCount;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_set_calibrateCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calibrateCount = value;
}
template<typename T>
constexpr ::System::Action_1<float_t>*& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_onCalibrated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCalibrated;
}
template<typename T>
constexpr ::System::Action_1<float_t>* const& Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_get_onCalibrated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCalibrated;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::__cordl_internal_set_onCalibrated(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCalibrated = value;
}
template<typename T>
inline bool Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::get_IsCalibrating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*>(),
                        {"get_IsCalibrating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::_ctor(::Photon::Voice::AudioUtil_IVoiceDetector*  voiceDetector, ::Photon::Voice::AudioUtil_ILevelMeter*  levelMeter, int32_t  samplingRate, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), ::i2c::type_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, voiceDetector, levelMeter, samplingRate, channels);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::Calibrate(int32_t  durationMs, ::System::Action_1<float_t>*  onCalibrated)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*>(),
                        {"Calibrate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMs, onCalibrated);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::Process(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>* Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::New_ctor(::Photon::Voice::AudioUtil_IVoiceDetector*  voiceDetector, ::Photon::Voice::AudioUtil_ILevelMeter*  levelMeter, int32_t  samplingRate, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>*>(voiceDetector, levelMeter, samplingRate, channels));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::operator ::Photon::Voice::IProcessor_1<T>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr ::Photon::Voice::IProcessor_1<T>* Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::i___Photon__Voice__IProcessor_1_T_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_VoiceDetectorCalibration_1<T>::AudioUtil_VoiceDetectorCalibration_1()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.get_On
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::AudioUtil_IVoiceDetector::*)()>(&::Photon::Voice::AudioUtil_IVoiceDetector::get_On)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.set_On
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_IVoiceDetector::*)(bool)>(&::Photon::Voice::AudioUtil_IVoiceDetector::set_On)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.get_Threshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_IVoiceDetector::*)()>(&::Photon::Voice::AudioUtil_IVoiceDetector::get_Threshold)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.set_Threshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_IVoiceDetector::*)(float_t)>(&::Photon::Voice::AudioUtil_IVoiceDetector::set_Threshold)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.get_Detected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::AudioUtil_IVoiceDetector::*)()>(&::Photon::Voice::AudioUtil_IVoiceDetector::get_Detected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.get_DetectedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Photon::Voice::AudioUtil_IVoiceDetector::*)()>(&::Photon::Voice::AudioUtil_IVoiceDetector::get_DetectedTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.add_OnDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_IVoiceDetector::*)(::System::Action*)>(&::Photon::Voice::AudioUtil_IVoiceDetector::add_OnDetected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.remove_OnDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_IVoiceDetector::*)(::System::Action*)>(&::Photon::Voice::AudioUtil_IVoiceDetector::remove_OnDetected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.get_ActivityDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::AudioUtil_IVoiceDetector::*)()>(&::Photon::Voice::AudioUtil_IVoiceDetector::get_ActivityDelayMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_IVoiceDetector.set_ActivityDelayMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_IVoiceDetector::*)(int32_t)>(&::Photon::Voice::AudioUtil_IVoiceDetector::set_ActivityDelayMs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 9}
                ));
    return ___internal_method;
  }
};
inline bool Photon::Voice::AudioUtil_IVoiceDetector::get_On()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_IVoiceDetector::set_On(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Photon::Voice::AudioUtil_IVoiceDetector::get_Threshold()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_IVoiceDetector::set_Threshold(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Voice::AudioUtil_IVoiceDetector::get_Detected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::DateTime Photon::Voice::AudioUtil_IVoiceDetector::get_DetectedTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_IVoiceDetector::add_OnDetected(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Voice::AudioUtil_IVoiceDetector::remove_OnDetected(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Voice::AudioUtil_IVoiceDetector::get_ActivityDelayMs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_IVoiceDetector::set_ActivityDelayMs(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_IVoiceDetector*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterShort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_LevelMeterShort::*)(int32_t, int32_t)>(&::Photon::Voice::AudioUtil_LevelMeterShort::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7454cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterShort*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterShort.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int16_t> (::Photon::Voice::AudioUtil_LevelMeterShort::*)(::ArrayW<int16_t>)>(&::Photon::Voice::AudioUtil_LevelMeterShort::Process)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa74553c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterShort*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterShort*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::AudioUtil_LevelMeterShort::_ctor(int32_t  samplingRate, int32_t  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterShort*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, numChannels);
}
inline ::ArrayW<int16_t> Photon::Voice::AudioUtil_LevelMeterShort::Process(::ArrayW<int16_t>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterShort*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int16_t>>(this, ___internal_method, buf);
}
inline ::Photon::Voice::AudioUtil_LevelMeterShort* Photon::Voice::AudioUtil_LevelMeterShort::New_ctor(int32_t  samplingRate, int32_t  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_LevelMeterShort*>(samplingRate, numChannels));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil_LevelMeterShort::AudioUtil_LevelMeterShort()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterFloat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_LevelMeterFloat::*)(int32_t, int32_t)>(&::Photon::Voice::AudioUtil_LevelMeterFloat::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa745388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterFloat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterFloat.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Photon::Voice::AudioUtil_LevelMeterFloat::*)(::ArrayW<float_t>)>(&::Photon::Voice::AudioUtil_LevelMeterFloat::Process)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa7453f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterFloat*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterFloat*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void Photon::Voice::AudioUtil_LevelMeterFloat::_ctor(int32_t  samplingRate, int32_t  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterFloat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, numChannels);
}
inline ::ArrayW<float_t> Photon::Voice::AudioUtil_LevelMeterFloat::Process(::ArrayW<float_t>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterFloat*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method, buf);
}
inline ::Photon::Voice::AudioUtil_LevelMeterFloat* Photon::Voice::AudioUtil_LevelMeterFloat::New_ctor(int32_t  samplingRate, int32_t  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_LevelMeterFloat*>(samplingRate, numChannels));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil_LevelMeterFloat::AudioUtil_LevelMeterFloat()   {
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_ampSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ampSum;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_ampSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ampSum;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_ampSum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ampSum = value;
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_ampPeak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ampPeak;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_ampPeak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ampPeak;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_ampPeak(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ampPeak = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferSize;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferSize = value;
}
template<typename T>
constexpr ::ArrayW<float_t>& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_prevValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevValues;
}
template<typename T>
constexpr ::ArrayW<float_t> const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_prevValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevValues;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_prevValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevValues = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_prevValuesHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevValuesHead;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_prevValuesHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevValuesHead;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_prevValuesHead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevValuesHead = value;
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_accumAvgPeakAmpSum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumAvgPeakAmpSum;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_accumAvgPeakAmpSum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumAvgPeakAmpSum;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_accumAvgPeakAmpSum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accumAvgPeakAmpSum = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_accumAvgPeakAmpCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumAvgPeakAmpCount;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_accumAvgPeakAmpCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumAvgPeakAmpCount;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_accumAvgPeakAmpCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accumAvgPeakAmpCount = value;
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_currentPeakAmp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPeakAmp;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_currentPeakAmp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPeakAmp;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_currentPeakAmp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPeakAmp = value;
}
template<typename T>
constexpr float_t& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_norm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___norm;
}
template<typename T>
constexpr float_t const& Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_get_norm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___norm;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_LevelMeter_1<T>::__cordl_internal_set_norm(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___norm = value;
}
template<typename T>
inline void Photon::Voice::AudioUtil_LevelMeter_1<T>::_ctor(int32_t  samplingRate, int32_t  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplingRate, numChannels);
}
template<typename T>
inline float_t Photon::Voice::AudioUtil_LevelMeter_1<T>::get_CurrentAvgAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {"get_CurrentAvgAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline float_t Photon::Voice::AudioUtil_LevelMeter_1<T>::get_CurrentPeakAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {"get_CurrentPeakAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_LevelMeter_1<T>::set_CurrentPeakAmp(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {"set_CurrentPeakAmp", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline float_t Photon::Voice::AudioUtil_LevelMeter_1<T>::get_AccumAvgPeakAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {"get_AccumAvgPeakAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_LevelMeter_1<T>::ResetAccumAvgPeakAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {"ResetAccumAvgPeakAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::AudioUtil_LevelMeter_1<T>::Process(::ArrayW<T>  buf)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::AudioUtil_LevelMeter_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_LevelMeter_1<T>* Photon::Voice::AudioUtil_LevelMeter_1<T>::New_ctor(int32_t  samplingRate, int32_t  numChannels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_LevelMeter_1<T>*>(samplingRate, numChannels));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_LevelMeter_1<T>::operator ::Photon::Voice::IProcessor_1<T>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr ::Photon::Voice::IProcessor_1<T>* Photon::Voice::AudioUtil_LevelMeter_1<T>::i___Photon__Voice__IProcessor_1_T_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_LevelMeter_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_LevelMeter_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::AudioUtil_ILevelMeter"
template<typename T>
constexpr  Photon::Voice::AudioUtil_LevelMeter_1<T>::operator ::Photon::Voice::AudioUtil_ILevelMeter*() noexcept {
return static_cast<::Photon::Voice::AudioUtil_ILevelMeter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::AudioUtil_ILevelMeter"
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::AudioUtil_LevelMeter_1<T>::i___Photon__Voice__AudioUtil_ILevelMeter() noexcept {
return static_cast<::Photon::Voice::AudioUtil_ILevelMeter*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_LevelMeter_1<T>::AudioUtil_LevelMeter_1()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterDummy.get_CurrentAvgAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_LevelMeterDummy::*)()>(&::Photon::Voice::AudioUtil_LevelMeterDummy::get_CurrentAvgAmp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"get_CurrentAvgAmp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterDummy.get_CurrentPeakAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_LevelMeterDummy::*)()>(&::Photon::Voice::AudioUtil_LevelMeterDummy::get_CurrentPeakAmp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74536c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"get_CurrentPeakAmp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterDummy.get_AccumAvgPeakAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_LevelMeterDummy::*)()>(&::Photon::Voice::AudioUtil_LevelMeterDummy::get_AccumAvgPeakAmp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"get_AccumAvgPeakAmp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterDummy.ResetAccumAvgPeakAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_LevelMeterDummy::*)()>(&::Photon::Voice::AudioUtil_LevelMeterDummy::ResetAccumAvgPeakAmp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa74537c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"ResetAccumAvgPeakAmp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_LevelMeterDummy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_LevelMeterDummy::*)()>(&::Photon::Voice::AudioUtil_LevelMeterDummy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa745380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline float_t Photon::Voice::AudioUtil_LevelMeterDummy::get_CurrentAvgAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"get_CurrentAvgAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Photon::Voice::AudioUtil_LevelMeterDummy::get_CurrentPeakAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"get_CurrentPeakAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Photon::Voice::AudioUtil_LevelMeterDummy::get_AccumAvgPeakAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"get_AccumAvgPeakAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_LevelMeterDummy::ResetAccumAvgPeakAmp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {"ResetAccumAvgPeakAmp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_LevelMeterDummy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_LevelMeterDummy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::AudioUtil_LevelMeterDummy* Photon::Voice::AudioUtil_LevelMeterDummy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_LevelMeterDummy*>());
}
/// @brief Convert operator to "::Photon::Voice::AudioUtil_ILevelMeter"
constexpr  Photon::Voice::AudioUtil_LevelMeterDummy::operator ::Photon::Voice::AudioUtil_ILevelMeter*() noexcept {
return static_cast<::Photon::Voice::AudioUtil_ILevelMeter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::AudioUtil_ILevelMeter"
constexpr ::Photon::Voice::AudioUtil_ILevelMeter* Photon::Voice::AudioUtil_LevelMeterDummy::i___Photon__Voice__AudioUtil_ILevelMeter() noexcept {
return static_cast<::Photon::Voice::AudioUtil_ILevelMeter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Voice::AudioUtil_LevelMeterDummy::AudioUtil_LevelMeterDummy()   {
}
//  Writing Method size for method: ::Photon::Voice::AudioUtil_ILevelMeter.get_CurrentAvgAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_ILevelMeter::*)()>(&::Photon::Voice::AudioUtil_ILevelMeter::get_CurrentAvgAmp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_ILevelMeter.get_CurrentPeakAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_ILevelMeter::*)()>(&::Photon::Voice::AudioUtil_ILevelMeter::get_CurrentPeakAmp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_ILevelMeter.get_AccumAvgPeakAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Photon::Voice::AudioUtil_ILevelMeter::*)()>(&::Photon::Voice::AudioUtil_ILevelMeter::get_AccumAvgPeakAmp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::AudioUtil_ILevelMeter.ResetAccumAvgPeakAmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::AudioUtil_ILevelMeter::*)()>(&::Photon::Voice::AudioUtil_ILevelMeter::ResetAccumAvgPeakAmp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(),
                    {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 3}
                ));
    return ___internal_method;
  }
};
inline float_t Photon::Voice::AudioUtil_ILevelMeter::get_CurrentAvgAmp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Photon::Voice::AudioUtil_ILevelMeter::get_CurrentPeakAmp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Photon::Voice::AudioUtil_ILevelMeter::get_AccumAvgPeakAmp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Photon::Voice::AudioUtil_ILevelMeter::ResetAccumAvgPeakAmp()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::AudioUtil_ILevelMeter*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
constexpr ::ArrayW<T>& Photon::Voice::AudioUtil_Resampler_1<T>::__cordl_internal_get_frameResampled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameResampled;
}
template<typename T>
constexpr ::ArrayW<T> const& Photon::Voice::AudioUtil_Resampler_1<T>::__cordl_internal_get_frameResampled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameResampled;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_Resampler_1<T>::__cordl_internal_set_frameResampled(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameResampled = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_Resampler_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_Resampler_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_Resampler_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
inline void Photon::Voice::AudioUtil_Resampler_1<T>::_ctor(int32_t  dstSize, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_Resampler_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dstSize, channels);
}
template<typename T>
inline ::ArrayW<T> Photon::Voice::AudioUtil_Resampler_1<T>::Process(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_Resampler_1<T>*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, buf);
}
template<typename T>
inline void Photon::Voice::AudioUtil_Resampler_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_Resampler_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_Resampler_1<T>* Photon::Voice::AudioUtil_Resampler_1<T>::New_ctor(int32_t  dstSize, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_Resampler_1<T>*>(dstSize, channels));
}
/// @brief Convert operator to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_Resampler_1<T>::operator ::Photon::Voice::IProcessor_1<T>*() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IProcessor_1<T>"
template<typename T>
constexpr ::Photon::Voice::IProcessor_1<T>* Photon::Voice::AudioUtil_Resampler_1<T>::i___Photon__Voice__IProcessor_1_T_() noexcept {
return static_cast<::Photon::Voice::IProcessor_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_Resampler_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_Resampler_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_Resampler_1<T>::AudioUtil_Resampler_1()   {
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_sizeofT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_sizeofT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeofT;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_sizeofT(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeofT = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_skipGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipGroup;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_skipGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipGroup;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_skipGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipGroup = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_skipFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipFactor;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_skipFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipFactor;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_skipFactor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipFactor = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_sign()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sign;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_sign() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sign;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_sign(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sign = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_waveCnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveCnt;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_waveCnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveCnt;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_waveCnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveCnt = value;
}
template<typename T>
constexpr bool& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_skipping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipping;
}
template<typename T>
constexpr bool const& Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_get_skipping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipping;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_TempoUp_1<T>::__cordl_internal_set_skipping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipping = value;
}
template<typename T>
inline void Photon::Voice::AudioUtil_TempoUp_1<T>::Begin(int32_t  channels, int32_t  changePerc, int32_t  skipGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"Begin", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channels, changePerc, skipGroup);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_TempoUp_1<T>::Process(::ArrayW<T>  s, ::ArrayW<T>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"Process", {}, {::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, d);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_TempoUp_1<T>::End(::ArrayW<T>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"End", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_TempoUp_1<T>::processFloat(::ArrayW<float_t>  s, ::ArrayW<float_t>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"processFloat", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, d);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_TempoUp_1<T>::endFloat(::ArrayW<float_t>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"endFloat", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_TempoUp_1<T>::processShort(::ArrayW<int16_t>  s, ::ArrayW<int16_t>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"processShort", {}, {::i2c::type_of<::ArrayW<int16_t>>(), ::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s, d);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_TempoUp_1<T>::endShort(::ArrayW<int16_t>  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {"endShort", {}, {::i2c::type_of<::ArrayW<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s);
}
template<typename T>
inline void Photon::Voice::AudioUtil_TempoUp_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_TempoUp_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_TempoUp_1<T>* Photon::Voice::AudioUtil_TempoUp_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_TempoUp_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_TempoUp_1<T>::AudioUtil_TempoUp_1()   {
}
template<typename T>
constexpr double_t& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_k()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
template<typename T>
constexpr double_t const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_k() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_k(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k = value;
}
template<typename T>
constexpr ::System::Timers::Timer*& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
template<typename T>
constexpr ::System::Timers::Timer* const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_timer(::System::Timers::Timer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
template<typename T>
constexpr ::System::Action_1<::ArrayW<T>>*& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr ::System::Action_1<::ArrayW<T>>* const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_callback(::System::Action_1<::ArrayW<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
template<typename T>
constexpr ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_bufferFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferFactory;
}
template<typename T>
constexpr ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>* const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_bufferFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufferFactory;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_bufferFactory(::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufferFactory = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_cntFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cntFrame;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_cntFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cntFrame;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_cntFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cntFrame = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_posSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posSamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_posSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___posSamples;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_posSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___posSamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_bufSizeSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufSizeSamples;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_bufSizeSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bufSizeSamples;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_bufSizeSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bufSizeSamples = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_samplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_samplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_samplingRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplingRate = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
constexpr ::StringW& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::_ctor(int32_t  frequency, int32_t  bufSizeMs, int32_t  samplingRate, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency, bufSizeMs, samplingRate, channels);
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::SetCallback(::System::Action_1<::ArrayW<T>>*  callback, ::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*  bufferFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"SetCallback", {}, {::i2c::type_of<::System::Action_1<::ArrayW<T>>*>(), ::i2c::type_of<::Photon::Voice::ObjectFactory_2<::ArrayW<T>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback, bufferFactory);
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::OnTimedEvent(::System::Object*  source, ::System::Timers::ElapsedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"OnTimedEvent", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Timers::ElapsedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, e);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::StringW Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>* Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::New_ctor(int32_t  frequency, int32_t  bufSizeMs, int32_t  samplingRate, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>*>(frequency, bufSizeMs, samplingRate, channels));
}
/// @brief Convert operator to "::Photon::Voice::IAudioPusher_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::operator ::Photon::Voice::IAudioPusher_1<T>*() noexcept {
return static_cast<::Photon::Voice::IAudioPusher_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioPusher_1<T>"
template<typename T>
constexpr ::Photon::Voice::IAudioPusher_1<T>* Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::i___Photon__Voice__IAudioPusher_1_T_() noexcept {
return static_cast<::Photon::Voice::IAudioPusher_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ToneAudioPusher_1<T>::AudioUtil_ToneAudioPusher_1()   {
}
template<typename T>
constexpr ::StringW& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::StringW const& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_set__Error_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
constexpr double_t& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_k()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
template<typename T>
constexpr double_t const& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_k() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_set_k(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k = value;
}
template<typename T>
constexpr int64_t& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_timeSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSamples;
}
template<typename T>
constexpr int64_t const& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_timeSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeSamples;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_set_timeSamples(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeSamples = value;
}
template<typename T>
constexpr ::System::Func_1<double_t>*& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_clockSec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockSec;
}
template<typename T>
constexpr ::System::Func_1<double_t>* const& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_clockSec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clockSec;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_set_clockSec(::System::Func_1<double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clockSec = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_samplingRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_samplingRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplingRate;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_set_samplingRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplingRate = value;
}
template<typename T>
constexpr int32_t& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr int32_t const& Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_get_channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channels;
}
template<typename T>
constexpr void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::__cordl_internal_set_channels(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channels = value;
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::_ctor(::System::Func_1<double_t>*  clockSec, double_t  frequency, int32_t  samplingRate, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<double_t>*>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clockSec, frequency, samplingRate, channels);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_ToneAudioReader_1<T>::get_Channels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {"get_Channels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Photon::Voice::AudioUtil_ToneAudioReader_1<T>::get_SamplingRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {"get_SamplingRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::StringW Photon::Voice::AudioUtil_ToneAudioReader_1<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::set_Error(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {"set_Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Photon::Voice::AudioUtil_ToneAudioReader_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Photon::Voice::AudioUtil_ToneAudioReader_1<T>::Read(::ArrayW<T>  buf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buf);
}
template<typename T>
inline ::Photon::Voice::AudioUtil_ToneAudioReader_1<T>* Photon::Voice::AudioUtil_ToneAudioReader_1<T>::New_ctor(::System::Func_1<double_t>*  clockSec, double_t  frequency, int32_t  samplingRate, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::AudioUtil_ToneAudioReader_1<T>*>(clockSec, frequency, samplingRate, channels));
}
/// @brief Convert operator to "::Photon::Voice::IAudioReader_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioReader_1<T>::operator ::Photon::Voice::IAudioReader_1<T>*() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioReader_1<T>"
template<typename T>
constexpr ::Photon::Voice::IAudioReader_1<T>* Photon::Voice::AudioUtil_ToneAudioReader_1<T>::i___Photon__Voice__IAudioReader_1_T_() noexcept {
return static_cast<::Photon::Voice::IAudioReader_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IDataReader_1<T>"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioReader_1<T>::operator ::Photon::Voice::IDataReader_1<T>*() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IDataReader_1<T>"
template<typename T>
constexpr ::Photon::Voice::IDataReader_1<T>* Photon::Voice::AudioUtil_ToneAudioReader_1<T>::i___Photon__Voice__IDataReader_1_T_() noexcept {
return static_cast<::Photon::Voice::IDataReader_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioReader_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Photon::Voice::AudioUtil_ToneAudioReader_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr  Photon::Voice::AudioUtil_ToneAudioReader_1<T>::operator ::Photon::Voice::IAudioDesc*() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Voice::IAudioDesc"
template<typename T>
constexpr ::Photon::Voice::IAudioDesc* Photon::Voice::AudioUtil_ToneAudioReader_1<T>::i___Photon__Voice__IAudioDesc() noexcept {
return static_cast<::Photon::Voice::IAudioDesc*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::AudioUtil_ToneAudioReader_1<T>::AudioUtil_ToneAudioReader_1()   {
}
template<typename T>
inline void Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::setStaticF___9(::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*  value)  {
::cordl_internals::setStaticField<::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*, "<>9", ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>(std::forward<::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>(value));
}
template<typename T>
inline ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>* Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*, "<>9", ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>();
}
template<typename T>
inline void Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::setStaticF___9__0_0(::System::Func_1<double_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<double_t>*, "<>9__0_0", ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>(std::forward<::System::Func_1<double_t>*>(value));
}
template<typename T>
inline ::System::Func_1<double_t>* Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::getStaticF___9__0_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<double_t>*, "<>9__0_0", ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>();
}
template<typename T>
inline void Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline double_t Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::__ctor_b__0_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>(),
                        {"<.ctor>b__0_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
template<typename T>
inline ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>* Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Photon::Voice::ToneAudioReader_1_AudioUtil___c<T>::ToneAudioReader_1_AudioUtil___c()   {
}
