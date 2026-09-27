#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAsset_TransientBuildData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TrackAsset_TransientBuildData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
// Forward declare root types
namespace GlobalNamespace {
struct TrackAsset_TransientBuildData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackAsset_TransientBuildData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackAsset_TransientBuildData, "UnityEngine.Timeline", "TrackAsset/TransientBuildData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TrackAsset/TransientBuildData
struct CORDL_TYPE TrackAsset_TransientBuildData {
public:
// Declarations
/// @brief Method Clear, addr 0xb3bf5fc, size 0xe0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Create, addr 0xb3c1a64, size 0x154, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TrackAsset_TransientBuildData Create() ;

// Ctor Parameters []
// @brief default ctor
constexpr TrackAsset_TransientBuildData() ;

// Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "markerList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: None, comment: None }]
constexpr TrackAsset_TransientBuildData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  trackList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  clipList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markerList) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28709};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field trackList, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  trackList;

/// @brief Field clipList, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  clipList;

/// @brief Field markerList, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markerList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackAsset_TransientBuildData, trackList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackAsset_TransientBuildData, clipList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrackAsset_TransientBuildData, markerList) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackAsset_TransientBuildData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
