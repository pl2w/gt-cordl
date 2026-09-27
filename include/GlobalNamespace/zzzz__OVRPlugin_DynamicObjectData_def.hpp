#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_DynamicObjectData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_DynamicObjectClass_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_DynamicObjectData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_DynamicObjectData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_DynamicObjectData, "", "OVRPlugin/DynamicObjectData");
// Dependencies OVRPlugin::DynamicObjectClass
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/DynamicObjectData
struct CORDL_TYPE OVRPlugin_DynamicObjectData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_DynamicObjectData() ;

// Ctor Parameters [CppParam { name: "ClassType", ty: "::GlobalNamespace::OVRPlugin_DynamicObjectClass", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_DynamicObjectData(::GlobalNamespace::OVRPlugin_DynamicObjectClass  ClassType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12256};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ClassType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_DynamicObjectClass  ClassType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_DynamicObjectData, ClassType) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_DynamicObjectData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
