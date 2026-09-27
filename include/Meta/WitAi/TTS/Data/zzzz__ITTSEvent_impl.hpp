#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/ITTSEvent.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__ITTSEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::ITTSEvent.get_SampleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::TTS::Data::ITTSEvent::*)()>(&::Meta::WitAi::TTS::Data::ITTSEvent::get_SampleOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::TTS::Data::ITTSEvent*>(),
                    {::i2c::class_of<::Meta::WitAi::TTS::Data::ITTSEvent*>(), 0}
                ));
    return ___internal_method;
  }
};
inline int32_t Meta::WitAi::TTS::Data::ITTSEvent::get_SampleOffset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::TTS::Data::ITTSEvent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
