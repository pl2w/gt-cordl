#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderOptionButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(BuilderOptionButton)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderOptionButton;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderOptionButton*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderOptionButton*, "GorillaTagScripts", "BuilderOptionButton");
// Dependencies GorillaPressableButton
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderOptionButton
class CORDL_TYPE BuilderOptionButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field onPressed, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressed, put=__cordl_internal_set_onPressed)) ::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*  onPressed;

/// @brief Method ButtonActivationWithHand, addr 0x5b87ce0, size 0x28, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

static inline ::GorillaTagScripts::BuilderOptionButton* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b87cd4, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetPressed, addr 0x5b87d08, size 0x30, virtual false, abstract: false, final false
inline void SetPressed(bool  pressed) ;

/// @brief Method Setup, addr 0x5b87cd8, size 0x8, virtual false, abstract: false, final false
inline void Setup(::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*  onPressed) ;

/// @brief Method Start, addr 0x5b87ccc, size 0x8, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>* const& __cordl_internal_get_onPressed() const;

constexpr ::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*& __cordl_internal_get_onPressed() ;

constexpr void __cordl_internal_set_onPressed(::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*  value) ;

/// @brief Method .ctor, addr 0x5b87d38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderOptionButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderOptionButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderOptionButton(BuilderOptionButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderOptionButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderOptionButton(BuilderOptionButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3932};

/// @brief Field onPressed, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GorillaTagScripts::BuilderOptionButton>,bool>*  ___onPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderOptionButton, ___onPressed) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderOptionButton) == 0xc0, "Size mismatch!");

} // namespace end def GorillaTagScripts
