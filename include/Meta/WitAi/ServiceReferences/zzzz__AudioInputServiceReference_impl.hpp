#pragma once
// IWYU pragma private; include "Meta/WitAi/ServiceReferences/AudioInputServiceReference.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/ServiceReferences/zzzz__AudioInputServiceReference_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioEventProvider_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::AudioInputServiceReference.get_AudioEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (::Meta::WitAi::ServiceReferences::AudioInputServiceReference::*)()>(&::Meta::WitAi::ServiceReferences::AudioInputServiceReference::get_AudioEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ServiceReferences::AudioInputServiceReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ServiceReferences::AudioInputServiceReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::AudioInputServiceReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ServiceReferences::AudioInputServiceReference::*)()>(&::Meta::WitAi::ServiceReferences::AudioInputServiceReference::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e850e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::AudioInputServiceReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::ServiceReferences::AudioInputServiceReference::get_AudioEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ServiceReferences::AudioInputServiceReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::ServiceReferences::AudioInputServiceReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::AudioInputServiceReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ServiceReferences::AudioInputServiceReference* Meta::WitAi::ServiceReferences::AudioInputServiceReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ServiceReferences::AudioInputServiceReference*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr  Meta::WitAi::ServiceReferences::AudioInputServiceReference::operator ::Meta::WitAi::Interfaces::IAudioEventProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioEventProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr ::Meta::WitAi::Interfaces::IAudioEventProvider* Meta::WitAi::ServiceReferences::AudioInputServiceReference::i___Meta__WitAi__Interfaces__IAudioEventProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioEventProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ServiceReferences::AudioInputServiceReference::AudioInputServiceReference()   {
}
