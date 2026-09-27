#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/HandHoldXSceneRef.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Climbing/zzzz__HandHoldXSceneRef_def.hpp"
#include "GlobalNamespace/zzzz__HandHold_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Climbing::HandHoldXSceneRef.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::HandHold> (::GorillaLocomotion::Climbing::HandHoldXSceneRef::*)()>(&::GorillaLocomotion::Climbing::HandHoldXSceneRef::get_target)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5cf34ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>(),
                        {"get_target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::HandHoldXSceneRef.get_targetObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GorillaLocomotion::Climbing::HandHoldXSceneRef::*)()>(&::GorillaLocomotion::Climbing::HandHoldXSceneRef::get_targetObject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cf3554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>(),
                        {"get_targetObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::HandHoldXSceneRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::HandHoldXSceneRef::*)()>(&::GorillaLocomotion::Climbing::HandHoldXSceneRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GorillaLocomotion::Climbing::HandHoldXSceneRef::__cordl_internal_get_reference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr ::GlobalNamespace::XSceneRef const& GorillaLocomotion::Climbing::HandHoldXSceneRef::__cordl_internal_get_reference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reference;
}
constexpr void GorillaLocomotion::Climbing::HandHoldXSceneRef::__cordl_internal_set_reference(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reference = value;
}
inline ::UnityW<::GlobalNamespace::HandHold> GorillaLocomotion::Climbing::HandHoldXSceneRef::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::HandHold>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GorillaLocomotion::Climbing::HandHoldXSceneRef::get_targetObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>(),
                        {"get_targetObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::HandHoldXSceneRef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Climbing::HandHoldXSceneRef* GorillaLocomotion::Climbing::HandHoldXSceneRef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Climbing::HandHoldXSceneRef*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Climbing::HandHoldXSceneRef::HandHoldXSceneRef()   {
}
