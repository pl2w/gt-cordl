#pragma once
// IWYU pragma private; include "Fusion/SerializableDictionary`2_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SerializableDictionary`2_Entry)
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct SerializableDictionary_2_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::SerializableDictionary_2_Entry);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::SerializableDictionary_2_Entry, "Fusion", "SerializableDictionary`2/Entry");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: Fusion.SerializableDictionary`2/Entry<TKey,TValue>
struct CORDL_TYPE SerializableDictionary_2_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SerializableDictionary_2_Entry() ;

// Ctor Parameters [CppParam { name: "Key", ty: "TKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None, comment: None }]
constexpr SerializableDictionary_2_Entry(TKey  Key, TValue  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19098};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Key, offset: 0x0, size: 0x8, def value: None
 TKey  Key;

/// @brief Field Value, offset: 0x8, size: 0x8, def value: None
 TValue  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
