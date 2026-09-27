#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatisticsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatisticsHelper)
namespace Fusion::Statistics {
class FusionStatisticsSnapshot;
}
namespace Fusion::Statistics {
struct RenderSimStats;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatisticsHelper;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatisticsHelper*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatisticsHelper*, "Fusion.Statistics", "FusionStatisticsHelper");
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatisticsHelper
class CORDL_TYPE FusionStatisticsHelper : public ::System::Object {
public:
// Declarations
/// @brief Method GetStatDataFromSnapshot, addr 0x60f65b4, size 0x2f8, virtual false, abstract: false, final false
static inline float_t GetStatDataFromSnapshot(::Fusion::Statistics::RenderSimStats  stat, ::Fusion::Statistics::FusionStatisticsSnapshot*  simulationStatsSnapshot) ;

/// @brief Method GetStatGraphDefaultSettings, addr 0x60f62c4, size 0x2f0, virtual false, abstract: false, final false
static inline void GetStatGraphDefaultSettings(::Fusion::Statistics::RenderSimStats  stat, ::by_ref<::StringW>  valueTextFormat, ::by_ref<float_t>  valueTextMultiplier, ::by_ref<bool>  ignoreZeroOnAverage, ::by_ref<bool>  ignoreZeroOnBuffer, ::by_ref<int32_t>  accumulateTimeMs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatisticsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatisticsHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatisticsHelper(FusionStatisticsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatisticsHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatisticsHelper(FusionStatisticsHelper const& ) = delete;

/// @brief Field DEFAULT_GRAPH_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_GRAPH_HEIGHT{static_cast<float_t>(150.0f)};

/// @brief Field DEFAULT_HEADER_HEIGHT offset 0xffffffff size 0x4
static constexpr float_t  DEFAULT_HEADER_HEIGHT{static_cast<float_t>(50.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Statistics::FusionStatisticsHelper) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Statistics
