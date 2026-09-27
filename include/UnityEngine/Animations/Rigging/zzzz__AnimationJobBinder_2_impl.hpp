#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/AnimationJobBinder_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__AnimationJobBinder_2_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IAnimationJobBinder_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IAnimationJobData_def.hpp"
#include "UnityEngine/Animations/zzzz__AnimationScriptPlayable_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
template<typename TJob,typename TData>
inline TJob UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::Create(::UnityEngine::Animator*  animator, ::by_ref<TData>  data, ::UnityEngine::Component*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<TJob>(this, ___internal_method, animator, data, component);
}
template<typename TJob,typename TData>
inline void UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::Destroy(TJob  job)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
template<typename TJob,typename TData>
inline void UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::Update(TJob  job, ::by_ref<TData>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job, data);
}
template<typename TJob,typename TData>
inline ::UnityEngine::Animations::IAnimationJob* UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::UnityEngine_Animations_Rigging_IAnimationJobBinder_Create(::UnityEngine::Animator*  animator, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data, ::UnityEngine::Component*  component)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(),
                        {"UnityEngine.Animations.Rigging.IAnimationJobBinder.Create", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::IAnimationJobData*>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::IAnimationJob*>(this, ___internal_method, animator, data, component);
}
template<typename TJob,typename TData>
inline void UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::UnityEngine_Animations_Rigging_IAnimationJobBinder_Destroy(::UnityEngine::Animations::IAnimationJob*  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(),
                        {"UnityEngine.Animations.Rigging.IAnimationJobBinder.Destroy", {}, {::i2c::type_of<::UnityEngine::Animations::IAnimationJob*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
template<typename TJob,typename TData>
inline void UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::UnityEngine_Animations_Rigging_IAnimationJobBinder_Update(::UnityEngine::Animations::IAnimationJob*  job, ::UnityEngine::Animations::Rigging::IAnimationJobData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(),
                        {"UnityEngine.Animations.Rigging.IAnimationJobBinder.Update", {}, {::i2c::type_of<::UnityEngine::Animations::IAnimationJob*>(), ::i2c::type_of<::UnityEngine::Animations::Rigging::IAnimationJobData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job, data);
}
template<typename TJob,typename TData>
inline ::UnityEngine::Animations::AnimationScriptPlayable UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::UnityEngine_Animations_Rigging_IAnimationJobBinder_CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Animations::IAnimationJob*  job)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(),
                        {"UnityEngine.Animations.Rigging.IAnimationJobBinder.CreatePlayable", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::Animations::IAnimationJob*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::AnimationScriptPlayable>(this, ___internal_method, graph, job);
}
template<typename TJob,typename TData>
inline void UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TJob,typename TData>
inline ::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>* UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>*>());
}
/// @brief Convert operator to "::UnityEngine::Animations::Rigging::IAnimationJobBinder"
template<typename TJob,typename TData>
constexpr  UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::operator ::UnityEngine::Animations::Rigging::IAnimationJobBinder*() noexcept {
return static_cast<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Animations::Rigging::IAnimationJobBinder"
template<typename TJob,typename TData>
constexpr ::UnityEngine::Animations::Rigging::IAnimationJobBinder* UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::i___UnityEngine__Animations__Rigging__IAnimationJobBinder() noexcept {
return static_cast<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TJob,typename TData>
constexpr ::UnityEngine::Animations::Rigging::AnimationJobBinder_2<TJob,TData>::AnimationJobBinder_2()   {
}
