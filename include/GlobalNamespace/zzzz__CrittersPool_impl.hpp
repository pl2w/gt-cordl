#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersPool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersPool_def.hpp"
#include "GlobalNamespace/zzzz__CrittersPool_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersPool.GetPooled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CrittersPool::GetPooled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56f2df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"GetPooled", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPool.Return
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CrittersPool::Return)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56f3064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"Return", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPool.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPool::*)()>(&::GlobalNamespace::CrittersPool::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56f3110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPool.SetupPools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPool::*)()>(&::GlobalNamespace::CrittersPool::SetupPools)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x56f31e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"SetupPools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPool.GetInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CrittersPool::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CrittersPool::GetInstance)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x56f2e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"GetInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPool.ReturnInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPool::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::CrittersPool::ReturnInstance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56f30c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"ReturnInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersPool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPool::*)()>(&::GlobalNamespace::CrittersPool::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f35b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>& GlobalNamespace::CrittersPool::__cordl_internal_get_eventEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventEffects;
}
constexpr ::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*> const& GlobalNamespace::CrittersPool::__cordl_internal_get_eventEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventEffects;
}
constexpr void GlobalNamespace::CrittersPool::__cordl_internal_set_eventEffects(::ArrayW<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventEffects = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*& GlobalNamespace::CrittersPool::__cordl_internal_get_pools()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>* const& GlobalNamespace::CrittersPool::__cordl_internal_get_pools() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pools;
}
constexpr void GlobalNamespace::CrittersPool::__cordl_internal_set_pools(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pools = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersPool::__cordl_internal_get_poolParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersPool::__cordl_internal_get_poolParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolParent;
}
constexpr void GlobalNamespace::CrittersPool::__cordl_internal_set_poolParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolParent = value;
}
inline void GlobalNamespace::CrittersPool::setStaticF_instance(::UnityW<::GlobalNamespace::CrittersPool>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CrittersPool>, "instance", ::GlobalNamespace::CrittersPool*>(std::forward<::UnityW<::GlobalNamespace::CrittersPool>>(value));
}
inline ::UnityW<::GlobalNamespace::CrittersPool> GlobalNamespace::CrittersPool::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CrittersPool>, "instance", ::GlobalNamespace::CrittersPool*>();
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CrittersPool::GetPooled(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"GetPooled", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, prefab);
}
inline void GlobalNamespace::CrittersPool::Return(::UnityEngine::GameObject*  pooledGO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"Return", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pooledGO);
}
inline void GlobalNamespace::CrittersPool::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersPool::SetupPools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"SetupPools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CrittersPool::GetInstance(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"GetInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, prefab);
}
inline void GlobalNamespace::CrittersPool::ReturnInstance(::UnityEngine::GameObject*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {"ReturnInstance", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
inline void GlobalNamespace::CrittersPool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersPool* GlobalNamespace::CrittersPool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersPool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersPool::CrittersPool()   {
}
//  Writing Method size for method: ::GlobalNamespace::CrittersPool_CrittersPoolSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersPool_CrittersPoolSettings::*)()>(&::GlobalNamespace::CrittersPool_CrittersPoolSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56f35bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::CrittersPool_CrittersPoolSettings::__cordl_internal_get_poolObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::CrittersPool_CrittersPoolSettings::__cordl_internal_get_poolObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolObject;
}
constexpr void GlobalNamespace::CrittersPool_CrittersPoolSettings::__cordl_internal_set_poolObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolObject = value;
}
constexpr int32_t& GlobalNamespace::CrittersPool_CrittersPoolSettings::__cordl_internal_get_poolSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolSize;
}
constexpr int32_t const& GlobalNamespace::CrittersPool_CrittersPoolSettings::__cordl_internal_get_poolSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poolSize;
}
constexpr void GlobalNamespace::CrittersPool_CrittersPoolSettings::__cordl_internal_set_poolSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poolSize = value;
}
inline void GlobalNamespace::CrittersPool_CrittersPoolSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersPool_CrittersPoolSettings* GlobalNamespace::CrittersPool_CrittersPoolSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersPool_CrittersPoolSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersPool_CrittersPoolSettings::CrittersPool_CrittersPoolSettings()   {
}
