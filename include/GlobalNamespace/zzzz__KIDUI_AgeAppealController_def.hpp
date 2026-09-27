#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KIDUI_AgeAppealController)
namespace GlobalNamespace {
class KIDUI_RestrictedAccessScreen;
}
namespace GlobalNamespace {
class KIDUI_TooYoungToPlay;
}
namespace GlobalNamespace {
struct SessionStatus;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AgeAppealController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AgeAppealController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeAppealController*, "", "KIDUI_AgeAppealController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AgeAppealController
class CORDL_TYPE KIDUI_AgeAppealController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _firstAgeAppealScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstAgeAppealScreen, put=__cordl_internal_set__firstAgeAppealScreen)) ::UnityW<::GlobalNamespace::KIDUI_RestrictedAccessScreen>  _firstAgeAppealScreen;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::KIDUI_AgeAppealController>  _instance;

/// @brief Field _tooYoungToPlayScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__tooYoungToPlayScreen, put=__cordl_internal_set__tooYoungToPlayScreen)) ::UnityW<::GlobalNamespace::KIDUI_TooYoungToPlay>  _tooYoungToPlayScreen;

/// @brief Method Awake, addr 0x5a4d084, size 0x118, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CloseKIDScreens, addr 0x5a4d5e8, size 0xb8, virtual false, abstract: false, final false
inline void CloseKIDScreens() ;

static inline ::GlobalNamespace::KIDUI_AgeAppealController* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a4da0c, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnQuitGamePressed, addr 0x5a4d9bc, size 0x50, virtual false, abstract: false, final false
inline void OnQuitGamePressed() ;

/// @brief Method StartAgeAppealScreens, addr 0x5a4d19c, size 0x37c, virtual false, abstract: false, final false
inline void StartAgeAppealScreens(::System::Nullable_1<::GlobalNamespace::SessionStatus>  sessionStatus) ;

/// @brief Method StartTooYoungToPlayScreen, addr 0x5a4d6a0, size 0x2f8, virtual false, abstract: false, final false
inline void StartTooYoungToPlayScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_RestrictedAccessScreen> const& __cordl_internal_get__firstAgeAppealScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_RestrictedAccessScreen>& __cordl_internal_get__firstAgeAppealScreen() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_TooYoungToPlay> const& __cordl_internal_get__tooYoungToPlayScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_TooYoungToPlay>& __cordl_internal_get__tooYoungToPlayScreen() ;

constexpr void __cordl_internal_set__firstAgeAppealScreen(::UnityW<::GlobalNamespace::KIDUI_RestrictedAccessScreen>  value) ;

constexpr void __cordl_internal_set__tooYoungToPlayScreen(::UnityW<::GlobalNamespace::KIDUI_TooYoungToPlay>  value) ;

/// @brief Method .ctor, addr 0x5a4da34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::KIDUI_AgeAppealController> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x5a4d03c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::KIDUI_AgeAppealController> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::KIDUI_AgeAppealController>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeAppealController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AgeAppealController(KIDUI_AgeAppealController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AgeAppealController(KIDUI_AgeAppealController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3001};

/// [SerializeField]
/// @brief Field _firstAgeAppealScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_RestrictedAccessScreen>  ____firstAgeAppealScreen;

/// [SerializeField]
/// @brief Field _tooYoungToPlayScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_TooYoungToPlay>  ____tooYoungToPlayScreen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealController, ____firstAgeAppealScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealController, ____tooYoungToPlayScreen) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeAppealController) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
