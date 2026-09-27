#pragma once
// IWYU pragma private; include "Fusion/Statistics/MemoryStatisticsSnapshot_TargetAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryStatisticsSnapshot_TargetAllocator)
// Forward declare root types
namespace GlobalNamespace {
struct MemoryStatisticsSnapshot_TargetAllocator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator, "Fusion.Statistics", "MemoryStatisticsSnapshot/TargetAllocator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Statistics.MemoryStatisticsSnapshot/TargetAllocator
struct CORDL_TYPE MemoryStatisticsSnapshot_TargetAllocator {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MemoryStatisticsSnapshot_TargetAllocator_Unwrapped
enum struct __MemoryStatisticsSnapshot_TargetAllocator_Unwrapped : int32_t {
__E_General = static_cast<int32_t>(0x0),
__E_Objects = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MemoryStatisticsSnapshot_TargetAllocator_Unwrapped () const noexcept {
return static_cast<__MemoryStatisticsSnapshot_TargetAllocator_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MemoryStatisticsSnapshot_TargetAllocator() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MemoryStatisticsSnapshot_TargetAllocator(int32_t  value__) noexcept;

/// @brief Field General value: I32(0)
static ::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator const General;

/// @brief Field Objects value: I32(1)
static ::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator const Objects;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MemoryStatisticsSnapshot_TargetAllocator) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
