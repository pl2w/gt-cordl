#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForBatchExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelForBatch_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForBatchExtensions)
namespace GlobalNamespace {
template<typename T>
struct IJobParallelForBatchExtensions_JobParallelForBatchProducer_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Jobs::LowLevel::Unsafe {
struct JobRanges;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace Unity::Jobs {
class IJobParallelForBatchExtensions;
}
namespace Unity::Jobs {
template<typename T>
class JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction;
}
// Write type traits
MARK_REF_T(::Unity::Jobs::IJobParallelForBatchExtensions*);
MARK_GEN_REF_T_PTR(::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction);
DEFINE_IL2CPP_CLASS(::Unity::Jobs::IJobParallelForBatchExtensions*, "Unity.Jobs", "IJobParallelForBatchExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction, "Unity.Jobs", "IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction");
// [Extension]
// Dependencies System.Object, Unity.Jobs.IJobParallelForBatch
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForBatchExtensions
class CORDL_TYPE IJobParallelForBatchExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using JobParallelForBatchProducer_1 = ::GlobalNamespace::IJobParallelForBatchExtensions_JobParallelForBatchProducer_1<T>;

/// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelForBatch*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EarlyJobInit() ;

/// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelForBatch*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::IntPtr GetReflectionData() ;

/// [Extension]
/// @brief Method ScheduleBatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelForBatch*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle ScheduleBatch(T  jobData, int32_t  arrayLength, int32_t  indicesPerJobCount, ::Unity::Jobs::JobHandle  dependsOn) ;

/// [Extension]
/// @brief Method ScheduleParallel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelForBatch*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle ScheduleParallel(T  jobData, int32_t  arrayLength, int32_t  indicesPerJobCount, ::Unity::Jobs::JobHandle  dependsOn) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IJobParallelForBatchExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForBatchExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobParallelForBatchExtensions(IJobParallelForBatchExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForBatchExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobParallelForBatchExtensions(IJobParallelForBatchExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Jobs::IJobParallelForBatchExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Jobs
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForBatchExtensions/JobParallelForBatchProducer`1/ExecuteJobFunction<T>
class CORDL_TYPE JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::by_ref<T>  jobData, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

static inline ::Unity::Jobs::JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction(JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction(JobParallelForBatchProducer_1_IJobParallelForBatchExtensions_ExecuteJobFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
