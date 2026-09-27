#pragma once
// IWYU pragma private; include "GorillaTag/Dev/Benchmarks/VisualBenchmark_StatInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarkerDataUnit_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VisualBenchmark_StatInfo)
// Forward declare root types
namespace GlobalNamespace {
struct VisualBenchmark_StatInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VisualBenchmark_StatInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VisualBenchmark_StatInfo, "GorillaTag.Dev.Benchmarks", "VisualBenchmark/StatInfo");
// Dependencies Unity.Profiling.ProfilerMarkerDataUnit
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Dev.Benchmarks.VisualBenchmark/StatInfo
struct CORDL_TYPE VisualBenchmark_StatInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VisualBenchmark_StatInfo() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "unit", ty: "::Unity::Profiling::ProfilerMarkerDataUnit", modifiers: "", def_value: None, comment: None }]
constexpr VisualBenchmark_StatInfo(::StringW  name, ::Unity::Profiling::ProfilerMarkerDataUnit  unit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field unit, offset: 0x8, size: 0x1, def value: None
 ::Unity::Profiling::ProfilerMarkerDataUnit  unit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VisualBenchmark_StatInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VisualBenchmark_StatInfo, unit) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VisualBenchmark_StatInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
