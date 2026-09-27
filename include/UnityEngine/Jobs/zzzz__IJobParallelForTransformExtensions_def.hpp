#pragma once
// IWYU pragma private; include "UnityEngine/Jobs/IJobParallelForTransformExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Jobs/zzzz__IJobParallelForTransform_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IJobParallelForTransformExtensions)
namespace GlobalNamespace {
template<typename T>
struct IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1;
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
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
// Forward declare root types
namespace UnityEngine::Jobs {
class IJobParallelForTransformExtensions;
}
namespace UnityEngine::Jobs {
template<typename T>
class TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction;
}
// Write type traits
MARK_REF_T(::UnityEngine::Jobs::IJobParallelForTransformExtensions*);
MARK_GEN_REF_T_PTR(::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction);
DEFINE_IL2CPP_CLASS(::UnityEngine::Jobs::IJobParallelForTransformExtensions*, "UnityEngine.Jobs", "IJobParallelForTransformExtensions");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction, "UnityEngine.Jobs", "IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction");
// [Extension]
// Dependencies System.Object, UnityEngine.Jobs.IJobParallelForTransform
namespace UnityEngine::Jobs {
// Is value type: false
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions
class CORDL_TYPE IJobParallelForTransformExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using TransformParallelForLoopStruct_1 = ::GlobalNamespace::IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1<T>;

/// @brief Method EarlyJobInit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Jobs::IJobParallelForTransform*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void EarlyJobInit() ;

/// @brief Method GetReflectionData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Jobs::IJobParallelForTransform*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::IntPtr GetReflectionData() ;

/// [Extension]
/// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Jobs::IJobParallelForTransform*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle Schedule(T  jobData, ::UnityEngine::Jobs::TransformAccessArray  transforms, ::Unity::Jobs::JobHandle  dependsOn) ;

/// [Extension]
/// @brief Method ScheduleReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Jobs::IJobParallelForTransform*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Jobs::JobHandle ScheduleReadOnly(T  jobData, ::UnityEngine::Jobs::TransformAccessArray  transforms, int32_t  batchSize, ::Unity::Jobs::JobHandle  dependsOn) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IJobParallelForTransformExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransformExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IJobParallelForTransformExtensions(IJobParallelForTransformExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IJobParallelForTransformExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJobParallelForTransformExtensions(IJobParallelForTransformExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Jobs::IJobParallelForTransformExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Jobs
// Dependencies System.MulticastDelegate
namespace UnityEngine::Jobs {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Jobs.IJobParallelForTransformExtensions/TransformParallelForLoopStruct`1/ExecuteJobFunction<T>
class CORDL_TYPE TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::by_ref<T>  jobData, ::System::IntPtr  additionalPtr, ::System::IntPtr  bufferRangePatchData, ::by_ref<::Unity::Jobs::LowLevel::Unsafe::JobRanges>  ranges, int32_t  jobIndex) ;

static inline ::UnityEngine::Jobs::TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction(TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction(TransformParallelForLoopStruct_1_IJobParallelForTransformExtensions_ExecuteJobFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Jobs
