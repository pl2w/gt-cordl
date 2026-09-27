#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportGoalTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Sports/zzzz__SportGoalTrigger_def.hpp"
#include "GorillaTag/Sports/zzzz__SportBall_def.hpp"
#include "GorillaTag/Sports/zzzz__SportScoreboard_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Sports::SportGoalTrigger.BallExitedGoalTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportGoalTrigger::*)(::GorillaTag::Sports::SportBall*)>(&::GorillaTag::Sports::SportGoalTrigger::BallExitedGoalTrigger)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d3bd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {"BallExitedGoalTrigger", {}, {::i2c::type_of<::GorillaTag::Sports::SportBall*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportGoalTrigger.PruneBallsPendingTriggerExitByDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportGoalTrigger::*)()>(&::GorillaTag::Sports::SportGoalTrigger::PruneBallsPendingTriggerExitByDistance)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5d3be14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {"PruneBallsPendingTriggerExitByDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportGoalTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportGoalTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTag::Sports::SportGoalTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d3c020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportGoalTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportGoalTrigger::*)()>(&::GorillaTag::Sports::SportGoalTrigger::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d3c220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard>& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_scoreboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboard;
}
constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard> const& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_scoreboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboard;
}
constexpr void GorillaTag::Sports::SportGoalTrigger::__cordl_internal_set_scoreboard(::UnityW<::GorillaTag::Sports::SportScoreboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreboard = value;
}
constexpr int32_t& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_teamScoringOnThisGoal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamScoringOnThisGoal;
}
constexpr int32_t const& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_teamScoringOnThisGoal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamScoringOnThisGoal;
}
constexpr void GorillaTag::Sports::SportGoalTrigger::__cordl_internal_set_teamScoringOnThisGoal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamScoringOnThisGoal = value;
}
constexpr float_t& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_ballTriggerExitDistanceFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballTriggerExitDistanceFallback;
}
constexpr float_t const& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_ballTriggerExitDistanceFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballTriggerExitDistanceFallback;
}
constexpr void GorillaTag::Sports::SportGoalTrigger::__cordl_internal_set_ballTriggerExitDistanceFallback(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballTriggerExitDistanceFallback = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>*& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_ballsPendingTriggerExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballsPendingTriggerExit;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>* const& GorillaTag::Sports::SportGoalTrigger::__cordl_internal_get_ballsPendingTriggerExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballsPendingTriggerExit;
}
constexpr void GorillaTag::Sports::SportGoalTrigger::__cordl_internal_set_ballsPendingTriggerExit(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballsPendingTriggerExit = value;
}
inline void GorillaTag::Sports::SportGoalTrigger::BallExitedGoalTrigger(::GorillaTag::Sports::SportBall*  ball)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {"BallExitedGoalTrigger", {}, {::i2c::type_of<::GorillaTag::Sports::SportBall*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ball);
}
inline void GorillaTag::Sports::SportGoalTrigger::PruneBallsPendingTriggerExitByDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {"PruneBallsPendingTriggerExitByDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Sports::SportGoalTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Sports::SportGoalTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Sports::SportGoalTrigger* GorillaTag::Sports::SportGoalTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Sports::SportGoalTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Sports::SportGoalTrigger::SportGoalTrigger()   {
}
