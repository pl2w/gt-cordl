#pragma once
// IWYU pragma private; include "GlobalNamespace/DayNightCycle_LerpBakedLightingJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DayNightCycle_LerpBakedLightingJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace GlobalNamespace {
struct DayNightCycle_LerpBakedLightingJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob, "", "DayNightCycle/LerpBakedLightingJob");
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: DayNightCycle/LerpBakedLightingJob
struct CORDL_TYPE DayNightCycle_LerpBakedLightingJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x5995f44, size 0x4c, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr DayNightCycle_LerpBakedLightingJob() ;

// Ctor Parameters [CppParam { name: "fromPixels", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "toPixels", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mixedPixels", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Color>", modifiers: "", def_value: None, comment: None }, CppParam { name: "lerpValue", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DayNightCycle_LerpBakedLightingJob(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  fromPixels, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  toPixels, ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  mixedPixels, float_t  lerpValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2589};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field fromPixels, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  fromPixels;

/// @brief Field toPixels, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  toPixels;

/// @brief Field mixedPixels, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Color>  mixedPixels;

/// @brief Field lerpValue, offset: 0x30, size: 0x4, def value: None
 float_t  lerpValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob, fromPixels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob, toPixels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob, mixedPixels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob, lerpValue) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
