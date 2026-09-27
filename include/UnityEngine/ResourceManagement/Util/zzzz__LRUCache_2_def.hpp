#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LRUCache_2)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct LRUCache_2_Entry;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct LRUCache_2_Key;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template<typename TKey,typename TValue>
struct LRUCache_2;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::ResourceManagement::Util::LRUCache_2);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::ResourceManagement::Util::LRUCache_2, "UnityEngine.ResourceManagement.Util", "LRUCache`2");
// Dependencies 
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.LRUCache`2<TKey,TValue>
struct CORDL_TYPE LRUCache_2 {
public:
// Declarations
using Entry = ::GlobalNamespace::LRUCache_2_Entry<TKey, TValue>;

using Key = ::GlobalNamespace::LRUCache_2_Key<TKey, TValue>;

/// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryAdd(TKey  id, TValue  obj) ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(::System::Type*  type, TKey  id, ::by_ref<TValue>  val) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  limit) ;

// Ctor Parameters []
// @brief default ctor
constexpr LRUCache_2() ;

// Ctor Parameters [CppParam { name: "requestHits", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "entryLimit", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cache", ty: "::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>,::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lru", ty: "::System::Collections::Generic::LinkedList_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*", modifiers: "", def_value: None, comment: None }]
constexpr LRUCache_2(int32_t  requestHits, int32_t  requestCount, int32_t  entryLimit, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>,::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*  cache, ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*  lru) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field requestHits, offset: 0x0, size: 0x4, def value: None
 int32_t  requestHits;

/// @brief Field requestCount, offset: 0x4, size: 0x4, def value: None
 int32_t  requestCount;

/// @brief Field entryLimit, offset: 0x8, size: 0x4, def value: None
 int32_t  entryLimit;

/// @brief Field cache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>,::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*  cache;

/// @brief Field lru, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*  lru;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
