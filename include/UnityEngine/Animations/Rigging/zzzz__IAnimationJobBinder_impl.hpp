#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/IAnimationJobBinder.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IAnimationJobBinder_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IAnimationJobData_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IAnimationJobBinder.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::IAnimationJob* (::UnityEngine::Animations::Rigging::IAnimationJobBinder::*)(::UnityEngine::Animator*, ::UnityEngine::Animations::Rigging::IAnimationJobData*, ::UnityEngine::Component*)>(&::UnityEngine::Animations::Rigging::IAnimationJobBinder::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IAnimationJobBinder.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::IAnimationJobBinder::*)(::UnityEngine::Animations::IAnimationJob*)>(&::UnityEngine::Animations::Rigging::IAnimationJobBinder::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IAnimationJobBinder.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::IAnimationJobBinder::*)(::UnityEngine::Animations::IAnimationJob*, ::UnityEngine::Animations::Rigging::IAnimationJobData*)>(&::UnityEngine::Animations::Rigging::IAnimationJobBinder::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::IAnimationJobBinder.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::AnimationScriptPlayable (::UnityEngine::Animations::Rigging::IAnimationJobBinder::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animations::IAnimationJob*)>(&::UnityEngine::Animations::Rigging::IAnimationJobBinder::CreatePlayable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(),
                    {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Animations::IAnimationJob* UnityEngine::Animations::Rigging::IAnimationJobBinder::Create(::UnityEngine::Animator*  animator, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data, ::UnityEngine::Component*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::IAnimationJob*>(this, ___internal_method, animator, data, component);
}
inline void UnityEngine::Animations::Rigging::IAnimationJobBinder::Destroy(::UnityEngine::Animations::IAnimationJob*  job)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
inline void UnityEngine::Animations::Rigging::IAnimationJobBinder::Update(::UnityEngine::Animations::IAnimationJob*  job, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job, data);
}
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::Rigging::IAnimationJobBinder::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::IAnimationJob*  job)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable>(this, ___internal_method, graph, job);
}
