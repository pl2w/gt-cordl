#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/ScaleModifier.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ScaleModifier_AxisParameters_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ScaleModifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__ScaleModifier_AxisParameters_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier.ApplyModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::ApplyModifier)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x9f530b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f532c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters& Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_set_x(::GlobalNamespace::ScaleModifier_AxisParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters& Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_get_y()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_get_y() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___y;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_set_y(::GlobalNamespace::ScaleModifier_AxisParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___y = value;
}
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters& Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_get_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr ::GlobalNamespace::ScaleModifier_AxisParameters const& Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_get_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::__cordl_internal_set_z(::GlobalNamespace::ScaleModifier_AxisParameters  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___z = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier* Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::ScaleModifier::ScaleModifier()   {
}
