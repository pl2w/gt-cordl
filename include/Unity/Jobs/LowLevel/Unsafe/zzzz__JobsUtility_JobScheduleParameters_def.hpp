#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JobsUtility_JobScheduleParameters)
namespace System {
struct IntPtr;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct ScheduleMode;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct JobsUtility_JobScheduleParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JobsUtility_JobScheduleParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JobsUtility_JobScheduleParameters, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/JobScheduleParameters");
// Dependencies System.IntPtr, Unity.Jobs.JobHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters
struct CORDL_TYPE JobsUtility_JobScheduleParameters {
public:
// Declarations
/// @brief Method .ctor, addr 0xb55bff0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(void*  i_jobData, ::System::IntPtr  i_reflectionData, ::Unity::Jobs::JobHandle  i_dependency, ::Unity::Jobs::LowLevel::Unsafe::ScheduleMode  i_scheduleMode) ;

// Ctor Parameters []
// @brief default ctor
constexpr JobsUtility_JobScheduleParameters() ;

// Ctor Parameters [CppParam { name: "Dependency", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "ScheduleMode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "JobDataPtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr JobsUtility_JobScheduleParameters(::Unity::Jobs::JobHandle  Dependency, int32_t  ScheduleMode, ::System::IntPtr  ReflectionData, ::System::IntPtr  JobDataPtr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14663};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Dependency, offset: 0x0, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  Dependency;

/// @brief Field ScheduleMode, offset: 0x10, size: 0x4, def value: None
 int32_t  ScheduleMode;

/// @brief Field ReflectionData, offset: 0x18, size: 0x8, def value: None
 ::System::IntPtr  ReflectionData;

/// @brief Field JobDataPtr, offset: 0x20, size: 0x8, def value: None
 ::System::IntPtr  JobDataPtr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JobsUtility_JobScheduleParameters, Dependency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JobsUtility_JobScheduleParameters, ScheduleMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JobsUtility_JobScheduleParameters, ReflectionData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JobsUtility_JobScheduleParameters, JobDataPtr) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JobsUtility_JobScheduleParameters) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
