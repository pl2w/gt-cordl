#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/KnockbackTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__KnockbackTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::KnockbackTrigger.get_TriggeredThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::KnockbackTrigger::*)()>(&::GorillaTagScripts::Builder::KnockbackTrigger::get_TriggeredThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c34af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"get_TriggeredThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::KnockbackTrigger.CheckZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::KnockbackTrigger::*)()>(&::GorillaTagScripts::Builder::KnockbackTrigger::CheckZone)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c34b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"CheckZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::KnockbackTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::KnockbackTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::KnockbackTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x7c8;
  constexpr static std::size_t addrs = 0x5c34c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::KnockbackTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::KnockbackTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::KnockbackTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c35400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::KnockbackTrigger.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::KnockbackTrigger::*)()>(&::GorillaTagScripts::Builder::KnockbackTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c354bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::KnockbackTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::KnockbackTrigger::*)()>(&::GorillaTagScripts::Builder::KnockbackTrigger::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c3552c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::BoxCollider>& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_triggerVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolume;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_triggerVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerVolume;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_triggerVolume(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerVolume = value;
}
constexpr float_t& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_knockbackVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVelocity;
}
constexpr float_t const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_knockbackVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackVelocity;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_knockbackVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackVelocity = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_localAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localAxis;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_localAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localAxis;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_localAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localAxis = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_impactFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_impactFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___impactFX;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_impactFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___impactFX = value;
}
constexpr bool& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_onlySmallMonke()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySmallMonke;
}
constexpr bool const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_onlySmallMonke() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlySmallMonke;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_onlySmallMonke(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlySmallMonke = value;
}
constexpr bool& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_hasCheckedZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCheckedZone;
}
constexpr bool const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_hasCheckedZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCheckedZone;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_hasCheckedZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCheckedZone = value;
}
constexpr bool& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_ignoreScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreScale;
}
constexpr bool const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_ignoreScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreScale;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_ignoreScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreScale = value;
}
constexpr int32_t& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_lastTriggeredFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggeredFrame;
}
constexpr int32_t const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_lastTriggeredFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggeredFrame;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_lastTriggeredFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggeredFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_collidersEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersEntered;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_get_collidersEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersEntered;
}
constexpr void GorillaTagScripts::Builder::KnockbackTrigger::__cordl_internal_set_collidersEntered(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersEntered = value;
}
inline bool GorillaTagScripts::Builder::KnockbackTrigger::get_TriggeredThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"get_TriggeredThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::KnockbackTrigger::CheckZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"CheckZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::KnockbackTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::KnockbackTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::KnockbackTrigger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::KnockbackTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::KnockbackTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::KnockbackTrigger* GorillaTagScripts::Builder::KnockbackTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::KnockbackTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::KnockbackTrigger::KnockbackTrigger()   {
}
