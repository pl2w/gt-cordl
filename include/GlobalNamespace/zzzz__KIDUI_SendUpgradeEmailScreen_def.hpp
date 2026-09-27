#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_SendUpgradeEmailScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KIDUI_SendUpgradeEmailScreen)
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis;
}
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace GlobalNamespace {
class KIDUI_MessageScreen;
}
namespace GlobalNamespace {
struct KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_SendUpgradeEmailScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen*, "", "KIDUI_SendUpgradeEmailScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_SendUpgradeEmailScreen
class CORDL_TYPE KIDUI_SendUpgradeEmailScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SendUpgradeEmail_d__4 = ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen__SendUpgradeEmail_d__4;

/// @brief Field _animatedEllipsis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__animatedEllipsis, put=__cordl_internal_set__animatedEllipsis)) ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  _animatedEllipsis;

/// @brief Field _errorScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorScreen, put=__cordl_internal_set__errorScreen)) ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  _errorScreen;

/// @brief Field _mainScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainScreen, put=__cordl_internal_set__mainScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainScreen;

/// @brief Field _successScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__successScreen, put=__cordl_internal_set__successScreen)) ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  _successScreen;

static inline ::GlobalNamespace::KIDUI_SendUpgradeEmailScreen* New_ctor() ;

/// @brief Method OnCancel, addr 0x5a5ad34, size 0x38, virtual false, abstract: false, final false
inline void OnCancel() ;

/// @brief Method OnFailure, addr 0x5a5ada4, size 0x44, virtual false, abstract: false, final false
inline void OnFailure(::StringW  errorMessage) ;

/// @brief Method OnSuccess, addr 0x5a5ad6c, size 0x38, virtual false, abstract: false, final false
inline void OnSuccess() ;

/// [AsyncStateMachine(typeof(KIDUI_SendUpgradeEmailScreen::<SendUpgradeEmail>d__4))]
/// @brief Method SendUpgradeEmail, addr 0x5a5a488, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendUpgradeEmail(::System::Collections::Generic::List_1<::StringW>*  requestedPermissions) ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& __cordl_internal_get__animatedEllipsis() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& __cordl_internal_get__animatedEllipsis() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen> const& __cordl_internal_get__errorScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>& __cordl_internal_get__errorScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen> const& __cordl_internal_get__successScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>& __cordl_internal_get__successScreen() ;

constexpr void __cordl_internal_set__animatedEllipsis(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value) ;

constexpr void __cordl_internal_set__errorScreen(::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  value) ;

constexpr void __cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

constexpr void __cordl_internal_set__successScreen(::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  value) ;

/// @brief Method .ctor, addr 0x5a5ade8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_SendUpgradeEmailScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_SendUpgradeEmailScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_SendUpgradeEmailScreen(KIDUI_SendUpgradeEmailScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_SendUpgradeEmailScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_SendUpgradeEmailScreen(KIDUI_SendUpgradeEmailScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3038};

/// [SerializeField]
/// @brief Field _animatedEllipsis, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  ____animatedEllipsis;

/// [SerializeField]
/// @brief Field _successScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  ____successScreen;

/// [SerializeField]
/// @brief Field _errorScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MessageScreen>  ____errorScreen;

/// [SerializeField]
/// @brief Field _mainScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainScreen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen, ____animatedEllipsis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen, ____successScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen, ____errorScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen, ____mainScreen) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_SendUpgradeEmailScreen) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
