#pragma once
// IWYU pragma private; include "GorillaTagScripts/ObstacleCourse/TappableBell.hpp"
#include "GlobalNamespace/zzzz__Tappable_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__TappableBell_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/ObstacleCourse/zzzz__TappableBell_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell.add_OnTapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell::*)(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*)>(&::GorillaTagScripts::ObstacleCourse::TappableBell::add_OnTapped)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c16bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                        {"add_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell.remove_OnTapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell::*)(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*)>(&::GorillaTagScripts::ObstacleCourse::TappableBell::remove_OnTapped)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c16f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                        {"remove_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell::*)(float_t, float_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::ObstacleCourse::TappableBell::OnTapLocal)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c19128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell::*)()>(&::GorillaTagScripts::ObstacleCourse::TappableBell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c19210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_get_winnerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winnerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_get_winnerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winnerRig;
}
constexpr void GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_set_winnerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winnerRig = value;
}
constexpr ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*& GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_get_OnTapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* const& GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_get_OnTapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTapped;
}
constexpr void GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_set_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTapped = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_get_rpcCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCooldown;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_get_rpcCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcCooldown;
}
constexpr void GorillaTagScripts::ObstacleCourse::TappableBell::__cordl_internal_set_rpcCooldown(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcCooldown = value;
}
inline void GorillaTagScripts::ObstacleCourse::TappableBell::add_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                        {"add_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ObstacleCourse::TappableBell::remove_OnTapped(::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                        {"remove_OnTapped", {}, {::i2c::type_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::ObstacleCourse::TappableBell::OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapStrength, tapTime, info);
}
inline void GorillaTagScripts::ObstacleCourse::TappableBell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::ObstacleCourse::TappableBell* GorillaTagScripts::ObstacleCourse::TappableBell::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ObstacleCourse::TappableBell*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::TappableBell::TappableBell()   {
}
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::*)(::System::Object*, ::System::IntPtr)>(&::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c16ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5c19218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::*)(::GlobalNamespace::VRRig*, ::System::AsyncCallback*, ::System::Object*)>(&::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c1922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::*)(::System::IAsyncResult*)>(&::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c1924c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(),
                    {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::Invoke(::GlobalNamespace::VRRig*  vrrig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrrig);
}
inline ::System::IAsyncResult* GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::BeginInvoke(::GlobalNamespace::VRRig*  vrrig, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, vrrig, callback, object);
}
inline void GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent* GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::ObstacleCourse::TappableBell_ObstacleCourseTriggerEvent::TappableBell_ObstacleCourseTriggerEvent()   {
}
