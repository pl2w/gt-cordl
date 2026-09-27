#pragma once
// IWYU pragma private; include "GorillaTagScripts/AI/Entities/TestShark.hpp"
#include "GorillaTagScripts/AI/zzzz__AIEntity_impl.hpp"
#include "GorillaTagScripts/AI/Entities/zzzz__TestShark_def.hpp"
#include "GorillaTagScripts/AI/States/zzzz__Chase_State_def.hpp"
#include "GorillaTagScripts/AI/States/zzzz__CircularPatrol_State_def.hpp"
#include "GorillaTagScripts/AI/States/zzzz__Patrol_State_def.hpp"
#include "GorillaTagScripts/AI/zzzz__StateMachine_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::Awake)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c48e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c490b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c4917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark._Awake_g__ShouldChase_7_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<bool>* (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::_Awake_g__ShouldChase_7_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c48fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>g__ShouldChase|7_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark._Awake_b__7_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::_Awake_b__7_2)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c49188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>b__7_2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark._Awake_g__ShouldPatrol_7_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<bool>* (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::_Awake_g__ShouldPatrol_7_1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c49034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>g__ShouldPatrol|7_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AI::Entities::TestShark._Awake_b__7_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::AI::Entities::TestShark::*)()>(&::GorillaTagScripts::AI::Entities::TestShark::_Awake_b__7_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c491f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>b__7_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_nextTimeToChasePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTimeToChasePlayer;
}
constexpr float_t const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_nextTimeToChasePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTimeToChasePlayer;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set_nextTimeToChasePlayer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextTimeToChasePlayer = value;
}
constexpr float_t& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_chasingTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chasingTimer;
}
constexpr float_t const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_chasingTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chasingTimer;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set_chasingTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chasingTimer = value;
}
constexpr bool& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_shouldChase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldChase;
}
constexpr bool const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_shouldChase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldChase;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set_shouldChase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldChase = value;
}
constexpr ::GorillaTagScripts::AI::StateMachine*& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get__stateMachine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateMachine;
}
constexpr ::GorillaTagScripts::AI::StateMachine* const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get__stateMachine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stateMachine;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set__stateMachine(::GorillaTagScripts::AI::StateMachine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stateMachine = value;
}
constexpr ::GorillaTagScripts::AI::States::CircularPatrol_State*& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_circularPatrol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circularPatrol;
}
constexpr ::GorillaTagScripts::AI::States::CircularPatrol_State* const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_circularPatrol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___circularPatrol;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set_circularPatrol(::GorillaTagScripts::AI::States::CircularPatrol_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___circularPatrol = value;
}
constexpr ::GorillaTagScripts::AI::States::Patrol_State*& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_patrol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrol;
}
constexpr ::GorillaTagScripts::AI::States::Patrol_State* const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_patrol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrol;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set_patrol(::GorillaTagScripts::AI::States::Patrol_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrol = value;
}
constexpr ::GorillaTagScripts::AI::States::Chase_State*& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_chase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chase;
}
constexpr ::GorillaTagScripts::AI::States::Chase_State* const& GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_get_chase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chase;
}
constexpr void GorillaTagScripts::AI::Entities::TestShark::__cordl_internal_set_chase(::GorillaTagScripts::AI::States::Chase_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chase = value;
}
inline void GorillaTagScripts::AI::Entities::TestShark::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::Entities::TestShark::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AI::Entities::TestShark::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Func_1<bool>* GorillaTagScripts::AI::Entities::TestShark::_Awake_g__ShouldChase_7_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>g__ShouldChase|7_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*>(this, ___internal_method);
}
inline bool GorillaTagScripts::AI::Entities::TestShark::_Awake_b__7_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>b__7_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Func_1<bool>* GorillaTagScripts::AI::Entities::TestShark::_Awake_g__ShouldPatrol_7_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>g__ShouldPatrol|7_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<bool>*>(this, ___internal_method);
}
inline bool GorillaTagScripts::AI::Entities::TestShark::_Awake_b__7_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AI::Entities::TestShark*>(),
                        {"<Awake>b__7_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GorillaTagScripts::AI::Entities::TestShark* GorillaTagScripts::AI::Entities::TestShark::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AI::Entities::TestShark*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AI::Entities::TestShark::TestShark()   {
}
