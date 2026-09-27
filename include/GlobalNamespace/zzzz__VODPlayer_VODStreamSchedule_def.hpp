#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODStreamSchedule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VODPlayer_VODHourlyStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VODPlayer_VODStreamSchedule)
namespace GlobalNamespace {
struct VODPlayer_VODHourlyStream;
}
// Forward declare root types
namespace GlobalNamespace {
struct VODPlayer_VODStreamSchedule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VODPlayer_VODStreamSchedule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VODPlayer_VODStreamSchedule, "", "VODPlayer/VODStreamSchedule");
// Dependencies VODPlayer::VODHourlyStream
namespace GlobalNamespace {
// Is value type: true
// CS Name: VODPlayer/VODStreamSchedule
struct CORDL_TYPE VODPlayer_VODStreamSchedule {
public:
// Declarations
/// @brief Method Merge, addr 0x5d04420, size 0x370, virtual false, abstract: false, final false
inline void Merge(::GlobalNamespace::VODPlayer_VODStreamSchedule  subSchedule) ;

// Ctor Parameters []
// @brief default ctor
constexpr VODPlayer_VODStreamSchedule() ;

// Ctor Parameters [CppParam { name: "hourly", ty: "::ArrayW<::GlobalNamespace::VODPlayer_VODHourlyStream>", modifiers: "", def_value: None, comment: None }]
constexpr VODPlayer_VODStreamSchedule(::ArrayW<::GlobalNamespace::VODPlayer_VODHourlyStream>  hourly) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field hourly, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VODPlayer_VODHourlyStream>  hourly;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VODPlayer_VODStreamSchedule, hourly) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VODPlayer_VODStreamSchedule) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
