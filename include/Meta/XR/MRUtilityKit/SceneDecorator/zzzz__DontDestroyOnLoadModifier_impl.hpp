#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/DontDestroyOnLoadModifier.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__DontDestroyOnLoadModifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SceneDecoration_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier.ApplyModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::ApplyModifier)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f525a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f525f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::ApplyModifier(::UnityEngine::GameObject*  decorationGO, ::Meta::XR::MRUtilityKit::MRUKAnchor*  sceneAnchor, ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*  sceneDecoration, ::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  candidate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decorationGO, sceneAnchor, sceneDecoration, candidate);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier* Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DontDestroyOnLoadModifier::DontDestroyOnLoadModifier()   {
}
