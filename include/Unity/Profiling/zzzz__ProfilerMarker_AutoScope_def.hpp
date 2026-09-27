#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker_AutoScope.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerMarker_AutoScope)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct ProfilerMarker_AutoScope;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProfilerMarker_AutoScope);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProfilerMarker_AutoScope, "Unity.Profiling", "ProfilerMarker/AutoScope");
// [UsedByNativeCode]
// [IgnoredByDeepProfiler]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker/AutoScope
struct CORDL_TYPE ProfilerMarker_AutoScope {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb55d1b4, size 0x4c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xb55d130, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  markerPtr) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerMarker_AutoScope() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr ProfilerMarker_AutoScope(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14674};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProfilerMarker_AutoScope, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProfilerMarker_AutoScope) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
