#pragma once
// IWYU pragma private; include "Liv/Lck/Telemetry/LckTelemetryEvent.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryEventType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Telemetry/zzzz__LckTelemetryEvent_def.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryEventType_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__LckTelemetryEvent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent.get_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::LckTelemetryEventType (::Liv::Lck::Telemetry::LckTelemetryEvent::*)()>(&::Liv::Lck::Telemetry::LckTelemetryEvent::get_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4bb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"get_EventType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent.set_EventType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryEvent::*)(::Liv::Lck::Core::LckTelemetryEventType)>(&::Liv::Lck::Telemetry::LckTelemetryEvent::set_EventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4bb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"set_EventType", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::Liv::Lck::Telemetry::LckTelemetryEvent::*)()>(&::Liv::Lck::Telemetry::LckTelemetryEvent::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4bb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent.set_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryEvent::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Liv::Lck::Telemetry::LckTelemetryEvent::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4bb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"set_Context", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryEvent::*)(::Liv::Lck::Core::LckTelemetryEventType)>(&::Liv::Lck::Telemetry::LckTelemetryEvent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d4bb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryEvent::*)(::Liv::Lck::Core::LckTelemetryEventType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Liv::Lck::Telemetry::LckTelemetryEvent::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d4bbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Telemetry::LckTelemetryEvent::*)()>(&::Liv::Lck::Telemetry::LckTelemetryEvent::ToString)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x9d4bbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                    {::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Core::LckTelemetryEventType& Liv::Lck::Telemetry::LckTelemetryEvent::__cordl_internal_get__EventType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventType_k__BackingField;
}
constexpr ::Liv::Lck::Core::LckTelemetryEventType const& Liv::Lck::Telemetry::LckTelemetryEvent::__cordl_internal_get__EventType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EventType_k__BackingField;
}
constexpr void Liv::Lck::Telemetry::LckTelemetryEvent::__cordl_internal_set__EventType_k__BackingField(::Liv::Lck::Core::LckTelemetryEventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EventType_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Liv::Lck::Telemetry::LckTelemetryEvent::__cordl_internal_get__Context_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Context_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Liv::Lck::Telemetry::LckTelemetryEvent::__cordl_internal_get__Context_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Context_k__BackingField;
}
constexpr void Liv::Lck::Telemetry::LckTelemetryEvent::__cordl_internal_set__Context_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Context_k__BackingField = value;
}
inline ::Liv::Lck::Core::LckTelemetryEventType Liv::Lck::Telemetry::LckTelemetryEvent::get_EventType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"get_EventType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::LckTelemetryEventType>(this, ___internal_method);
}
inline void Liv::Lck::Telemetry::LckTelemetryEvent::set_EventType(::Liv::Lck::Core::LckTelemetryEventType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"set_EventType", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Liv::Lck::Telemetry::LckTelemetryEvent::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(this, ___internal_method);
}
inline void Liv::Lck::Telemetry::LckTelemetryEvent::set_Context(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {"set_Context", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Telemetry::LckTelemetryEvent::_ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void Liv::Lck::Telemetry::LckTelemetryEvent::_ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Core::LckTelemetryEventType>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, context);
}
inline ::StringW Liv::Lck::Telemetry::LckTelemetryEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Liv::Lck::Telemetry::LckTelemetryEvent* Liv::Lck::Telemetry::LckTelemetryEvent::New_ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Telemetry::LckTelemetryEvent*>(eventType));
}
inline ::Liv::Lck::Telemetry::LckTelemetryEvent* Liv::Lck::Telemetry::LckTelemetryEvent::New_ctor(::Liv::Lck::Core::LckTelemetryEventType  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Telemetry::LckTelemetryEvent*>(eventType, context));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Telemetry::LckTelemetryEvent::LckTelemetryEvent()   {
}
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Telemetry::LckTelemetryEvent___c::*)()>(&::Liv::Lck::Telemetry::LckTelemetryEvent___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4bf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Telemetry::LckTelemetryEvent___c._ToString_b__10_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Telemetry::LckTelemetryEvent___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>)>(&::Liv::Lck::Telemetry::LckTelemetryEvent___c::_ToString_b__10_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d4bf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(),
                        {"<ToString>b__10_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Telemetry::LckTelemetryEvent___c::setStaticF___9(::Liv::Lck::Telemetry::LckTelemetryEvent___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Telemetry::LckTelemetryEvent___c*, "<>9", ::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(std::forward<::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(value));
}
inline ::Liv::Lck::Telemetry::LckTelemetryEvent___c* Liv::Lck::Telemetry::LckTelemetryEvent___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Telemetry::LckTelemetryEvent___c*, "<>9", ::Liv::Lck::Telemetry::LckTelemetryEvent___c*>();
}
inline void Liv::Lck::Telemetry::LckTelemetryEvent___c::setStaticF___9__10_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>*, "<>9__10_0", ::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>* Liv::Lck::Telemetry::LckTelemetryEvent___c::getStaticF___9__10_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,::StringW>*, "<>9__10_0", ::Liv::Lck::Telemetry::LckTelemetryEvent___c*>();
}
inline void Liv::Lck::Telemetry::LckTelemetryEvent___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Liv::Lck::Telemetry::LckTelemetryEvent___c::_ToString_b__10_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  kvp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Telemetry::LckTelemetryEvent___c*>(),
                        {"<ToString>b__10_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, kvp);
}
inline ::Liv::Lck::Telemetry::LckTelemetryEvent___c* Liv::Lck::Telemetry::LckTelemetryEvent___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Telemetry::LckTelemetryEvent___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Telemetry::LckTelemetryEvent___c::LckTelemetryEvent___c()   {
}
