#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache`2_Key.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LRUCache`2_Key)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct LRUCache_2_Key;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LRUCache_2_Key);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LRUCache_2_Key, "UnityEngine.ResourceManagement.Util", "LRUCache`2/Key");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.LRUCache`2/Key<TKey,TValue>
struct CORDL_TYPE LRUCache_2_Key {
public:
// Declarations
/// @brief Field typeType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_typeType, put=setStaticF_typeType)) ::System::Type*  typeType;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>*() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method System.IEquatable<UnityEngine.ResourceManagement.Util.LRUCache<TKey,TValue>.Key>.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_IEquatable_UnityEngine_ResourceManagement_Util_LRUCache_TKey_TValue__Key__Equals(::GlobalNamespace::LRUCache_2_Key<TKey,TValue>  other) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TKey  k, ::System::Type*  t) ;

static inline ::System::Type* getStaticF_typeType() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>"
constexpr ::System::IEquatable_1<::GlobalNamespace::LRUCache_2_Key<TKey,TValue>>* i___System__IEquatable_1___GlobalNamespace__LRUCache_2_Key_TKey_TValue__() ;

static inline void setStaticF_typeType(::System::Type*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LRUCache_2_Key() ;

// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }]
constexpr LRUCache_2_Key(TKey  key, ::System::Type*  type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field key, offset: 0x0, size: 0x8, def value: None
 TKey  key;

/// @brief Field type, offset: 0x8, size: 0x8, def value: None
 ::System::Type*  type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
