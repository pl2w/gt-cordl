#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkAsynchronous_ReactorJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingEffector_Params_def.hpp"
#include "BoingKit/zzzz__BoingWork_Output_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWorkAsynchronous_ReactorJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoingWorkAsynchronous_ReactorJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob, "BoingKit", "BoingWorkAsynchronous/ReactorJob");
// Dependencies BoingKit.BoingEffector::Params, BoingKit.BoingWork::Output, BoingKit.BoingWork::Params, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingWorkAsynchronous/ReactorJob
struct CORDL_TYPE BoingWorkAsynchronous_ReactorJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5e28658, size 0x200, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr BoingWorkAsynchronous_ReactorJob() ;

// Ctor Parameters [CppParam { name: "Effectors", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Params", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Output", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FixedDeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingWorkAsynchronous_ReactorJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>  Effectors, ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  Params, ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  Output, float_t  DeltaTime, float_t  FixedDeltaTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5212};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [ReadOnly]
/// @brief Field Effectors, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingEffector_Params>  Effectors;

/// @brief Field Params, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  Params;

/// @brief Field Output, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  Output;

/// @brief Field DeltaTime, offset: 0x30, size: 0x4, def value: None
 float_t  DeltaTime;

/// @brief Field FixedDeltaTime, offset: 0x34, size: 0x4, def value: None
 float_t  FixedDeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob, Effectors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob, Params) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob, Output) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob, DeltaTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob, FixedDeltaTime) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingWorkAsynchronous_ReactorJob) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
