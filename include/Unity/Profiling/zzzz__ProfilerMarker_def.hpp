#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerMarker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ProfilerMarker)
namespace GlobalNamespace {
struct ProfilerMarker_AutoScope;
}
namespace Unity::Profiling {
struct ProfilerCategory;
}
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerMarker;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerMarker);
DEFINE_IL2CPP_CLASS(::Unity::Profiling::ProfilerMarker, "Unity.Profiling", "ProfilerMarker");
// [UsedByNativeCode]
// [IgnoredByDeepProfiler]
// Dependencies System.IntPtr
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerMarker
struct CORDL_TYPE ProfilerMarker {
public:
// Declarations
using AutoScope = ::GlobalNamespace::ProfilerMarker_AutoScope;

/// [Pure]
/// @brief Method Auto, addr 0xb55d0e8, size 0x48, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProfilerMarker_AutoScope Auto() ;

/// @brief Method .ctor, addr 0xb55d0c4, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::Unity::Profiling::ProfilerCategory  category, ::StringW  name) ;

/// @brief Method .ctor, addr 0xb55cf0c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProfilerMarker() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr ProfilerMarker(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14675};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerMarker, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Profiling::ProfilerMarker) == 0x8, "Size mismatch!");

} // namespace end def Unity::Profiling
