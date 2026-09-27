#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/MaterialInstanceHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_def.hpp"
CORDL_MODULE_EXPORT(MaterialInstanceHelper)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialInstanceHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering", "MaterialInstanceHelper");
// [AddComponentMenu("Affordance System/Rendering/Material Instance Helper", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialInstanceHelper.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialHelperBase
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialInstanceHelper
class CORDL_TYPE MaterialInstanceHelper : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase {
public:
// Declarations
/// @brief Field m_MaterialInstance, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MaterialInstance, put=__cordl_internal_set_m_MaterialInstance)) ::UnityW<::UnityEngine::Material>  m_MaterialInstance;

/// @brief Method Initialize, addr 0xb4d9f08, size 0x14c, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4d9e2c, size 0xa0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method TryGetMaterialInstance, addr 0xb4d9ecc, size 0x3c, virtual false, abstract: false, final false
inline bool TryGetMaterialInstance(::by_ref<::UnityEngine::Material*>  materialInstance) ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_MaterialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_MaterialInstance() ;

constexpr void __cordl_internal_set_m_MaterialInstance(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0xb4da054, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialInstanceHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialInstanceHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialInstanceHelper(MaterialInstanceHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialInstanceHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialInstanceHelper(MaterialInstanceHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11742};

/// @brief Field m_MaterialInstance, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___m_MaterialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper, ___m_MaterialInstance) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
