#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIHideOnControlScheme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ModioUIHideOnControlScheme)
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIHideOnControlScheme;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIHideOnControlScheme*, "Modio.Unity.UI.Input", "ModioUIHideOnControlScheme");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIHideOnControlScheme
class CORDL_TYPE ModioUIHideOnControlScheme : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _objectsToHide, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectsToHide, put=__cordl_internal_set__objectsToHide)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _objectsToHide;

/// @brief Field _showOnController, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__showOnController, put=__cordl_internal_set__showOnController)) bool  _showOnController;

/// @brief Field _showOnKBM, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__showOnKBM, put=__cordl_internal_set__showOnKBM)) bool  _showOnKBM;

static inline ::Modio::Unity::UI::Input::ModioUIHideOnControlScheme* New_ctor() ;

/// @brief Method OnDisable, addr 0x9fb4ac0, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9fb4960, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSwappedToController, addr 0x9fb4a44, size 0x7c, virtual false, abstract: false, final false
inline void OnSwappedToController(bool  isController) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__objectsToHide() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__objectsToHide() ;

constexpr bool const& __cordl_internal_get__showOnController() const;

constexpr bool& __cordl_internal_get__showOnController() ;

constexpr bool const& __cordl_internal_get__showOnKBM() const;

constexpr bool& __cordl_internal_get__showOnKBM() ;

constexpr void __cordl_internal_set__objectsToHide(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set__showOnController(bool  value) ;

constexpr void __cordl_internal_set__showOnKBM(bool  value) ;

/// @brief Method .ctor, addr 0x9fb4b60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIHideOnControlScheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIHideOnControlScheme", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIHideOnControlScheme(ModioUIHideOnControlScheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIHideOnControlScheme", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIHideOnControlScheme(ModioUIHideOnControlScheme const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27123};

/// [SerializeField]
/// @brief Field _showOnController, offset: 0x20, size: 0x1, def value: None
 bool  ____showOnController;

/// [SerializeField]
/// @brief Field _showOnKBM, offset: 0x21, size: 0x1, def value: None
 bool  ____showOnKBM;

/// [SerializeField]
/// @brief Field _objectsToHide, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____objectsToHide;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIHideOnControlScheme, ____showOnController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIHideOnControlScheme, ____showOnKBM) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIHideOnControlScheme, ____objectsToHide) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIHideOnControlScheme) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
