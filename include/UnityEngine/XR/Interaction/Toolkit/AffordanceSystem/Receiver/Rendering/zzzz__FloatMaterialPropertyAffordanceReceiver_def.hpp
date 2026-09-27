#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/FloatMaterialPropertyAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__FloatAffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatMaterialPropertyAffordanceReceiver)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class FloatMaterialPropertyAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "FloatMaterialPropertyAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Rendering/Float Material Property Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.FloatMaterialPropertyAffordanceReceiver.html")]
// [RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper))]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.FloatMaterialPropertyAffordanceReceiver
class CORDL_TYPE FloatMaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver {
public:
// Declarations
 __declspec(property(get=get_floatPropertyName, put=set_floatPropertyName)) ::StringW  floatPropertyName;

/// @brief Field m_FloatProperty, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FloatProperty, put=__cordl_internal_set_m_FloatProperty)) int32_t  m_FloatProperty;

/// @brief Field m_FloatPropertyName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatPropertyName, put=__cordl_internal_set_m_FloatPropertyName)) ::StringW  m_FloatPropertyName;

/// @brief Field m_MaterialPropertyBlockHelper, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MaterialPropertyBlockHelper, put=__cordl_internal_set_m_MaterialPropertyBlockHelper)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  m_MaterialPropertyBlockHelper;

 __declspec(property(get=get_materialPropertyBlockHelper, put=set_materialPropertyBlockHelper)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  materialPropertyBlockHelper;

/// @brief Method Awake, addr 0xb4db31c, size 0xd4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentValueForCapture, addr 0xb4db440, size 0x2c, virtual true, abstract: false, final false
inline float_t GetCurrentValueForCapture() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4db3f0, size 0x50, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(float_t  newValue) ;

/// @brief Method OnValidate, addr 0xb4db278, size 0xa4, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr int32_t const& __cordl_internal_get_m_FloatProperty() const;

constexpr int32_t& __cordl_internal_get_m_FloatProperty() ;

constexpr ::StringW const& __cordl_internal_get_m_FloatPropertyName() const;

constexpr ::StringW& __cordl_internal_get_m_FloatPropertyName() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper() ;

constexpr void __cordl_internal_set_m_FloatProperty(int32_t  value) ;

constexpr void __cordl_internal_set_m_FloatPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  value) ;

/// @brief Method .ctor, addr 0xb4db46c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_floatPropertyName, addr 0xb4db244, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_floatPropertyName() ;

/// @brief Method get_materialPropertyBlockHelper, addr 0xb4db234, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper() ;

/// @brief Method set_floatPropertyName, addr 0xb4db24c, size 0x2c, virtual false, abstract: false, final false
inline void set_floatPropertyName(::StringW  value) ;

/// @brief Method set_materialPropertyBlockHelper, addr 0xb4db23c, size 0x8, virtual false, abstract: false, final false
inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatMaterialPropertyAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatMaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatMaterialPropertyAffordanceReceiver(FloatMaterialPropertyAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatMaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatMaterialPropertyAffordanceReceiver(FloatMaterialPropertyAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11758};

/// [SerializeField]
/// [Tooltip("Material Property Block Helper component reference used to set material properties.")]
/// @brief Field m_MaterialPropertyBlockHelper, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  ___m_MaterialPropertyBlockHelper;

/// [SerializeField]
/// [Tooltip("Shader property name to set the float value of.")]
/// @brief Field m_FloatPropertyName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___m_FloatPropertyName;

/// @brief Field m_FloatProperty, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___m_FloatProperty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, ___m_FloatPropertyName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, ___m_FloatProperty) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver) == 0xc0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
