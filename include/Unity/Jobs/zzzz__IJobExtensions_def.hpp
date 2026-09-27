#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IJobExtensions)
namespace GlobalNamespace {
template<typename T>
struct IJobExtensions_JobStruct_1;
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
class IJobExtensions;
}
namespace Unity::Jobs {
template<typename T>
class JobStruct_1_IJobExtensions_ExecuteJobFunction;
}
// Write type traits
MARK_REF_T(::Unity::Jobs::IJobExtensions*);
MARK_GEN_REF_T_PTR(::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction);
DEFINE_IL2CPP_CLASS(::Unity::Jobs::IJobExtensions*, "Unity.Jobs", "IJobExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction, "Unity.Jobs", "IJobExtensions/JobStruct`1/ExecuteJobFunction");
// [Extension]
// Dependencies System.Object, Unity.Jobs.IJob
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobExtensions
class CORDL_TYPE IJobExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using JobStruct_1 = ::GlobalNamespace::IJobExtensions_JobStruct_1<T>;

/// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EarlyJobInit() ;

/// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::IntPtr GetReflectionData() ;

/// [Extension]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Run(T  jobData) ;

/// [Extension]
/// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJob*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle Schedule(T  jobData, ::Unity::Jobs::JobHandle  dependsOn) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IJobExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobExtensions(IJobExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobExtensions(IJobExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14648};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Jobs::IJobExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Jobs
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobExtensions/JobStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE JobStruct_1_IJobExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::by_ref<T>  data, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

static inline ::Unity::Jobs::JobStruct_1_IJobExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JobStruct_1_IJobExtensions_ExecuteJobFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JobStruct_1_IJobExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JobStruct_1_IJobExtensions_ExecuteJobFunction(JobStruct_1_IJobExtensions_ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JobStruct_1_IJobExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JobStruct_1_IJobExtensions_ExecuteJobFunction(JobStruct_1_IJobExtensions_ExecuteJobFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14646};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
