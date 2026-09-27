#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NonAllocDictionary`2_Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NonAllocDictionary`2_Node)
// Forward declare root types
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_Node;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::NonAllocDictionary_2_Node);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::NonAllocDictionary_2_Node, "ExitGames.Client.Photon", "NonAllocDictionary`2/Node");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: ExitGames.Client.Photon.NonAllocDictionary`2/Node<K,V>
struct CORDL_TYPE NonAllocDictionary_2_Node {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NonAllocDictionary_2_Node() ;

// Ctor Parameters [CppParam { name: "Used", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hash", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Key", ty: "K", modifiers: "", def_value: None, comment: None }, CppParam { name: "Val", ty: "V", modifiers: "", def_value: None, comment: None }]
constexpr NonAllocDictionary_2_Node(bool  Used, int32_t  Next, uint32_t  Hash, K  Key, V  Val) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Used, offset: 0x0, size: 0x1, def value: None
 bool  Used;

/// @brief Field Next, offset: 0x4, size: 0x4, def value: None
 int32_t  Next;

/// @brief Field Hash, offset: 0x8, size: 0x4, def value: None
 uint32_t  Hash;

/// @brief Field Key, offset: 0x10, size: 0x8, def value: None
 K  Key;

/// @brief Field Val, offset: 0x18, size: 0x8, def value: None
 V  Val;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
