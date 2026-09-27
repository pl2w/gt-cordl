#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager_DestinationVideo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorLocation_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GRElevatorManager_DestinationVideo)
namespace UnityEngine::Video {
class VideoClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct GRElevatorManager_DestinationVideo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRElevatorManager_DestinationVideo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorManager_DestinationVideo, "", "GRElevatorManager/DestinationVideo");
// Dependencies GRElevatorManager::ElevatorLocation
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRElevatorManager/DestinationVideo
struct CORDL_TYPE GRElevatorManager_DestinationVideo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRElevatorManager_DestinationVideo() ;

// Ctor Parameters [CppParam { name: "Destination", ty: "::GlobalNamespace::GRElevatorManager_ElevatorLocation", modifiers: "", def_value: None, comment: None }, CppParam { name: "VideoClip", ty: "::UnityW<::UnityEngine::Video::VideoClip>", modifiers: "", def_value: None, comment: None }]
constexpr GRElevatorManager_DestinationVideo(::GlobalNamespace::GRElevatorManager_ElevatorLocation  Destination, ::UnityW<::UnityEngine::Video::VideoClip>  VideoClip) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1922};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Destination, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GRElevatorManager_ElevatorLocation  Destination;

/// @brief Field VideoClip, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoClip>  VideoClip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorManager_DestinationVideo, Destination) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRElevatorManager_DestinationVideo, VideoClip) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorManager_DestinationVideo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
