#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/ObstacleEndLineTrigger.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleEndLineTrigger_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__ObstacleEndLineTrigger_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger.add_OnPlayerTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::*)(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::add_OnPlayerTriggerEnter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c18e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {"add_OnPlayerTriggerEnter", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger.remove_OnPlayerTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::*)(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::remove_OnPlayerTriggerEnter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c18e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {"remove_OnPlayerTriggerEnter", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c18f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::*)()>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c18fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*& GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::__cordl_internal_get_OnPlayerTriggerEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerTriggerEnter;
}
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* const& GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::__cordl_internal_get_OnPlayerTriggerEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerTriggerEnter;
}
constexpr void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::__cordl_internal_set_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerTriggerEnter = value;
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::add_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {"add_OnPlayerTriggerEnter", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::remove_OnPlayerTriggerEnter(::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {"remove_OnPlayerTriggerEnter", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger* GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger::ObstacleEndLineTrigger()   {
}
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::*)(::System::Object*, ::System::IntPtr)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c18fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c190e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::*)(::GlobalNamespace::VRRig*, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c190fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::*)(::System::IAsyncResult*)>(&::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c1911c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::Invoke(::GlobalNamespace::VRRig*  vrrig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrrig);
}
inline ::System::IAsyncResult* GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::BeginInvoke(::GlobalNamespace::VRRig*  vrrig, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, vrrig, callback, object);
}
inline void GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent* GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent::ObstacleEndLineTrigger_ObstacleCourseTriggerEvent()   {
}
