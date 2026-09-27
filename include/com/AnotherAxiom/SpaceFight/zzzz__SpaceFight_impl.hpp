#pragma once
// IWYU pragma private; include "com/AnotherAxiom/SpaceFight/SpaceFight.hpp"
#include "GlobalNamespace/zzzz__ArcadeGame_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "com/AnotherAxiom/SpaceFight/zzzz__SpaceFight_SpaceFlightNetState_impl.hpp"
#include "com/AnotherAxiom/SpaceFight/zzzz__SpaceFight_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "com/AnotherAxiom/SpaceFight/zzzz__SpaceFight_SpaceFlightNetState_def.hpp"
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)()>(&::com::AnotherAxiom::SpaceFight::SpaceFight::Update)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5cd2da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.clamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)(::UnityEngine::Transform*)>(&::com::AnotherAxiom::SpaceFight::SpaceFight::clamp)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cd3214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"clamp", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.ButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::com::AnotherAxiom::SpaceFight::SpaceFight::ButtonDown)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5cd32f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                    {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)(::UnityEngine::Transform*, float_t)>(&::com::AnotherAxiom::SpaceFight::SpaceFight::move)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd31a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"move", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.turn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)(::UnityEngine::Transform*, bool)>(&::com::AnotherAxiom::SpaceFight::SpaceFight::turn)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd3298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"turn", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.GetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::com::AnotherAxiom::SpaceFight::SpaceFight::*)()>(&::com::AnotherAxiom::SpaceFight::SpaceFight::GetNetworkState)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5cd3374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                    {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.SetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)(::ArrayW<uint8_t>)>(&::com::AnotherAxiom::SpaceFight::SpaceFight::SetNetworkState)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5cd386c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                    {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.ButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::com::AnotherAxiom::SpaceFight::SpaceFight::ButtonUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd3a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                    {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight.OnTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)()>(&::com::AnotherAxiom::SpaceFight::SpaceFight::OnTimeout)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd3a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                    {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::SpaceFight::SpaceFight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::SpaceFight::SpaceFight::*)()>(&::com::AnotherAxiom::SpaceFight::SpaceFight::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5cd3a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_set_player(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_projectile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_projectile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectile;
}
constexpr void com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_set_projectile(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectile = value;
}
constexpr ::UnityEngine::Vector2& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_tableSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableSize;
}
constexpr ::UnityEngine::Vector2 const& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_tableSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableSize;
}
constexpr void com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_set_tableSize(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableSize = value;
}
constexpr ::ArrayW<bool>& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_projectilesFired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilesFired;
}
constexpr ::ArrayW<bool> const& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_projectilesFired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilesFired;
}
constexpr void com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_set_projectilesFired(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilesFired = value;
}
constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_netStateLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateLast;
}
constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState const& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_netStateLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateLast;
}
constexpr void com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_set_netStateLast(::GlobalNamespace::SpaceFight_SpaceFlightNetState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateLast = value;
}
constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_netStateCur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateCur;
}
constexpr ::GlobalNamespace::SpaceFight_SpaceFlightNetState const& com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_get_netStateCur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateCur;
}
constexpr void com::AnotherAxiom::SpaceFight::SpaceFight::__cordl_internal_set_netStateCur(::GlobalNamespace::SpaceFight_SpaceFlightNetState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateCur = value;
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::clamp(::UnityEngine::Transform*  tr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"clamp", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tr);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::move(::UnityEngine::Transform*  p, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"move", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, speed);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::turn(::UnityEngine::Transform*  p, bool  cw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {"turn", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, cw);
}
inline ::ArrayW<uint8_t> com::AnotherAxiom::SpaceFight::SpaceFight::GetNetworkState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::SetNetworkState(::ArrayW<uint8_t>  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::OnTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::SpaceFight::SpaceFight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::SpaceFight::SpaceFight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::com::AnotherAxiom::SpaceFight::SpaceFight* com::AnotherAxiom::SpaceFight::SpaceFight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::com::AnotherAxiom::SpaceFight::SpaceFight*>());
}
// Ctor Parameters []
constexpr ::com::AnotherAxiom::SpaceFight::SpaceFight::SpaceFight()   {
}
