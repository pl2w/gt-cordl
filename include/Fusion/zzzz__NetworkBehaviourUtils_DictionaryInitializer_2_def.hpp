#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourUtils_DictionaryInitializer_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviourUtils_DictionaryInitializer_2)
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename K,typename V>
struct NetworkBehaviourUtils_DictionaryInitializer_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2, "Fusion", "NetworkBehaviourUtils/DictionaryInitializer`2");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: Fusion.NetworkBehaviourUtils/DictionaryInitializer`2<K,V>
#pragma pack(push, 0)
struct CORDL_TYPE NetworkBehaviourUtils_DictionaryInitializer_2 {
public:
// Declarations
/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::NetworkDictionary_2<K,V> op_Implicit___Fusion__NetworkDictionary_2_K_V_(::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2<K,V>  arr) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourUtils_DictionaryInitializer_2() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18920};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def GlobalNamespace
