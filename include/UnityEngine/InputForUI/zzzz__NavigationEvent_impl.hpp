#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Direction_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Type_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Direction_def.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Type_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(::Unity::IntegerTime::DiscreteTime)>(&::UnityEngine::InputForUI::NavigationEvent::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_timestamp", {}, {::i2c::type_of<::Unity::IntegerTime::DiscreteTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.get_eventSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::NavigationEvent::*)()>(&::UnityEngine::InputForUI::NavigationEvent::get_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ead8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"get_eventSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_eventSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(::UnityEngine::InputForUI::EventSource)>(&::UnityEngine::InputForUI::NavigationEvent::set_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_eventSource", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(uint32_t)>(&::UnityEngine::InputForUI::NavigationEvent::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65eae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_playerId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.get_eventModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::NavigationEvent::*)()>(&::UnityEngine::InputForUI::NavigationEvent::get_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65eaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"get_eventModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.set_eventModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::NavigationEvent::*)(::UnityEngine::InputForUI::EventModifiers)>(&::UnityEngine::InputForUI::NavigationEvent::set_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65eaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_eventModifiers", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::NavigationEvent::*)()>(&::UnityEngine::InputForUI::NavigationEvent::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb65eb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                    {::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::NavigationEvent.DetermineMoveDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NavigationEvent_Direction (*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::InputForUI::NavigationEvent::DetermineMoveDirection)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb65ec6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"DetermineMoveDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::NavigationEvent::set_timestamp(::Unity::IntegerTime::DiscreteTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_timestamp", {}, {::i2c::type_of<::Unity::IntegerTime::DiscreteTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::NavigationEvent::get_eventSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"get_eventSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::NavigationEvent::set_eventSource(::UnityEngine::InputForUI::EventSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_eventSource", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::NavigationEvent::set_playerId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_playerId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::NavigationEvent::get_eventModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"get_eventModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::NavigationEvent::set_eventModifiers(::UnityEngine::InputForUI::EventModifiers  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"set_eventModifiers", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputForUI::NavigationEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::NavigationEvent_Direction UnityEngine::InputForUI::NavigationEvent::DetermineMoveDirection(::UnityEngine::Vector2  vec, float_t  deadZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::NavigationEvent>(),
                        {"DetermineMoveDirection", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NavigationEvent_Direction>(nullptr, ___internal_method, vec, deadZone);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr  UnityEngine::InputForUI::NavigationEvent::operator ::UnityEngine::InputForUI::IEventProperties*()  {
return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::NavigationEvent::i___UnityEngine__InputForUI__IEventProperties()  {
return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::NavigationEvent_Type", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "direction", ty: "::GlobalNamespace::NavigationEvent_Direction", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shouldBeUsed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputForUI::NavigationEvent::NavigationEvent(::GlobalNamespace::NavigationEvent_Type  type, ::GlobalNamespace::NavigationEvent_Direction  direction, bool  shouldBeUsed, ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField, uint32_t  _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField) noexcept  {
this->type = type;
this->direction = direction;
this->shouldBeUsed = shouldBeUsed;
this->_timestamp_k__BackingField = _timestamp_k__BackingField;
this->_eventSource_k__BackingField = _eventSource_k__BackingField;
this->_playerId_k__BackingField = _playerId_k__BackingField;
this->_eventModifiers_k__BackingField = _eventModifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::NavigationEvent::NavigationEvent()   {
}
