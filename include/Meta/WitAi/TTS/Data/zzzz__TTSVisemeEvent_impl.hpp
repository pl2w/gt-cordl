#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSVisemeEvent.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSEvent_1_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_impl.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSVisemeEvent_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__Viseme_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSVisemeEvent.GetVisemeAot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::TTS::Data::Viseme (*)(::StringW)>(&::Meta::WitAi::TTS::Data::TTSVisemeEvent::GetVisemeAot)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e69670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVisemeEvent*>(),
                        {"GetVisemeAot", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::TTS::Data::TTSVisemeEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::TTS::Data::TTSVisemeEvent::*)()>(&::Meta::WitAi::TTS::Data::TTSVisemeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e696e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVisemeEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::TTS::Data::Viseme Meta::WitAi::TTS::Data::TTSVisemeEvent::GetVisemeAot(::StringW  inViseme)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVisemeEvent*>(),
                        {"GetVisemeAot", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::TTS::Data::Viseme>(nullptr, ___internal_method, inViseme);
}
inline void Meta::WitAi::TTS::Data::TTSVisemeEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::TTS::Data::TTSVisemeEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::TTS::Data::TTSVisemeEvent* Meta::WitAi::TTS::Data::TTSVisemeEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::TTS::Data::TTSVisemeEvent*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSVisemeEvent::TTSVisemeEvent()   {
}
