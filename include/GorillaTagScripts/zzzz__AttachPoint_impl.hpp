#pragma once
// IWYU pragma private; include "GorillaTagScripts/AttachPoint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__AttachPoint_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AttachPoint::*)()>(&::GorillaTagScripts::AttachPoint::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b80c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AttachPoint::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::AttachPoint::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b80c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AttachPoint::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::AttachPoint::OnTriggerExit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5b80dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint.UpdateHookState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AttachPoint::*)(bool)>(&::GorillaTagScripts::AttachPoint::UpdateHookState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b80d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"UpdateHookState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint.SetIsHook
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AttachPoint::*)(bool)>(&::GorillaTagScripts::AttachPoint::SetIsHook)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b80ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"SetIsHook", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint.IsHooked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::AttachPoint::*)()>(&::GorillaTagScripts::AttachPoint::IsHooked)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b80da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"IsHooked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::AttachPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::AttachPoint::*)()>(&::GorillaTagScripts::AttachPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::AttachPoint::__cordl_internal_get_attachPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::AttachPoint::__cordl_internal_get_attachPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPoint;
}
constexpr void GorillaTagScripts::AttachPoint::__cordl_internal_set_attachPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachPoint = value;
}
constexpr ::UnityEngine::Events::UnityAction*& GorillaTagScripts::AttachPoint::__cordl_internal_get_onHookedChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHookedChanged;
}
constexpr ::UnityEngine::Events::UnityAction* const& GorillaTagScripts::AttachPoint::__cordl_internal_get_onHookedChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHookedChanged;
}
constexpr void GorillaTagScripts::AttachPoint::__cordl_internal_set_onHookedChanged(::UnityEngine::Events::UnityAction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHookedChanged = value;
}
constexpr bool& GorillaTagScripts::AttachPoint::__cordl_internal_get_isHooked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHooked;
}
constexpr bool const& GorillaTagScripts::AttachPoint::__cordl_internal_get_isHooked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHooked;
}
constexpr void GorillaTagScripts::AttachPoint::__cordl_internal_set_isHooked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHooked = value;
}
constexpr bool& GorillaTagScripts::AttachPoint::__cordl_internal_get_wasHooked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHooked;
}
constexpr bool const& GorillaTagScripts::AttachPoint::__cordl_internal_get_wasHooked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHooked;
}
constexpr void GorillaTagScripts::AttachPoint::__cordl_internal_set_wasHooked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHooked = value;
}
constexpr bool& GorillaTagScripts::AttachPoint::__cordl_internal_get_inForest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inForest;
}
constexpr bool const& GorillaTagScripts::AttachPoint::__cordl_internal_get_inForest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inForest;
}
constexpr void GorillaTagScripts::AttachPoint::__cordl_internal_set_inForest(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inForest = value;
}
inline void GorillaTagScripts::AttachPoint::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::AttachPoint::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::AttachPoint::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::AttachPoint::UpdateHookState(bool  isHooked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"UpdateHookState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHooked);
}
inline void GorillaTagScripts::AttachPoint::SetIsHook(bool  isHooked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"SetIsHook", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isHooked);
}
inline bool GorillaTagScripts::AttachPoint::IsHooked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {"IsHooked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::AttachPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::AttachPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::AttachPoint* GorillaTagScripts::AttachPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::AttachPoint*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::AttachPoint::AttachPoint()   {
}
