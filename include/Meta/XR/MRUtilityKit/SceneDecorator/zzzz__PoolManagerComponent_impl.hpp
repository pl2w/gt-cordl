#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/PoolManagerComponent.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_PoolDesc_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManagerComponent_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__PoolManager_2_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool_1_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent.InitDefaultPools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::*)(::System::Nullable_1<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>>)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::InitDefaultPools)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x9f53450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::UnityEngine::Transform*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Create)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x9f53758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::*)(::UnityEngine::GameObject*, ::Meta::XR::MRUtilityKit::MRUKAnchor*, ::UnityEngine::Transform*, bool)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Create)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x9f53a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Release)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f53d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9f53e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc>& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::__cordl_internal_get_defaultPools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPools;
}
constexpr ::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc> const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::__cordl_internal_get_defaultPools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultPools;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::__cordl_internal_set_defaultPools(::ArrayW<::GlobalNamespace::PoolManagerComponent_PoolDesc>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultPools = value;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::__cordl_internal_get_poolManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolManager;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>* const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::__cordl_internal_get_poolManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolManager;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::__cordl_internal_set_poolManager(::Meta::XR::MRUtilityKit::SceneDecorator::PoolManager_2<::UnityW<::UnityEngine::GameObject>,::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolManager = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::setStaticF_DEFAULT_CALLBACKS(::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>, "DEFAULT_CALLBACKS", ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(std::forward<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>>(value));
}
inline ::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::getStaticF_DEFAULT_CALLBACKS()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>, "DEFAULT_CALLBACKS", ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>();
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::InitDefaultPools(::System::Nullable_1<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>>  defaultCallbacks)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, defaultCallbacks);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Create(::UnityEngine::GameObject*  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, primitive, position, rotation, anchor, parent);
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Create(::UnityEngine::GameObject*  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, primitive, anchor, parent, instantiateInWorldSpace);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Create(T  primitive, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
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
inline T Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Create(T  primitive, ::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                    {"Create", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, primitive, anchor, parent, instantiateInWorldSpace);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::Release(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {"Release", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent* Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent::PoolManagerComponent()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::Create)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9f54078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks.OnGet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::OnGet)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f541dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*>(),
                        {"OnGet", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::OnRelease)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9f541f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*>(),
                        {"OnRelease", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::Create(::UnityEngine::GameObject*  primitive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, primitive);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::OnGet(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*>(),
                        {"OnGet", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::OnRelease(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks*>(),
                        {"OnRelease", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, go);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_DefaultCallbacks::PoolManagerComponent_DefaultCallbacks()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f54070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_get_Pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pool;
}
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>* const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_get_Pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Pool;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_set_Pool(::Meta::XR::MRUtilityKit::SceneDecorator::Pool_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Pool = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_get_Scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_get_Scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Scale;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_set_Scale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Scale = value;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_get_Anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Anchor;
}
constexpr ::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor> const& Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_get_Anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Anchor;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::__cordl_internal_set_Anchor(::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Anchor = value;
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData* Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_PoolableData::PoolManagerComponent_PoolableData()   {
}
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider.GetPoolCallbacks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>> (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::GetPoolCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f54068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>> Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::GetPoolCallbacks()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Pool_1_Callbacks<::UnityW<::UnityEngine::GameObject>>>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider* Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::PoolManagerComponent_CallbackProvider::PoolManagerComponent_CallbackProvider()   {
}
