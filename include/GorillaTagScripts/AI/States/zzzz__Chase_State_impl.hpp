#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/States/Chase_State.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/AI/States/zzzz__Chase_State_def.hpp"
#include "GorillaTagScripts/AI/zzzz__AIEntity_def.hpp"
#include "GorillaTagScripts/AI/zzzz__IState_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::AI::States::Chase_State.get_FollowTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTagScripts::AI::States::Chase_State::*)()>(&::GorillaTagScripts::AI::States::Chase_State::get_FollowTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c48898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"get_FollowTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::Chase_State.set_FollowTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::Chase_State::*)(::UnityEngine::Transform*)>(&::GorillaTagScripts::AI::States::Chase_State::set_FollowTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c488a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"set_FollowTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::Chase_State._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::Chase_State::*)(::GorillaTagScripts::AI::AIEntity*)>(&::GorillaTagScripts::AI::States::Chase_State::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c488a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::AI::AIEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::Chase_State.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::Chase_State::*)()>(&::GorillaTagScripts::AI::States::Chase_State::Tick)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c488f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::Chase_State.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::Chase_State::*)()>(&::GorillaTagScripts::AI::States::Chase_State::OnEnter)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c48964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"OnEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::Chase_State.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::Chase_State::*)()>(&::GorillaTagScripts::AI::States::Chase_State::OnExit)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c48a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"OnExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity>& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity> const& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GorillaTagScripts::AI::States::Chase_State::__cordl_internal_set_entity(::UnityW<::GorillaTagScripts::AI::AIEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GorillaTagScripts::AI::States::Chase_State::__cordl_internal_set_agent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get__FollowTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowTarget_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get__FollowTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FollowTarget_k__BackingField;
}
constexpr void GorillaTagScripts::AI::States::Chase_State::__cordl_internal_set__FollowTarget_k__BackingField(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FollowTarget_k__BackingField = value;
}
constexpr bool& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get_chaseOver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseOver;
}
constexpr bool const& GorillaTagScripts::AI::States::Chase_State::__cordl_internal_get_chaseOver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseOver;
}
constexpr void GorillaTagScripts::AI::States::Chase_State::__cordl_internal_set_chaseOver(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseOver = value;
}
inline ::UnityW<::UnityEngine::Transform> GorillaTagScripts::AI::States::Chase_State::get_FollowTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"get_FollowTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::States::Chase_State::set_FollowTarget(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"set_FollowTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::AI::States::Chase_State::_ctor(::GorillaTagScripts::AI::AIEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::AI::AIEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GorillaTagScripts::AI::States::Chase_State::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::States::Chase_State::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"OnEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::States::Chase_State::OnExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::Chase_State*>(),
                        {"OnExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::AI::States::Chase_State* GorillaTagScripts::AI::States::Chase_State::New_ctor(::GorillaTagScripts::AI::AIEntity*  entity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::States::Chase_State*>(entity));
}
/// @brief Convert operator to "::GorillaTagScripts::AI::IState"
constexpr  GorillaTagScripts::AI::States::Chase_State::operator ::GorillaTagScripts::AI::IState*() noexcept {
return static_cast<::GorillaTagScripts::AI::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTagScripts::AI::IState"
constexpr ::GorillaTagScripts::AI::IState* GorillaTagScripts::AI::States::Chase_State::i___GorillaTagScripts__AI__IState() noexcept {
return static_cast<::GorillaTagScripts::AI::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::States::Chase_State::Chase_State()   {
}
