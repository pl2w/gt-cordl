#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/MetaQuestSupport/MetaQuestFeature_TargetDevice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MetaQuestFeature_TargetDevice)
// Forward declare root types
namespace GlobalNamespace {
struct MetaQuestFeature_TargetDevice;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaQuestFeature_TargetDevice);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaQuestFeature_TargetDevice, "UnityEngine.XR.OpenXR.Features.MetaQuestSupport", "MetaQuestFeature/TargetDevice");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct CORDL_TYPE MetaQuestFeature_TargetDevice {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MetaQuestFeature_TargetDevice() ;

// Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MetaQuestFeature_TargetDevice(::StringW  visibleName, ::StringW  manifestName, bool  enabled, bool  active) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33113};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field visibleName, offset: 0x0, size: 0x8, def value: None
 ::StringW  visibleName;

/// @brief Field manifestName, offset: 0x8, size: 0x8, def value: None
 ::StringW  manifestName;

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  enabled;

/// @brief Field active, offset: 0x11, size: 0x1, def value: None
 bool  active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaQuestFeature_TargetDevice, visibleName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaQuestFeature_TargetDevice, manifestName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaQuestFeature_TargetDevice, enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaQuestFeature_TargetDevice, active) == 0x11, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaQuestFeature_TargetDevice) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
