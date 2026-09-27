#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RenderModelProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_RenderModelProperties)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_RenderModelProperties;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_RenderModelProperties);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_RenderModelProperties, "", "OVRPlugin/RenderModelProperties");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/RenderModelProperties
struct CORDL_TYPE OVRPlugin_RenderModelProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_RenderModelProperties() ;

// Ctor Parameters [CppParam { name: "ModelName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModelKey", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VendorId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModelVersion", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_RenderModelProperties(::StringW  ModelName, uint64_t  ModelKey, uint32_t  VendorId, uint32_t  ModelVersion) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12181};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ModelName, offset: 0x0, size: 0x8, def value: None
 ::StringW  ModelName;

/// @brief Field ModelKey, offset: 0x8, size: 0x8, def value: None
 uint64_t  ModelKey;

/// @brief Field VendorId, offset: 0x10, size: 0x4, def value: None
 uint32_t  VendorId;

/// @brief Field ModelVersion, offset: 0x14, size: 0x4, def value: None
 uint32_t  ModelVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_RenderModelProperties, ModelName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RenderModelProperties, ModelKey) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RenderModelProperties, VendorId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_RenderModelProperties, ModelVersion) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_RenderModelProperties) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
