#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup)
// Forward declare root types
namespace GlobalNamespace {
struct ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "ColorMaterialPropertyAffordanceReceiver/ShaderPropertyLookup");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorMaterialPropertyAffordanceReceiver/ShaderPropertyLookup
#pragma pack(push, 0)
struct CORDL_TYPE ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup {
public:
// Declarations
/// @brief Field baseColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_baseColor, put=setStaticF_baseColor)) int32_t  baseColor;

/// @brief Field color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_color, put=setStaticF_color)) int32_t  color;

static inline int32_t getStaticF_baseColor() ;

static inline int32_t getStaticF_color() ;

static inline void setStaticF_baseColor(int32_t  value) ;

static inline void setStaticF_color(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
