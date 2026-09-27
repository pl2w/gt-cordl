#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionEventsConnection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEventsConnection_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventBroadcaster_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEventsConnection_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.get_Broadcasters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::get_Broadcasters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"get_Broadcasters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.set_Broadcasters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::set_Broadcasters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c6698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"set_Broadcasters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.get_Handlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::get_Handlers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"get_Handlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.set_Handlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::set_Handlers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c66a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"set_Handlers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.add_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::add_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4c66b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.remove_WhenLocomotionPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::remove_WhenLocomotionPerformed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4c6760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.add_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::add_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4c6810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.remove_WhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::remove_WhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4c68c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::Awake)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa4c6970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4c6c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::OnEnable)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xa4c6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::OnDisable)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xa4c703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.HandlerWhenLocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::HandlerWhenLocomotionEventHandled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4c73ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"HandlerWhenLocomotionEventHandled", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.HandleLocomotionEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::HandleLocomotionEvent)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa4c7444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.InjectAllLocomotionBroadcastersHandlerConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectAllLocomotionBroadcastersHandlerConnection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c7658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectAllLocomotionBroadcastersHandlerConnection", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.InjectOptionalBroadcasters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectOptionalBroadcasters)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4c7780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectOptionalBroadcasters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.InjectHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectHandlers)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4c765c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectHandlers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection.InjectHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectHandler)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4c78a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectHandler", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa4c7960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__broadcasters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcasters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__broadcasters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcasters;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set__broadcasters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadcasters = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__Broadcasters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Broadcasters_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__Broadcasters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Broadcasters_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set__Broadcasters_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Broadcasters_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handler;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set__handler(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handler = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__handlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handlers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__handlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handlers;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set__handlers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handlers = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__Handlers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handlers_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__Handlers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Handlers_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set__Handlers_k__BackingField(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Handlers_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get_WhenLocomotionPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get_WhenLocomotionPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionPerformed;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenLocomotionPerformed = value;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get_WhenLocomotionEventHandled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionEventHandled;
}
constexpr ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* const& Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_get_WhenLocomotionEventHandled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenLocomotionEventHandled;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionEventsConnection::__cordl_internal_set_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenLocomotionEventHandled = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* Oculus::Interaction::Locomotion::LocomotionEventsConnection::get_Broadcasters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"get_Broadcasters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::set_Broadcasters(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"set_Broadcasters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* Oculus::Interaction::Locomotion::LocomotionEventsConnection::get_Handlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"get_Handlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::set_Handlers(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"set_Handlers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::add_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"add_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::remove_WhenLocomotionPerformed(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"remove_WhenLocomotionPerformed", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::add_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"add_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::remove_WhenLocomotionEventHandled(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"remove_WhenLocomotionEventHandled", {}, {::i2c::type_of<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::HandlerWhenLocomotionEventHandled(::Oculus::Interaction::Locomotion::LocomotionEvent  arg1, ::UnityEngine::Pose  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"HandlerWhenLocomotionEventHandled", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::HandleLocomotionEvent(::Oculus::Interaction::Locomotion::LocomotionEvent  locomotionEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"HandleLocomotionEvent", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionEvent);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectAllLocomotionBroadcastersHandlerConnection(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  handlers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectAllLocomotionBroadcastersHandlerConnection", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handlers);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectOptionalBroadcasters(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  broadcasters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectOptionalBroadcasters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, broadcasters);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectHandlers(::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  handlers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectHandlers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handlers);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::InjectHandler(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {"InjectHandler", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionEventsConnection* Oculus::Interaction::Locomotion::LocomotionEventsConnection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionEventsConnection*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr  Oculus::Interaction::Locomotion::LocomotionEventsConnection::operator ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventHandler"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::LocomotionEventsConnection::i___Oculus__Interaction__Locomotion__ILocomotionEventHandler() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr  Oculus::Interaction::Locomotion::LocomotionEventsConnection::operator ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster"
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::LocomotionEventsConnection::i___Oculus__Interaction__Locomotion__ILocomotionEventBroadcaster() noexcept {
return static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionEventsConnection::LocomotionEventsConnection()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c7b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c._Awake_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_Awake_b__18_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4c7b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<Awake>b__18_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c._Awake_b__18_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Locomotion::ILocomotionEventHandler* (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)(::UnityEngine::Object*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_Awake_b__18_1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4c7bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<Awake>b__18_1", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c._InjectOptionalBroadcasters_b__25_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_InjectOptionalBroadcasters_b__25_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4c7bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<InjectOptionalBroadcasters>b__25_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c._InjectHandlers_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_InjectHandlers_b__26_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4c7c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<InjectHandlers>b__26_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c.__ctor_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::__ctor_b__28_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c7ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<.ctor>b__28_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c.__ctor_b__28_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::__ctor_b__28_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4c7cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<.ctor>b__28_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9__18_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*, "<>9__18_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9__18_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>*, "<>9__18_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9__18_1(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*, "<>9__18_1", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*>(value));
}
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9__18_1()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>*, "<>9__18_1", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9__25_0(::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>*, "<>9__25_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9__25_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*,::UnityW<::UnityEngine::Object>>*, "<>9__25_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9__26_0(::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>*, "<>9__26_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>*>(value));
}
inline ::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*,::UnityW<::UnityEngine::Object>>*, "<>9__26_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9__28_0(::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__28_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9__28_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Locomotion::LocomotionEvent>*, "<>9__28_0", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::setStaticF___9__28_1(::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__28_1", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(std::forward<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::getStaticF___9__28_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::Locomotion::LocomotionEvent,::UnityEngine::Pose>*, "<>9__28_1", ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_Awake_b__18_0(::UnityEngine::Object*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<Awake>b__18_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>(this, ___internal_method, b);
}
inline ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_Awake_b__18_1(::UnityEngine::Object*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<Awake>b__18_1", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>(this, ___internal_method, b);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_InjectOptionalBroadcasters_b__25_0(::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<InjectOptionalBroadcasters>b__25_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventBroadcaster*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, b);
}
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::_InjectHandlers_b__26_0(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<InjectHandlers>b__26_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, b);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::__ctor_b__28_0(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<.ctor>b__28_0", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::__ctor_b__28_1(::Oculus::Interaction::Locomotion::LocomotionEvent  _p0_, ::UnityEngine::Pose  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>(),
                        {"<.ctor>b__28_1", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c* Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionEventsConnection___c::LocomotionEventsConnection___c()   {
}
