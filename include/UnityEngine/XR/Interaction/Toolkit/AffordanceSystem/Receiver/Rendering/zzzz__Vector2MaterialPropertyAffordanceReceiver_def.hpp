#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Rendering/Vector2MaterialPropertyAffordanceReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector2AffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2MaterialPropertyAffordanceReceiver)
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class Vector2MaterialPropertyAffordanceReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "Vector2MaterialPropertyAffordanceReceiver");
// [AddComponentMenu("Affordance System/Receiver/Rendering/Vector2 Material Property Affordance Receiver", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector2MaterialPropertyAffordanceReceiver.html")]
// [RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper))]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector2MaterialPropertyAffordanceReceiver
class CORDL_TYPE Vector2MaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver {
public:
// Declarations
/// @brief Field m_MaterialPropertyBlockHelper, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MaterialPropertyBlockHelper, put=__cordl_internal_set_m_MaterialPropertyBlockHelper)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  m_MaterialPropertyBlockHelper;

/// @brief Field m_Vector2Property, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Vector2Property, put=__cordl_internal_set_m_Vector2Property)) int32_t  m_Vector2Property;

/// @brief Field m_Vector2PropertyName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Vector2PropertyName, put=__cordl_internal_set_m_Vector2PropertyName)) ::StringW  m_Vector2PropertyName;

 __declspec(property(get=get_materialPropertyBlockHelper, put=set_materialPropertyBlockHelper)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  materialPropertyBlockHelper;

 __declspec(property(get=get_vector2PropertyName, put=set_vector2PropertyName)) ::StringW  vector2PropertyName;

/// @brief Method Awake, addr 0xb4db558, size 0xd4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetCurrentValueForCapture, addr 0xb4db728, size 0x34, virtual true, abstract: false, final false
inline ::Unity::Mathematics::float2 GetCurrentValueForCapture() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver* New_ctor() ;

/// @brief Method OnAffordanceValueUpdated, addr 0xb4db62c, size 0x7c, virtual true, abstract: false, final false
inline void OnAffordanceValueUpdated(::Unity::Mathematics::float2  newValue) ;

/// @brief Method OnValidate, addr 0xb4db4b4, size 0xa4, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper() ;

constexpr int32_t const& __cordl_internal_get_m_Vector2Property() const;

constexpr int32_t& __cordl_internal_get_m_Vector2Property() ;

constexpr ::StringW const& __cordl_internal_get_m_Vector2PropertyName() const;

constexpr ::StringW& __cordl_internal_get_m_Vector2PropertyName() ;

constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  value) ;

constexpr void __cordl_internal_set_m_Vector2Property(int32_t  value) ;

constexpr void __cordl_internal_set_m_Vector2PropertyName(::StringW  value) ;

/// @brief Method .ctor, addr 0xb4db75c, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_materialPropertyBlockHelper, addr 0xb4db470, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper() ;

/// @brief Method get_vector2PropertyName, addr 0xb4db480, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_vector2PropertyName() ;

/// @brief Method set_materialPropertyBlockHelper, addr 0xb4db478, size 0x8, virtual false, abstract: false, final false
inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*  value) ;

/// @brief Method set_vector2PropertyName, addr 0xb4db488, size 0x2c, virtual false, abstract: false, final false
inline void set_vector2PropertyName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vector2MaterialPropertyAffordanceReceiver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vector2MaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2MaterialPropertyAffordanceReceiver(Vector2MaterialPropertyAffordanceReceiver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2MaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2MaterialPropertyAffordanceReceiver(Vector2MaterialPropertyAffordanceReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11759};

/// [SerializeField]
/// [Tooltip("Material Property Block Helper component reference used to set material properties.")]
/// @brief Field m_MaterialPropertyBlockHelper, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>  ___m_MaterialPropertyBlockHelper;

/// [SerializeField]
/// [Tooltip("Shader property name to set the vector value of.")]
/// @brief Field m_Vector2PropertyName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___m_Vector2PropertyName;

/// @brief Field m_Vector2Property, offset: 0xb8, size: 0x4, def value: None
 int32_t  ___m_Vector2Property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, ___m_Vector2PropertyName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, ___m_Vector2Property) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver) == 0xc0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
