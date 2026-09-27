#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ScaleUniformModifier.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ScaleUniformModifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier.ApplyModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::ApplyModifier)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f53334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f53438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask> const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_set_mask(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_limitMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitMin;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_limitMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitMin;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_set_limitMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitMin = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_limitMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitMax;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_limitMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitMax;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_set_limitMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitMax = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::__cordl_internal_set_offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier* Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleUniformModifier::ScaleUniformModifier()   {
}
