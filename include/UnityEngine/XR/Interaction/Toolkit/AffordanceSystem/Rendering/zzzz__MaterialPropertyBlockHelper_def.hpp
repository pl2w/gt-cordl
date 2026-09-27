#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/MaterialPropertyBlockHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockHelper)
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering", "MaterialPropertyBlockHelper");
// [AddComponentMenu("Affordance System/Rendering/Material Property Block Helper", 12)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper.html")]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialHelperBase
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper
class CORDL_TYPE MaterialPropertyBlockHelper : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase {
public:
// Declarations
/// @brief Field m_IsDirty, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsDirty, put=__cordl_internal_set_m_IsDirty)) bool  m_IsDirty;

/// @brief Field m_PropertyBlock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertyBlock, put=__cordl_internal_set_m_PropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  m_PropertyBlock;

/// @brief Method GetMaterialPropertyBlock, addr 0xb4da0a8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::MaterialPropertyBlock* GetMaterialPropertyBlock(bool  markPropertyBlockAsDirty) ;

/// @brief Method Initialize, addr 0xb4da0bc, size 0x88, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method LateUpdate, addr 0xb4da068, size 0x40, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4da05c, size 0xc, virtual false, abstract: false, final false
inline void OnDestroy() ;

constexpr bool const& __cordl_internal_get_m_IsDirty() const;

constexpr bool& __cordl_internal_get_m_IsDirty() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_PropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_PropertyBlock() ;

constexpr void __cordl_internal_set_m_IsDirty(bool  value) ;

constexpr void __cordl_internal_set_m_PropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

/// @brief Method .ctor, addr 0xb4da144, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyBlockHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialPropertyBlockHelper(MaterialPropertyBlockHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialPropertyBlockHelper(MaterialPropertyBlockHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11743};

/// @brief Field m_PropertyBlock, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___m_PropertyBlock;

/// @brief Field m_IsDirty, offset: 0x38, size: 0x1, def value: None
 bool  ___m_IsDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper, ___m_PropertyBlock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper, ___m_IsDirty) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
