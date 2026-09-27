#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRRenderRegionsFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ValveOpenXRRenderRegionsFeature)
// Forward declare root types
namespace Valve::OpenXR::Utils {
class ValveOpenXRRenderRegionsFeature;
}
// Write type traits
MARK_REF_T(::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature*, "Valve.OpenXR.Utils", "ValveOpenXRRenderRegionsFeature");
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRFeature
namespace Valve::OpenXR::Utils {
// Is value type: false
// CS Name: Valve.OpenXR.Utils.ValveOpenXRRenderRegionsFeature
class CORDL_TYPE ValveOpenXRRenderRegionsFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
static inline ::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb9417a0, size 0x4, virtual false, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb94179c, size 0x4, virtual false, abstract: false, final false
inline void OnBeforeSerialize() ;

/// @brief Method .ctor, addr 0xb9417a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRRenderRegionsFeature() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRenderRegionsFeature", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValveOpenXRRenderRegionsFeature(ValveOpenXRRenderRegionsFeature && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValveOpenXRRenderRegionsFeature", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValveOpenXRRenderRegionsFeature(ValveOpenXRRenderRegionsFeature const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31839};

/// @brief Field extensionStrings offset 0xffffffff size 0x8
static constexpr ::ConstString  extensionStrings{u""};

/// @brief Field featureId offset 0xffffffff size 0x8
static constexpr ::ConstString  featureId{u"com.valvesoftware.openxr.utils.render_regions"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Valve::OpenXR::Utils::ValveOpenXRRenderRegionsFeature) == 0x50, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils
