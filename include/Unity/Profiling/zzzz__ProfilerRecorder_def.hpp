#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerRecorderOptions_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerRecorder)
namespace GlobalNamespace {
struct ProfilerRecorder_ControlOptions;
}
namespace GlobalNamespace {
struct ProfilerRecorder_CountOptions;
}
namespace System {
class IDisposable;
}
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerRecorderHandle;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
namespace Unity::Profiling {
struct ProfilerRecorderOptions;
}
namespace Unity::Profiling {
struct ProfilerRecorderSample;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerRecorder;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerRecorder);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerRecorder, "Unity.Profiling", "ProfilerRecorder");
// [NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerRecorder.bindings.h")]
// [UsedByNativeCode]
// [DebuggerDisplay("Count = {Count}")]
// [DebuggerTypeProxy(typeof(Unity.Profiling.ProfilerRecorderDebugView))]
// Dependencies Unity.Profiling.ProfilerRecorderOptions
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerRecorder
struct CORDL_TYPE ProfilerRecorder {
public:
// Declarations
using ControlOptions = ::GlobalNamespace::ProfilerRecorder_ControlOptions;

using CountOptions = ::GlobalNamespace::ProfilerRecorder_CountOptions;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsRunning)) bool  IsRunning;

 __declspec(property(get=get_LastValue)) int64_t  LastValue;

 __declspec(property(get=get_Valid)) bool  Valid;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// [BurstDiscard]
/// @brief Method CheckInitializedAndThrow, addr 0xb55d444, size 0x58, virtual false, abstract: false, final false
inline void CheckInitializedAndThrow() ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method Control, addr 0xb55d49c, size 0x48, virtual false, abstract: false, final false
static inline void Control(::Unity::Profiling::ProfilerRecorder  handle, ::GlobalNamespace::ProfilerRecorder_ControlOptions  options) ;

/// @brief Method Control_Injected, addr 0xb55d800, size 0x44, virtual false, abstract: false, final false
static inline void Control_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle, ::GlobalNamespace::ProfilerRecorder_ControlOptions  options) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method Create, addr 0xb55d284, size 0x60, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerRecorder Create(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  statHandle, int32_t  maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions  options) ;

/// @brief Method Create_Injected, addr 0xb55d7a4, size 0x5c, virtual false, abstract: false, final false
static inline void Create_Injected(::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle>  statHandle, int32_t  maxSampleCount, ::Unity::Profiling::ProfilerRecorderOptions  options, ::by_ref<::Unity::Profiling::ProfilerRecorder>  ret) ;

/// @brief Method Dispose, addr 0xb55d990, size 0x54, virtual true, abstract: false, final true
inline void Dispose() ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetCount, addr 0xb55d610, size 0x48, virtual false, abstract: false, final false
static inline int32_t GetCount(::Unity::Profiling::ProfilerRecorder  handle, ::GlobalNamespace::ProfilerRecorder_CountOptions  countOptions) ;

/// @brief Method GetCount_Injected, addr 0xb55d880, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetCount_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle, ::GlobalNamespace::ProfilerRecorder_CountOptions  countOptions) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetLastValue, addr 0xb55d580, size 0x40, virtual false, abstract: false, final false
static inline int64_t GetLastValue(::Unity::Profiling::ProfilerRecorder  handle) ;

/// @brief Method GetLastValue_Injected, addr 0xb55d844, size 0x3c, virtual false, abstract: false, final false
static inline int64_t GetLastValue_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetRunning, addr 0xb55d6a8, size 0x44, virtual false, abstract: false, final false
static inline bool GetRunning(::Unity::Profiling::ProfilerRecorder  handle) ;

/// @brief Method GetRunning_Injected, addr 0xb55d900, size 0x3c, virtual false, abstract: false, final false
static inline bool GetRunning_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle) ;

/// @brief Method GetSample, addr 0xb55d6ec, size 0x4c, virtual false, abstract: false, final false
inline ::Unity::Profiling::ProfilerRecorderSample GetSample(int32_t  index) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method GetSampleInternal, addr 0xb55d738, size 0x6c, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerRecorderSample GetSampleInternal(::Unity::Profiling::ProfilerRecorder  handle, int32_t  index) ;

/// @brief Method GetSampleInternal_Injected, addr 0xb55d93c, size 0x54, virtual false, abstract: false, final false
static inline void GetSampleInternal_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle, int32_t  index, ::by_ref<::Unity::Profiling::ProfilerRecorderSample>  ret) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetValid, addr 0xb55d3b0, size 0x44, virtual false, abstract: false, final false
static inline bool GetValid(::Unity::Profiling::ProfilerRecorder  handle) ;

/// @brief Method GetValid_Injected, addr 0xb55d8c4, size 0x3c, virtual false, abstract: false, final false
static inline bool GetValid_Injected(::by_ref<::Unity::Profiling::ProfilerRecorder>  handle) ;

/// @brief Method Start, addr 0xb55d3f4, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartNew, addr 0xb55d308, size 0x54, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerRecorder StartNew(::Unity::Profiling::ProfilerCategory  category, ::StringW  statName, int32_t  capacity, ::Unity::Profiling::ProfilerRecorderOptions  options) ;

/// @brief Method Stop, addr 0xb55d4e4, size 0x50, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method .ctor, addr 0xb55d244, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Unity::Profiling::ProfilerCategory  category, char16_t*  statName, int32_t  statNameLen, int32_t  capacity, ::Unity::Profiling::ProfilerRecorderOptions  options) ;

/// @brief Method .ctor, addr 0xb55d2e4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Profiling::LowLevel::Unsafe::ProfilerRecorderHandle  statHandle, int32_t  capacity, ::Unity::Profiling::ProfilerRecorderOptions  options) ;

/// @brief Method get_Count, addr 0xb55d5c0, size 0x50, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_IsRunning, addr 0xb55d658, size 0x50, virtual false, abstract: false, final false
inline bool get_IsRunning() ;

/// @brief Method get_LastValue, addr 0xb55d534, size 0x4c, virtual false, abstract: false, final false
inline int64_t get_LastValue() ;

/// @brief Method get_Valid, addr 0xb55d35c, size 0x54, virtual false, abstract: false, final false
inline bool get_Valid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerRecorder() ;

// Ctor Parameters [CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr ProfilerRecorder(uint64_t  handle) noexcept;

/// @brief Field SharedRecorder value: I32(128)
static ::Unity::Profiling::ProfilerRecorderOptions const SharedRecorder;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14682};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field handle, offset: 0x0, size: 0x8, def value: None
 uint64_t  handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerRecorder, handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerRecorder) == 0x8, "Size mismatch!");

} // namespace end def Unity::Profiling
