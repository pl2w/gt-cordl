#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallPlayer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGoalZone_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallPlayer::*)()>(&::GlobalNamespace::MonkeBallPlayer::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57b0764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallPlayer::*)()>(&::GlobalNamespace::MonkeBallPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameBallPlayer>& GlobalNamespace::MonkeBallPlayer::__cordl_internal_get_gamePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr ::UnityW<::GlobalNamespace::GameBallPlayer> const& GlobalNamespace::MonkeBallPlayer::__cordl_internal_get_gamePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr void GlobalNamespace::MonkeBallPlayer::__cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GameBallPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamePlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallGoalZone>& GlobalNamespace::MonkeBallPlayer::__cordl_internal_get_currGoalZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currGoalZone;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallGoalZone> const& GlobalNamespace::MonkeBallPlayer::__cordl_internal_get_currGoalZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currGoalZone;
}
constexpr void GlobalNamespace::MonkeBallPlayer::__cordl_internal_set_currGoalZone(::UnityW<::GlobalNamespace::MonkeBallGoalZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currGoalZone = value;
}
inline void GlobalNamespace::MonkeBallPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallPlayer* GlobalNamespace::MonkeBallPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallPlayer::MonkeBallPlayer()   {
}
