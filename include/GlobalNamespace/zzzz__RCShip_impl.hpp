#pragma once
// IWYU pragma private; include "GlobalNamespace/RCShip.hpp"
#include "GlobalNamespace/zzzz__RCHoverboard_impl.hpp"
#include "GlobalNamespace/zzzz__RCShip_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RCShip.GetDataB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::RCShip::*)()>(&::GlobalNamespace::RCShip::GetDataB)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5617ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"GetDataB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.SetDataB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCShip::*)(uint8_t)>(&::GlobalNamespace::RCShip::SetDataB)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5617eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"SetDataB", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.WriteCannonBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCShip::*)(bool)>(&::GlobalNamespace::RCShip::WriteCannonBit)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5617f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"WriteCannonBit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.ReadCannonBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RCShip::*)()>(&::GlobalNamespace::RCShip::ReadCannonBit)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5617f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"ReadCannonBit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.ReadFireFlip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RCShip::*)()>(&::GlobalNamespace::RCShip::ReadFireFlip)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5617f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"ReadFireFlip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCShip::*)(float_t)>(&::GlobalNamespace::RCShip::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5617f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                    {::i2c::class_of<::GlobalNamespace::RCShip*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.RemoteUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCShip::*)(float_t)>(&::GlobalNamespace::RCShip::RemoteUpdate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5618278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                    {::i2c::class_of<::GlobalNamespace::RCShip*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCShip::*)(float_t)>(&::GlobalNamespace::RCShip::SharedUpdate)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x56183b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                    {::i2c::class_of<::GlobalNamespace::RCShip*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RCShip._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RCShip::*)()>(&::GlobalNamespace::RCShip::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5618594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RCShip::__cordl_internal_get_OnFire()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFire;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RCShip::__cordl_internal_get_OnFire() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFire;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_OnFire(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFire = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& GlobalNamespace::RCShip::__cordl_internal_get_OnCannonSideChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCannonSideChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& GlobalNamespace::RCShip::__cordl_internal_get_OnCannonSideChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnCannonSideChanged;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_OnCannonSideChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnCannonSideChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RCShip::__cordl_internal_get_OnMoveStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMoveStarted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RCShip::__cordl_internal_get_OnMoveStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMoveStarted;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_OnMoveStarted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMoveStarted = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::RCShip::__cordl_internal_get_OnMoveStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMoveStopped;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::RCShip::__cordl_internal_get_OnMoveStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMoveStopped;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_OnMoveStopped(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMoveStopped = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::RCShip::__cordl_internal_get_cannonTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::RCShip::__cordl_internal_get_cannonTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonTransform;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_cannonTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cannonTransform = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_leftYaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftYaw;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_leftYaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftYaw;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_leftYaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftYaw = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_rightYaw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightYaw;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_rightYaw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightYaw;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_rightYaw(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightYaw = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_cannonYawSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonYawSpeed;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_cannonYawSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonYawSpeed;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_cannonYawSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cannonYawSpeed = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_triggerPressThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerPressThreshold;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_triggerPressThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerPressThreshold;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_triggerPressThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerPressThreshold = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_triggerReleaseThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerReleaseThreshold;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_triggerReleaseThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerReleaseThreshold;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_triggerReleaseThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerReleaseThreshold = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_facePressThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facePressThreshold;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_facePressThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facePressThreshold;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_facePressThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___facePressThreshold = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_faceReleaseThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceReleaseThreshold;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_faceReleaseThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceReleaseThreshold;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_faceReleaseThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceReleaseThreshold = value;
}
constexpr float_t& GlobalNamespace::RCShip::__cordl_internal_get_movingSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::RCShip::__cordl_internal_get_movingSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movingSpeedThreshold;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_movingSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movingSpeedThreshold = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_prevTriggerDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevTriggerDown;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_prevTriggerDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevTriggerDown;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_prevTriggerDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevTriggerDown = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_prevFaceDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevFaceDown;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_prevFaceDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevFaceDown;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_prevFaceDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevFaceDown = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_faceIsDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceIsDown;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_faceIsDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceIsDown;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_faceIsDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceIsDown = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_triggerIsDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerIsDown;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_triggerIsDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerIsDown;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_triggerIsDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerIsDown = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_armedAfterMobilize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armedAfterMobilize;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_armedAfterMobilize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armedAfterMobilize;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_armedAfterMobilize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armedAfterMobilize = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_cannonToLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonToLeft;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_cannonToLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonToLeft;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_cannonToLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cannonToLeft = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_lastFireFlip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFireFlip;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_lastFireFlip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFireFlip;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_lastFireFlip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFireFlip = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_lastCannonToLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCannonToLeft;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_lastCannonToLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCannonToLeft;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_lastCannonToLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCannonToLeft = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_lastIsMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIsMoving;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_lastIsMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIsMoving;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_lastIsMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastIsMoving = value;
}
constexpr bool& GlobalNamespace::RCShip::__cordl_internal_get_isMovingShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMovingShared;
}
constexpr bool const& GlobalNamespace::RCShip::__cordl_internal_get_isMovingShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMovingShared;
}
constexpr void GlobalNamespace::RCShip::__cordl_internal_set_isMovingShared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMovingShared = value;
}
inline uint8_t GlobalNamespace::RCShip::GetDataB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"GetDataB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void GlobalNamespace::RCShip::SetDataB(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"SetDataB", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void GlobalNamespace::RCShip::WriteCannonBit(bool  toLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"WriteCannonBit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toLeft);
}
inline bool GlobalNamespace::RCShip::ReadCannonBit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"ReadCannonBit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::RCShip::ReadFireFlip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {"ReadFireFlip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RCShip::AuthorityUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCShip*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::RCShip::RemoteUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCShip*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::RCShip::SharedUpdate(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RCShip*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::RCShip::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RCShip*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RCShip* GlobalNamespace::RCShip::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RCShip*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RCShip::RCShip()   {
}
