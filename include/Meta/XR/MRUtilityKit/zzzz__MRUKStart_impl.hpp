#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKStart.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKStart_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKStart.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKStart::*)()>(&::Meta::XR::MRUtilityKit::MRUKStart::Start)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x9f3a234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKStart._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKStart::*)()>(&::Meta::XR::MRUtilityKit::MRUKStart::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f3a584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKStart._Start_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKStart::*)()>(&::Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f3a68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKStart._Start_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKStart::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_1)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f3a6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_1", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKStart._Start_b__4_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKStart::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f3a700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_2", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::MRUKStart._Start_b__4_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::MRUKStart::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_3)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9f3a760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_3", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_sceneLoadedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneLoadedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_sceneLoadedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneLoadedEvent;
}
constexpr void Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_set_sceneLoadedEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneLoadedEvent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_roomCreatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCreatedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_roomCreatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomCreatedEvent;
}
constexpr void Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_set_roomCreatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomCreatedEvent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_roomUpdatedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomUpdatedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_roomUpdatedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomUpdatedEvent;
}
constexpr void Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_set_roomUpdatedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomUpdatedEvent = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_roomRemovedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomRemovedEvent;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>* const& Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_get_roomRemovedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roomRemovedEvent;
}
constexpr void Meta::XR::MRUtilityKit::MRUKStart::__cordl_internal_set_roomRemovedEvent(::UnityEngine::Events::UnityEvent_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roomRemovedEvent = value;
}
inline void Meta::XR::MRUtilityKit::MRUKStart::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKStart::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_1(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_1", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_2(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_2", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::MRUKStart::_Start_b__4_3(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::MRUKStart*>(),
                        {"<Start>b__4_3", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline ::Meta::XR::MRUtilityKit::MRUKStart* Meta::XR::MRUtilityKit::MRUKStart::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::MRUKStart*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::MRUKStart::MRUKStart()   {
}
