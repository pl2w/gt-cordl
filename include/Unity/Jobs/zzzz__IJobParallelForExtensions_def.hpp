#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobParallelForExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForExtensions)
namespace GlobalNamespace {
template<typename T>
struct IJobParallelForExtensions_ParallelForJobStruct_1;
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
class IJobParallelForExtensions;
}
namespace Unity::Jobs {
template<typename T>
class ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction;
}
// Write type traits
MARK_REF_T(::Unity::Jobs::IJobParallelForExtensions*);
MARK_GEN_REF_T_PTR(::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction);
DEFINE_IL2CPP_CLASS(::Unity::Jobs::IJobParallelForExtensions*, "Unity.Jobs", "IJobParallelForExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction, "Unity.Jobs", "IJobParallelForExtensions/ParallelForJobStruct`1/ExecuteJobFunction");
// [Extension]
// Dependencies System.Object, Unity.Jobs.IJobParallelFor
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForExtensions
class CORDL_TYPE IJobParallelForExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using ParallelForJobStruct_1 = ::GlobalNamespace::IJobParallelForExtensions_ParallelForJobStruct_1<T>;

/// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EarlyJobInit() ;

/// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::IntPtr GetReflectionData() ;

/// [Extension]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Run(T  jobData, int32_t  arrayLength) ;

/// [Extension]
/// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobParallelFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle Schedule(T  jobData, int32_t  arrayLength, int32_t  innerloopBatchCount, ::Unity::Jobs::JobHandle  dependsOn) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IJobParallelForExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobParallelForExtensions(IJobParallelForExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobParallelForExtensions(IJobParallelForExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14656};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Jobs::IJobParallelForExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Jobs
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobParallelForExtensions/ParallelForJobStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::by_ref<T>  data, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

static inline ::Unity::Jobs::ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction(ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction(ParallelForJobStruct_1_IJobParallelForExtensions_ExecuteJobFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14654};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
