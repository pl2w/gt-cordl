#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/ColorMaterialPropertyAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__ColorAffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorMaterialPropertyAffordanceReceiver)
namespace GlobalNamespace {
struct ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class ColorMaterialPropertyAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "ColorMaterialPropertyAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Rendering/Color Material Property Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorMaterialPropertyAffordanceReceiver.html")]
// [RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper))]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorMaterialPropertyAffordanceReceiver
class CORDL_TYPE ColorMaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver {
public:
// Declarations
using ShaderPropertyLookup = ::GlobalNamespace::ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup;

 __declspec(property(get=get_colorPropertyName, put=set_colorPropertyName)) ::StringW  colorPropertyName;

/// @brief Field m_ColorProperty, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ColorProperty, put=__cordl_internal_set_m_ColorProperty)) int32_t  m_ColorProperty;

/// @brief Field m_ColorPropertyName, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ColorPropertyName, put=__cordl_internal_set_m_ColorPropertyName)) ::StringW  m_ColorPropertyName;

/// @brief Field m_MaterialPropertyBlockHelper, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MaterialPropertyBlockHelper, put=__cordl_internal_set_m_MaterialPropertyBlockHelper)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  m_MaterialPropertyBlockHelper;

 __declspec(property(get=get_materialPropertyBlockHelper, put=set_materialPropertyBlockHelper)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  materialPropertyBlockHelper;

/// @brief Method Awake, addr 0xb4db020, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentValueForCapture, addr 0xb4db164, size 0x2c, virtual true, abstract: false, final false
inline ::UnityEngine::Color GetCurrentValueForCapture() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4db0e8, size 0x7c, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::UnityEngine::Color  newValue) ;

/// @brief Method OnValidate, addr 0xb4daf7c, size 0xa4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method UpdateColorPropertyID, addr 0xb4dae74, size 0x108, virtual false, abstract: false, final false
inline void UpdateColorPropertyID() ;

constexpr int32_t const& __cordl_internal_get_m_ColorProperty() const;

constexpr int32_t& __cordl_internal_get_m_ColorProperty() ;

constexpr ::StringW const& __cordl_internal_get_m_ColorPropertyName() const;

constexpr ::StringW& __cordl_internal_get_m_ColorPropertyName() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper() ;

constexpr void __cordl_internal_set_m_ColorProperty(int32_t  value) ;

constexpr void __cordl_internal_set_m_ColorPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  value) ;

/// @brief Method .ctor, addr 0xb4db190, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_colorPropertyName, addr 0xb4dae50, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_colorPropertyName() ;

/// @brief Method get_materialPropertyBlockHelper, addr 0xb4dae40, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper() ;

/// @brief Method set_colorPropertyName, addr 0xb4dae58, size 0x1c, virtual false, abstract: false, final false
inline void set_colorPropertyName(::StringW  value) ;

/// @brief Method set_materialPropertyBlockHelper, addr 0xb4dae48, size 0x8, virtual false, abstract: false, final false
inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorMaterialPropertyAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorMaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorMaterialPropertyAffordanceReceiver(ColorMaterialPropertyAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorMaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorMaterialPropertyAffordanceReceiver(ColorMaterialPropertyAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11757};

/// [SerializeField]
/// [Tooltip("Material Property Block Helper component reference used to set material properties.")]
/// @brief Field m_MaterialPropertyBlockHelper, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  ___m_MaterialPropertyBlockHelper;

/// [SerializeField]
/// [Tooltip("Shader property name to set the color of. When empty, the component will attempt to use the default for the current render pipeline.")]
/// @brief Field m_ColorPropertyName, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___m_ColorPropertyName;

/// @brief Field m_ColorProperty, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___m_ColorProperty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, ___m_ColorPropertyName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, ___m_ColorProperty) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver) == 0xc8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
