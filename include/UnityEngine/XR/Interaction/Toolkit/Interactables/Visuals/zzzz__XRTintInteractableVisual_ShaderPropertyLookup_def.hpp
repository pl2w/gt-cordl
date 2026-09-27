#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/XRTintInteractableVisual_ShaderPropertyLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRTintInteractableVisual_ShaderPropertyLookup)
// Forward declare root types
namespace GlobalNamespace {
struct XRTintInteractableVisual_ShaderPropertyLookup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRTintInteractableVisual_ShaderPropertyLookup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRTintInteractableVisual_ShaderPropertyLookup, "UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals", "XRTintInteractableVisual/ShaderPropertyLookup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals.XRTintInteractableVisual/ShaderPropertyLookup
#pragma pack(push, 0)
struct CORDL_TYPE XRTintInteractableVisual_ShaderPropertyLookup {
public:
// Declarations
/// @brief Field emissionColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_emissionColor, put=setStaticF_emissionColor)) int32_t  emissionColor;

static inline int32_t getStaticF_emissionColor() ;

static inline void setStaticF_emissionColor(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRTintInteractableVisual_ShaderPropertyLookup() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::XRTintInteractableVisual_ShaderPropertyLookup) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
