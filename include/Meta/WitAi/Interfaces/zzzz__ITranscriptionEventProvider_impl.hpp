#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/ITranscriptionEventProvider.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionEventProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionEventProvider.get_TranscriptionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent* (::Meta::WitAi::Interfaces::ITranscriptionEventProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionEventProvider::get_TranscriptionEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEventProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEventProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Interfaces::ITranscriptionEvent* Meta::WitAi::Interfaces::ITranscriptionEventProvider::get_TranscriptionEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEventProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(this, ___internal_method);
}
