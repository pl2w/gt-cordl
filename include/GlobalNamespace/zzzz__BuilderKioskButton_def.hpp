#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderKioskButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderSetManager_BuilderSetStoreItem_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(BuilderKioskButton)
namespace GlobalNamespace {
class BuilderKiosk;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderKioskButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderKioskButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderKioskButton*, "", "BuilderKioskButton");
// Dependencies BuilderSetManager::BuilderSetStoreItem, GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderKioskButton
class CORDL_TYPE BuilderKioskButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field currentPieceSet, offset 0xb8, size 0x38 
 __declspec(property(get=__cordl_internal_get_currentPieceSet, put=__cordl_internal_set_currentPieceSet)) ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  currentPieceSet;

/// @brief Field kiosk, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_kiosk, put=__cordl_internal_set_kiosk)) ::UnityW<::GlobalNamespace::BuilderKiosk>  kiosk;

/// @brief Field setNameText, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_setNameText, put=__cordl_internal_set_setNameText)) ::UnityW<::UnityEngine::UI::Text>  setNameText;

/// @brief Method ButtonActivationWithHand, addr 0x57be808, size 0x8, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

static inline ::GlobalNamespace::BuilderKioskButton* New_ctor() ;

/// @brief Method Start, addr 0x57be710, size 0x6c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0x57be77c, size 0x8c, virtual true, abstract: false, final false
inline void UpdateColor() ;

constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem const& __cordl_internal_get_currentPieceSet() const;

constexpr ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem& __cordl_internal_get_currentPieceSet() ;

constexpr ::UnityW<::GlobalNamespace::BuilderKiosk> const& __cordl_internal_get_kiosk() const;

constexpr ::UnityW<::GlobalNamespace::BuilderKiosk>& __cordl_internal_get_kiosk() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_setNameText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_setNameText() ;

constexpr void __cordl_internal_set_currentPieceSet(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  value) ;

constexpr void __cordl_internal_set_kiosk(::UnityW<::GlobalNamespace::BuilderKiosk>  value) ;

constexpr void __cordl_internal_set_setNameText(::UnityW<::UnityEngine::UI::Text>  value) ;

/// @brief Method .ctor, addr 0x57be810, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderKioskButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderKioskButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderKioskButton(BuilderKioskButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderKioskButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderKioskButton(BuilderKioskButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1593};

/// @brief Field currentPieceSet, offset: 0xb8, size: 0x38, def value: None
 ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem  ___currentPieceSet;

/// @brief Field kiosk, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderKiosk>  ___kiosk;

/// @brief Field setNameText, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___setNameText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderKioskButton, ___currentPieceSet) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKioskButton, ___kiosk) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderKioskButton, ___setNameText) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderKioskButton) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
