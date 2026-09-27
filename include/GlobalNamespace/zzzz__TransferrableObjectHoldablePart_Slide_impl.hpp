#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectHoldablePart_Slide.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObjectHoldablePart_Slide_def.hpp"
#include "GlobalNamespace/zzzz__SnapXformToLine_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Slide.UpdateHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Slide::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::TransferrableObjectHoldablePart_Slide::UpdateHeld)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x573e21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Slide*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Slide*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObjectHoldablePart_Slide._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObjectHoldablePart_Slide::*)()>(&::GlobalNamespace::TransferrableObjectHoldablePart_Slide::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x573e4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Slide*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TransferrableObjectHoldablePart_Slide::__cordl_internal_get__maxHandSnapDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHandSnapDistance;
}
constexpr float_t const& GlobalNamespace::TransferrableObjectHoldablePart_Slide::__cordl_internal_get__maxHandSnapDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxHandSnapDistance;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Slide::__cordl_internal_set__maxHandSnapDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxHandSnapDistance = value;
}
constexpr ::UnityW<::GlobalNamespace::SnapXformToLine>& GlobalNamespace::TransferrableObjectHoldablePart_Slide::__cordl_internal_get__snapToLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapToLine;
}
constexpr ::UnityW<::GlobalNamespace::SnapXformToLine> const& GlobalNamespace::TransferrableObjectHoldablePart_Slide::__cordl_internal_get__snapToLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapToLine;
}
constexpr void GlobalNamespace::TransferrableObjectHoldablePart_Slide::__cordl_internal_set__snapToLine(::UnityW<::GlobalNamespace::SnapXformToLine>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapToLine = value;
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Slide::UpdateHeld(::GlobalNamespace::VRRig*  rig, bool  isHeldLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Slide*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig, isHeldLeftHand);
}
inline void GlobalNamespace::TransferrableObjectHoldablePart_Slide::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObjectHoldablePart_Slide*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObjectHoldablePart_Slide* GlobalNamespace::TransferrableObjectHoldablePart_Slide::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObjectHoldablePart_Slide*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObjectHoldablePart_Slide::TransferrableObjectHoldablePart_Slide()   {
}
