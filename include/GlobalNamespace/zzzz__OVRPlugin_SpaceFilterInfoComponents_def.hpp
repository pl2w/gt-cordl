#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceFilterInfoComponents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceFilterInfoComponents)
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceFilterInfoComponents;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents, "", "OVRPlugin/SpaceFilterInfoComponents");
// Dependencies OVRPlugin::SpaceComponentType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceFilterInfoComponents
struct CORDL_TYPE OVRPlugin_SpaceFilterInfoComponents {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceFilterInfoComponents() ;

// Ctor Parameters [CppParam { name: "Components", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>", modifiers: "", def_value: None, comment: None }, CppParam { name: "NumComponents", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceFilterInfoComponents(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  Components, int32_t  NumComponents) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Components, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  Components;

/// @brief Field NumComponents, offset: 0x8, size: 0x4, def value: None
 int32_t  NumComponents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents, Components) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents, NumComponents) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
