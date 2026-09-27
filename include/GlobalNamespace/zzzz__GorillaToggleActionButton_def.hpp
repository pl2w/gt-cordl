#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaToggleActionButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
CORDL_MODULE_EXPORT(GorillaToggleActionButton)
namespace GlobalNamespace {
template<typename TResult>
class ComponentFunctionReference_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaToggleActionButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaToggleActionButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaToggleActionButton*, "", "GorillaToggleActionButton");
// Dependencies GorillaPressableButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaToggleActionButton
class CORDL_TYPE GorillaToggleActionButton : public ::GlobalNamespace::GorillaPressableButton {
public:
// Declarations
/// @brief Field ToggleAction, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToggleAction, put=__cordl_internal_set_ToggleAction)) ::GlobalNamespace::ComponentFunctionReference_1<bool>*  ToggleAction;

/// @brief Field toggleFunc, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleFunc, put=__cordl_internal_set_toggleFunc)) ::System::Func_1<bool>*  toggleFunc;

/// @brief Method BindToggleAction, addr 0x59a2138, size 0x11c, virtual false, abstract: false, final false
inline void BindToggleAction() ;

/// @brief Method ExecuteToggleAction, addr 0x59a2254, size 0x64, virtual false, abstract: false, final false
inline void ExecuteToggleAction() ;

static inline ::GlobalNamespace::GorillaToggleActionButton* New_ctor() ;

/// @brief Method Start, addr 0x59a2134, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::GlobalNamespace::ComponentFunctionReference_1<bool>* const& __cordl_internal_get_ToggleAction() const;

constexpr ::GlobalNamespace::ComponentFunctionReference_1<bool>*& __cordl_internal_get_ToggleAction() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_toggleFunc() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_toggleFunc() ;

constexpr void __cordl_internal_set_ToggleAction(::GlobalNamespace::ComponentFunctionReference_1<bool>*  value) ;

constexpr void __cordl_internal_set_toggleFunc(::System::Func_1<bool>*  value) ;

/// @brief Method .ctor, addr 0x59a22b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaToggleActionButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaToggleActionButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaToggleActionButton(GorillaToggleActionButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaToggleActionButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaToggleActionButton(GorillaToggleActionButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2624};

/// @brief Field ToggleAction, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::ComponentFunctionReference_1<bool>*  ___ToggleAction;

/// @brief Field toggleFunc, offset: 0xc0, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___toggleFunc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaToggleActionButton, ___ToggleAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaToggleActionButton, ___toggleFunc) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaToggleActionButton) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace
