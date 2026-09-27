#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSelectorJoinSubsButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameModeSelectorJoinSubsButton)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class GameModeSelectorJoinSubsButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameModeSelectorJoinSubsButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameModeSelectorJoinSubsButton*, "", "GameModeSelectorJoinSubsButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameModeSelectorJoinSubsButton
class CORDL_TYPE GameModeSelectorJoinSubsButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DisabledButtonMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisabledButtonMaterial, put=__cordl_internal_set_DisabledButtonMaterial)) ::UnityW<::UnityEngine::Material>  DisabledButtonMaterial;

/// @brief Field disabledObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledObject, put=__cordl_internal_set_disabledObject)) ::UnityW<::UnityEngine::GameObject>  disabledObject;

/// @brief Field disabledText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_disabledText, put=__cordl_internal_set_disabledText)) ::UnityW<::TMPro::TextMeshPro>  disabledText;

/// @brief Field subsPublicButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_subsPublicButton, put=__cordl_internal_set_subsPublicButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  subsPublicButton;

/// [ContextMenu("Check Subscribed")]
/// @brief Method CheckSubscribed, addr 0x57eac2c, size 0xdc, virtual false, abstract: false, final false
inline void CheckSubscribed() ;

/// @brief Method DisableButton, addr 0x57eb0d8, size 0x74, virtual false, abstract: false, final false
inline void DisableButton(::StringW  disabled) ;

/// @brief Method DisableButtonInPublicRoom, addr 0x57eaf58, size 0x48, virtual false, abstract: false, final false
inline void DisableButtonInPublicRoom() ;

/// @brief Method DisableButtonPrivate, addr 0x57eb08c, size 0x48, virtual false, abstract: false, final false
inline void DisableButtonPrivate() ;

/// @brief Method DisableButtonSubscribers, addr 0x57eafa0, size 0x48, virtual false, abstract: false, final false
inline void DisableButtonSubscribers() ;

static inline ::GlobalNamespace::GameModeSelectorJoinSubsButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x57ead08, size 0x208, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57eaa1c, size 0x210, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnJoinRoom, addr 0x57eafe8, size 0xa4, virtual false, abstract: false, final false
inline void OnJoinRoom() ;

/// @brief Method OnLeaveRoom, addr 0x57eb0d4, size 0x4, virtual false, abstract: false, final false
inline void OnLeaveRoom() ;

/// @brief Method ShowButton, addr 0x57eaf10, size 0x48, virtual false, abstract: false, final false
inline void ShowButton() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_DisabledButtonMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_DisabledButtonMaterial() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disabledObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disabledObject() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_disabledText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_disabledText() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_subsPublicButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_subsPublicButton() ;

constexpr void __cordl_internal_set_DisabledButtonMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_disabledObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_disabledText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subsPublicButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

/// @brief Method .ctor, addr 0x57eb14c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameModeSelectorJoinSubsButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameModeSelectorJoinSubsButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameModeSelectorJoinSubsButton(GameModeSelectorJoinSubsButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameModeSelectorJoinSubsButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameModeSelectorJoinSubsButton(GameModeSelectorJoinSubsButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{167};

/// @brief Field DisabledButtonMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___DisabledButtonMaterial;

/// [SerializeField]
/// @brief Field subsPublicButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___subsPublicButton;

/// [SerializeField]
/// @brief Field disabledObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disabledObject;

/// [SerializeField]
/// @brief Field disabledText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___disabledText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameModeSelectorJoinSubsButton, ___DisabledButtonMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorJoinSubsButton, ___subsPublicButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorJoinSubsButton, ___disabledObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameModeSelectorJoinSubsButton, ___disabledText) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameModeSelectorJoinSubsButton) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
