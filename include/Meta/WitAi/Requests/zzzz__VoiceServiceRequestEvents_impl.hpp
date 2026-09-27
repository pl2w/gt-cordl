#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequestEvents.hpp"
#include "Meta/Voice/zzzz__NLPRequestEvents_2_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestEvents.SetListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestEvents::*)(::Meta::WitAi::Requests::VoiceServiceRequestEvents*, bool)>(&::Meta::WitAi::Requests::VoiceServiceRequestEvents::SetListeners)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x9e90f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(),
                        {"SetListeners", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VoiceServiceRequestEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VoiceServiceRequestEvents::*)()>(&::Meta::WitAi::Requests::VoiceServiceRequestEvents::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e91d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::Requests::VoiceServiceRequestEvents::SetListeners(::Meta::WitAi::Requests::VoiceServiceRequestEvents*  events, bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(),
                        {"SetListeners", {}, {::i2c::type_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, events, add);
}
inline void Meta::WitAi::Requests::VoiceServiceRequestEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VoiceServiceRequestEvents* Meta::WitAi::Requests::VoiceServiceRequestEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VoiceServiceRequestEvents*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceServiceRequestEvents::VoiceServiceRequestEvents()   {
}
