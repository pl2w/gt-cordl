#pragma once
// IWYU pragma private; include "Meta/WitAi/Lib/IAudioLevelRangeProvider.hpp"
#include "Meta/WitAi/Lib/zzzz__IAudioLevelRangeProvider_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Lib::IAudioLevelRangeProvider.get_MinAudioLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Lib::IAudioLevelRangeProvider::*)()>(&::Meta::WitAi::Lib::IAudioLevelRangeProvider::get_MinAudioLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Lib::IAudioLevelRangeProvider.get_MaxAudioLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Lib::IAudioLevelRangeProvider::*)()>(&::Meta::WitAi::Lib::IAudioLevelRangeProvider::get_MaxAudioLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
inline float_t Meta::WitAi::Lib::IAudioLevelRangeProvider::get_MinAudioLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Meta::WitAi::Lib::IAudioLevelRangeProvider::get_MaxAudioLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Lib::IAudioLevelRangeProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
