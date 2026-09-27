#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardInputInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardInputSource_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardInputStateFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardInputInfo)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo, "", "OVRPlugin/VirtualKeyboardInputInfo");
// Dependencies OVRPlugin::Posef, OVRPlugin::TrackingOrigin, OVRPlugin::VirtualKeyboardInputSource, OVRPlugin::VirtualKeyboardInputStateFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardInputInfo
struct CORDL_TYPE OVRPlugin_VirtualKeyboardInputInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardInputInfo() ;

// Ctor Parameters [CppParam { name: "inputSource", ty: "::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputState", ty: "::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "inputTrackingOriginType", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardInputInfo(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource  inputSource, ::GlobalNamespace::OVRPlugin_Posef  inputPose, ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags  inputState, ::GlobalNamespace::OVRPlugin_TrackingOrigin  inputTrackingOriginType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field inputSource, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource  inputSource;

/// @brief Field inputPose, offset: 0x4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  inputPose;

/// @brief Field inputState, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags  inputState;

/// @brief Field inputTrackingOriginType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingOrigin  inputTrackingOriginType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo, inputSource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo, inputPose) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo, inputState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo, inputTrackingOriginType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
