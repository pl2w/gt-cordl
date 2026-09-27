#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/MenuToggler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(MenuToggler)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Locomotion {
class MenuToggler;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Locomotion::MenuToggler*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Locomotion::MenuToggler*, "Oculus.Interaction.Locomotion", "MenuToggler");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Locomotion {
// Is value type: false
// CS Name: Oculus.Interaction.Locomotion.MenuToggler
class CORDL_TYPE MenuToggler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_HeadAnchor, put=set_HeadAnchor)) ::UnityW<::UnityEngine::Transform>  HeadAnchor;

 __declspec(property(get=get_SpawnOffset, put=set_SpawnOffset)) ::UnityEngine::Vector3  SpawnOffset;

/// @brief Field _closeButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::UnityEngine::UI::Button>  _closeButton;

/// @brief Field _headAnchor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__headAnchor, put=__cordl_internal_set__headAnchor)) ::UnityW<::UnityEngine::Transform>  _headAnchor;

/// @brief Field _panel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__panel, put=__cordl_internal_set__panel)) ::UnityW<::UnityEngine::GameObject>  _panel;

/// @brief Field _spawnOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__spawnOffset, put=__cordl_internal_set__spawnOffset)) ::UnityEngine::Vector3  _spawnOffset;

/// @brief Field _started, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method HidePanel, addr 0xa42ed4c, size 0x1c, virtual false, abstract: false, final false
inline void HidePanel() ;

/// @brief Method InjectAllAUIToggler, addr 0xa42f1c8, size 0x8, virtual false, abstract: false, final false
inline void InjectAllAUIToggler(::UnityEngine::GameObject*  panel) ;

/// @brief Method InjectOptionalCloseButton, addr 0xa42f1d8, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalCloseButton(::UnityEngine::UI::Button*  closeButton) ;

/// @brief Method InjectPanel, addr 0xa42f1d0, size 0x8, virtual false, abstract: false, final false
inline void InjectPanel(::UnityEngine::GameObject*  panel) ;

static inline ::Oculus::Interaction::Locomotion::MenuToggler* New_ctor() ;

/// @brief Method OnDisable, addr 0xa42ed68, size 0xe0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa42ec50, size 0xfc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShowPanel, addr 0xa42ee80, size 0x348, virtual false, abstract: false, final false
inline void ShowPanel() ;

/// @brief Method Start, addr 0xa42ec24, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TogglePanel, addr 0xa42ee48, size 0x38, virtual false, abstract: false, final false
inline void TogglePanel() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__headAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__headAnchor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__panel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__panel() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__spawnOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__spawnOffset() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__headAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__panel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__spawnOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa42f1e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HeadAnchor, addr 0xa42ebfc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_HeadAnchor() ;

/// @brief Method get_SpawnOffset, addr 0xa42ec0c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_SpawnOffset() ;

/// @brief Method set_HeadAnchor, addr 0xa42ec04, size 0x8, virtual false, abstract: false, final false
inline void set_HeadAnchor(::UnityEngine::Transform*  value) ;

/// @brief Method set_SpawnOffset, addr 0xa42ec18, size 0xc, virtual false, abstract: false, final false
inline void set_SpawnOffset(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuToggler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuToggler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuToggler(MenuToggler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuToggler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuToggler(MenuToggler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28271};

/// [SerializeField]
/// @brief Field _panel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____panel;

/// [SerializeField]
/// [Optional]
/// @brief Field _closeButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____closeButton;

/// [SerializeField]
/// @brief Field _headAnchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____headAnchor;

/// [SerializeField]
/// @brief Field _spawnOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____spawnOffset;

/// @brief Field _started, offset: 0x44, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Locomotion::MenuToggler, ____panel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::MenuToggler, ____closeButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::MenuToggler, ____headAnchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::MenuToggler, ____spawnOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Locomotion::MenuToggler, ____started) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Locomotion::MenuToggler) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Locomotion
