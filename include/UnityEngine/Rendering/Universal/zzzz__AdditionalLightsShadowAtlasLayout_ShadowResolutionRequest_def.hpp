#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest_SettingsOptions_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest)
namespace GlobalNamespace {
struct ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions;
}
// Forward declare root types
namespace GlobalNamespace {
struct AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, "UnityEngine.Rendering.Universal", "AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest");
// Dependencies UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout::ShadowResolutionRequest::SettingsOptions
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightsShadowAtlasLayout/ShadowResolutionRequest
struct CORDL_TYPE AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest {
public:
// Declarations
using SettingsOptions = ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions;

 __declspec(property(get=get_pointLightShadow, put=set_pointLightShadow)) bool  pointLightShadow;

 __declspec(property(get=get_softShadow, put=set_softShadow)) bool  softShadow;

/// @brief Method get_pointLightShadow, addr 0xb25d39c, size 0xc, virtual false, abstract: false, final false
inline bool get_pointLightShadow() ;

/// @brief Method get_softShadow, addr 0xb25d390, size 0xc, virtual false, abstract: false, final false
inline bool get_softShadow() ;

/// @brief Method set_pointLightShadow, addr 0xb25d310, size 0x20, virtual false, abstract: false, final false
inline void set_pointLightShadow(bool  value) ;

/// @brief Method set_softShadow, addr 0xb25d300, size 0x10, virtual false, abstract: false, final false
inline void set_softShadow(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest() ;

// Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "perLightShadowSliceIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestedResolution", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "offsetX", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "offsetY", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "allocatedResolution", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ShadowProperties", ty: "::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions", modifiers: "", def_value: None, comment: None }]
constexpr AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest(uint16_t  visibleLightIndex, uint16_t  perLightShadowSliceIndex, uint16_t  requestedResolution, uint16_t  offsetX, uint16_t  offsetY, uint16_t  allocatedResolution, ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions  m_ShadowProperties) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18464};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe};

/// @brief Field visibleLightIndex, offset: 0x0, size: 0x2, def value: None
 uint16_t  visibleLightIndex;

/// @brief Field perLightShadowSliceIndex, offset: 0x2, size: 0x2, def value: None
 uint16_t  perLightShadowSliceIndex;

/// @brief Field requestedResolution, offset: 0x4, size: 0x2, def value: None
 uint16_t  requestedResolution;

/// @brief Field offsetX, offset: 0x6, size: 0x2, def value: None
 uint16_t  offsetX;

/// @brief Field offsetY, offset: 0x8, size: 0x2, def value: None
 uint16_t  offsetY;

/// @brief Field allocatedResolution, offset: 0xa, size: 0x2, def value: None
 uint16_t  allocatedResolution;

/// @brief Field m_ShadowProperties, offset: 0xc, size: 0x2, def value: None
 ::GlobalNamespace::ShadowResolutionRequest_AdditionalLightsShadowAtlasLayout_SettingsOptions  m_ShadowProperties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, visibleLightIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, perLightShadowSliceIndex) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, requestedResolution) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, offsetX) == 0x6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, offsetY) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, allocatedResolution) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest, m_ShadowProperties) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest) == 0xe, "Size mismatch!");

} // namespace end def GlobalNamespace
