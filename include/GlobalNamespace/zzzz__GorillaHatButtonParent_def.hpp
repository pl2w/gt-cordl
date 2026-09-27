#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHatButtonParent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaHatButton_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GorillaHatButtonParent)
namespace GlobalNamespace {
struct GorillaHatButton_HatButtonType;
}
namespace GlobalNamespace {
class GorillaLevelScreen;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaHatButtonParent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaHatButtonParent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaHatButtonParent*, "", "GorillaHatButtonParent");
// Dependencies GorillaHatButton, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaHatButtonParent
class CORDL_TYPE GorillaHatButtonParent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field adminObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_adminObjects, put=__cordl_internal_set_adminObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  adminObjects;

/// @brief Field badge, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_badge, put=__cordl_internal_set_badge)) ::StringW  badge;

/// @brief Field face, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_face, put=__cordl_internal_set_face)) ::StringW  face;

/// @brief Field hat, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_hat, put=__cordl_internal_set_hat)) ::StringW  hat;

/// @brief Field hatButtons, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_hatButtons, put=__cordl_internal_set_hatButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>>  hatButtons;

/// @brief Field initialized, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field leftHandHold, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandHold, put=__cordl_internal_set_leftHandHold)) ::StringW  leftHandHold;

/// @brief Field rightHandHold, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandHold, put=__cordl_internal_set_rightHandHold)) ::StringW  rightHandHold;

/// @brief Field screen, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_screen, put=__cordl_internal_set_screen)) ::UnityW<::GlobalNamespace::GorillaLevelScreen>  screen;

/// @brief Method LateUpdate, addr 0x590e98c, size 0x290, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaHatButtonParent* New_ctor() ;

/// @brief Method PressButton, addr 0x590e2f0, size 0x248, virtual false, abstract: false, final false
inline void PressButton(bool  isOn, ::GlobalNamespace::GorillaHatButton_HatButtonType  buttonType, ::StringW  buttonValue) ;

/// @brief Method Start, addr 0x590e834, size 0x158, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateButtonState, addr 0x590ec1c, size 0xbc, virtual false, abstract: false, final false
inline void UpdateButtonState() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_adminObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_adminObjects() ;

constexpr ::StringW const& __cordl_internal_get_badge() const;

constexpr ::StringW& __cordl_internal_get_badge() ;

constexpr ::StringW const& __cordl_internal_get_face() const;

constexpr ::StringW& __cordl_internal_get_face() ;

constexpr ::StringW const& __cordl_internal_get_hat() const;

constexpr ::StringW& __cordl_internal_get_hat() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>> const& __cordl_internal_get_hatButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>>& __cordl_internal_get_hatButtons() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::StringW const& __cordl_internal_get_leftHandHold() const;

constexpr ::StringW& __cordl_internal_get_leftHandHold() ;

constexpr ::StringW const& __cordl_internal_get_rightHandHold() const;

constexpr ::StringW& __cordl_internal_get_rightHandHold() ;

constexpr ::UnityW<::GlobalNamespace::GorillaLevelScreen> const& __cordl_internal_get_screen() const;

constexpr ::UnityW<::GlobalNamespace::GorillaLevelScreen>& __cordl_internal_get_screen() ;

constexpr void __cordl_internal_set_adminObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_badge(::StringW  value) ;

constexpr void __cordl_internal_set_face(::StringW  value) ;

constexpr void __cordl_internal_set_hat(::StringW  value) ;

constexpr void __cordl_internal_set_hatButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_leftHandHold(::StringW  value) ;

constexpr void __cordl_internal_set_rightHandHold(::StringW  value) ;

constexpr void __cordl_internal_set_screen(::UnityW<::GlobalNamespace::GorillaLevelScreen>  value) ;

/// @brief Method .ctor, addr 0x590ee10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaHatButtonParent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaHatButtonParent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaHatButtonParent(GorillaHatButtonParent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaHatButtonParent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaHatButtonParent(GorillaHatButtonParent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2177};

/// @brief Field hatButtons, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaHatButton>>  ___hatButtons;

/// @brief Field adminObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___adminObjects;

/// @brief Field hat, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___hat;

/// @brief Field face, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___face;

/// @brief Field badge, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___badge;

/// @brief Field leftHandHold, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___leftHandHold;

/// @brief Field rightHandHold, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___rightHandHold;

/// @brief Field initialized, offset: 0x58, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field screen, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaLevelScreen>  ___screen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___hatButtons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___adminObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___hat) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___face) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___badge) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___leftHandHold) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___rightHandHold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___initialized) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaHatButtonParent, ___screen) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaHatButtonParent) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
