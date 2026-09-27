#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SceneTrackingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(MRUK_SceneTrackingSettings)
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace Meta::XR::MRUtilityKit {
class MRUKRoom;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK_SceneTrackingSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK_SceneTrackingSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK_SceneTrackingSettings, "Meta.XR.MRUtilityKit", "MRUK/SceneTrackingSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/SceneTrackingSettings
struct CORDL_TYPE MRUK_SceneTrackingSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUK_SceneTrackingSettings() ;

// Ctor Parameters [CppParam { name: "UnTrackedRooms", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "UnTrackedAnchors", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*", modifiers: "", def_value: None, comment: None }]
constexpr MRUK_SceneTrackingSettings(::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  UnTrackedRooms, ::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  UnTrackedAnchors) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25862};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field UnTrackedRooms, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  UnTrackedRooms;

/// @brief Field UnTrackedAnchors, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  UnTrackedAnchors;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK_SceneTrackingSettings, UnTrackedRooms) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK_SceneTrackingSettings, UnTrackedAnchors) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK_SceneTrackingSettings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
