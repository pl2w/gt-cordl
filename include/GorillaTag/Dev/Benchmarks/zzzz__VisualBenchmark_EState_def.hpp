#pragma once
// IWYU pragma private; include "GorillaTag/Dev/Benchmarks/VisualBenchmark_EState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualBenchmark_EState)
// Forward declare root types
namespace GlobalNamespace {
struct VisualBenchmark_EState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualBenchmark_EState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualBenchmark_EState, "GorillaTag.Dev.Benchmarks", "VisualBenchmark/EState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Dev.Benchmarks.VisualBenchmark/EState
struct CORDL_TYPE VisualBenchmark_EState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VisualBenchmark_EState_Unwrapped
enum struct __VisualBenchmark_EState_Unwrapped : int32_t {
__E_Setup = static_cast<int32_t>(0x0),
__E_WaitingBeforeCollectingGarbage = static_cast<int32_t>(0x1),
__E_WaitingBeforeRecordingStats = static_cast<int32_t>(0x2),
__E_TearDown = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VisualBenchmark_EState_Unwrapped () const noexcept {
return static_cast<__VisualBenchmark_EState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VisualBenchmark_EState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VisualBenchmark_EState(int32_t  value__) noexcept;

/// @brief Field Setup value: I32(0)
static ::GlobalNamespace::VisualBenchmark_EState const Setup;

/// @brief Field TearDown value: I32(3)
static ::GlobalNamespace::VisualBenchmark_EState const TearDown;

/// @brief Field WaitingBeforeCollectingGarbage value: I32(1)
static ::GlobalNamespace::VisualBenchmark_EState const WaitingBeforeCollectingGarbage;

/// @brief Field WaitingBeforeRecordingStats value: I32(2)
static ::GlobalNamespace::VisualBenchmark_EState const WaitingBeforeRecordingStats;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4738};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualBenchmark_EState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualBenchmark_EState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
