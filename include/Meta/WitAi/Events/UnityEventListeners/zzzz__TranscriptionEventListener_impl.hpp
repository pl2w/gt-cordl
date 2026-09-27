#pragma once
// IWYU pragma private; include "Meta/WitAi/Events/UnityEventListeners/TranscriptionEventListener.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Events/UnityEventListeners/zzzz__TranscriptionEventListener_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitTranscriptionEvent_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener.get_OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::*)()>(&::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::get_OnPartialTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"get_OnPartialTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener.get_OnFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::*)()>(&::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::get_OnFullTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e95ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"get_OnFullTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener.get_TranscriptionEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent* (::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::*)()>(&::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::get_TranscriptionEvents)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e95ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"get_TranscriptionEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::*)()>(&::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::OnEnable)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9e95fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::*)()>(&::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::OnDisable)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9e961b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::*)()>(&::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e96398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_get_onPartialTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialTranscription;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_get_onPartialTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialTranscription;
}
constexpr void Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_set_onPartialTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartialTranscription = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_get_onFullTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullTranscription;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_get_onFullTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullTranscription;
}
constexpr void Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_set_onFullTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFullTranscription = value;
}
constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent*& Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent* const& Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::__cordl_internal_set__events(::Meta::WitAi::Interfaces::ITranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::get_OnPartialTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"get_OnPartialTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::get_OnFullTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"get_OnFullTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::ITranscriptionEvent* Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::get_TranscriptionEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"get_TranscriptionEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener* Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr  Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::operator ::Meta::WitAi::Interfaces::ITranscriptionEvent*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::ITranscriptionEvent"
constexpr ::Meta::WitAi::Interfaces::ITranscriptionEvent* Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::i___Meta__WitAi__Interfaces__ITranscriptionEvent() noexcept {
return static_cast<::Meta::WitAi::Interfaces::ITranscriptionEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Events::UnityEventListeners::TranscriptionEventListener::TranscriptionEventListener()   {
}
