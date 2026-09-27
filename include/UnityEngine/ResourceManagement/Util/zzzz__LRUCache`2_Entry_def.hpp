#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache`2_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LRUCache`2_Entry)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct LRUCache_2_Key;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct LRUCache_2_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LRUCache_2_Entry);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LRUCache_2_Entry, "UnityEngine.ResourceManagement.Util", "LRUCache`2/Entry");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.LRUCache`2/Entry<TKey,TValue>
struct CORDL_TYPE LRUCache_2_Entry {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>*() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>  other) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>"
constexpr ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Entry<TKey,TValue>>* i___System__IEquatable_1___GlobalNamespace__LRUCache_2_Entry_TKey_TValue__() ;

// Ctor Parameters []
// @brief default ctor
constexpr LRUCache_2_Entry() ;

// Ctor Parameters [CppParam { name: "lruNode", ty: "::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None, comment: None }]
constexpr LRUCache_2_Entry(::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*  lruNode, TValue  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28569};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field lruNode, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*  lruNode;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 TValue  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
