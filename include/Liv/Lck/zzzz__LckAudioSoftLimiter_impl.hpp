#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioSoftLimiter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioSoftLimiter_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioLimiter_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioSoftLimiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioSoftLimiter::*)(float_t, float_t, float_t, float_t, float_t, float_t)>(&::Liv::Lck::LckAudioSoftLimiter::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cde5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioSoftLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioSoftLimiter.ApplyLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckAudioSoftLimiter::*)(float_t, int32_t)>(&::Liv::Lck::LckAudioSoftLimiter::ApplyLimiter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9ce015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioSoftLimiter*>(),
                        {"ApplyLimiter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioSoftLimiter.CalculateSoftKneeGainReduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckAudioSoftLimiter::*)(float_t, float_t, float_t)>(&::Liv::Lck::LckAudioSoftLimiter::CalculateSoftKneeGainReduction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9ce0244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioSoftLimiter*>(),
                        {"CalculateSoftKneeGainReduction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold = value;
}
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__kneeWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kneeWidth;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__kneeWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kneeWidth;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__kneeWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____kneeWidth = value;
}
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__ratio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ratio;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__ratio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ratio;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__ratio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ratio = value;
}
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__makeUpGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeUpGain;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__makeUpGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeUpGain;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__makeUpGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____makeUpGain = value;
}
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__attackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attackTime;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__attackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attackTime;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__attackTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attackTime = value;
}
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__releaseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseTime;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__releaseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseTime;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__releaseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____releaseTime = value;
}
constexpr float_t& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__envelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____envelope;
}
constexpr float_t const& Liv::Lck::LckAudioSoftLimiter::__cordl_internal_get__envelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____envelope;
}
constexpr void Liv::Lck::LckAudioSoftLimiter::__cordl_internal_set__envelope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____envelope = value;
}
inline void Liv::Lck::LckAudioSoftLimiter::_ctor(float_t  threshold, float_t  kneeWidth, float_t  ratio, float_t  makeUpGain, float_t  attackTime, float_t  releaseTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioSoftLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threshold, kneeWidth, ratio, makeUpGain, attackTime, releaseTime);
}
inline float_t Liv::Lck::LckAudioSoftLimiter::ApplyLimiter(float_t  audioIn, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioSoftLimiter*>(),
                        {"ApplyLimiter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, audioIn, sampleRate);
}
inline float_t Liv::Lck::LckAudioSoftLimiter::CalculateSoftKneeGainReduction(float_t  absSample, float_t  kneeStart, float_t  kneeEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioSoftLimiter*>(),
                        {"CalculateSoftKneeGainReduction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, absSample, kneeStart, kneeEnd);
}
inline ::Liv::Lck::LckAudioSoftLimiter* Liv::Lck::LckAudioSoftLimiter::New_ctor(float_t  threshold, float_t  kneeWidth, float_t  ratio, float_t  makeUpGain, float_t  attackTime, float_t  releaseTime)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioSoftLimiter*>(threshold, kneeWidth, ratio, makeUpGain, attackTime, releaseTime));
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioLimiter"
constexpr  Liv::Lck::LckAudioSoftLimiter::operator ::Liv::Lck::ILckAudioLimiter*() noexcept {
return static_cast<::Liv::Lck::ILckAudioLimiter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioLimiter"
constexpr ::Liv::Lck::ILckAudioLimiter* Liv::Lck::LckAudioSoftLimiter::i___Liv__Lck__ILckAudioLimiter() noexcept {
return static_cast<::Liv::Lck::ILckAudioLimiter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioSoftLimiter::LckAudioSoftLimiter()   {
}
