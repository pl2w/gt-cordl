#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAsset_Versions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackAsset_Versions)
// Forward declare root types
namespace GlobalNamespace {
struct TrackAsset_Versions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackAsset_Versions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackAsset_Versions, "UnityEngine.Timeline", "TrackAsset/Versions");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Timeline.TrackAsset/Versions
struct CORDL_TYPE TrackAsset_Versions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackAsset_Versions_Unwrapped
enum struct __TrackAsset_Versions_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_RotationAsEuler = static_cast<int32_t>(0x1),
__E_RootMotionUpgrade = static_cast<int32_t>(0x2),
__E_AnimatedTrackProperties = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackAsset_Versions_Unwrapped () const noexcept {
return static_cast<__TrackAsset_Versions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TrackAsset_Versions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackAsset_Versions(int32_t  value__) noexcept;

/// @brief Field AnimatedTrackProperties value: I32(3)
static ::GlobalNamespace::TrackAsset_Versions const AnimatedTrackProperties;

/// @brief Field Initial value: I32(0)
static ::GlobalNamespace::TrackAsset_Versions const Initial;

/// @brief Field RootMotionUpgrade value: I32(2)
static ::GlobalNamespace::TrackAsset_Versions const RootMotionUpgrade;

/// @brief Field RotationAsEuler value: I32(1)
static ::GlobalNamespace::TrackAsset_Versions const RotationAsEuler;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28707};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackAsset_Versions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackAsset_Versions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
