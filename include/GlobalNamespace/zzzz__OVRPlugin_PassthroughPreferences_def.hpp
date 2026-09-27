#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughPreferences.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughPreferenceFields_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughPreferenceFlags_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_PassthroughPreferences)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PassthroughPreferences;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PassthroughPreferences);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PassthroughPreferences, "", "OVRPlugin/PassthroughPreferences");
// Dependencies OVRPlugin::PassthroughPreferenceFields, OVRPlugin::PassthroughPreferenceFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PassthroughPreferences
struct CORDL_TYPE OVRPlugin_PassthroughPreferences {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PassthroughPreferences() ;

// Ctor Parameters [CppParam { name: "Fields", ty: "::GlobalNamespace::OVRPlugin_PassthroughPreferenceFields", modifiers: "", def_value: None, comment: None }, CppParam { name: "Flags", ty: "::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PassthroughPreferences(::GlobalNamespace::OVRPlugin_PassthroughPreferenceFields  Fields, ::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags  Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Fields, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_PassthroughPreferenceFields  Fields;

/// @brief Field Flags, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags  Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughPreferences, Fields) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughPreferences, Flags) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PassthroughPreferences) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
