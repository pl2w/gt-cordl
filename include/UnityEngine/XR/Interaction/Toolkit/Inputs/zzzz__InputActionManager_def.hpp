#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/InputActionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputActionManager)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class InputActionManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "InputActionManager");
// [AddComponentMenu("Input/Input Action Manager")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager
class CORDL_TYPE InputActionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_actionAssets, put=set_actionAssets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  actionAssets;

/// @brief Field m_ActionAssets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActionAssets, put=__cordl_internal_set_m_ActionAssets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  m_ActionAssets;

/// @brief Method DisableInput, addr 0xb4b1224, size 0x178, virtual false, abstract: false, final false
inline void DisableInput() ;

/// @brief Method EnableInput, addr 0xb4b10a8, size 0x178, virtual false, abstract: false, final false
inline void EnableInput() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4b1220, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4b10a4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* const& __cordl_internal_get_m_ActionAssets() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*& __cordl_internal_get_m_ActionAssets() ;

constexpr void __cordl_internal_set_m_ActionAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  value) ;

/// @brief Method .ctor, addr 0xb4b139c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_actionAssets, addr 0xb4b1038, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* get_actionAssets() ;

/// @brief Method set_actionAssets, addr 0xb4b1040, size 0x64, virtual false, abstract: false, final false
inline void set_actionAssets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionManager(InputActionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionManager(InputActionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11590};

/// [SerializeField]
/// [Tooltip("Input action assets to affect when inputs are enabled or disabled.")]
/// @brief Field m_ActionAssets, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  ___m_ActionAssets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager, ___m_ActionAssets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionManager) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
