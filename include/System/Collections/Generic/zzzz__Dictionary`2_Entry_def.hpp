#pragma once
// IWYU pragma private; include "System/Collections/Generic/Dictionary`2_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dictionary`2_Entry)
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct Dictionary_2_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Dictionary_2_Entry);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Dictionary_2_Entry, "System.Collections.Generic", "Dictionary`2/Entry");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TKey,typename TValue>
// Is value type: true
// CS Name: System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>
struct CORDL_TYPE Dictionary_2_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Dictionary_2_Entry() ;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None, comment: None }]
constexpr Dictionary_2_Entry(int32_t  hashCode, int32_t  next, TKey  key, TValue  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6882};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
 int32_t  hashCode;

/// @brief Field next, offset: 0x4, size: 0x4, def value: None
 int32_t  next;

/// @brief Field key, offset: 0x8, size: 0x8, def value: None
 TKey  key;

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 TValue  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
