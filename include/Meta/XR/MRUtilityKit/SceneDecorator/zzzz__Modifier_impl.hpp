#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Modifier.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier.ApplyModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::Modifier::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::Modifier::ApplyModifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::Modifier::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::Modifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f52608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Meta::XR::MRUtilityKit::SceneDecorator::Modifier::__cordl_internal_get_enabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr bool const& Meta::XR::MRUtilityKit::SceneDecorator::Modifier::__cordl_internal_get_enabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabled;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::Modifier::__cordl_internal_set_enabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabled = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::Modifier::ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::Modifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier* Meta::XR::MRUtilityKit::SceneDecorator::Modifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Modifier::Modifier()   {
}
