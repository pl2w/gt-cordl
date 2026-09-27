#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/Paddleball.hpp"
#include "GlobalNamespace/zzzz__ArcadeGame_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__PaddleballPaddle_impl.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_PaddleballNetState_impl.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_ScreenMode_impl.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_def.hpp"
#include "GlobalNamespace/zzzz__ArcadeButtons_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_PaddleballNetState_def.hpp"
#include "com/AnotherAxiom/Paddleball/zzzz__Paddleball_ScreenMode_def.hpp"
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::Awake)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5cd3b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::Start)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5cd3b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::Update)> {
  constexpr static std::size_t size = 0xb50;
  constexpr static std::size_t addrs = 0x5cd3d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.UpdateScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::UpdateScore)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5cd3cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"UpdateScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.ByteToYPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::com::AnotherAxiom::Paddleball::Paddleball::*)(uint8_t)>(&::com::AnotherAxiom::Paddleball::Paddleball::ByteToYPos)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cd4a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"ByteToYPos", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.YPosToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::com::AnotherAxiom::Paddleball::Paddleball::*)(float_t)>(&::com::AnotherAxiom::Paddleball::Paddleball::YPosToByte)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5cd4a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"YPosToByte", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.GetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::GetNetworkState)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5cd4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.SetNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)(::ArrayW<uint8_t>)>(&::com::AnotherAxiom::Paddleball::Paddleball::SetNetworkState)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5cd4ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.ButtonUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::com::AnotherAxiom::Paddleball::Paddleball::ButtonUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd5290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.ButtonDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)(int32_t, ::GlobalNamespace::ArcadeButtons)>(&::com::AnotherAxiom::Paddleball::Paddleball::ButtonDown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cd5294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.ChangeScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)(::GlobalNamespace::Paddleball_ScreenMode)>(&::com::AnotherAxiom::Paddleball::Paddleball::ChangeScreen)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5cd48c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"ChangeScreen", {}, {::i2c::type_of<::GlobalNamespace::Paddleball_ScreenMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.OnTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::OnTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd5298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.ReadPlayerDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)(int32_t, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::com::AnotherAxiom::Paddleball::Paddleball::ReadPlayerDataPUN)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cd52a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball.WritePlayerDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)(int32_t, ::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::com::AnotherAxiom::Paddleball::Paddleball::WritePlayerDataPUN)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cd5334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                    {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::com::AnotherAxiom::Paddleball::Paddleball._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::com::AnotherAxiom::Paddleball::Paddleball::*)()>(&::com::AnotherAxiom::Paddleball::Paddleball::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5cd53a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_p()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p;
}
constexpr ::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_p() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___p;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_p(::ArrayW<::UnityW<::com::AnotherAxiom::Paddleball::PaddleballPaddle>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___p = value;
}
constexpr ::ArrayW<float_t>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_requestedPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedPos;
}
constexpr ::ArrayW<float_t> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_requestedPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedPos;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_requestedPos(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestedPos = value;
}
constexpr ::ArrayW<float_t>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_officialPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___officialPos;
}
constexpr ::ArrayW<float_t> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_officialPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___officialPos;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_officialPos(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___officialPos = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_ball()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ball;
}
constexpr ::UnityW<::UnityEngine::Transform> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_ball() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ball;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_ball(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ball = value;
}
constexpr ::UnityEngine::Vector2& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_ballTrajectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballTrajectory;
}
constexpr ::UnityEngine::Vector2 const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_ballTrajectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballTrajectory;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_ballTrajectory(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballTrajectory = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_paddleSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paddleSpeed;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_paddleSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paddleSpeed;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_paddleSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paddleSpeed = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_initialBallSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialBallSpeed;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_initialBallSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialBallSpeed;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_initialBallSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialBallSpeed = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_ballSpeedBoost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballSpeedBoost;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_ballSpeedBoost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballSpeedBoost;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_ballSpeedBoost(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballSpeedBoost = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_gameBallSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBallSpeed;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_gameBallSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameBallSpeed;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_gameBallSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameBallSpeed = value;
}
constexpr ::UnityEngine::Vector2& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_tableSizeBall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableSizeBall;
}
constexpr ::UnityEngine::Vector2 const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_tableSizeBall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableSizeBall;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_tableSizeBall(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableSizeBall = value;
}
constexpr ::UnityEngine::Vector2& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_tableSizePaddle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableSizePaddle;
}
constexpr ::UnityEngine::Vector2 const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_tableSizePaddle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableSizePaddle;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_tableSizePaddle(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableSizePaddle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_blackWinScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blackWinScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_blackWinScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blackWinScreen;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_blackWinScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blackWinScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_whiteWinScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whiteWinScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_whiteWinScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whiteWinScreen;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_whiteWinScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whiteWinScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_titleScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_titleScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___titleScreen;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_titleScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___titleScreen = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_winScreenDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winScreenDuration;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_winScreenDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winScreenDuration;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_winScreenDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winScreenDuration = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_returnToTitleAfterTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToTitleAfterTimestamp;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_returnToTitleAfterTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToTitleAfterTimestamp;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_returnToTitleAfterTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnToTitleAfterTimestamp = value;
}
constexpr int32_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreL()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreL;
}
constexpr int32_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreL() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreL;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_scoreL(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreL = value;
}
constexpr int32_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreR;
}
constexpr int32_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreR;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_scoreR(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreR = value;
}
constexpr ::StringW& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreFormat;
}
constexpr ::StringW const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreFormat;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_scoreFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreFormat = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreDisplay;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_scoreDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreDisplay;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_scoreDisplay(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreDisplay = value;
}
constexpr ::ArrayW<float_t>& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_paddleIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paddleIdle;
}
constexpr ::ArrayW<float_t> const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_paddleIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paddleIdle;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_paddleIdle(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paddleIdle = value;
}
constexpr ::GlobalNamespace::Paddleball_ScreenMode& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_currentScreenMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreenMode;
}
constexpr ::GlobalNamespace::Paddleball_ScreenMode const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_currentScreenMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScreenMode;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_currentScreenMode(::GlobalNamespace::Paddleball_ScreenMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScreenMode = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_yPosToByteFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yPosToByteFactor;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_yPosToByteFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___yPosToByteFactor;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_yPosToByteFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___yPosToByteFactor = value;
}
constexpr float_t& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_byteToYPosFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteToYPosFactor;
}
constexpr float_t const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_byteToYPosFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteToYPosFactor;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_byteToYPosFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___byteToYPosFactor = value;
}
constexpr ::GlobalNamespace::Paddleball_PaddleballNetState& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_netStateLast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateLast;
}
constexpr ::GlobalNamespace::Paddleball_PaddleballNetState const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_netStateLast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateLast;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_netStateLast(::GlobalNamespace::Paddleball_PaddleballNetState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateLast = value;
}
constexpr ::GlobalNamespace::Paddleball_PaddleballNetState& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_netStateCur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateCur;
}
constexpr ::GlobalNamespace::Paddleball_PaddleballNetState const& com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_get_netStateCur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netStateCur;
}
constexpr void com::AnotherAxiom::Paddleball::Paddleball::__cordl_internal_set_netStateCur(::GlobalNamespace::Paddleball_PaddleballNetState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netStateCur = value;
}
inline void com::AnotherAxiom::Paddleball::Paddleball::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::UpdateScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"UpdateScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t com::AnotherAxiom::Paddleball::Paddleball::ByteToYPos(uint8_t  Y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"ByteToYPos", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, Y);
}
inline uint8_t com::AnotherAxiom::Paddleball::Paddleball::YPosToByte(float_t  Y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"YPosToByte", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method, Y);
}
inline ::ArrayW<uint8_t> com::AnotherAxiom::Paddleball::Paddleball::GetNetworkState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::SetNetworkState(::ArrayW<uint8_t>  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::ButtonUp(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::ButtonDown(int32_t  player, ::GlobalNamespace::ArcadeButtons  button)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, button);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::ChangeScreen(::GlobalNamespace::Paddleball_ScreenMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {"ChangeScreen", {}, {::i2c::type_of<::GlobalNamespace::Paddleball_ScreenMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::OnTimeout()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::ReadPlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, stream, info);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::WritePlayerDataPUN(int32_t  player, ::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, stream, info);
}
inline void com::AnotherAxiom::Paddleball::Paddleball::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::com::AnotherAxiom::Paddleball::Paddleball*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::com::AnotherAxiom::Paddleball::Paddleball* com::AnotherAxiom::Paddleball::Paddleball::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::com::AnotherAxiom::Paddleball::Paddleball*>());
}
// Ctor Parameters []
constexpr ::com::AnotherAxiom::Paddleball::Paddleball::Paddleball()   {
}
