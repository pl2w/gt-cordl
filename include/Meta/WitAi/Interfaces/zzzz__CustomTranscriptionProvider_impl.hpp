#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/CustomTranscriptionProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Interfaces/zzzz__CustomTranscriptionProvider_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitMicLevelChangedEvent_def.hpp"
#include "Meta/WitAi/Events/zzzz__WitTranscriptionEvent_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__ITranscriptionProvider_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_LastTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_LastTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_LastTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_OnPartialTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnPartialTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnPartialTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_OnFullTranscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitTranscriptionEvent* (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnFullTranscription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnFullTranscription", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_OnStoppedListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStoppedListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnStoppedListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_OnStartListening
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStartListening)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnStartListening", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_OnMicLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Events::WitMicLevelChangedEvent* (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnMicLevelChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnMicLevelChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.get_OverrideMicLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OverrideMicLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e94b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OverrideMicLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.Activate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider.Deactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::Deactivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Interfaces::CustomTranscriptionProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Interfaces::CustomTranscriptionProvider::*)()>(&::Meta::WitAi::Interfaces::CustomTranscriptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e94b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_overrideMicLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideMicLevel;
}
constexpr bool const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_overrideMicLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideMicLevel;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set_overrideMicLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideMicLevel = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onPartialTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialTranscription;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onPartialTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialTranscription;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set_onPartialTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartialTranscription = value;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent*& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onFullTranscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullTranscription;
}
constexpr ::Meta::WitAi::Events::WitTranscriptionEvent* const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onFullTranscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onFullTranscription;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set_onFullTranscription(::Meta::WitAi::Events::WitTranscriptionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onFullTranscription = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onStoppedListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStoppedListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onStoppedListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStoppedListening;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set_onStoppedListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStoppedListening = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onStartListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartListening;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onStartListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartListening;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set_onStartListening(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStartListening = value;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent*& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onMicLevelChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMicLevelChanged;
}
constexpr ::Meta::WitAi::Events::WitMicLevelChangedEvent* const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get_onMicLevelChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMicLevelChanged;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set_onMicLevelChanged(::Meta::WitAi::Events::WitMicLevelChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMicLevelChanged = value;
}
constexpr ::StringW& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get__LastTranscription_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTranscription_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_get__LastTranscription_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastTranscription_k__BackingField;
}
constexpr void Meta::WitAi::Interfaces::CustomTranscriptionProvider::__cordl_internal_set__LastTranscription_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastTranscription_k__BackingField = value;
}
inline ::StringW Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_LastTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_LastTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnPartialTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnPartialTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitTranscriptionEvent* Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnFullTranscription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnFullTranscription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitTranscriptionEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStoppedListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnStoppedListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnStartListening()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnStartListening", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::Meta::WitAi::Events::WitMicLevelChangedEvent* Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OnMicLevelChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OnMicLevelChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Events::WitMicLevelChangedEvent*>(this, ___internal_method);
}
inline bool Meta::WitAi::Interfaces::CustomTranscriptionProvider::get_OverrideMicLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {"get_OverrideMicLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Interfaces::CustomTranscriptionProvider::Activate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Interfaces::CustomTranscriptionProvider::Deactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Interfaces::CustomTranscriptionProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Interfaces::CustomTranscriptionProvider* Meta::WitAi::Interfaces::CustomTranscriptionProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Interfaces::CustomTranscriptionProvider*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::ITranscriptionProvider"
constexpr  Meta::WitAi::Interfaces::CustomTranscriptionProvider::operator ::Meta::WitAi::Interfaces::ITranscriptionProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::ITranscriptionProvider"
constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider* Meta::WitAi::Interfaces::CustomTranscriptionProvider::i___Meta__WitAi__Interfaces__ITranscriptionProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::ITranscriptionProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Interfaces::CustomTranscriptionProvider::CustomTranscriptionProvider()   {
}
