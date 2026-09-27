#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache_2.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache`2_Entry_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache`2_Key_def.hpp"
template<typename TKey,typename TValue>
inline void UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>::_ctor(int32_t  limit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, limit);
}
template<typename TKey,typename TValue>
inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>::TryAdd(TKey  id, TValue  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>>(),
                        {"TryAdd", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, id, obj);
}
template<typename TKey,typename TValue>
inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>::TryGet(::System::Type*  type, TKey  id, ::by_ref<TValue>  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>>(),
                        {"TryGet", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, type, id, val);
}
// Ctor Parameters [CppParam { name: "requestHits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entryLimit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cache", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>,::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lru", ty: "::System::Collections::Generic::LinkedList_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>::LRUCache_2(int32_t  requestHits, int32_t  requestCount, int32_t  entryLimit, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>,::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*  cache, ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*  lru) noexcept  {
this->requestHits = requestHits;
this->requestCount = requestCount;
this->entryLimit = entryLimit;
this->cache = cache;
this->lru = lru;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey,TValue>::LRUCache_2()   {
}
