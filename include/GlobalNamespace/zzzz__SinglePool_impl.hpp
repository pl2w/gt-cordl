#pragma once
// IWYU pragma private; include "GlobalNamespace/SinglePool.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSimpleBackgroundWorker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SinglePool.SimpleWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::SimpleWork)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5b0b378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"SimpleWork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.PrivAllocPooledObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::PrivAllocPooledObjects)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b0b56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"PrivAllocPooledObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePool::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::SinglePool::Initialize)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5b0b5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.Instantiate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::SinglePool::*)(bool)>(&::GlobalNamespace::SinglePool::Instantiate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b0b774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"Instantiate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePool::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::SinglePool::Destroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b0b8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.PoolGUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::PoolGUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"PoolGUID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.GetTotalCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::GetTotalCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b0b9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"GetTotalCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.GetActiveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::GetActiveCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b0ba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"GetActiveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool.GetInactiveCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::GetInactiveCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b0ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"GetInactiveCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePool._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SinglePool::*)()>(&::GlobalNamespace::SinglePool::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b0bac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SinglePool::__cordl_internal_get_objectToPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectToPool;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SinglePool::__cordl_internal_get_objectToPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectToPool;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_objectToPool(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectToPool = value;
}
constexpr int32_t& GlobalNamespace::SinglePool::__cordl_internal_get_initAmountToPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initAmountToPool;
}
constexpr int32_t const& GlobalNamespace::SinglePool::__cordl_internal_get_initAmountToPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initAmountToPool;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_initAmountToPool(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initAmountToPool = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::SinglePool::__cordl_internal_get_pooledObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pooledObjects;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::SinglePool::__cordl_internal_get_pooledObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pooledObjects;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_pooledObjects(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pooledObjects = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SinglePool::__cordl_internal_get_inactivePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactivePool;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SinglePool::__cordl_internal_get_inactivePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactivePool;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_inactivePool(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactivePool = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SinglePool::__cordl_internal_get_activePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activePool;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SinglePool::__cordl_internal_get_activePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activePool;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_activePool(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activePool = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SinglePool::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SinglePool::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr int32_t& GlobalNamespace::SinglePool::__cordl_internal_get_amountAllocatedToPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amountAllocatedToPool;
}
constexpr int32_t const& GlobalNamespace::SinglePool::__cordl_internal_get_amountAllocatedToPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amountAllocatedToPool;
}
constexpr void GlobalNamespace::SinglePool::__cordl_internal_set_amountAllocatedToPool(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amountAllocatedToPool = value;
}
inline void GlobalNamespace::SinglePool::SimpleWork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"SimpleWork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePool::PrivAllocPooledObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"PrivAllocPooledObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePool::Initialize(::UnityEngine::GameObject*  gameObject_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject_);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::SinglePool::Instantiate(bool  setActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"Instantiate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, setActive);
}
inline void GlobalNamespace::SinglePool::Destroy(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::SinglePool::PoolGUID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"PoolGUID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SinglePool::GetTotalCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"GetTotalCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SinglePool::GetActiveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"GetActiveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::SinglePool::GetInactiveCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {"GetInactiveCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SinglePool::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SinglePool*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SinglePool* GlobalNamespace::SinglePool::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SinglePool*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr  GlobalNamespace::SinglePool::operator ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* GlobalNamespace::SinglePool::i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SinglePool::SinglePool()   {
}
