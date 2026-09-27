#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtCameraDockSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GtCameraDockSettings)
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct GtCameraDockSettings;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::GtCameraDockSettings);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtCameraDockSettings, "Liv.Lck.GorillaTag", "GtCameraDockSettings");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GtCameraDockSettings
struct CORDL_TYPE GtCameraDockSettings {
public:
// Declarations
/// @brief Method GetEnforcedMode, addr 0x9d21788, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraMode GetEnforcedMode() ;

// Ctor Parameters []
// @brief default ctor
constexpr GtCameraDockSettings() ;

// Ctor Parameters [CppParam { name: "forceFov", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "fov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceOrientation", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "landscapeMode", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "forceCameraFacing", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isFront", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GtCameraDockSettings(bool  forceFov, float_t  fov, bool  forceOrientation, bool  landscapeMode, bool  forceCameraFacing, bool  isFront) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field forceFov, offset: 0x0, size: 0x1, def value: None
 bool  forceFov;

/// [Range(30, 110)]
/// @brief Field fov, offset: 0x4, size: 0x4, def value: None
 float_t  fov;

/// @brief Field forceOrientation, offset: 0x8, size: 0x1, def value: None
 bool  forceOrientation;

/// @brief Field landscapeMode, offset: 0x9, size: 0x1, def value: None
 bool  landscapeMode;

/// @brief Field forceCameraFacing, offset: 0xa, size: 0x1, def value: None
 bool  forceCameraFacing;

/// @brief Field isFront, offset: 0xb, size: 0x1, def value: None
 bool  isFront;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraDockSettings, forceFov) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraDockSettings, fov) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraDockSettings, forceOrientation) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraDockSettings, landscapeMode) == 0x9, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraDockSettings, forceCameraFacing) == 0xa, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtCameraDockSettings, isFront) == 0xb, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtCameraDockSettings) == 0xc, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
