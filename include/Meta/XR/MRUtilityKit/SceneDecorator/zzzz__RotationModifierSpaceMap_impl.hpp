#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/RotationModifierSpaceMap.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__RotationModifierSpaceMap_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap.ApplyModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::ApplyModifier)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x9f52b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap.ColorDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::ColorDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f53064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(),
                        {"ColorDistance", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9f5308c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::__cordl_internal_get_RotateToColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotateToColor;
}
constexpr ::UnityEngine::Color const& Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::__cordl_internal_get_RotateToColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotateToColor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::__cordl_internal_set_RotateToColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotateToColor = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::ColorDistance(::UnityEngine::Color  a, ::UnityEngine::Color  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(),
                        {"ColorDistance", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, a, b);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap* Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RotationModifierSpaceMap::RotationModifierSpaceMap()   {
}
