#pragma once
// IWYU pragma private; include "Unity/Jobs/LowLevel/Unsafe/JobsUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JobsUtility)
namespace GlobalNamespace {
struct JobsUtility_JobScheduleParameters;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility_PanicFunction_;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility;
}
namespace Unity::Jobs::LowLevel::Unsafe {
class JobsUtility_PanicFunction_;
}
// Write type traits
MARK_REF_T(::Unity::Jobs::LowLevel::Unsafe::JobsUtility*);
MARK_REF_T(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*);
DEFINE_IL2CPP_CLASS(::Unity::Jobs::LowLevel::Unsafe::JobsUtility*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility");
DEFINE_IL2CPP_CLASS(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*, "Unity.Jobs.LowLevel.Unsafe", "JobsUtility/PanicFunction_");
// [NativeType(Header = "Runtime/Jobs/ScriptBindings/JobsBindings.h")]
// [NativeHeader("Runtime/Jobs/JobSystem.h")]
// Dependencies System.Object
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility
class CORDL_TYPE JobsUtility : public ::System::Object {
public:
// Declarations
using JobScheduleParameters = ::GlobalNamespace::JobsUtility_JobScheduleParameters;

using PanicFunction_ = ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_;

/// @brief Field PanicFunction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PanicFunction, put=setStaticF_PanicFunction)) ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*  PanicFunction;

/// @brief Method CreateJobReflectionData, addr 0xb55be28, size 0x60, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJobReflectionData(::System::Type*  type, ::System::Object*  managedJobFunction0, ::System::Object*  managedJobFunction1, ::System::Object*  managedJobFunction2) ;

/// [FreeFunction(ThrowsException = true, IsThreadSafe = true)]
/// @brief Method CreateJobReflectionData, addr 0xb55bdbc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateJobReflectionData(::System::Type*  wrapperJobType, ::System::Type*  userJobType, ::System::Object*  managedJobFunction0, ::System::Object*  managedJobFunction1, ::System::Object*  managedJobFunction2) ;

/// [FreeFunction("JobSystem::GetJobQueueWorkerThreadCount")]
/// @brief Method GetJobQueueWorkerThreadCount, addr 0xb55beec, size 0x28, virtual false, abstract: false, final false
static inline int32_t GetJobQueueWorkerThreadCount() ;

/// @brief Method GetJobRange, addr 0xb55ba40, size 0x48, virtual false, abstract: false, final false
static inline void GetJobRange(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex, ::by_ref<int32_t>  beginIndex, ::by_ref<int32_t>  endIndex) ;

/// [NativeMethod(IsFreeFunction = true, IsThreadSafe = true)]
/// @brief Method GetWorkStealingRange, addr 0xb55ba88, size 0x5c, virtual false, abstract: false, final false
static inline bool GetWorkStealingRange(::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex, ::by_ref<int32_t>  beginIndex, ::by_ref<int32_t>  endIndex) ;

/// [RequiredByNativeCode]
/// @brief Method InvokePanicFunction, addr 0xb55bf8c, size 0x64, virtual false, abstract: false, final false
static inline void InvokePanicFunction() ;

/// [FreeFunction("ScheduleManagedJob", ThrowsException = true, IsThreadSafe = true)]
/// @brief Method Schedule, addr 0xb55bae4, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle Schedule(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters) ;

/// [FreeFunction("ScheduleManagedJobParallelFor", ThrowsException = true, IsThreadSafe = true)]
/// @brief Method ScheduleParallelFor, addr 0xb55bb7c, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleParallelFor(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, int32_t  arrayLength, int32_t  innerloopBatchCount) ;

/// [FreeFunction("ScheduleManagedJobParallelForTransform", ThrowsException = true)]
/// @brief Method ScheduleParallelForTransform, addr 0xb55bc44, size 0x5c, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleParallelForTransform(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, ::System::IntPtr  transfromAccesssArray) ;

/// [FreeFunction("ScheduleManagedJobParallelForTransformReadOnly", ThrowsException = true)]
/// @brief Method ScheduleParallelForTransformReadOnly, addr 0xb55bcf4, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle ScheduleParallelForTransformReadOnly(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, ::System::IntPtr  transfromAccesssArray, int32_t  innerloopBatchCount) ;

/// @brief Method ScheduleParallelForTransformReadOnly_Injected, addr 0xb55bd60, size 0x5c, virtual false, abstract: false, final false
static inline void ScheduleParallelForTransformReadOnly_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, ::System::IntPtr  transfromAccesssArray, int32_t  innerloopBatchCount, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// @brief Method ScheduleParallelForTransform_Injected, addr 0xb55bca0, size 0x54, virtual false, abstract: false, final false
static inline void ScheduleParallelForTransform_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, ::System::IntPtr  transfromAccesssArray, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// @brief Method ScheduleParallelFor_Injected, addr 0xb55bbe8, size 0x5c, virtual false, abstract: false, final false
static inline void ScheduleParallelFor_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, int32_t  arrayLength, int32_t  innerloopBatchCount, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

/// @brief Method Schedule_Injected, addr 0xb55bb38, size 0x44, virtual false, abstract: false, final false
static inline void Schedule_Injected(::by_ref<::GlobalNamespace::JobsUtility_JobScheduleParameters>  parameters, ::by_ref<::Unity::Jobs::JobHandle>  ret) ;

static inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* getStaticF_PanicFunction() ;

/// [NativeMethod(IsFreeFunction = true, IsThreadSafe = true)]
/// @brief Method get_IsExecutingJob, addr 0xb55be88, size 0x28, virtual false, abstract: false, final false
static inline bool get_IsExecutingJob() ;

/// @brief Method get_JobWorkerCount, addr 0xb55bf14, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_JobWorkerCount() ;

/// [FreeFunction("GetJobWorkerIndex", IsThreadSafe = true)]
/// [BurstAuthorizedExternalMethod]
/// @brief Method get_ThreadIndex, addr 0xb55bf3c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_ThreadIndex() ;

/// [FreeFunction("GetJobWorkerIndexCount", IsThreadSafe = true)]
/// [BurstAuthorizedExternalMethod]
/// @brief Method get_ThreadIndexCount, addr 0xb55bf64, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_ThreadIndexCount() ;

static inline void setStaticF_PanicFunction(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_*  value) ;

/// [FreeFunction]
/// @brief Method set_JobCompilerEnabled, addr 0xb55beb0, size 0x3c, virtual false, abstract: false, final false
static inline void set_JobCompilerEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobsUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobsUtility(JobsUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobsUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobsUtility(JobsUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Jobs::LowLevel::Unsafe::JobsUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::Jobs::LowLevel::Unsafe
// Dependencies System.MulticastDelegate
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobsUtility/PanicFunction_
class CORDL_TYPE JobsUtility_PanicFunction_ : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb55c0c4, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb55c028, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobsUtility_PanicFunction_() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobsUtility_PanicFunction_", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobsUtility_PanicFunction_(JobsUtility_PanicFunction_ && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobsUtility_PanicFunction_", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobsUtility_PanicFunction_(JobsUtility_PanicFunction_ const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14664};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_PanicFunction_) == 0x80, "Size mismatch!");

} // namespace end def Unity::Jobs::LowLevel::Unsafe
