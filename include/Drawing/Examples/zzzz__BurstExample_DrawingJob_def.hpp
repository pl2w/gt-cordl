#pragma once
// IWYU pragma private; include "Drawing/Examples/BurstExample_DrawingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__CommandBuilder_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstExample_DrawingJob)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct BurstExample_DrawingJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BurstExample_DrawingJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BurstExample_DrawingJob, "Drawing.Examples", "BurstExample/DrawingJob");
// [BurstCompile]
// Dependencies Drawing.CommandBuilder, Unity.Mathematics.float2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.Examples.BurstExample/DrawingJob
struct CORDL_TYPE BurstExample_DrawingJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Colormap, addr 0x55e1b6c, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Color Colormap(float_t  x) ;

/// @brief Method Execute, addr 0x55e1d50, size 0x38, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Method Execute, addr 0x55e1c04, size 0x14c, virtual false, abstract: false, final false
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstExample_DrawingJob() ;

// Ctor Parameters [CppParam { name: "offset", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None, comment: None }, CppParam { name: "builder", ty: "::Drawing::CommandBuilder", modifiers: "", def_value: None, comment: None }]
constexpr BurstExample_DrawingJob(::Unity::Mathematics::float2  offset, ::Drawing::CommandBuilder  builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field offset, offset: 0x0, size: 0x8, def value: None
 ::Unity::Mathematics::float2  offset;

/// @brief Field builder, offset: 0x8, size: 0x18, def value: None
 ::Drawing::CommandBuilder  builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BurstExample_DrawingJob, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BurstExample_DrawingJob, builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BurstExample_DrawingJob) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
