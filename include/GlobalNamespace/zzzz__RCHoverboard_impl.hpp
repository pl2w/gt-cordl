#pragma once
// IWYU pragma private; include "GlobalNamespace/RCHoverboard.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__SingleInputOption_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard_def.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__EInputSource_def.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard__SingleInputOption_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.get__MaxForwardSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::get__MaxForwardSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5616604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"get__MaxForwardSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.set__MaxForwardSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(float_t)>(&::GlobalNamespace::RCHoverboard::set__MaxForwardSpeed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x561660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"set__MaxForwardSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.get__MaxTurnRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::get__MaxTurnRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5616640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"get__MaxTurnRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.set__MaxTurnRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(float_t)>(&::GlobalNamespace::RCHoverboard::set__MaxTurnRate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5616648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"set__MaxTurnRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.get__MaxTiltAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::get__MaxTiltAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x561667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"get__MaxTiltAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.set__MaxTiltAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(float_t)>(&::GlobalNamespace::RCHoverboard::set__MaxTiltAngle)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5616684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"set__MaxTiltAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::Awake)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x56166b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                    {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.AuthorityBeginDocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::AuthorityBeginDocked)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x56167bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                    {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(float_t)>(&::GlobalNamespace::RCHoverboard::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5616908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                    {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.RemoteUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(float_t)>(&::GlobalNamespace::RCHoverboard::RemoteUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5616a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                    {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(float_t)>(&::GlobalNamespace::RCHoverboard::SharedUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5616a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                    {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::FixedUpdate)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x5616b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::RCHoverboard::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5617314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard._MoveTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RCHoverboard::*)(float_t, float_t, float_t)>(&::GlobalNamespace::RCHoverboard::_MoveTowards)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56176e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"_MoveTowards", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard._SignedAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RCHoverboard::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::GlobalNamespace::RCHoverboard::_SignedAngle)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5617718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"_SignedAngle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard._ProjectOnPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::GlobalNamespace::RCHoverboard::*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::GlobalNamespace::RCHoverboard::_ProjectOnPlane)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x56178dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"_ProjectOnPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCHoverboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCHoverboard::*)()>(&::GlobalNamespace::RCHoverboard::_ctor)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x561790c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputTurn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputTurn;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputTurn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputTurn;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_inputTurn(::GlobalNamespace::RCHoverboard__SingleInputOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputTurn = value;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputThrustForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputThrustForward;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputThrustForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputThrustForward;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_inputThrustForward(::GlobalNamespace::RCHoverboard__SingleInputOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputThrustForward = value;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputThrustBack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputThrustBack;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputThrustBack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputThrustBack;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_inputThrustBack(::GlobalNamespace::RCHoverboard__SingleInputOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputThrustBack = value;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputJump;
}
constexpr ::GlobalNamespace::RCHoverboard__SingleInputOption const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_inputJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_inputJump;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_inputJump(::GlobalNamespace::RCHoverboard__SingleInputOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_inputJump = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverHeight;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverHeight;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_hoverHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverHeight = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverForce;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverForce;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_hoverForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverForce = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverDamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverDamp;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverDamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverDamp;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_hoverDamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverDamp = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::RCHoverboard::__cordl_internal_get_raycastLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastLayers;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::RCHoverboard::__cordl_internal_get_raycastLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raycastLayers;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_raycastLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raycastLayers = value;
}
constexpr bool& GlobalNamespace::RCHoverboard::__cordl_internal_get_enableJumpInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableJumpInput;
}
constexpr bool const& GlobalNamespace::RCHoverboard::__cordl_internal_get_enableJumpInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableJumpInput;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_enableJumpInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableJumpInput = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_jumpForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_jumpForce;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_jumpForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_jumpForce;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_jumpForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_jumpForce = value;
}
constexpr bool& GlobalNamespace::RCHoverboard::__cordl_internal_get__hasJumped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasJumped;
}
constexpr bool const& GlobalNamespace::RCHoverboard::__cordl_internal_get__hasJumped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasJumped;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__hasJumped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasJumped = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_maxForwardSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxForwardSpeed;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_maxForwardSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxForwardSpeed;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_maxForwardSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxForwardSpeed = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_forwardAccelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_forwardAccelTime;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_forwardAccelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_forwardAccelTime;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_forwardAccelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_forwardAccelTime = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_maxTurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxTurnRate;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_maxTurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxTurnRate;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_maxTurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxTurnRate = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_turnAccelTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_turnAccelTime;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_turnAccelTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_turnAccelTime;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_turnAccelTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_turnAccelTime = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_maxTiltAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxTiltAngle;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_maxTiltAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxTiltAngle;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_maxTiltAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxTiltAngle = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_tiltTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tiltTime;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_tiltTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_tiltTime;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_tiltTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_tiltTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_audioSource;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverSound;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_hoverSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverSound = value;
}
constexpr ::Unity::Mathematics::float2& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverSoundVolumeMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverSoundVolumeMinMax;
}
constexpr ::Unity::Mathematics::float2 const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverSoundVolumeMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverSoundVolumeMinMax;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_hoverSoundVolumeMinMax(::Unity::Mathematics::float2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverSoundVolumeMinMax = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverSoundVolumeRampTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverSoundVolumeRampTime;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get_m_hoverSoundVolumeRampTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hoverSoundVolumeRampTime;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set_m_hoverSoundVolumeRampTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hoverSoundVolumeRampTime = value;
}
constexpr bool& GlobalNamespace::RCHoverboard::__cordl_internal_get__hasAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasAudioSource;
}
constexpr bool const& GlobalNamespace::RCHoverboard::__cordl_internal_get__hasAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasAudioSource;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__hasAudioSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasAudioSource = value;
}
constexpr bool& GlobalNamespace::RCHoverboard::__cordl_internal_get__hasHoverSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHoverSound;
}
constexpr bool const& GlobalNamespace::RCHoverboard::__cordl_internal_get__hasHoverSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasHoverSound;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__hasHoverSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasHoverSound = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__forwardAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardAccel;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__forwardAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forwardAccel;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__forwardAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forwardAccel = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__turnAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turnAccel;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__turnAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____turnAccel;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__turnAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____turnAccel = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__tiltAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltAccel;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__tiltAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltAccel;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__tiltAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiltAccel = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__currentTurnRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTurnRate;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__currentTurnRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTurnRate;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__currentTurnRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTurnRate = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__currentTurnAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTurnAngle;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__currentTurnAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTurnAngle;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__currentTurnAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTurnAngle = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__currentTiltAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTiltAngle;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__currentTiltAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTiltAngle;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__currentTiltAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTiltAngle = value;
}
constexpr float_t& GlobalNamespace::RCHoverboard::__cordl_internal_get__motorLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motorLevel;
}
constexpr float_t const& GlobalNamespace::RCHoverboard::__cordl_internal_get__motorLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motorLevel;
}
constexpr void GlobalNamespace::RCHoverboard::__cordl_internal_set__motorLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____motorLevel = value;
}
inline float_t GlobalNamespace::RCHoverboard::get__MaxForwardSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"get__MaxForwardSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RCHoverboard::set__MaxForwardSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"set__MaxForwardSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RCHoverboard::get__MaxTurnRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"get__MaxTurnRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RCHoverboard::set__MaxTurnRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"set__MaxTurnRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RCHoverboard::get__MaxTiltAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"get__MaxTiltAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RCHoverboard::set__MaxTiltAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"set__MaxTiltAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RCHoverboard::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RCHoverboard::AuthorityBeginDocked()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RCHoverboard::AuthorityUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::RCHoverboard::RemoteUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::RCHoverboard::SharedUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCHoverboard*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::RCHoverboard::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RCHoverboard::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline float_t GlobalNamespace::RCHoverboard::_MoveTowards(float_t  current, float_t  target, float_t  maxDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"_MoveTowards", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, current, target, maxDelta);
}
inline float_t GlobalNamespace::RCHoverboard::_SignedAngle(::Unity::Mathematics::float3  from, ::Unity::Mathematics::float3  to, ::Unity::Mathematics::float3  axis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"_SignedAngle", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, from, to, axis);
}
inline ::Unity::Mathematics::float3 GlobalNamespace::RCHoverboard::_ProjectOnPlane(::Unity::Mathematics::float3  vector, ::Unity::Mathematics::float3  planeNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {"_ProjectOnPlane", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(this, ___internal_method, vector, planeNormal);
}
inline void GlobalNamespace::RCHoverboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCHoverboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RCHoverboard* GlobalNamespace::RCHoverboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RCHoverboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RCHoverboard::RCHoverboard()   {
}
