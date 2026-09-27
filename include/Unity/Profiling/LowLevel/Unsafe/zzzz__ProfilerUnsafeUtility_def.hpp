#pragma once
// IWYU pragma private; include "Unity/Profiling/LowLevel/Unsafe/ProfilerUnsafeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerUnsafeUtility)
namespace System {
struct IntPtr;
}
namespace Unity::Profiling::LowLevel::Unsafe {
struct ProfilerCategoryDescription;
}
namespace Unity::Profiling::LowLevel {
struct MarkerFlags;
}
namespace Unity::Profiling {
struct ProfilerCategoryColor;
}
namespace Unity::Profiling {
struct ProfilerCounterOptions;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace Unity::Profiling::LowLevel::Unsafe {
class ProfilerUnsafeUtility;
}
// Write type traits
MARK_REF_T(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility*, "Unity.Profiling.LowLevel.Unsafe", "ProfilerUnsafeUtility");
// [UsedByNativeCode]
// [NativeHeader("Runtime/Profiler/ScriptBindings/ProfilerUnsafeUtility.bindings.h")]
// [IgnoredByDeepProfiler]
// Dependencies System.Object
namespace Unity::Profiling::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility
class CORDL_TYPE ProfilerUnsafeUtility : public ::System::Object {
public:
// Declarations
/// [ThreadSafe]
/// @brief Method BeginSample, addr 0xb55d178, size 0x3c, virtual false, abstract: false, final false
static inline void BeginSample(::System::IntPtr  markerPtr) ;

/// [ThreadSafe]
/// @brief Method CreateCategory__Unmanaged, addr 0xb55df78, size 0x54, virtual false, abstract: false, final false
static inline uint16_t CreateCategory__Unmanaged(uint8_t*  name, int32_t  nameLen, ::Unity::Profiling::ProfilerCategoryColor  colorIndex) ;

/// [ThreadSafe]
/// @brief Method CreateCounterValue__Unmanaged, addr 0xb55e14c, size 0x9c, virtual false, abstract: false, final false
static inline void* CreateCounterValue__Unmanaged(::by_ref<::System::IntPtr>  counterPtr, uint8_t*  name, int32_t  nameLen, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, uint8_t  dataType, uint8_t  dataUnit, int32_t  dataSize, ::Unity::Profiling::ProfilerCounterOptions  counterOptions) ;

/// [ThreadSafe]
/// @brief Method CreateMarker, addr 0xb55cf34, size 0x190, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMarker(::StringW  name, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, int32_t  metadataCount) ;

/// @brief Method CreateMarker_Injected, addr 0xb55e010, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMarker_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, int32_t  metadataCount) ;

/// [ThreadSafe]
/// @brief Method CreateMarker__Unmanaged, addr 0xb55e06c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateMarker__Unmanaged(uint8_t*  name, int32_t  nameLen, uint16_t  categoryId, ::Unity::Profiling::LowLevel::MarkerFlags  flags, int32_t  metadataCount) ;

/// [ThreadSafe]
/// @brief Method EndSample, addr 0xb55d200, size 0x3c, virtual false, abstract: false, final false
static inline void EndSample(::System::IntPtr  markerPtr) ;

/// [ThreadSafe]
/// @brief Method GetCategoryDescription, addr 0xb55cd78, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription GetCategoryDescription(uint16_t  categoryId) ;

/// @brief Method GetCategoryDescription_Injected, addr 0xb55dfcc, size 0x44, virtual false, abstract: false, final false
static inline void GetCategoryDescription_Injected(uint16_t  categoryId, ::by_ref<::Unity::Profiling::LowLevel::Unsafe::ProfilerCategoryDescription>  ret) ;

/// [ThreadSafe]
/// @brief Method SetMarkerMetadata__Unmanaged, addr 0xb55e0d8, size 0x74, virtual false, abstract: false, final false
static inline void SetMarkerMetadata__Unmanaged(::System::IntPtr  markerPtr, int32_t  index, uint8_t*  name, int32_t  nameLen, uint8_t  type, uint8_t  unit) ;

/// @brief Method Utf8ToString, addr 0xb55ce08, size 0xec, virtual false, abstract: false, final false
static inline ::StringW Utf8ToString(uint8_t*  chars, int32_t  charsLen) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProfilerUnsafeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProfilerUnsafeUtility(ProfilerUnsafeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProfilerUnsafeUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProfilerUnsafeUtility(ProfilerUnsafeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14690};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Profiling::LowLevel::Unsafe::ProfilerUnsafeUtility) == 0x10, "Size mismatch!");

} // namespace end def Unity::Profiling::LowLevel::Unsafe
