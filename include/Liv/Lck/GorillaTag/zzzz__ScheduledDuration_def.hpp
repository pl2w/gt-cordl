#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/ScheduledDuration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScheduledDuration)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct ScheduledDuration;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::ScheduledDuration);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::ScheduledDuration, "Liv.Lck.GorillaTag", "ScheduledDuration");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.ScheduledDuration
struct CORDL_TYPE ScheduledDuration {
public:
// Declarations
/// @brief Method IsActive, addr 0x9d31090, size 0x94, virtual false, abstract: false, final false
inline bool IsActive() ;

/// @brief Method .ctor, addr 0x9d31bc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  startTimeTicks, int64_t  endTimeTicks) ;

// Ctor Parameters []
// @brief default ctor
constexpr ScheduledDuration() ;

// Ctor Parameters [CppParam { name: "_startTimeTicks", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_endTimeTicks", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ScheduledDuration(int64_t  _startTimeTicks, int64_t  _endTimeTicks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [SerializeField]
/// @brief Field _startTimeTicks, offset: 0x0, size: 0x8, def value: None
 int64_t  _startTimeTicks;

/// [SerializeField]
/// @brief Field _endTimeTicks, offset: 0x8, size: 0x8, def value: None
 int64_t  _endTimeTicks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::ScheduledDuration, _startTimeTicks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::ScheduledDuration, _endTimeTicks) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::ScheduledDuration) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
