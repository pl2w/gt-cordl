#pragma once
// IWYU pragma private; include "System/Collections/Generic/HashSet`1_Slot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashSet`1_Slot)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct HashSet_1_Slot;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::HashSet_1_Slot);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::HashSet_1_Slot, "System.Collections.Generic", "HashSet`1/Slot");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Collections.Generic.HashSet`1/Slot<T>
struct CORDL_TYPE HashSet_1_Slot {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HashSet_1_Slot() ;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr HashSet_1_Slot(int32_t  hashCode, int32_t  next, T  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24163};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
 int32_t  hashCode;

/// @brief Field next, offset: 0x4, size: 0x4, def value: None
 int32_t  next;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 T  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
