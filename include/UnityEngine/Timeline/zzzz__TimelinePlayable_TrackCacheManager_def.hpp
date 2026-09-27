#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelinePlayable_TrackCacheManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TimelinePlayable_TrackCacheManager)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Timeline {
class AnimationTrack;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimelinePlayable_TrackCacheManager;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimelinePlayable_TrackCacheManager);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimelinePlayable_TrackCacheManager, "UnityEngine.Timeline", "TimelinePlayable/TrackCacheManager");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TimelinePlayable/TrackCacheManager
struct CORDL_TYPE TimelinePlayable_TrackCacheManager {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb3d0d14, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetTrackAssetsFromRuntimeElements, addr 0xb3d0b18, size 0x1fc, virtual false, abstract: false, final false
inline void GetTrackAssetsFromRuntimeElements(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*  activeRuntimeElements) ;

/// @brief Method .ctor, addr 0xb3d055c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*  cache, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*  activeRuntimeElements) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr TimelinePlayable_TrackCacheManager() ;

// Ctor Parameters [CppParam { name: "trackCache", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*", modifiers: "", def_value: None, comment: None }]
constexpr TimelinePlayable_TrackCacheManager(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*  trackCache) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28781};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field trackCache, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*  trackCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimelinePlayable_TrackCacheManager, trackCache) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimelinePlayable_TrackCacheManager) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
