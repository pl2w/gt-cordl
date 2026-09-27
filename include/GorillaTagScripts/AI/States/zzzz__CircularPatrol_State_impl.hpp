#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/States/CircularPatrol_State.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/AI/States/zzzz__CircularPatrol_State_def.hpp"
#include "GorillaTagScripts/AI/zzzz__AIEntity_def.hpp"
#include "GorillaTagScripts/AI/zzzz__IState_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::AI::States::CircularPatrol_State._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::CircularPatrol_State::*)(::GorillaTagScripts::AI::AIEntity*)>(&::GorillaTagScripts::AI::States::CircularPatrol_State::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c48a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::AI::AIEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::CircularPatrol_State.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::CircularPatrol_State::*)()>(&::GorillaTagScripts::AI::States::CircularPatrol_State::Tick)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c48a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::CircularPatrol_State.OnEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::CircularPatrol_State::*)()>(&::GorillaTagScripts::AI::States::CircularPatrol_State::OnEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c48b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {"OnEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::States::CircularPatrol_State.OnExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::States::CircularPatrol_State::*)()>(&::GorillaTagScripts::AI::States::CircularPatrol_State::OnExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c48b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {"OnExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity>& GorillaTagScripts::AI::States::CircularPatrol_State::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GorillaTagScripts::AI::AIEntity> const& GorillaTagScripts::AI::States::CircularPatrol_State::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GorillaTagScripts::AI::States::CircularPatrol_State::__cordl_internal_set_entity(::UnityW<::GorillaTagScripts::AI::AIEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr float_t& GorillaTagScripts::AI::States::CircularPatrol_State::__cordl_internal_get_angle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr float_t const& GorillaTagScripts::AI::States::CircularPatrol_State::__cordl_internal_get_angle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angle;
}
constexpr void GorillaTagScripts::AI::States::CircularPatrol_State::__cordl_internal_set_angle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angle = value;
}
inline void GorillaTagScripts::AI::States::CircularPatrol_State::_ctor(::GorillaTagScripts::AI::AIEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {".ctor", {}, {::i2c::type_of<::GorillaTagScripts::AI::AIEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GorillaTagScripts::AI::States::CircularPatrol_State::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::States::CircularPatrol_State::OnEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {"OnEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::States::CircularPatrol_State::OnExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::States::CircularPatrol_State*>(),
                        {"OnExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::AI::States::CircularPatrol_State* GorillaTagScripts::AI::States::CircularPatrol_State::New_ctor(::GorillaTagScripts::AI::AIEntity*  entity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::States::CircularPatrol_State*>(entity));
}
/// @brief Convert operator to "::GorillaTagScripts::AI::IState"
constexpr  GorillaTagScripts::AI::States::CircularPatrol_State::operator ::GorillaTagScripts::AI::IState*() noexcept {
return static_cast<::GorillaTagScripts::AI::IState*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTagScripts::AI::IState"
constexpr ::GorillaTagScripts::AI::IState* GorillaTagScripts::AI::States::CircularPatrol_State::i___GorillaTagScripts__AI__IState() noexcept {
return static_cast<::GorillaTagScripts::AI::IState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::States::CircularPatrol_State::CircularPatrol_State()   {
}
