#pragma once
// IWYU pragma private; include "Liv/Lck/ILckAudioLimiter.hpp"
#include "Liv/Lck/zzzz__ILckAudioLimiter_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckAudioLimiter.ApplyLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::ILckAudioLimiter::*)(float_t, int32_t)>(&::Liv::Lck::ILckAudioLimiter::ApplyLimiter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckAudioLimiter*>(),
                    {::i2c::class_of<::Liv::Lck::ILckAudioLimiter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t Liv::Lck::ILckAudioLimiter::ApplyLimiter(float_t  audioIn, int32_t  sampleRate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckAudioLimiter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, audioIn, sampleRate);
}
