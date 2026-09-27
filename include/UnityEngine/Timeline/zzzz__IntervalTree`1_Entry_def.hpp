#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IntervalTree`1_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntervalTree`1_Entry)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct IntervalTree_1_Entry;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::IntervalTree_1_Entry);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::IntervalTree_1_Entry, "UnityEngine.Timeline", "IntervalTree`1/Entry");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Timeline.IntervalTree`1/Entry<T>
struct CORDL_TYPE IntervalTree_1_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr IntervalTree_1_Entry() ;

// Ctor Parameters [CppParam { name: "intervalStart", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "intervalEnd", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "item", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr IntervalTree_1_Entry(int64_t  intervalStart, int64_t  intervalEnd, T  item) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28731};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field intervalStart, offset: 0x0, size: 0x8, def value: None
 int64_t  intervalStart;

/// @brief Field intervalEnd, offset: 0x8, size: 0x8, def value: None
 int64_t  intervalEnd;

/// @brief Field item, offset: 0x10, size: 0x8, def value: None
 T  item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
