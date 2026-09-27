#pragma once
// IWYU pragma private; include "Meta/WitAi/ServiceReferences/CombinedAudioEventReference.hpp"
#include "Meta/WitAi/Events/UnityEventListeners/zzzz__AudioEventListener_impl.hpp"
#include "Meta/WitAi/ServiceReferences/zzzz__AudioInputServiceReference_impl.hpp"
#include "Meta/WitAi/ServiceReferences/zzzz__CombinedAudioEventReference_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitMicLevelChangedEvent_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioInputEvents_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.get_AudioEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents* (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_AudioEvents)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e850ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                    {::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e850f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::OnEnable)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9e85170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::OnDisable)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9e8530c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.get_OnMicAudioLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_OnMicAudioLevelChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e854a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"get_OnMicAudioLevelChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.get_OnMicStartedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_OnMicStartedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e854b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"get_OnMicStartedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference.get_OnMicStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_OnMicStoppedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e854b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"get_OnMicStoppedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::*)()>(&::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e854c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__onMicAudioLevelChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicAudioLevelChanged;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__onMicAudioLevelChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicAudioLevelChanged;
}
constexpr void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_set__onMicAudioLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMicAudioLevelChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__onMicStartedListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicStartedListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__onMicStartedListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicStartedListening;
}
constexpr void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_set__onMicStartedListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMicStartedListening = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__onMicStoppedListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicStoppedListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__onMicStoppedListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMicStoppedListening;
}
constexpr void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_set__onMicStoppedListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMicStoppedListening = value;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>>& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__sourceListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceListeners;
}
constexpr ::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>> const& Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_get__sourceListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceListeners;
}
constexpr void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::__cordl_internal_set__sourceListeners(::ArrayW<::UnityW<::Meta::WitAi::Events::UnityEventListeners::AudioEventListener>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceListeners = value;
}
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_AudioEvents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Interfaces::IAudioInputEvents*>(this, ___internal_method);
}
inline void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_OnMicAudioLevelChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"get_OnMicAudioLevelChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitMicLevelChangedEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_OnMicStartedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"get_OnMicStartedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::ServiceReferences::CombinedAudioEventReference::get_OnMicStoppedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {"get_OnMicStoppedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::WitAi::ServiceReferences::CombinedAudioEventReference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference* Meta::WitAi::ServiceReferences::CombinedAudioEventReference::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::ServiceReferences::CombinedAudioEventReference*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr  Meta::WitAi::ServiceReferences::CombinedAudioEventReference::operator ::Meta::WitAi::Interfaces::IAudioInputEvents*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputEvents"
constexpr ::Meta::WitAi::Interfaces::IAudioInputEvents* Meta::WitAi::ServiceReferences::CombinedAudioEventReference::i___Meta__WitAi__Interfaces__IAudioInputEvents() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IAudioInputEvents*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::ServiceReferences::CombinedAudioEventReference::CombinedAudioEventReference()   {
}
