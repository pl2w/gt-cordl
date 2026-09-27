#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache_TimeRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TargetPositionCache_TimeRange)
// Forward declare root types
namespace GlobalNamespace {
struct TargetPositionCache_TimeRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TargetPositionCache_TimeRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TargetPositionCache_TimeRange, "Unity.Cinemachine", "TargetPositionCache/TimeRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.TargetPositionCache/TimeRange
struct CORDL_TYPE TargetPositionCache_TimeRange {
public:
// Declarations
 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Method Contains, addr 0xaebef44, size 0x24, virtual false, abstract: false, final false
inline bool Contains(float_t  time) ;

/// @brief Method Include, addr 0xaebf720, size 0x1c, virtual false, abstract: false, final false
inline void Include(float_t  time) ;

/// @brief Method get_Empty, addr 0xaebef68, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TargetPositionCache_TimeRange get_Empty() ;

/// @brief Method get_IsEmpty, addr 0xaebeeec, size 0x10, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

// Ctor Parameters []
// @brief default ctor
constexpr TargetPositionCache_TimeRange() ;

// Ctor Parameters [CppParam { name: "Start", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "End", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TargetPositionCache_TimeRange(float_t  Start, float_t  End) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Start, offset: 0x0, size: 0x4, def value: None
 float_t  Start;

/// @brief Field End, offset: 0x4, size: 0x4, def value: None
 float_t  End;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TargetPositionCache_TimeRange, Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TargetPositionCache_TimeRange, End) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TargetPositionCache_TimeRange) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
