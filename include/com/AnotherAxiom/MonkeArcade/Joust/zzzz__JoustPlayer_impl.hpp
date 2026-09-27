#pragma once
// IWYU pragma private; include "com/AnotherAxiom/MonkeArcade/Joust/JoustPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "com/AnotherAxiom/MonkeArcade/Joust/zzzz__JoustPlayer_def.hpp"
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer.get_HorizontalSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::get_HorizontalSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"get_HorizontalSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer.set_HorizontalSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::*)(float_t)>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::set_HorizontalSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"set_HorizontalSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::LateUpdate)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x5cd5798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer.Flap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::Flap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cd5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"Flap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::*)()>(&::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cd5ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector2 const& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_set_velocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_raycastHitResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHitResults;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_raycastHitResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastHitResults;
}
constexpr void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_set_raycastHitResults(::ArrayW<::UnityEngine::RaycastHit2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastHitResults = value;
}
constexpr float_t& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_HSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HSpeed;
}
constexpr float_t const& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_HSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HSpeed;
}
constexpr void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_set_HSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HSpeed = value;
}
constexpr bool& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_flap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flap;
}
constexpr bool const& com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_get_flap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flap;
}
constexpr void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::__cordl_internal_set_flap(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flap = value;
}
inline float_t com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::get_HorizontalSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"get_HorizontalSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::set_HorizontalSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"set_HorizontalSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::Flap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {"Flap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer* com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer*>());
}
// Ctor Parameters []
constexpr ::com::AnotherAxiom::MonkeArcade::Joust::JoustPlayer::JoustPlayer()   {
}
