#pragma once
// IWYU pragma private; include "Meta/WitAi/MatchIntentRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__MatchIntentRegistry_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Utilities/zzzz__DictionaryList_2_def.hpp"
#include "Meta/WitAi/zzzz__RegisteredMatchIntent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::MatchIntentRegistry.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (*)()>(&::Meta::WitAi::MatchIntentRegistry::get_Logger)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e74494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::MatchIntentRegistry.get_RegisteredMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>* (*)()>(&::Meta::WitAi::MatchIntentRegistry::get_RegisteredMethods)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e744ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"get_RegisteredMethods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::MatchIntentRegistry.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::WitAi::MatchIntentRegistry::Initialize)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9e74574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::MatchIntentRegistry.RefreshAssemblies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::WitAi::MatchIntentRegistry::RefreshAssemblies)> {
  constexpr static std::size_t size = 0xbf4;
  constexpr static std::size_t addrs = 0x9e746f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"RefreshAssemblies", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::MatchIntentRegistry::setStaticF__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::IVLogger*, "<Logger>k__BackingField", ::Meta::WitAi::MatchIntentRegistry*>(std::forward<::Meta::Voice::Logging::IVLogger*>(value));
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::MatchIntentRegistry::getStaticF__Logger_k__BackingField()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::IVLogger*, "<Logger>k__BackingField", ::Meta::WitAi::MatchIntentRegistry*>();
}
inline void Meta::WitAi::MatchIntentRegistry::setStaticF_registeredMethods(::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*  value)  {
::cordl_internals::setStaticField<::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*, "registeredMethods", ::Meta::WitAi::MatchIntentRegistry*>(std::forward<::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*>(value));
}
inline ::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>* Meta::WitAi::MatchIntentRegistry::getStaticF_registeredMethods()  {
return ::cordl_internals::getStaticField<::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*, "registeredMethods", ::Meta::WitAi::MatchIntentRegistry*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::MatchIntentRegistry::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(nullptr, ___internal_method);
}
inline ::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>* Meta::WitAi::MatchIntentRegistry::get_RegisteredMethods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"get_RegisteredMethods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Utilities::DictionaryList_2<::StringW,::Meta::WitAi::RegisteredMatchIntent*>*>(nullptr, ___internal_method);
}
inline void Meta::WitAi::MatchIntentRegistry::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Meta::WitAi::MatchIntentRegistry::RefreshAssemblies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::MatchIntentRegistry*>(),
                        {"RefreshAssemblies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::MatchIntentRegistry::MatchIntentRegistry()   {
}
