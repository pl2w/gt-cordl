#pragma once
// IWYU pragma private; include "Meta/WitAi/AudioDurationTracker.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__AudioDurationTracker_def.hpp"
#include "Meta/WitAi/Data/zzzz__AudioEncoding_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::AudioDurationTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::AudioDurationTracker::*)(::StringW, ::Meta::WitAi::Data::AudioEncoding*)>(&::Meta::WitAi::AudioDurationTracker::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e70db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::AudioDurationTracker.AddBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::AudioDurationTracker::*)(int64_t)>(&::Meta::WitAi::AudioDurationTracker::AddBytes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e70e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"AddBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::AudioDurationTracker.FinalizeAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::AudioDurationTracker::*)()>(&::Meta::WitAi::AudioDurationTracker::FinalizeAudio)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e70e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"FinalizeAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::AudioDurationTracker.GetFinalizeTimeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Meta::WitAi::AudioDurationTracker::*)()>(&::Meta::WitAi::AudioDurationTracker::GetFinalizeTimeStamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e70f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"GetFinalizeTimeStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::AudioDurationTracker.GetAudioDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Meta::WitAi::AudioDurationTracker::*)()>(&::Meta::WitAi::AudioDurationTracker::GetAudioDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e70f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"GetAudioDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::AudioDurationTracker.GetRequestId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::AudioDurationTracker::*)()>(&::Meta::WitAi::AudioDurationTracker::GetRequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e70f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"GetRequestId", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__requestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestId;
}
constexpr ::StringW const& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__requestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestId;
}
constexpr void Meta::WitAi::AudioDurationTracker::__cordl_internal_set__requestId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestId = value;
}
constexpr double_t& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__bytesCaptured()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesCaptured;
}
constexpr double_t const& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__bytesCaptured() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesCaptured;
}
constexpr void Meta::WitAi::AudioDurationTracker::__cordl_internal_set__bytesCaptured(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesCaptured = value;
}
constexpr int32_t& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__bytesPerSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPerSample;
}
constexpr int32_t const& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__bytesPerSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPerSample;
}
constexpr void Meta::WitAi::AudioDurationTracker::__cordl_internal_set__bytesPerSample(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesPerSample = value;
}
constexpr ::Meta::WitAi::Data::AudioEncoding*& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__audioEncoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEncoding;
}
constexpr ::Meta::WitAi::Data::AudioEncoding* const& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__audioEncoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioEncoding;
}
constexpr void Meta::WitAi::AudioDurationTracker::__cordl_internal_set__audioEncoding(::Meta::WitAi::Data::AudioEncoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioEncoding = value;
}
constexpr int64_t& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__finalizeTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalizeTimeStamp;
}
constexpr int64_t const& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__finalizeTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____finalizeTimeStamp;
}
constexpr void Meta::WitAi::AudioDurationTracker::__cordl_internal_set__finalizeTimeStamp(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____finalizeTimeStamp = value;
}
constexpr double_t& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__audioDurationMs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDurationMs;
}
constexpr double_t const& Meta::WitAi::AudioDurationTracker::__cordl_internal_get__audioDurationMs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioDurationMs;
}
constexpr void Meta::WitAi::AudioDurationTracker::__cordl_internal_set__audioDurationMs(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioDurationMs = value;
}
inline void Meta::WitAi::AudioDurationTracker::_ctor(::StringW  requestId, ::Meta::WitAi::Data::AudioEncoding*  audioEncoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Data::AudioEncoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, audioEncoding);
}
inline void Meta::WitAi::AudioDurationTracker::AddBytes(int64_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"AddBytes", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline void Meta::WitAi::AudioDurationTracker::FinalizeAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"FinalizeAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Meta::WitAi::AudioDurationTracker::GetFinalizeTimeStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"GetFinalizeTimeStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline double_t Meta::WitAi::AudioDurationTracker::GetAudioDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"GetAudioDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::AudioDurationTracker::GetRequestId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::AudioDurationTracker*>(),
                        {"GetRequestId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::AudioDurationTracker* Meta::WitAi::AudioDurationTracker::New_ctor(::StringW  requestId, ::Meta::WitAi::Data::AudioEncoding*  audioEncoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::AudioDurationTracker*>(requestId, audioEncoding));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::AudioDurationTracker::AudioDurationTracker()   {
}
