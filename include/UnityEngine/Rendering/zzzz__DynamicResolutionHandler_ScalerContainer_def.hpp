#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DynamicResolutionHandler_ScalerContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DynamicResScalePolicyType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DynamicResolutionHandler_ScalerContainer)
namespace UnityEngine::Rendering {
class PerformDynamicRes;
}
// Forward declare root types
namespace GlobalNamespace {
struct DynamicResolutionHandler_ScalerContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicResolutionHandler_ScalerContainer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicResolutionHandler_ScalerContainer, "UnityEngine.Rendering", "DynamicResolutionHandler/ScalerContainer");
// Dependencies UnityEngine.Rendering.DynamicResScalePolicyType
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DynamicResolutionHandler/ScalerContainer
struct CORDL_TYPE DynamicResolutionHandler_ScalerContainer {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DynamicResolutionHandler_ScalerContainer() ;

// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::Rendering::DynamicResScalePolicyType", modifiers: "", def_value: None, comment: None }, CppParam { name: "method", ty: "::UnityEngine::Rendering::PerformDynamicRes*", modifiers: "", def_value: None, comment: None }]
constexpr DynamicResolutionHandler_ScalerContainer(::UnityEngine::Rendering::DynamicResScalePolicyType  type, ::UnityEngine::Rendering::PerformDynamicRes*  method) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Rendering::DynamicResScalePolicyType  type;

/// @brief Field method, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Rendering::PerformDynamicRes*  method;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicResolutionHandler_ScalerContainer, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DynamicResolutionHandler_ScalerContainer, method) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicResolutionHandler_ScalerContainer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
