#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/ITranscriptionEvent.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitTranscriptionEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionEvent.get_OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Interfaces::ITranscriptionEvent::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnPartialTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionEvent.get_OnFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Interfaces::ITranscriptionEvent::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnFullTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnPartialTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Interfaces::ITranscriptionEvent::get_OnFullTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
