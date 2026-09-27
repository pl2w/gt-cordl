#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsPerformanceLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InsightsPerformanceLevel)
// Forward declare root types
namespace PlayFab::InsightsModels {
class InsightsPerformanceLevel;
}
// Write type traits
MARK_REF_T(::PlayFab::InsightsModels::InsightsPerformanceLevel*);
DEFINE_IL2CPP_CLASS(::PlayFab::InsightsModels::InsightsPerformanceLevel*, "PlayFab.InsightsModels", "InsightsPerformanceLevel");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::InsightsModels {
// Is value type: false
// CS Name: PlayFab.InsightsModels.InsightsPerformanceLevel
class CORDL_TYPE InsightsPerformanceLevel : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ActiveEventExports, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ActiveEventExports, put=__cordl_internal_set_ActiveEventExports)) int32_t  ActiveEventExports;

/// @brief Field CacheSizeMB, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_CacheSizeMB, put=__cordl_internal_set_CacheSizeMB)) int32_t  CacheSizeMB;

/// @brief Field Concurrency, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Concurrency, put=__cordl_internal_set_Concurrency)) int32_t  Concurrency;

/// @brief Field CreditsPerMinute, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreditsPerMinute, put=__cordl_internal_set_CreditsPerMinute)) double_t  CreditsPerMinute;

/// @brief Field EventsPerSecond, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_EventsPerSecond, put=__cordl_internal_set_EventsPerSecond)) int32_t  EventsPerSecond;

/// @brief Field Level, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Level, put=__cordl_internal_set_Level)) int32_t  Level;

/// @brief Field MaxMemoryPerQueryMB, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxMemoryPerQueryMB, put=__cordl_internal_set_MaxMemoryPerQueryMB)) int32_t  MaxMemoryPerQueryMB;

/// @brief Field VirtualCpuCores, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_VirtualCpuCores, put=__cordl_internal_set_VirtualCpuCores)) int32_t  VirtualCpuCores;

static inline ::PlayFab::InsightsModels::InsightsPerformanceLevel* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ActiveEventExports() const;

constexpr int32_t& __cordl_internal_get_ActiveEventExports() ;

constexpr int32_t const& __cordl_internal_get_CacheSizeMB() const;

constexpr int32_t& __cordl_internal_get_CacheSizeMB() ;

constexpr int32_t const& __cordl_internal_get_Concurrency() const;

constexpr int32_t& __cordl_internal_get_Concurrency() ;

constexpr double_t const& __cordl_internal_get_CreditsPerMinute() const;

constexpr double_t& __cordl_internal_get_CreditsPerMinute() ;

constexpr int32_t const& __cordl_internal_get_EventsPerSecond() const;

constexpr int32_t& __cordl_internal_get_EventsPerSecond() ;

constexpr int32_t const& __cordl_internal_get_Level() const;

constexpr int32_t& __cordl_internal_get_Level() ;

constexpr int32_t const& __cordl_internal_get_MaxMemoryPerQueryMB() const;

constexpr int32_t& __cordl_internal_get_MaxMemoryPerQueryMB() ;

constexpr int32_t const& __cordl_internal_get_VirtualCpuCores() const;

constexpr int32_t& __cordl_internal_get_VirtualCpuCores() ;

constexpr void __cordl_internal_set_ActiveEventExports(int32_t  value) ;

constexpr void __cordl_internal_set_CacheSizeMB(int32_t  value) ;

constexpr void __cordl_internal_set_Concurrency(int32_t  value) ;

constexpr void __cordl_internal_set_CreditsPerMinute(double_t  value) ;

constexpr void __cordl_internal_set_EventsPerSecond(int32_t  value) ;

constexpr void __cordl_internal_set_Level(int32_t  value) ;

constexpr void __cordl_internal_set_MaxMemoryPerQueryMB(int32_t  value) ;

constexpr void __cordl_internal_set_VirtualCpuCores(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840ce0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InsightsPerformanceLevel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InsightsPerformanceLevel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InsightsPerformanceLevel(InsightsPerformanceLevel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InsightsPerformanceLevel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InsightsPerformanceLevel(InsightsPerformanceLevel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19762};

/// @brief Field ActiveEventExports, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ActiveEventExports;

/// @brief Field CacheSizeMB, offset: 0x14, size: 0x4, def value: None
 int32_t  ___CacheSizeMB;

/// @brief Field Concurrency, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Concurrency;

/// @brief Field CreditsPerMinute, offset: 0x20, size: 0x8, def value: None
 double_t  ___CreditsPerMinute;

/// @brief Field EventsPerSecond, offset: 0x28, size: 0x4, def value: None
 int32_t  ___EventsPerSecond;

/// @brief Field Level, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___Level;

/// @brief Field MaxMemoryPerQueryMB, offset: 0x30, size: 0x4, def value: None
 int32_t  ___MaxMemoryPerQueryMB;

/// @brief Field VirtualCpuCores, offset: 0x34, size: 0x4, def value: None
 int32_t  ___VirtualCpuCores;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___ActiveEventExports) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___CacheSizeMB) == 0x14, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___Concurrency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___CreditsPerMinute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___EventsPerSecond) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___Level) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___MaxMemoryPerQueryMB) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::InsightsModels::InsightsPerformanceLevel, ___VirtualCpuCores) == 0x34, "Offset mismatch!");

static_assert(sizeof(::PlayFab::InsightsModels::InsightsPerformanceLevel) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::InsightsModels
