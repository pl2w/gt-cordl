#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/StayInView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__StayInView_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::StayInView.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::StayInView::*)()>(&::Oculus::Interaction::Samples::StayInView::Update)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa440b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::StayInView*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::StayInView._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::StayInView::*)()>(&::Oculus::Interaction::Samples::StayInView::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa440dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::StayInView*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Samples::StayInView::__cordl_internal_get__eyeCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Samples::StayInView::__cordl_internal_get__eyeCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeCenter;
}
constexpr void Oculus::Interaction::Samples::StayInView::__cordl_internal_set__eyeCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eyeCenter = value;
}
constexpr float_t& Oculus::Interaction::Samples::StayInView::__cordl_internal_get__extraDistanceForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraDistanceForward;
}
constexpr float_t const& Oculus::Interaction::Samples::StayInView::__cordl_internal_get__extraDistanceForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraDistanceForward;
}
constexpr void Oculus::Interaction::Samples::StayInView::__cordl_internal_set__extraDistanceForward(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extraDistanceForward = value;
}
constexpr bool& Oculus::Interaction::Samples::StayInView::__cordl_internal_get__zeroOutEyeHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zeroOutEyeHeight;
}
constexpr bool const& Oculus::Interaction::Samples::StayInView::__cordl_internal_get__zeroOutEyeHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zeroOutEyeHeight;
}
constexpr void Oculus::Interaction::Samples::StayInView::__cordl_internal_set__zeroOutEyeHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zeroOutEyeHeight = value;
}
inline void Oculus::Interaction::Samples::StayInView::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::StayInView*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::StayInView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::StayInView*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::StayInView* Oculus::Interaction::Samples::StayInView::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::StayInView*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::StayInView::StayInView()   {
}
