#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/TransferrableObjectHoldablePart_Pin.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__TransferrableObjectHoldablePart_Pin_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::*)()>(&::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5da3f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin.UpdateHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::*)(::GlobalNamespace::VRRig*, bool)>(&::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::UpdateHeld)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5da3f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::*)()>(&::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5da42bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_breakStrengthThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakStrengthThreshold;
}
constexpr float_t const& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_breakStrengthThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___breakStrengthThreshold;
}
constexpr void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_set_breakStrengthThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___breakStrengthThreshold = value;
}
constexpr float_t& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_maxHandSnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr float_t const& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_maxHandSnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHandSnapDistance;
}
constexpr void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_set_maxHandSnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHandSnapDistance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_pin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_pin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pin;
}
constexpr void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_set_pin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pin = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_OnBreak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBreak;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_OnBreak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBreak;
}
constexpr void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_set_OnBreak(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBreak = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_OnBreakLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBreakLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_OnBreakLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnBreakLocal;
}
constexpr void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_set_OnBreakLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnBreakLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_OnEnableHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnableHoldable;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_get_OnEnableHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEnableHoldable;
}
constexpr void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::__cordl_internal_set_OnEnableHoldable(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEnableHoldable = value;
}
inline void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, isHeldLeftHand);
}
inline void GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin* GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::TransferrableObjectHoldablePart_Pin::TransferrableObjectHoldablePart_Pin()   {
}
