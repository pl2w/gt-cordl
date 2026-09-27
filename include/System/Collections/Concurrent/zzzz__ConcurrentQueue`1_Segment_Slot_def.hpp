#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/ConcurrentQueue`1_Segment_Slot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConcurrentQueue`1_Segment_Slot)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct Segment_ConcurrentQueue_1_Slot;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Segment_ConcurrentQueue_1_Slot);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Segment_ConcurrentQueue_1_Slot, "System.Collections.Concurrent", "ConcurrentQueue`1/Segment/Slot");
// [DebuggerDisplay("Item = {Item}, SequenceNumber = {SequenceNumber}")]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: System.Collections.Concurrent.ConcurrentQueue`1/Segment/Slot<T>
struct CORDL_TYPE Segment_ConcurrentQueue_1_Slot {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Segment_ConcurrentQueue_1_Slot() ;

// Ctor Parameters [CppParam { name: "Item", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "SequenceNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Segment_ConcurrentQueue_1_Slot(T  Item, int32_t  SequenceNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6860};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Item, offset: 0x0, size: 0x8, def value: None
 T  Item;

/// @brief Field SequenceNumber, offset: 0x8, size: 0x4, def value: None
 int32_t  SequenceNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
