#pragma once
// IWYU pragma private; include "Meta/WitAi/IVoiceEventProvider.hpp"
#include "Meta/WitAi/zzzz__IVoiceEventProvider_def.hpp"
#include "Meta/WitAi/Events/zzzz__VoiceEvents_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::IVoiceEventProvider.get_VoiceEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::VoiceEvents* (::Meta::WitAi::IVoiceEventProvider::*)()>(&::Meta::WitAi::IVoiceEventProvider::get_VoiceEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IVoiceEventProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::IVoiceEventProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Events::VoiceEvents* Meta::WitAi::IVoiceEventProvider::get_VoiceEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IVoiceEventProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::VoiceEvents*>(this, ___internal_method);
}
