#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Profiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Profiler)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Profiling {
class Profiler;
}
// Write type traits
MARK_REF_T(::UnityEngine::Profiling::Profiler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Profiling::Profiler*, "UnityEngine.Profiling", "Profiler");
// [NativeHeader("Runtime/Allocator/MemoryManager.h")]
// [MovedFrom("UnityEngine")]
// [UsedByNativeCode]
// [NativeHeader("Runtime/Profiler/ScriptBindings/Profiler.bindings.h")]
// [NativeHeader("Runtime/ScriptingBackend/ScriptingApi.h")]
// [NativeHeader("Runtime/Profiler/Profiler.h")]
// [NativeHeader("Runtime/Profiler/MemoryProfiler.h")]
// [NativeHeader("Runtime/Utilities/MemoryUtilities.h")]
// Dependencies System.Object
namespace UnityEngine::Profiling {
// Is value type: false
// CS Name: UnityEngine.Profiling.Profiler
class CORDL_TYPE Profiler : public ::System::Object {
public:
// Declarations
/// [Conditional("ENABLE_PROFILER")]
/// @brief Method BeginSample, addr 0xb5f76a8, size 0x88, virtual false, abstract: false, final false
static inline void BeginSample(::StringW  name) ;

/// [NativeMethod(Name = "ProfilerBindings::BeginSample", IsFreeFunction = true, IsThreadSafe = true)]
/// @brief Method BeginSampleImpl, addr 0xb5f7730, size 0x174, virtual false, abstract: false, final false
static inline void BeginSampleImpl(::StringW  name, ::UnityEngine::Object*  targetObject) ;

/// @brief Method BeginSampleImpl_Injected, addr 0xb5f7920, size 0x44, virtual false, abstract: false, final false
static inline void BeginSampleImpl_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::IntPtr  targetObject) ;

/// [Conditional("ENABLE_PROFILER")]
/// [NativeMethod(Name = "ProfilerBindings::EndSample", IsFreeFunction = true, IsThreadSafe = true)]
/// @brief Method EndSample, addr 0xb5f7964, size 0x28, virtual false, abstract: false, final false
static inline void EndSample() ;

/// [NativeConditional("ENABLE_PROFILER")]
/// @brief Method EndThreadProfiling, addr 0xb5f76a4, size 0x4, virtual false, abstract: false, final false
static inline void EndThreadProfiling() ;

/// [NativeMethod(Name = "scripting_gc_get_heap_size", IsFreeFunction = true)]
/// @brief Method GetMonoHeapSizeLong, addr 0xb5f7a4c, size 0x28, virtual false, abstract: false, final false
static inline int64_t GetMonoHeapSizeLong() ;

/// [NativeMethod(Name = "scripting_gc_get_used_size", IsFreeFunction = true)]
/// @brief Method GetMonoUsedSizeLong, addr 0xb5f7a74, size 0x28, virtual false, abstract: false, final false
static inline int64_t GetMonoUsedSizeLong() ;

/// [NativeMethod(Name = "ProfilerBindings::GetRuntimeMemorySizeLong", IsFreeFunction = true)]
/// @brief Method GetRuntimeMemorySizeLong, addr 0xb5f798c, size 0x84, virtual false, abstract: false, final false
static inline int64_t GetRuntimeMemorySizeLong(/* [NotNull] */ ::UnityEngine::Object*  o) ;

/// @brief Method GetRuntimeMemorySizeLong_Injected, addr 0xb5f7a10, size 0x3c, virtual false, abstract: false, final false
static inline int64_t GetRuntimeMemorySizeLong_Injected(::System::IntPtr  o) ;

/// [StaticAccessor("GetMemoryManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeConditional("ENABLE_MEMORY_MANAGER")]
/// @brief Method GetTempAllocatorSize, addr 0xb5f7a9c, size 0x28, virtual false, abstract: false, final false
static inline uint32_t GetTempAllocatorSize() ;

/// [StaticAccessor("GetMemoryManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeConditional("ENABLE_MEMORY_MANAGER")]
/// [NativeMethod(Name = "GetTotalAllocatedMemory")]
/// @brief Method GetTotalAllocatedMemoryLong, addr 0xb5f7ac4, size 0x28, virtual false, abstract: false, final false
static inline int64_t GetTotalAllocatedMemoryLong() ;

/// [NativeMethod(Name = "GetTotalReservedMemory")]
/// [StaticAccessor("GetMemoryManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeConditional("ENABLE_MEMORY_MANAGER")]
/// @brief Method GetTotalReservedMemoryLong, addr 0xb5f7b14, size 0x28, virtual false, abstract: false, final false
static inline int64_t GetTotalReservedMemoryLong() ;

/// [StaticAccessor("GetMemoryManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeMethod(Name = "GetTotalUnusedReservedMemory")]
/// [NativeConditional("ENABLE_MEMORY_MANAGER")]
/// @brief Method GetTotalUnusedReservedMemoryLong, addr 0xb5f7aec, size 0x28, virtual false, abstract: false, final false
static inline int64_t GetTotalUnusedReservedMemoryLong() ;

/// @brief Method ValidateArguments, addr 0xb5f78a4, size 0x7c, virtual false, abstract: false, final false
static inline void ValidateArguments(::StringW  name) ;

/// [NativeConditional("ENABLE_PROFILER")]
/// [NativeMethod(Name = "profiler_is_enabled", IsFreeFunction = true, IsThreadSafe = true)]
/// @brief Method get_enabled, addr 0xb5f767c, size 0x28, virtual false, abstract: false, final false
static inline bool get_enabled() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Profiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Profiler(Profiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Profiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Profiler(Profiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15163};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Profiling::Profiler) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Profiling
