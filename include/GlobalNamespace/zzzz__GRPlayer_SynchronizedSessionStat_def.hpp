#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_SynchronizedSessionStat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer_SynchronizedSessionStat)
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_SynchronizedSessionStat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_SynchronizedSessionStat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_SynchronizedSessionStat, "", "GRPlayer/SynchronizedSessionStat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/SynchronizedSessionStat
struct CORDL_TYPE GRPlayer_SynchronizedSessionStat {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRPlayer_SynchronizedSessionStat_Unwrapped
enum struct __GRPlayer_SynchronizedSessionStat_Unwrapped : int32_t {
__E_CoresDeposited = static_cast<int32_t>(0x0),
__E_EarnedCredits = static_cast<int32_t>(0x1),
__E_SpentCredits = static_cast<int32_t>(0x2),
__E_DistanceTraveled = static_cast<int32_t>(0x3),
__E_Deaths = static_cast<int32_t>(0x4),
__E_Kills = static_cast<int32_t>(0x5),
__E_Assists = static_cast<int32_t>(0x6),
__E_TimeChaosExposure = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRPlayer_SynchronizedSessionStat_Unwrapped () const noexcept {
return static_cast<__GRPlayer_SynchronizedSessionStat_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_SynchronizedSessionStat() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_SynchronizedSessionStat(int32_t  value__) noexcept;

/// @brief Field Assists value: I32(6)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const Assists;

/// @brief Field CoresDeposited value: I32(0)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const CoresDeposited;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const Count;

/// @brief Field Deaths value: I32(4)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const Deaths;

/// @brief Field DistanceTraveled value: I32(3)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const DistanceTraveled;

/// @brief Field EarnedCredits value: I32(1)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const EarnedCredits;

/// @brief Field Kills value: I32(5)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const Kills;

/// @brief Field SpentCredits value: I32(2)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const SpentCredits;

/// @brief Field TimeChaosExposure value: I32(7)
static ::GlobalNamespace::GRPlayer_SynchronizedSessionStat const TimeChaosExposure;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2001};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_SynchronizedSessionStat, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_SynchronizedSessionStat) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
