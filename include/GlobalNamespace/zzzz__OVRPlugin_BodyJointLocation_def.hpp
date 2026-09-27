#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyJointLocation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_BodyJointLocation)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BodyJointLocation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BodyJointLocation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BodyJointLocation, "", "OVRPlugin/BodyJointLocation");
// Dependencies OVRPlugin::Posef, OVRPlugin::SpaceLocationFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BodyJointLocation
struct CORDL_TYPE OVRPlugin_BodyJointLocation {
public:
// Declarations
 __declspec(property(get=get_OrientationTracked)) bool  OrientationTracked;

 __declspec(property(get=get_OrientationValid)) bool  OrientationValid;

 __declspec(property(get=get_PositionTracked)) bool  PositionTracked;

 __declspec(property(get=get_PositionValid)) bool  PositionValid;

/// @brief Field invalid, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_invalid, put=setStaticF_invalid)) ::GlobalNamespace::OVRPlugin_BodyJointLocation  invalid;

static inline ::GlobalNamespace::OVRPlugin_BodyJointLocation getStaticF_invalid() ;

/// @brief Method get_OrientationTracked, addr 0xa60f614, size 0xc, virtual false, abstract: false, final false
inline bool get_OrientationTracked() ;

/// @brief Method get_OrientationValid, addr 0xa60f5fc, size 0xc, virtual false, abstract: false, final false
inline bool get_OrientationValid() ;

/// @brief Method get_PositionTracked, addr 0xa60f620, size 0xc, virtual false, abstract: false, final false
inline bool get_PositionTracked() ;

/// @brief Method get_PositionValid, addr 0xa60f608, size 0xc, virtual false, abstract: false, final false
inline bool get_PositionValid() ;

static inline void setStaticF_invalid(::GlobalNamespace::OVRPlugin_BodyJointLocation  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BodyJointLocation() ;

// Ctor Parameters [CppParam { name: "LocationFlags", ty: "::GlobalNamespace::OVRPlugin_SpaceLocationFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BodyJointLocation(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  LocationFlags, ::GlobalNamespace::OVRPlugin_Posef  Pose) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field LocationFlags, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  LocationFlags;

/// @brief Field Pose, offset: 0x8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  Pose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyJointLocation, LocationFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyJointLocation, Pose) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BodyJointLocation) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
