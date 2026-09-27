#pragma once
// IWYU pragma private; include "Pooling/Pool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pooling/zzzz__Pool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__Scene_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename T>
inline void Pooling::Pool_1<T>::setStaticF_poolDict(::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>*, "poolDict", ::Pooling::Pool_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>* Pooling::Pool_1<T>::getStaticF_poolDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<T,::UnityEngine::Pool::IObjectPool_1<T>*>*, "poolDict", ::Pooling::Pool_1<T>*>();
}
template<typename T>
inline void Pooling::Pool_1<T>::OnSceneManagerSceneUnload(::UnityEngine::SceneManagement::Scene  scene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"OnSceneManagerSceneUnload", {}, {::i2c::type_of<::UnityEngine::SceneManagement::Scene>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scene);
}
template<typename T>
inline void Pooling::Pool_1<T>::OnSceneChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"OnSceneChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Pool::IObjectPool_1<T>* Pooling::Pool_1<T>::CreatePool(T  prefab, bool  collectionChecks, int32_t  defaultCapacity, int32_t  maxPoolSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"CreatePool", {}, {::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<T>*>(nullptr, ___internal_method, prefab, collectionChecks, defaultCapacity, maxPoolSize);
}
template<typename T>
inline ::UnityEngine::Pool::IObjectPool_1<T>* Pooling::Pool_1<T>::GetOrCreatePool(T  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"GetOrCreatePool", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<T>*>(nullptr, ___internal_method, prefab);
}
template<typename T>
inline ::UnityEngine::Pool::IObjectPool_1<T>* Pooling::Pool_1<T>::GetPool(T  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"GetPool", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<T>*>(nullptr, ___internal_method, prefab);
}
template<typename T>
inline void Pooling::Pool_1<T>::ChildToPoolRoot(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"ChildToPoolRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform);
}
template<typename T>
inline T Pooling::Pool_1<T>::Get(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::System::Action_1<T>*  beforeEnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab, position, rotation, beforeEnable);
}
template<typename T>
inline T Pooling::Pool_1<T>::Get(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, ::System::Action_1<T>*  beforeEnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab, position, rotation, parent, beforeEnable);
}
template<typename T>
inline void Pooling::Pool_1<T>::DestroyPool(T  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"DestroyPool", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab);
}
template<typename T>
inline void Pooling::Pool_1<T>::OnGet(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"OnGet", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
template<typename T>
inline void Pooling::Pool_1<T>::OnRelease(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"OnRelease", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
template<typename T>
inline void Pooling::Pool_1<T>::OnDestroy(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pooling::Pool_1<T>*>(),
                        {"OnDestroy", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instance);
}
// Ctor Parameters []
template<typename T>
constexpr ::Pooling::Pool_1<T>::Pool_1()   {
}
template<typename T>
constexpr ::UnityW<::UnityEngine::Transform>  Pooling::Pool_1<T>::PoolRoot{{}};
