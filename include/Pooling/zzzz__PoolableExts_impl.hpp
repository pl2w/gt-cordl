#pragma once
// IWYU pragma private; include "Pooling/PoolableExts.hpp"
#include "Pooling/zzzz__IPoolable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Pooling/zzzz__PoolableExts_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline T Pooling::PoolableExts::CreateInstance(T  prefab)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"CreateInstance", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline T Pooling::PoolableExts::Get(T  prefab)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline T Pooling::PoolableExts::Get(T  prefab, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab, parent);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline T Pooling::PoolableExts::Get(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::System::Action_1<T>*  beforeEnable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab, position, rotation, beforeEnable);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline T Pooling::PoolableExts::Get(T  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, ::System::Action_1<T>*  beforeEnable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"Get", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, prefab, position, rotation, parent, beforeEnable);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline void Pooling::PoolableExts::Release(T  poolable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"Release", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, poolable);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<T, ::Pooling::IPoolable_1<T>*>)
inline void Pooling::PoolableExts::DestroyPool(T  prefab)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pooling::PoolableExts*>(),
                    {"DestroyPool", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, prefab);
}
// Ctor Parameters []
constexpr ::Pooling::PoolableExts::PoolableExts()   {
}
