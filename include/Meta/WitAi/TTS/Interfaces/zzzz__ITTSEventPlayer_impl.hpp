#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Interfaces/ITTSEventPlayer.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ITTSEventPlayer_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEventContainer_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer.get_ElapsedSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::*)()>(&::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::get_ElapsedSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer.get_TotalSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::*)()>(&::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::get_TotalSamples)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer.get_CurrentEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::TTSEventContainer* (::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::*)()>(&::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::get_CurrentEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(), 2}
                ));
    return ___internal_method;
  }
};
inline int32_t Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::get_ElapsedSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::get_TotalSamples()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* Meta::WitAi::TTS::Interfaces::ITTSEventPlayer::get_CurrentEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::TTSEventContainer*>(this, ___internal_method);
}
