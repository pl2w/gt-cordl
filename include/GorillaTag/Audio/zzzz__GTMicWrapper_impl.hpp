#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTMicWrapper.hpp"
#include "Photon/Voice/Unity/zzzz__MicWrapper_impl.hpp"
#include "GorillaTag/Audio/zzzz__GTMicWrapper_def.hpp"
#include "Photon/Voice/zzzz__ILogger_def.hpp"
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(::StringW, int32_t, bool, float_t, bool, float_t, ::Photon::Voice::ILogger*)>(&::GorillaTag::Audio::GTMicWrapper::_ctor)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5d4ff7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.UpdateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(bool, float_t, bool, float_t)>(&::GorillaTag::Audio::GTMicWrapper::UpdateWrapper)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d50200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"UpdateWrapper", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.UpdatePitchAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(bool, float_t)>(&::GorillaTag::Audio::GTMicWrapper::UpdatePitchAdjustment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d501e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"UpdatePitchAdjustment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.UpdateVolumeAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(bool, float_t)>(&::GorillaTag::Audio::GTMicWrapper::UpdateVolumeAdjustment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d501f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"UpdateVolumeAdjustment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Audio::GTMicWrapper::*)(::ArrayW<float_t>)>(&::GorillaTag::Audio::GTMicWrapper::Read)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5d50214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                    {::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.PitchShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(float_t, int64_t, float_t, ::ArrayW<float_t>)>(&::GorillaTag::Audio::GTMicWrapper::PitchShift)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d505d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"PitchShift", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.PitchShift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(float_t, int64_t, int64_t, int64_t, float_t, ::ArrayW<float_t>)>(&::GorillaTag::Audio::GTMicWrapper::PitchShift)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x5d505e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"PitchShift", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Audio::GTMicWrapper.ShortTimeFourierTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Audio::GTMicWrapper::*)(::ArrayW<float_t>, int64_t, int64_t)>(&::GorillaTag::Audio::GTMicWrapper::ShortTimeFourierTransform)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5d50dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"ShortTimeFourierTransform", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__allowPitchAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowPitchAdjustment;
}
constexpr bool const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__allowPitchAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowPitchAdjustment;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set__allowPitchAdjustment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowPitchAdjustment = value;
}
constexpr float_t& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__pitchAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchAdjustment;
}
constexpr float_t const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__pitchAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pitchAdjustment;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set__pitchAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pitchAdjustment = value;
}
constexpr bool& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__allowVolumeAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowVolumeAdjustment;
}
constexpr bool const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__allowVolumeAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowVolumeAdjustment;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set__allowVolumeAdjustment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowVolumeAdjustment = value;
}
constexpr float_t& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__volumeAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeAdjustment;
}
constexpr float_t const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__volumeAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____volumeAdjustment;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set__volumeAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____volumeAdjustment = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_InFifo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InFifo;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_InFifo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InFifo;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_InFifo(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InFifo = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_OutFifo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutFifo;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_OutFifo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutFifo;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_OutFifo(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutFifo = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_FfTworksp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FfTworksp;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_FfTworksp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FfTworksp;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_FfTworksp(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FfTworksp = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_LastPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastPhase;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_LastPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastPhase;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_LastPhase(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastPhase = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_SumPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SumPhase;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_SumPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SumPhase;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_SumPhase(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SumPhase = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_OutputAccum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputAccum;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_OutputAccum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutputAccum;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_OutputAccum(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutputAccum = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_AnaFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnaFreq;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_AnaFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnaFreq;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_AnaFreq(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnaFreq = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_AnaMagn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnaMagn;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_AnaMagn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AnaMagn;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_AnaMagn(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AnaMagn = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_SynFreq()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynFreq;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_SynFreq() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynFreq;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_SynFreq(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynFreq = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_SynMagn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynMagn;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get_SynMagn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SynMagn;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set_SynMagn(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SynMagn = value;
}
constexpr int64_t& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__gRover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gRover;
}
constexpr int64_t const& GorillaTag::Audio::GTMicWrapper::__cordl_internal_get__gRover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gRover;
}
constexpr void GorillaTag::Audio::GTMicWrapper::__cordl_internal_set__gRover(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gRover = value;
}
inline void GorillaTag::Audio::GTMicWrapper::setStaticF_MaxFrameLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MaxFrameLength", ::GorillaTag::Audio::GTMicWrapper*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::Audio::GTMicWrapper::getStaticF_MaxFrameLength()  {
return ::cordl_internals::getStaticField<int32_t, "MaxFrameLength", ::GorillaTag::Audio::GTMicWrapper*>();
}
inline void GorillaTag::Audio::GTMicWrapper::_ctor(::StringW  device, int32_t  suggestedFrequency, bool  allowPitchAdjustment, float_t  pitchAdjustment, bool  allowVolumeAdjustment, float_t  volumeAdjustment, ::Photon::Voice::ILogger*  logger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Voice::ILogger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, device, suggestedFrequency, allowPitchAdjustment, pitchAdjustment, allowVolumeAdjustment, volumeAdjustment, logger);
}
inline void GorillaTag::Audio::GTMicWrapper::UpdateWrapper(bool  allowPitchAdjustment, float_t  pitchAdjustment, bool  allowVolumeAdjustment, float_t  volumeAdjustment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"UpdateWrapper", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowPitchAdjustment, pitchAdjustment, allowVolumeAdjustment, volumeAdjustment);
}
inline void GorillaTag::Audio::GTMicWrapper::UpdatePitchAdjustment(bool  allow, float_t  pitchAdjustment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"UpdatePitchAdjustment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allow, pitchAdjustment);
}
inline void GorillaTag::Audio::GTMicWrapper::UpdateVolumeAdjustment(bool  allow, float_t  volumeAdjustment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"UpdateVolumeAdjustment", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allow, volumeAdjustment);
}
inline bool GorillaTag::Audio::GTMicWrapper::Read(::ArrayW<float_t>  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buffer);
}
inline void GorillaTag::Audio::GTMicWrapper::PitchShift(float_t  pitchShift, int64_t  numSampsToProcess, float_t  sampleRate, ::ArrayW<float_t>  indata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"PitchShift", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pitchShift, numSampsToProcess, sampleRate, indata);
}
inline void GorillaTag::Audio::GTMicWrapper::PitchShift(float_t  pitchShift, int64_t  numSampsToProcess, int64_t  fftFrameSize, int64_t  osamp, float_t  sampleRate, ::ArrayW<float_t>  indata)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"PitchShift", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pitchShift, numSampsToProcess, fftFrameSize, osamp, sampleRate, indata);
}
inline void GorillaTag::Audio::GTMicWrapper::ShortTimeFourierTransform(::ArrayW<float_t>  fftBuffer, int64_t  fftFrameSize, int64_t  sign)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Audio::GTMicWrapper*>(),
                        {"ShortTimeFourierTransform", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fftBuffer, fftFrameSize, sign);
}
inline ::GorillaTag::Audio::GTMicWrapper* GorillaTag::Audio::GTMicWrapper::New_ctor(::StringW  device, int32_t  suggestedFrequency, bool  allowPitchAdjustment, float_t  pitchAdjustment, bool  allowVolumeAdjustment, float_t  volumeAdjustment, ::Photon::Voice::ILogger*  logger)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Audio::GTMicWrapper*>(device, suggestedFrequency, allowPitchAdjustment, pitchAdjustment, allowVolumeAdjustment, volumeAdjustment, logger));
}
// Ctor Parameters []
constexpr ::GorillaTag::Audio::GTMicWrapper::GTMicWrapper()   {
}
