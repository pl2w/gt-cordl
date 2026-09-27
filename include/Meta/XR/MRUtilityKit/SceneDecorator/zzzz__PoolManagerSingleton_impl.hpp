#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerSingleton.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SingletonMonoBehaviour_1_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerSingleton_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManager_2_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool_1_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton.get_poolManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>* (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::get_poolManager)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f5420c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"get_poolManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::UnityEngine::Transform*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Create)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9f54224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::UnityEngine::Transform*, bool)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Create)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f5434c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Release)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9f54364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Start)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f54468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9f544c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::__cordl_internal_get_poolManagerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolManagerComponent;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent> const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::__cordl_internal_get_poolManagerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolManagerComponent;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::__cordl_internal_set_poolManagerComponent(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolManagerComponent = value;
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>* Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::get_poolManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"get_poolManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Create(::UnityEngine::GameObject*  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, primitive, position, rotation, anchor, parent);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Create(::UnityEngine::GameObject*  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, primitive, anchor, parent, instantiateInWorldSpace);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Create(T  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, primitive, position, rotation, anchor, parent);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Create(T  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, primitive, anchor, parent, instantiateInWorldSpace);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Release(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton* Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerSingleton::PoolManagerSingleton()   {
}
