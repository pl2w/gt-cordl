#pragma once
// IWYU pragma private; include "Meta/WitAi/WitConstants.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__WitConstants_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::WitConstants.GetUniqueId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Meta::WitAi::WitConstants::GetUniqueId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e3f474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitConstants*>(),
                        {"GetUniqueId", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::WitConstants::setStaticF_TTS_VOICE(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TTS_VOICE", ::Meta::WitAi::WitConstants*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitConstants::getStaticF_TTS_VOICE()  {
return ::cordl_internals::getStaticField<::StringW, "TTS_VOICE", ::Meta::WitAi::WitConstants*>();
}
inline void Meta::WitAi::WitConstants::setStaticF_TTS_STYLE(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TTS_STYLE", ::Meta::WitAi::WitConstants*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitConstants::getStaticF_TTS_STYLE()  {
return ::cordl_internals::getStaticField<::StringW, "TTS_STYLE", ::Meta::WitAi::WitConstants*>();
}
inline void Meta::WitAi::WitConstants::setStaticF_TTS_SPEED(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TTS_SPEED", ::Meta::WitAi::WitConstants*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitConstants::getStaticF_TTS_SPEED()  {
return ::cordl_internals::getStaticField<::StringW, "TTS_SPEED", ::Meta::WitAi::WitConstants*>();
}
inline void Meta::WitAi::WitConstants::setStaticF_TTS_PITCH(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TTS_PITCH", ::Meta::WitAi::WitConstants*>(std::forward<::StringW>(value));
}
inline ::StringW Meta::WitAi::WitConstants::getStaticF_TTS_PITCH()  {
return ::cordl_internals::getStaticField<::StringW, "TTS_PITCH", ::Meta::WitAi::WitConstants*>();
}
inline ::StringW Meta::WitAi::WitConstants::GetUniqueId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::WitConstants*>(),
                        {"GetUniqueId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::WitConstants::WitConstants()   {
}
