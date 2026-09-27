#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioEventProvider.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioEventProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioEventProvider.get_AudioEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (::Meta::WitAi::Interfaces::IAudioEventProvider::*)()>(&::Meta::WitAi::Interfaces::IAudioEventProvider::get_AudioEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioEventProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioEventProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::Interfaces::IAudioEventProvider::get_AudioEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioEventProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputEvents*>(this, ___internal_method);
}
