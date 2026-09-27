#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/MaterialHelperBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialHelperBase)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialHelperBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering", "MaterialHelperBase");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialHelperBase
class CORDL_TYPE MaterialHelperBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <isInitialized>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized_k__BackingField, put=__cordl_internal_set__isInitialized_k__BackingField)) bool  _isInitialized_k__BackingField;

 __declspec(property(get=get_isInitialized, put=set_isInitialized)) bool  isInitialized;

/// @brief Field m_MaterialIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaterialIndex, put=__cordl_internal_set_m_MaterialIndex)) int32_t  m_MaterialIndex;

/// @brief Field m_Renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Renderer, put=__cordl_internal_set_m_Renderer)) ::UnityW<::UnityEngine::Renderer>  m_Renderer;

 __declspec(property(get=get_materialIndex, put=set_materialIndex)) int32_t  materialIndex;

 __declspec(property(get=get_rendererTarget, put=set_rendererTarget)) ::UnityW<::UnityEngine::Renderer>  rendererTarget;

/// @brief Method GetSharedMaterialForTarget, addr 0xb4d9de0, size 0x44, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetSharedMaterialForTarget() ;

/// @brief Method Initialize, addr 0xb4d9dd4, size 0xc, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase* New_ctor() ;

/// @brief Method OnEnable, addr 0xb4d9b90, size 0x244, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get__isInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__isInitialized_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_MaterialIndex() const;

constexpr int32_t& __cordl_internal_get_m_MaterialIndex() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_m_Renderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_m_Renderer() ;

constexpr void __cordl_internal_set__isInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_MaterialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Renderer(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0xb4d9e24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_isInitialized, addr 0xb4d9b80, size 0x8, virtual false, abstract: false, final false
inline bool get_isInitialized() ;

/// @brief Method get_materialIndex, addr 0xb4d9b70, size 0x8, virtual false, abstract: false, final false
inline int32_t get_materialIndex() ;

/// @brief Method get_rendererTarget, addr 0xb4d9b60, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Renderer> get_rendererTarget() ;

/// [CompilerGenerated]
/// @brief Method set_isInitialized, addr 0xb4d9b88, size 0x8, virtual false, abstract: false, final false
inline void set_isInitialized(bool  value) ;

/// @brief Method set_materialIndex, addr 0xb4d9b78, size 0x8, virtual false, abstract: false, final false
inline void set_materialIndex(int32_t  value) ;

/// @brief Method set_rendererTarget, addr 0xb4d9b68, size 0x8, virtual false, abstract: false, final false
inline void set_rendererTarget(::UnityEngine::Renderer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialHelperBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialHelperBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialHelperBase(MaterialHelperBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialHelperBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialHelperBase(MaterialHelperBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11741};

/// [SerializeField]
/// @brief Field m_Renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___m_Renderer;

/// [SerializeField]
/// @brief Field m_MaterialIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_MaterialIndex;

/// [CompilerGenerated]
/// @brief Field <isInitialized>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____isInitialized_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, ___m_Renderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, ___m_MaterialIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, ____isInitialized_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
