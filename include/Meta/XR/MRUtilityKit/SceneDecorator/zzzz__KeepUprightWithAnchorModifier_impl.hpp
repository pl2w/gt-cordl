#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/KeepUprightWithAnchorModifier.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__KeepUprightWithAnchorModifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier.ApplyModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::ApplyModifier)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9f52618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9f52774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::__cordl_internal_get_uprightAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uprightAxis;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::__cordl_internal_get_uprightAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uprightAxis;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::__cordl_internal_set_uprightAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uprightAxis = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier* Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::KeepUprightWithAnchorModifier::KeepUprightWithAnchorModifier()   {
}
