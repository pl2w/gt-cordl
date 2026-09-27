#pragma once
// IWYU pragma private; include "GlobalNamespace/OnSqueezeTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OnSqueezeTrigger_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnSqueezeTrigger.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnSqueezeTrigger::*)()>(&::GlobalNamespace::OnSqueezeTrigger::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5656560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSqueezeTrigger*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnSqueezeTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnSqueezeTrigger::*)()>(&::GlobalNamespace::OnSqueezeTrigger::Update)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x56565b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSqueezeTrigger*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnSqueezeTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnSqueezeTrigger::*)()>(&::GlobalNamespace::OnSqueezeTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56566d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSqueezeTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_myHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHoldable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_myHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHoldable;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_myHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myHoldable = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_onPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPress;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_onPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPress;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_onPress(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPress = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_onRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_onRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onRelease;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_onRelease(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onRelease = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_updateWhilePressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateWhilePressed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_updateWhilePressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateWhilePressed;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_updateWhilePressed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateWhilePressed = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_indexFinger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexFinger;
}
constexpr bool const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_indexFinger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexFinger;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_indexFinger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexFinger = value;
}
constexpr bool& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_triggerWasDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerWasDown;
}
constexpr bool const& GlobalNamespace::OnSqueezeTrigger::__cordl_internal_get_triggerWasDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerWasDown;
}
constexpr void GlobalNamespace::OnSqueezeTrigger::__cordl_internal_set_triggerWasDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerWasDown = value;
}
inline void GlobalNamespace::OnSqueezeTrigger::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSqueezeTrigger*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnSqueezeTrigger::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSqueezeTrigger*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OnSqueezeTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnSqueezeTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnSqueezeTrigger* GlobalNamespace::OnSqueezeTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnSqueezeTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnSqueezeTrigger::OnSqueezeTrigger()   {
}
