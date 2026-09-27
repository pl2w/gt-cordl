#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioHardLimiter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioHardLimiter_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioLimiter_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioHardLimiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckAudioHardLimiter::*)(float_t, float_t, float_t, float_t, float_t)>(&::Liv::Lck::LckAudioHardLimiter::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cddba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioHardLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioHardLimiter.ApplyLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::LckAudioHardLimiter::*)(float_t, int32_t)>(&::Liv::Lck::LckAudioHardLimiter::ApplyLimiter)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cddbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioHardLimiter*>(),
                        {"ApplyLimiter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr float_t const& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold;
}
constexpr void Liv::Lck::LckAudioHardLimiter::__cordl_internal_set__threshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold = value;
}
constexpr float_t& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__ratio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ratio;
}
constexpr float_t const& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__ratio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ratio;
}
constexpr void Liv::Lck::LckAudioHardLimiter::__cordl_internal_set__ratio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ratio = value;
}
constexpr float_t& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__makeUpGain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeUpGain;
}
constexpr float_t const& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__makeUpGain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____makeUpGain;
}
constexpr void Liv::Lck::LckAudioHardLimiter::__cordl_internal_set__makeUpGain(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____makeUpGain = value;
}
constexpr float_t& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__attackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attackTime;
}
constexpr float_t const& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__attackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attackTime;
}
constexpr void Liv::Lck::LckAudioHardLimiter::__cordl_internal_set__attackTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attackTime = value;
}
constexpr float_t& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__releaseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseTime;
}
constexpr float_t const& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__releaseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseTime;
}
constexpr void Liv::Lck::LckAudioHardLimiter::__cordl_internal_set__releaseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____releaseTime = value;
}
constexpr float_t& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__envelope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____envelope;
}
constexpr float_t const& Liv::Lck::LckAudioHardLimiter::__cordl_internal_get__envelope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____envelope;
}
constexpr void Liv::Lck::LckAudioHardLimiter::__cordl_internal_set__envelope(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____envelope = value;
}
inline void Liv::Lck::LckAudioHardLimiter::_ctor(float_t  threshold, float_t  ratio, float_t  makeUpGain, float_t  attackTime, float_t  releaseTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioHardLimiter*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threshold, ratio, makeUpGain, attackTime, releaseTime);
}
inline float_t Liv::Lck::LckAudioHardLimiter::ApplyLimiter(float_t  audioIn, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioHardLimiter*>(),
                        {"ApplyLimiter", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, audioIn, sampleRate);
}
inline ::Liv::Lck::LckAudioHardLimiter* Liv::Lck::LckAudioHardLimiter::New_ctor(float_t  threshold, float_t  ratio, float_t  makeUpGain, float_t  attackTime, float_t  releaseTime)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckAudioHardLimiter*>(threshold, ratio, makeUpGain, attackTime, releaseTime));
}
/// @brief Convert operator to "::Liv::Lck::ILckAudioLimiter"
constexpr  Liv::Lck::LckAudioHardLimiter::operator ::Liv::Lck::ILckAudioLimiter*() noexcept {
return static_cast<::Liv::Lck::ILckAudioLimiter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckAudioLimiter"
constexpr ::Liv::Lck::ILckAudioLimiter* Liv::Lck::LckAudioHardLimiter::i___Liv__Lck__ILckAudioLimiter() noexcept {
return static_cast<::Liv::Lck::ILckAudioLimiter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioHardLimiter::LckAudioHardLimiter()   {
}
