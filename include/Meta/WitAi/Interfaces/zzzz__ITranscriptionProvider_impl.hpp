#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/ITranscriptionProvider.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitMicLevelChangedEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitTranscriptionEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionProvider.get_OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Interfaces::ITranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionProvider::get_OnPartialTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionProvider.get_OnFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Interfaces::ITranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionProvider::get_OnFullTranscription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionProvider.get_OnMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (::Meta::WitAi::Interfaces::ITranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionProvider::get_OnMicLevelChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionProvider.get_OverrideMicLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Interfaces::ITranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionProvider::get_OverrideMicLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionProvider.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::ITranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionProvider::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::ITranscriptionProvider.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::ITranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::ITranscriptionProvider::Deactivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Interfaces::ITranscriptionProvider::get_OnPartialTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Interfaces::ITranscriptionProvider::get_OnFullTranscription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* Meta::WitAi::Interfaces::ITranscriptionProvider::get_OnMicLevelChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitMicLevelChangedEvent*>(this, ___internal_method);
}
inline bool Meta::WitAi::Interfaces::ITranscriptionProvider::get_OverrideMicLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Interfaces::ITranscriptionProvider::Activate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Interfaces::ITranscriptionProvider::Deactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
