#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerEvent.hpp"
#include "Oculus/Interaction/zzzz__PointerEventType_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "Oculus/Interaction/zzzz__IEvent_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PointerEvent.get_Identifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PointerEvent::*)()>(&::Oculus::Interaction::PointerEvent::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Identifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointerEvent.get_EventId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Oculus::Interaction::PointerEvent::*)()>(&::Oculus::Interaction::PointerEvent::get_EventId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_EventId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointerEvent.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PointerEventType (::Oculus::Interaction::PointerEvent::*)()>(&::Oculus::Interaction::PointerEvent::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointerEvent.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::PointerEvent::*)()>(&::Oculus::Interaction::PointerEvent::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa46b090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointerEvent.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::PointerEvent::*)()>(&::Oculus::Interaction::PointerEvent::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa46b0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PointerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PointerEvent::*)(int32_t, ::Oculus::Interaction::PointerEventType, ::UnityEngine::Pose, ::System::Object*)>(&::Oculus::Interaction::PointerEvent::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa463988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::PointerEventType>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PointerEvent::setStaticF__nextEventId(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "_nextEventId", ::Oculus::Interaction::PointerEvent>(std::forward<uint64_t>(value));
}
inline uint64_t Oculus::Interaction::PointerEvent::getStaticF__nextEventId()  {
return ::cordl_internals::getStaticField<uint64_t, "_nextEventId", ::Oculus::Interaction::PointerEvent>();
}
inline int32_t Oculus::Interaction::PointerEvent::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint64_t Oculus::Interaction::PointerEvent::get_EventId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_EventId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::Oculus::Interaction::PointerEventType Oculus::Interaction::PointerEvent::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PointerEventType>(*this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::PointerEvent::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::PointerEvent::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
inline void Oculus::Interaction::PointerEvent::_ctor(int32_t  identifier, ::Oculus::Interaction::PointerEventType  type, ::UnityEngine::Pose  pose, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerEvent>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Interaction::PointerEventType>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, identifier, type, pose, data);
}
/// @brief Convert operator to "::Oculus::Interaction::IEvent"
constexpr  Oculus::Interaction::PointerEvent::operator ::Oculus::Interaction::IEvent*()  {
return static_cast<::Oculus::Interaction::IEvent*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Oculus::Interaction::IEvent"
constexpr ::Oculus::Interaction::IEvent* Oculus::Interaction::PointerEvent::i___Oculus__Interaction__IEvent()  {
return static_cast<::Oculus::Interaction::IEvent*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Identifier_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EventId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Type_k__BackingField", ty: "::Oculus::Interaction::PointerEventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Pose_k__BackingField", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Data_k__BackingField", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::PointerEvent::PointerEvent(int32_t  _Identifier_k__BackingField, uint64_t  _EventId_k__BackingField, ::Oculus::Interaction::PointerEventType  _Type_k__BackingField, ::UnityEngine::Pose  _Pose_k__BackingField, ::System::Object*  _Data_k__BackingField) noexcept  {
this->_Identifier_k__BackingField = _Identifier_k__BackingField;
this->_EventId_k__BackingField = _EventId_k__BackingField;
this->_Type_k__BackingField = _Type_k__BackingField;
this->_Pose_k__BackingField = _Pose_k__BackingField;
this->_Data_k__BackingField = _Data_k__BackingField;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PointerEvent::PointerEvent()   {
}
