#pragma once
// IWYU pragma private; include "Fusion/TimeAdjustment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Tick_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TimeAdjustment)
namespace Fusion {
struct Tick;
}
// Forward declare root types
namespace Fusion {
struct TimeAdjustment;
}
// Write type traits
MARK_VAL_T(::Fusion::TimeAdjustment);
DEFINE_IL2CPP_CLASS(::Fusion::TimeAdjustment, "Fusion", "TimeAdjustment");
// Dependencies Fusion.Tick
namespace Fusion {
// Is value type: true
// CS Name: Fusion.TimeAdjustment
struct CORDL_TYPE TimeAdjustment {
public:
// Declarations
/// @brief Method ToString, addr 0x60068a0, size 0xb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x6006894, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::Fusion::Tick  tick, double_t  total) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeAdjustment() ;

// Ctor Parameters [CppParam { name: "Tick", ty: "::Fusion::Tick", modifiers: "", def_value: None, comment: None }, CppParam { name: "Total", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeAdjustment(::Fusion::Tick  Tick, double_t  Total) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19361};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Tick, offset: 0x0, size: 0x4, def value: None
 ::Fusion::Tick  Tick;

/// @brief Field Total, offset: 0x8, size: 0x8, def value: None
 double_t  Total;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::TimeAdjustment, Tick) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::TimeAdjustment, Total) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::TimeAdjustment) == 0x10, "Size mismatch!");

} // namespace end def Fusion
