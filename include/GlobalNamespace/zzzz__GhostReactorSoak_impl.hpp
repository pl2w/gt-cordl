#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSoak.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSoak_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSoak_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSoak_State_def.hpp"
#include "GorillaTagScripts/GhostReactor/SoakTasks/zzzz__IGhostReactorSoakTask_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GhostReactorSoak::Setup)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5865404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.IsSoaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::IsSoaking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586572c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"IsSoaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::OnUpdate)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5865734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"OnUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.GetActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::GetActorNumber)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5865d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"GetActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)(::GlobalNamespace::GhostReactorSoak_State)>(&::GlobalNamespace::GhostReactorSoak::SetState)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5865778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorSoak_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.JoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::JoinRoom)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5865e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"JoinRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.LeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::LeaveRoom)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5865d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"LeaveRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak.UpdateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::UpdateActive)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5865aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"UpdateActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorSoak._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorSoak::*)()>(&::GlobalNamespace::GhostReactorSoak::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5865fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_grPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_grPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grPlayer;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set_grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_grManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_grManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grManager = value;
}
constexpr ::GlobalNamespace::GhostReactorSoak_State& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GhostReactorSoak_State const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set_state(::GlobalNamespace::GhostReactorSoak_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr double_t& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr double_t& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_reconnectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reconnectTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_reconnectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reconnectTime;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set_reconnectTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reconnectTime = value;
}
constexpr double_t& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_disconnectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTime;
}
constexpr double_t const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get_disconnectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTime;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set_disconnectTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectTime = value;
}
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*& GlobalNamespace::GhostReactorSoak::__cordl_internal_get__activeTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTask;
}
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get__activeTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeTask;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set__activeTask(::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeTask = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>*& GlobalNamespace::GhostReactorSoak::__cordl_internal_get__soakTasks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soakTasks;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>* const& GlobalNamespace::GhostReactorSoak::__cordl_internal_get__soakTasks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____soakTasks;
}
constexpr void GlobalNamespace::GhostReactorSoak::__cordl_internal_set__soakTasks(::System::Collections::Generic::List_1<::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____soakTasks = value;
}
inline void GlobalNamespace::GhostReactorSoak::setStaticF_instance(::GlobalNamespace::GhostReactorSoak*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactorSoak*, "instance", ::GlobalNamespace::GhostReactorSoak*>(std::forward<::GlobalNamespace::GhostReactorSoak*>(value));
}
inline ::GlobalNamespace::GhostReactorSoak* GlobalNamespace::GhostReactorSoak::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactorSoak*, "instance", ::GlobalNamespace::GhostReactorSoak*>();
}
inline void GlobalNamespace::GhostReactorSoak::Setup(::GlobalNamespace::GRPlayer*  grPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grPlayer);
}
inline bool GlobalNamespace::GhostReactorSoak::IsSoaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"IsSoaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorSoak::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"OnUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactorSoak::GetActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"GetActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorSoak::SetState(::GlobalNamespace::GhostReactorSoak_State  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorSoak_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GhostReactorSoak::JoinRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"JoinRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorSoak::LeaveRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"LeaveRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorSoak::UpdateActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {"UpdateActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorSoak::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorSoak*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorSoak* GlobalNamespace::GhostReactorSoak::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorSoak*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorSoak::GhostReactorSoak()   {
}
