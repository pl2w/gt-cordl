#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Button_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_ButtonsState_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Type_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Button_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_ButtonsState_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_Type_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_isPrimaryPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_isPrimaryPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb65ecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_isPrimaryPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_worldRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_worldRay)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb65ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_worldRay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_azimuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_azimuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ee34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_azimuth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_altitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_altitude)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb65eee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_altitude", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(::Unity::IntegerTime::DiscreteTime)>(&::UnityEngine::InputForUI::PointerEvent::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_timestamp", {}, {::i2c::type_of<::Unity::IntegerTime::DiscreteTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_eventSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_eventSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_eventSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(::UnityEngine::InputForUI::EventSource)>(&::UnityEngine::InputForUI::PointerEvent::set_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_eventSource", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_playerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(uint32_t)>(&::UnityEngine::InputForUI::PointerEvent::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_playerId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_eventModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_eventModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_eventModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(::UnityEngine::InputForUI::EventModifiers)>(&::UnityEngine::InputForUI::PointerEvent::set_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb65ef8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_eventModifiers", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::ToString)> {
  constexpr static std::size_t size = 0xc1c;
  constexpr static std::size_t addrs = 0xb65ef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                    {::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.ButtonFromButtonIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PointerEvent_Button (*)(int32_t)>(&::UnityEngine::InputForUI::PointerEvent::ButtonFromButtonIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb65fbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"ButtonFromButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputForUI::PointerEvent::get_isPrimaryPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_isPrimaryPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityEngine::Ray UnityEngine::InputForUI::PointerEvent::get_worldRay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_worldRay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(*this, ___internal_method);
}
inline float_t UnityEngine::InputForUI::PointerEvent::get_azimuth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_azimuth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::InputForUI::PointerEvent::get_altitude()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_altitude", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputForUI::PointerEvent::get_timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerEvent::set_timestamp(::Unity::IntegerTime::DiscreteTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_timestamp", {}, {::i2c::type_of<::Unity::IntegerTime::DiscreteTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::PointerEvent::get_eventSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_eventSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerEvent::set_eventSource(::UnityEngine::InputForUI::EventSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_eventSource", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::PointerEvent::set_playerId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_playerId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::PointerEvent::get_eventModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"get_eventModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerEvent::set_eventModifiers(::UnityEngine::InputForUI::EventModifiers  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"set_eventModifiers", {}, {::i2c::type_of<::UnityEngine::InputForUI::EventModifiers>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputForUI::PointerEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::GlobalNamespace::PointerEvent_Button UnityEngine::InputForUI::PointerEvent::ButtonFromButtonIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputForUI::PointerEvent>(),
                        {"ButtonFromButtonIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PointerEvent_Button>(nullptr, ___internal_method, index);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr  UnityEngine::InputForUI::PointerEvent::operator ::UnityEngine::InputForUI::IEventProperties*()  {
return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::PointerEvent::i___UnityEngine__InputForUI__IEventProperties()  {
return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::PointerEvent_Type", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pointerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deltaPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "worldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isInverted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "button", ty: "::GlobalNamespace::PointerEvent_Button", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buttonsState", ty: "::GlobalNamespace::PointerEvent_ButtonsState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clickCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_timestamp_k__BackingField", ty: "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_eventModifiers_k__BackingField", ty: "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputForUI::PointerEvent::PointerEvent(::GlobalNamespace::PointerEvent_Type  type, int32_t  pointerIndex, ::UnityEngine::Vector2  position, ::UnityEngine::Vector2  deltaPosition, ::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldOrientation, float_t  maxDistance, ::UnityEngine::Vector2  scroll, int32_t  displayIndex, ::UnityEngine::Vector2  tilt, float_t  twist, float_t  pressure, bool  isInverted, ::GlobalNamespace::PointerEvent_Button  button, ::GlobalNamespace::PointerEvent_ButtonsState  buttonsState, int32_t  clickCount, ::Unity::IntegerTime::DiscreteTime  _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource  _eventSource_k__BackingField, uint32_t  _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers  _eventModifiers_k__BackingField) noexcept  {
this->type = type;
this->pointerIndex = pointerIndex;
this->position = position;
this->deltaPosition = deltaPosition;
this->worldPosition = worldPosition;
this->worldOrientation = worldOrientation;
this->maxDistance = maxDistance;
this->scroll = scroll;
this->displayIndex = displayIndex;
this->tilt = tilt;
this->twist = twist;
this->pressure = pressure;
this->isInverted = isInverted;
this->button = button;
this->buttonsState = buttonsState;
this->clickCount = clickCount;
this->_timestamp_k__BackingField = _timestamp_k__BackingField;
this->_eventSource_k__BackingField = _eventSource_k__BackingField;
this->_playerId_k__BackingField = _playerId_k__BackingField;
this->_eventModifiers_k__BackingField = _eventModifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::PointerEvent::PointerEvent()   {
}
