#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AgeAppealScreen)
namespace GlobalNamespace {
class KIDUIButton;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AgeAppealScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AgeAppealScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeAppealScreen*, "", "KIDUI_AgeAppealScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AgeAppealScreen
class CORDL_TYPE KIDUI_AgeAppealScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cancellationTokenSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _changeAgeButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeAgeButton, put=__cordl_internal_set__changeAgeButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _changeAgeButton;

/// @brief Field _minimumDelay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__minimumDelay, put=__cordl_internal_set__minimumDelay)) int32_t  _minimumDelay;

/// @brief Field _submittedEmailAddress, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__submittedEmailAddress, put=__cordl_internal_set__submittedEmailAddress)) ::StringW  _submittedEmailAddress;

/// @brief Method Awake, addr 0x5a45a94, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::KIDUI_AgeAppealScreen* New_ctor() ;

/// @brief Method OnChangeAgePressed, addr 0x5a45ae8, size 0x24, virtual false, abstract: false, final false
inline void OnChangeAgePressed() ;

/// @brief Method OnDisable, addr 0x5a45a9c, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a45a98, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShowRestrictedAccessScreen, addr 0x5a45ac4, size 0x24, virtual false, abstract: false, final false
inline void ShowRestrictedAccessScreen() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__changeAgeButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__changeAgeButton() ;

constexpr int32_t const& __cordl_internal_get__minimumDelay() const;

constexpr int32_t& __cordl_internal_get__minimumDelay() ;

constexpr ::StringW const& __cordl_internal_get__submittedEmailAddress() const;

constexpr ::StringW& __cordl_internal_get__submittedEmailAddress() ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__changeAgeButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__minimumDelay(int32_t  value) ;

constexpr void __cordl_internal_set__submittedEmailAddress(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a45b0c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeAppealScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AgeAppealScreen(KIDUI_AgeAppealScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AgeAppealScreen(KIDUI_AgeAppealScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2979};

/// [SerializeField]
/// @brief Field _changeAgeButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____changeAgeButton;

/// [SerializeField]
/// @brief Field _minimumDelay, offset: 0x28, size: 0x4, def value: None
 int32_t  ____minimumDelay;

/// @brief Field _submittedEmailAddress, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____submittedEmailAddress;

/// @brief Field _cancellationTokenSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealScreen, ____changeAgeButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealScreen, ____minimumDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealScreen, ____submittedEmailAddress) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealScreen, ____cancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeAppealScreen) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
