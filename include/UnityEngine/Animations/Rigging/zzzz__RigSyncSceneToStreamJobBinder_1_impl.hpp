#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigSyncSceneToStreamJobBinder_1.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__AnimationJobBinder_2_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJobBinder_1_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigSyncSceneToStreamJob_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
template<typename T>
inline void UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::setStaticF_s_PropertyElementNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_PropertyElementNames", ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>(std::forward<::ArrayW<::StringW>>(value));
}
template<typename T>
inline ::ArrayW<::StringW> UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::getStaticF_s_PropertyElementNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_PropertyElementNames", ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>();
}
template<typename T>
inline ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::Create(::UnityEngine::Animator*  animator, ::by_ref<T>  data, ::UnityEngine::Component*  component)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob>(this, ___internal_method, animator, data, component);
}
template<typename T>
inline void UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::Destroy(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob  job)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job);
}
template<typename T>
inline void UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::Update(::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJob  job, ::by_ref<T>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, job, data);
}
template<typename T>
inline void UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>* UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Animations::Rigging::RigSyncSceneToStreamJobBinder_1<T>::RigSyncSceneToStreamJobBinder_1()   {
}
