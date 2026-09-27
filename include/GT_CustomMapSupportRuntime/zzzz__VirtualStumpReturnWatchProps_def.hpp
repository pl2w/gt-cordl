#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/VirtualStumpReturnWatchProps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VirtualStumpReturnWatchProps)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct VirtualStumpReturnWatchProps;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, "GT_CustomMapSupportRuntime", "VirtualStumpReturnWatchProps");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.VirtualStumpReturnWatchProps
struct CORDL_TYPE VirtualStumpReturnWatchProps {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpReturnWatchProps() ;

// Ctor Parameters [CppParam { name: "holdDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldTagPlayer", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldKickPlayer", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "infectionOverride", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "holdDuration_Infection", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldTagPlayer_Infection", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldKickPlayer_Infection", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "customModeOverride", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "holdDuration_Custom", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldTagPlayer_CustomMode", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "shouldKickPlayer_CustomMode", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr VirtualStumpReturnWatchProps(float_t  holdDuration, bool  shouldTagPlayer, bool  shouldKickPlayer, bool  infectionOverride, float_t  holdDuration_Infection, bool  shouldTagPlayer_Infection, bool  shouldKickPlayer_Infection, bool  customModeOverride, float_t  holdDuration_Custom, bool  shouldTagPlayer_CustomMode, bool  shouldKickPlayer_CustomMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field holdDuration, offset: 0x0, size: 0x4, def value: None
 float_t  holdDuration;

/// @brief Field shouldTagPlayer, offset: 0x4, size: 0x1, def value: None
 bool  shouldTagPlayer;

/// @brief Field shouldKickPlayer, offset: 0x5, size: 0x1, def value: None
 bool  shouldKickPlayer;

/// @brief Field infectionOverride, offset: 0x6, size: 0x1, def value: None
 bool  infectionOverride;

/// @brief Field holdDuration_Infection, offset: 0x8, size: 0x4, def value: None
 float_t  holdDuration_Infection;

/// @brief Field shouldTagPlayer_Infection, offset: 0xc, size: 0x1, def value: None
 bool  shouldTagPlayer_Infection;

/// @brief Field shouldKickPlayer_Infection, offset: 0xd, size: 0x1, def value: None
 bool  shouldKickPlayer_Infection;

/// @brief Field customModeOverride, offset: 0xe, size: 0x1, def value: None
 bool  customModeOverride;

/// @brief Field holdDuration_Custom, offset: 0x10, size: 0x4, def value: None
 float_t  holdDuration_Custom;

/// @brief Field shouldTagPlayer_CustomMode, offset: 0x14, size: 0x1, def value: None
 bool  shouldTagPlayer_CustomMode;

/// @brief Field shouldKickPlayer_CustomMode, offset: 0x15, size: 0x1, def value: None
 bool  shouldKickPlayer_CustomMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, holdDuration) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, shouldTagPlayer) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, shouldKickPlayer) == 0x5, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, infectionOverride) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, holdDuration_Infection) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, shouldTagPlayer_Infection) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, shouldKickPlayer_Infection) == 0xd, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, customModeOverride) == 0xe, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, holdDuration_Custom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, shouldTagPlayer_CustomMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps, shouldKickPlayer_CustomMode) == 0x15, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps) == 0x18, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
