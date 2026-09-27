#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderSmallHandTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSmallHandTrigger_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSmallHandTrigger.get_TriggeredThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderSmallHandTrigger::*)()>(&::GorillaTagScripts::Builder::BuilderSmallHandTrigger::get_TriggeredThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c326ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>(),
                        {"get_TriggeredThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSmallHandTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSmallHandTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderSmallHandTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5c3270c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSmallHandTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSmallHandTrigger::*)()>(&::GorillaTagScripts::Builder::BuilderSmallHandTrigger::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c32c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_timeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_timeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeline;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_timeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeline = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_animation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_animation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animation;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_animation(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animation = value;
}
constexpr int32_t& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_lastTriggeredFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggeredFrame;
}
constexpr int32_t const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_lastTriggeredFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggeredFrame;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_lastTriggeredFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggeredFrame = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_onlySmallHands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySmallHands;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_onlySmallHands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySmallHands;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_onlySmallHands(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlySmallHands = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_requireMinimumVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireMinimumVelocity;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_requireMinimumVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireMinimumVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_requireMinimumVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireMinimumVelocity = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_minimumVelocityMagnitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumVelocityMagnitude;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_minimumVelocityMagnitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumVelocityMagnitude;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_minimumVelocityMagnitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumVelocityMagnitude = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_hasCheckedZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCheckedZone;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_hasCheckedZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCheckedZone;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_hasCheckedZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCheckedZone = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_ignoreScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreScale;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_ignoreScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreScale;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_ignoreScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreScale = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_TriggeredEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggeredEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_TriggeredEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggeredEvent;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_TriggeredEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggeredEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::Builder::BuilderSmallHandTrigger::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
inline bool GorillaTagScripts::Builder::BuilderSmallHandTrigger::get_TriggeredThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>(),
                        {"get_TriggeredThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderSmallHandTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderSmallHandTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderSmallHandTrigger* GorillaTagScripts::Builder::BuilderSmallHandTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderSmallHandTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderSmallHandTrigger::BuilderSmallHandTrigger()   {
}
