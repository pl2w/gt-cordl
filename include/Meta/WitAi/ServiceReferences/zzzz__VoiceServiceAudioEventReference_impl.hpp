#pragma once
// IWYU pragma private; include "Meta/WitAi/ServiceReferences/VoiceServiceAudioEventReference.hpp"
#include "Meta/WitAi/ServiceReferences/zzzz__AudioInputServiceReference_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__VoiceServiceReference_impl.hpp"
#include "Meta/WitAi/ServiceReferences/zzzz__VoiceServiceAudioEventReference_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference.get_AudioEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::get_AudioEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e855d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e855f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Utilities::VoiceServiceReference& Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::__cordl_internal_get__voiceServiceReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceServiceReference;
}
constexpr ::Meta::WitAi::Utilities::VoiceServiceReference const& Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::__cordl_internal_get__voiceServiceReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceServiceReference;
}
constexpr void Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::__cordl_internal_set__voiceServiceReference(::Meta::WitAi::Utilities::VoiceServiceReference  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceServiceReference = value;
}
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::get_AudioEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference* Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ServiceReferences::VoiceServiceAudioEventReference::VoiceServiceAudioEventReference()   {
}
