#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_DynamicObjectTrackedClassesSetInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_DynamicObjectTrackedClassesSetInfo)
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectClass;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectTrackedClassesSetInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo, "", "OVRPlugin/DynamicObjectTrackedClassesSetInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/DynamicObjectTrackedClassesSetInfo
struct CORDL_TYPE OVRPlugin_DynamicObjectTrackedClassesSetInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_DynamicObjectTrackedClassesSetInfo() ;

// Ctor Parameters [CppParam { name: "Classes", ty: "::GlobalNamespace::OVRPlugin_DynamicObjectClass*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ClassCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_DynamicObjectTrackedClassesSetInfo(::GlobalNamespace::OVRPlugin_DynamicObjectClass*  Classes, uint32_t  ClassCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Classes, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_DynamicObjectClass*  Classes;

/// @brief Field ClassCount, offset: 0x8, size: 0x4, def value: None
 uint32_t  ClassCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo, Classes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo, ClassCount) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
