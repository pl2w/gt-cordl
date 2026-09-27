#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioLimiterUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckAudioLimiterUtils_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckAudioLimiterUtils.ApplySoftClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Liv::Lck::LckAudioLimiterUtils::ApplySoftClip)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9cddde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"ApplySoftClip", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioLimiterUtils.CalculateAttackCoefficient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::Liv::Lck::LckAudioLimiterUtils::CalculateAttackCoefficient)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9cddccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"CalculateAttackCoefficient", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioLimiterUtils.CalculateReleaseCoefficient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, int32_t)>(&::Liv::Lck::LckAudioLimiterUtils::CalculateReleaseCoefficient)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9cddd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"CalculateReleaseCoefficient", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioLimiterUtils.UpdateEnvelope
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::Liv::Lck::LckAudioLimiterUtils::UpdateEnvelope)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cdddbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"UpdateEnvelope", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckAudioLimiterUtils.ApplyGainReduction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::Liv::Lck::LckAudioLimiterUtils::ApplyGainReduction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cddddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"ApplyGainReduction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t Liv::Lck::LckAudioLimiterUtils::ApplySoftClip(float_t  audioIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"ApplySoftClip", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, audioIn);
}
inline float_t Liv::Lck::LckAudioLimiterUtils::CalculateAttackCoefficient(float_t  attackTime, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"CalculateAttackCoefficient", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, attackTime, sampleRate);
}
inline float_t Liv::Lck::LckAudioLimiterUtils::CalculateReleaseCoefficient(float_t  releaseTime, int32_t  sampleRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"CalculateReleaseCoefficient", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, releaseTime, sampleRate);
}
inline float_t Liv::Lck::LckAudioLimiterUtils::UpdateEnvelope(float_t  gainReduction, float_t  envelope, float_t  attackCoeff, float_t  releaseCoeff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"UpdateEnvelope", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, gainReduction, envelope, attackCoeff, releaseCoeff);
}
inline float_t Liv::Lck::LckAudioLimiterUtils::ApplyGainReduction(float_t  data, float_t  envelope, float_t  makeUpGain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckAudioLimiterUtils*>(),
                        {"ApplyGainReduction", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, data, envelope, makeUpGain);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckAudioLimiterUtils::LckAudioLimiterUtils()   {
}
