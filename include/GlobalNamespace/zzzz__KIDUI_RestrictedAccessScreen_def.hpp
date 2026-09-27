#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_RestrictedAccessScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(KIDUI_RestrictedAccessScreen)
namespace GlobalNamespace {
class KIDAgeAppeal;
}
namespace GlobalNamespace {
struct SessionStatus;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_RestrictedAccessScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_RestrictedAccessScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_RestrictedAccessScreen*, "", "KIDUI_RestrictedAccessScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_RestrictedAccessScreen
class CORDL_TYPE KIDUI_RestrictedAccessScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _ageAppealScreen, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageAppealScreen, put=__cordl_internal_set__ageAppealScreen)) ::UnityW<::GlobalNamespace::KIDAgeAppeal>  _ageAppealScreen;

/// @brief Field _pendingStatusIndicator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingStatusIndicator, put=__cordl_internal_set__pendingStatusIndicator)) ::UnityW<::UnityEngine::GameObject>  _pendingStatusIndicator;

/// @brief Field _prohibitedStatusIndicator, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__prohibitedStatusIndicator, put=__cordl_internal_set__prohibitedStatusIndicator)) ::UnityW<::UnityEngine::GameObject>  _prohibitedStatusIndicator;

static inline ::GlobalNamespace::KIDUI_RestrictedAccessScreen* New_ctor() ;

/// @brief Method OnChangeAgePressed, addr 0x5a5acb8, size 0x4c, virtual false, abstract: false, final false
inline void OnChangeAgePressed() ;

/// @brief Method OnDisable, addr 0x5a5ad04, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method ShowRestrictedAccessScreen, addr 0x5a4d518, size 0xd0, virtual false, abstract: false, final false
inline void ShowRestrictedAccessScreen(::System::Nullable_1<::GlobalNamespace::SessionStatus>  sessionStatus) ;

constexpr ::UnityW<::GlobalNamespace::KIDAgeAppeal> const& __cordl_internal_get__ageAppealScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDAgeAppeal>& __cordl_internal_get__ageAppealScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pendingStatusIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pendingStatusIndicator() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__prohibitedStatusIndicator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__prohibitedStatusIndicator() ;

constexpr void __cordl_internal_set__ageAppealScreen(::UnityW<::GlobalNamespace::KIDAgeAppeal>  value) ;

constexpr void __cordl_internal_set__pendingStatusIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__prohibitedStatusIndicator(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5a5ad2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_RestrictedAccessScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_RestrictedAccessScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_RestrictedAccessScreen(KIDUI_RestrictedAccessScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_RestrictedAccessScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_RestrictedAccessScreen(KIDUI_RestrictedAccessScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3036};

/// [SerializeField]
/// @brief Field _ageAppealScreen, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDAgeAppeal>  ____ageAppealScreen;

/// [SerializeField]
/// @brief Field _pendingStatusIndicator, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pendingStatusIndicator;

/// [SerializeField]
/// @brief Field _prohibitedStatusIndicator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____prohibitedStatusIndicator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_RestrictedAccessScreen, ____ageAppealScreen) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_RestrictedAccessScreen, ____pendingStatusIndicator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_RestrictedAccessScreen, ____prohibitedStatusIndicator) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_RestrictedAccessScreen) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
