#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGoalZone.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGoalZone_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGoalZone.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGoalZone::*)()>(&::GlobalNamespace::MonkeBallGoalZone::Tick)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x57b0298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGoalZone.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGoalZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeBallGoalZone::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x57b04a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGoalZone.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGoalZone::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::MonkeBallGoalZone::OnTriggerExit)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57b062c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGoalZone.CleanupPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGoalZone::*)(::GlobalNamespace::MonkeBallPlayer*)>(&::GlobalNamespace::MonkeBallGoalZone::CleanupPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57a6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {"CleanupPlayer", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGoalZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGoalZone::*)()>(&::GlobalNamespace::MonkeBallGoalZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b075c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MonkeBallGoalZone::__cordl_internal_get_teamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr int32_t const& GlobalNamespace::MonkeBallGoalZone::__cordl_internal_get_teamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamId;
}
constexpr void GlobalNamespace::MonkeBallGoalZone::__cordl_internal_set_teamId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>*& GlobalNamespace::MonkeBallGoalZone::__cordl_internal_get_playersInGoalZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInGoalZone;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>* const& GlobalNamespace::MonkeBallGoalZone::__cordl_internal_get_playersInGoalZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInGoalZone;
}
constexpr void GlobalNamespace::MonkeBallGoalZone::__cordl_internal_set_playersInGoalZone(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInGoalZone = value;
}
inline void GlobalNamespace::MonkeBallGoalZone::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGoalZone::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MonkeBallGoalZone::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::MonkeBallGoalZone::CleanupPlayer(::GlobalNamespace::MonkeBallPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {"CleanupPlayer", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MonkeBallGoalZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGoalZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallGoalZone* GlobalNamespace::MonkeBallGoalZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallGoalZone*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallGoalZone::MonkeBallGoalZone()   {
}
