#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ListSnapPoseDelegateRoundedBoxVisual.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ListSnapPoseDelegateRoundedBoxVisual_def.hpp"
#include "Oculus/Interaction/zzzz__ListSnapPoseDelegate_def.hpp"
#include "Oculus/Interaction/zzzz__ProgressCurve_def.hpp"
#include "Oculus/Interaction/zzzz__RoundedBoxProperties_def.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractable_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::*)()>(&::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::LateUpdate)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa440908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::*)()>(&::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa440b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::ListSnapPoseDelegate>& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__listSnapPoseDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listSnapPoseDelegate;
}
constexpr ::UnityW<::Oculus::Interaction::ListSnapPoseDelegate> const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__listSnapPoseDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____listSnapPoseDelegate;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__listSnapPoseDelegate(::UnityW<::Oculus::Interaction::ListSnapPoseDelegate>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____listSnapPoseDelegate = value;
}
constexpr ::UnityW<::Oculus::Interaction::RoundedBoxProperties>& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr ::UnityW<::Oculus::Interaction::RoundedBoxProperties> const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____properties;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__properties(::UnityW<::Oculus::Interaction::RoundedBoxProperties>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____properties = value;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractable>& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__snapInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapInteractable;
}
constexpr ::UnityW<::Oculus::Interaction::SnapInteractable> const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__snapInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapInteractable;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__snapInteractable(::UnityW<::Oculus::Interaction::SnapInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapInteractable = value;
}
constexpr float_t& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__minSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minSize;
}
constexpr float_t const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__minSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minSize;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__minSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minSize = value;
}
constexpr ::Oculus::Interaction::ProgressCurve*& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr ::Oculus::Interaction::ProgressCurve* const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____curve;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__curve(::Oculus::Interaction::ProgressCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____curve = value;
}
constexpr float_t& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__targetWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetWidth;
}
constexpr float_t const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__targetWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetWidth;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__targetWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetWidth = value;
}
constexpr float_t& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__startWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startWidth;
}
constexpr float_t const& Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_get__startWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startWidth;
}
constexpr void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::__cordl_internal_set__startWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startWidth = value;
}
inline void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual* Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual::ListSnapPoseDelegateRoundedBoxVisual()   {
}
