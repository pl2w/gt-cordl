#pragma once
// IWYU pragma private; include "Unity/Jobs/IJobForExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__IJobFor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IJobForExtensions)
namespace GlobalNamespace {
template<typename T>
struct IJobForExtensions_ForJobStruct_1;
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
template<typename T>
class ForJobStruct_1_IJobForExtensions_ExecuteJobFunction;
}
namespace Unity::Jobs {
class IJobForExtensions;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction);
MARK_REF_T(::Unity::Jobs::IJobForExtensions*);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction, "Unity.Jobs", "IJobForExtensions/ForJobStruct`1/ExecuteJobFunction");
DEFINE_IL2CPP_CLASS(::Unity::Jobs::IJobForExtensions*, "Unity.Jobs", "IJobForExtensions");
// [Extension]
// Dependencies System.Object, Unity.Jobs.IJobFor
namespace Unity::Jobs {
// Is value type: false
// CS Name: Unity.Jobs.IJobForExtensions
class CORDL_TYPE IJobForExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using ForJobStruct_1 = ::GlobalNamespace::IJobForExtensions_ForJobStruct_1<T>;

/// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EarlyJobInit() ;

/// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::IntPtr GetReflectionData() ;

/// [Extension]
/// @brief Method ScheduleParallel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Jobs::IJobFor*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle ScheduleParallel(T  jobData, int32_t  arrayLength, int32_t  innerloopBatchCount, ::Unity::Jobs::JobHandle  dependency) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IJobForExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IJobForExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobForExtensions(IJobForExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobForExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobForExtensions(IJobForExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Jobs::IJobForExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::Jobs
// Dependencies System.MulticastDelegate
namespace Unity::Jobs {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Jobs.IJobForExtensions/ForJobStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE ForJobStruct_1_IJobForExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::by_ref<T>  data, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

static inline ::Unity::Jobs::ForJobStruct_1_IJobForExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForJobStruct_1_IJobForExtensions_ExecuteJobFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForJobStruct_1_IJobForExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ForJobStruct_1_IJobForExtensions_ExecuteJobFunction(ForJobStruct_1_IJobForExtensions_ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForJobStruct_1_IJobForExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForJobStruct_1_IJobForExtensions_ExecuteJobFunction(ForJobStruct_1_IJobForExtensions_ExecuteJobFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14650};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs
