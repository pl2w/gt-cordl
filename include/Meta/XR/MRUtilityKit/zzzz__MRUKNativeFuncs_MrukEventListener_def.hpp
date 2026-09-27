#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEventListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MRUKNativeFuncs_MrukEventListener)
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnDiscoveryFinished;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnPreRoomAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorRemoved;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnRoomAnchorUpdated;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorAdded;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorRemoved;
}
namespace Meta::XR::MRUtilityKit {
class MRUKNativeFuncs_MrukOnSceneAnchorUpdated;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUKNativeFuncs_MrukEventListener;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, "Meta.XR.MRUtilityKit", "MRUKNativeFuncs/MrukEventListener");
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUKNativeFuncs/MrukEventListener
struct CORDL_TYPE MRUKNativeFuncs_MrukEventListener {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MRUKNativeFuncs_MrukEventListener() ;

// Ctor Parameters [CppParam { name: "onPreRoomAnchorAdded", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onRoomAnchorAdded", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onRoomAnchorUpdated", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onRoomAnchorRemoved", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onSceneAnchorAdded", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onSceneAnchorUpdated", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onSceneAnchorRemoved", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onDiscoveryFinished", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onEnvironmentRaycasterCreated", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*", modifiers: "", def_value: None, comment: None }, CppParam { name: "userContext", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr MRUKNativeFuncs_MrukEventListener(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*  onPreRoomAnchorAdded, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*  onRoomAnchorAdded, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*  onRoomAnchorUpdated, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*  onRoomAnchorRemoved, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*  onSceneAnchorAdded, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*  onSceneAnchorUpdated, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*  onSceneAnchorRemoved, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*  onDiscoveryFinished, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*  onEnvironmentRaycasterCreated, ::System::IntPtr  userContext) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field onPreRoomAnchorAdded, offset: 0x0, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*  onPreRoomAnchorAdded;

/// @brief Field onRoomAnchorAdded, offset: 0x8, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*  onRoomAnchorAdded;

/// @brief Field onRoomAnchorUpdated, offset: 0x10, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*  onRoomAnchorUpdated;

/// @brief Field onRoomAnchorRemoved, offset: 0x18, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*  onRoomAnchorRemoved;

/// @brief Field onSceneAnchorAdded, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*  onSceneAnchorAdded;

/// @brief Field onSceneAnchorUpdated, offset: 0x28, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*  onSceneAnchorUpdated;

/// @brief Field onSceneAnchorRemoved, offset: 0x30, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*  onSceneAnchorRemoved;

/// @brief Field onDiscoveryFinished, offset: 0x38, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*  onDiscoveryFinished;

/// @brief Field onEnvironmentRaycasterCreated, offset: 0x40, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*  onEnvironmentRaycasterCreated;

/// @brief Field userContext, offset: 0x48, size: 0x8, def value: None
 ::System::IntPtr  userContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onPreRoomAnchorAdded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onRoomAnchorAdded) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onRoomAnchorUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onRoomAnchorRemoved) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onSceneAnchorAdded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onSceneAnchorUpdated) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onSceneAnchorRemoved) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onDiscoveryFinished) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, onEnvironmentRaycasterCreated) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener, userContext) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUKNativeFuncs_MrukEventListener) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
