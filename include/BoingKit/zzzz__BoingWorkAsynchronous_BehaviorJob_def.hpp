#pragma once
// IWYU pragma private; include "BoingKit/BoingWorkAsynchronous_BehaviorJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingWork_Output_def.hpp"
#include "BoingKit/zzzz__BoingWork_Params_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoingWorkAsynchronous_BehaviorJob)
namespace Unity::Jobs {
class IJobParallelFor;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoingWorkAsynchronous_BehaviorJob;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob, "BoingKit", "BoingWorkAsynchronous/BehaviorJob");
// Dependencies BoingKit.BoingWork::Output, BoingKit.BoingWork::Params, Unity.Collections.NativeArray`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoingKit.BoingWorkAsynchronous/BehaviorJob
struct CORDL_TYPE BoingWorkAsynchronous_BehaviorJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x5e2854c, size 0x10c, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr BoingWorkAsynchronous_BehaviorJob() ;

// Ctor Parameters [CppParam { name: "Params", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Output", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>", modifiers: "", def_value: None, comment: None }, CppParam { name: "DeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FixedDeltaTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BoingWorkAsynchronous_BehaviorJob(::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  Params, ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  Output, float_t  DeltaTime, float_t  FixedDeltaTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5211};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Params, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Params>  Params;

/// @brief Field Output, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::BoingWork_Output>  Output;

/// @brief Field DeltaTime, offset: 0x20, size: 0x4, def value: None
 float_t  DeltaTime;

/// @brief Field FixedDeltaTime, offset: 0x24, size: 0x4, def value: None
 float_t  FixedDeltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob, Params) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob, Output) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob, DeltaTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob, FixedDeltaTime) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoingWorkAsynchronous_BehaviorJob) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
