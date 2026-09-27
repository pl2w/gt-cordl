#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaActionButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(GorillaActionButton)
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaActionButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaActionButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaActionButton*, "", "GorillaActionButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaActionButton
class CORDL_TYPE GorillaActionButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field onPress, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPress, put=__cordl_internal_set_onPress)) ::UnityEngine::Events::UnityEvent*  onPress;

/// @brief Method ButtonActivation, addr 0x56755f0, size 0x28, virtual true, abstract: false, final false
inline void ButtonActivation() ;

static inline ::GlobalNamespace::GorillaActionButton* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPress() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPress() ;

constexpr void __cordl_internal_set_onPress(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x5675618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaActionButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaActionButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaActionButton(GorillaActionButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaActionButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaActionButton(GorillaActionButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{835};

/// [SerializeField]
/// @brief Field onPress, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaActionButton, ___onPress) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaActionButton) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
