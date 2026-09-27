#pragma once
// IWYU pragma private; include "GorillaTagScripts/UI/GorillaKeyWrapper_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaKeyWrapper_1)
namespace GlobalNamespace {
template<typename TBinding>
class GorillaKeyButton_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::UI {
template<typename TBinding>
class GorillaKeyWrapper_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GorillaTagScripts::UI::GorillaKeyWrapper_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTagScripts::UI::GorillaKeyWrapper_1, "GorillaTagScripts.UI", "GorillaKeyWrapper`1");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::UI {
// cpp template
template<typename TBinding>
// Is value type: false
// CS Name: GorillaTagScripts.UI.GorillaKeyWrapper`1<TBinding>
class CORDL_TYPE GorillaKeyWrapper_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnKeyPressed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnKeyPressed, put=__cordl_internal_set_OnKeyPressed)) ::UnityEngine::Events::UnityEvent_1<TBinding>*  OnKeyPressed;

/// @brief Field buttons, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::System::Collections::Generic::List_1<::UnityW<TBinding>>*  buttons;

/// @brief Field defineButtonsManually, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_defineButtonsManually, put=__cordl_internal_set_defineButtonsManually)) bool  defineButtonsManually;

/// @brief Method FindMatchingButtons, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FindMatchingButtons(::UnityEngine::GameObject*  obj) ;

static inline ::GorillaTagScripts::UI::GorillaKeyWrapper_1<TBinding>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnKeyButtonPressed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnKeyButtonPressed(TBinding  binding) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>* const& __cordl_internal_get_OnKeyPressed() const;

constexpr ::UnityEngine::Events::UnityEvent_1<TBinding>*& __cordl_internal_get_OnKeyPressed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<TBinding>>* const& __cordl_internal_get_buttons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<TBinding>>*& __cordl_internal_get_buttons() ;

constexpr bool const& __cordl_internal_get_defineButtonsManually() const;

constexpr bool& __cordl_internal_get_defineButtonsManually() ;

constexpr void __cordl_internal_set_OnKeyPressed(::UnityEngine::Events::UnityEvent_1<TBinding>*  value) ;

constexpr void __cordl_internal_set_buttons(::System::Collections::Generic::List_1<::UnityW<TBinding>>*  value) ;

constexpr void __cordl_internal_set_defineButtonsManually(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaKeyWrapper_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyWrapper_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaKeyWrapper_1(GorillaKeyWrapper_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaKeyWrapper_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaKeyWrapper_1(GorillaKeyWrapper_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4078};

/// @brief Field OnKeyPressed, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<TBinding>*  ___OnKeyPressed;

/// @brief Field defineButtonsManually, offset: 0x28, size: 0x1, def value: None
 bool  ___defineButtonsManually;

/// @brief Field buttons, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<TBinding>>*  ___buttons;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTagScripts::UI
