#pragma once
// IWYU pragma private; include "System/Linq/Set`1_Slot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Set`1_Slot)
// Forward declare root types
namespace GlobalNamespace {
template<typename TElement>
struct Set_1_Slot;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Set_1_Slot);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Set_1_Slot, "System.Linq", "Set`1/Slot");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename TElement>
// Is value type: true
// CS Name: System.Linq.Set`1/Slot<TElement>
struct CORDL_TYPE Set_1_Slot {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Set_1_Slot() ;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "TElement", modifiers: "", def_value: None, comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Set_1_Slot(int32_t  hashCode, TElement  value, int32_t  next) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23571};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field hashCode, offset: 0x0, size: 0x4, def value: None
 int32_t  hashCode;

/// @brief Field value, offset: 0x8, size: 0x8, def value: None
 TElement  value;

/// @brief Field next, offset: 0x10, size: 0x4, def value: None
 int32_t  next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
