#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIInput)
namespace GlobalNamespace {
struct ModioUIInput_ModioAction;
}
namespace Modio::Unity::UI::Input {
class ModioUIInput_InputPromptDisplayInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Modio::Unity::UI::Input {
class ModioUIInput;
}
namespace Modio::Unity::UI::Input {
class ModioUIInput_InputPromptDisplayInfo;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIInput*);
MARK_REF_T(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIInput*, "Modio.Unity.UI.Input", "ModioUIInput");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*, "Modio.Unity.UI.Input", "ModioUIInput/InputPromptDisplayInfo");
// Dependencies System.Object
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIInput
class CORDL_TYPE ModioUIInput : public ::System::Object {
public:
// Declarations
using ModioAction = ::GlobalNamespace::ModioUIInput_ModioAction;

using InputPromptDisplayInfo = ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo;

/// @brief Field CachedHandlersForCurrentCall, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CachedHandlersForCurrentCall, put=setStaticF_CachedHandlersForCurrentCall)) ::System::Collections::Generic::List_1<::System::Action*>*  CachedHandlersForCurrentCall;

/// @brief Field Handlers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Handlers, put=setStaticF_Handlers)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>*  Handlers;

/// @brief Field Prompts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Prompts, put=setStaticF_Prompts)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  Prompts;

/// @brief Field RawCursorProvider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RawCursorProvider, put=setStaticF_RawCursorProvider)) ::System::Func_1<::UnityEngine::Vector2>*  RawCursorProvider;

/// @brief Field SwappedControlScheme, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SwappedControlScheme, put=setStaticF_SwappedControlScheme)) ::System::Action_1<bool>*  SwappedControlScheme;

/// @brief Field <AnyBindingsExist>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__AnyBindingsExist_k__BackingField, put=setStaticF__AnyBindingsExist_k__BackingField)) bool  _AnyBindingsExist_k__BackingField;

/// @brief Field <IsUsingGamepad>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__IsUsingGamepad_k__BackingField, put=setStaticF__IsUsingGamepad_k__BackingField)) bool  _IsUsingGamepad_k__BackingField;

/// @brief Field <SuppressNoInputListenerWarning>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__SuppressNoInputListenerWarning_k__BackingField, put=setStaticF__SuppressNoInputListenerWarning_k__BackingField)) bool  _SuppressNoInputListenerWarning_k__BackingField;

/// @brief Method AddHandler, addr 0x9fa3630, size 0x31c, virtual false, abstract: false, final false
static inline void AddHandler(::GlobalNamespace::ModioUIInput_ModioAction  action, ::System::Action*  onPressed) ;

/// @brief Method ControlSchemeChanged, addr 0x9fb4edc, size 0xb0, virtual false, abstract: false, final false
static inline void ControlSchemeChanged(bool  isController) ;

/// @brief Method GetInputPromptDisplayInfo, addr 0x9fb4d90, size 0x10c, virtual false, abstract: false, final false
static inline ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo* GetInputPromptDisplayInfo(::GlobalNamespace::ModioUIInput_ModioAction  action) ;

/// @brief Method GetRawCursor, addr 0x9fb5090, size 0xa4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 GetRawCursor() ;

/// @brief Method PressedAction, addr 0x9fb456c, size 0x3ec, virtual false, abstract: false, final false
static inline void PressedAction(::GlobalNamespace::ModioUIInput_ModioAction  action) ;

/// @brief Method RemoveHandler, addr 0x9fa40d8, size 0x1b4, virtual false, abstract: false, final false
static inline void RemoveHandler(::GlobalNamespace::ModioUIInput_ModioAction  action, ::System::Action*  onPressed) ;

/// @brief Method SetButtonPrompts, addr 0x9fb4f8c, size 0xfc, virtual false, abstract: false, final false
static inline void SetButtonPrompts(::GlobalNamespace::ModioUIInput_ModioAction  action, ::System::Collections::Generic::List_1<::StringW>*  textPrompts, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  icons) ;

/// [CompilerGenerated]
/// @brief Method add_SwappedControlScheme, addr 0x9fab02c, size 0xf4, virtual false, abstract: false, final false
static inline void add_SwappedControlScheme(::System::Action_1<bool>*  value) ;

static inline ::System::Collections::Generic::List_1<::System::Action*>* getStaticF_CachedHandlersForCurrentCall() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>* getStaticF_Handlers() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>* getStaticF_Prompts() ;

static inline ::System::Func_1<::UnityEngine::Vector2>* getStaticF_RawCursorProvider() ;

static inline ::System::Action_1<bool>* getStaticF_SwappedControlScheme() ;

static inline bool getStaticF__AnyBindingsExist_k__BackingField() ;

static inline bool getStaticF__IsUsingGamepad_k__BackingField() ;

static inline bool getStaticF__SuppressNoInputListenerWarning_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_AnyBindingsExist, addr 0x9fb4cd8, size 0x58, virtual false, abstract: false, final false
static inline bool get_AnyBindingsExist() ;

/// [CompilerGenerated]
/// @brief Method get_IsUsingGamepad, addr 0x9fb4b68, size 0x58, virtual false, abstract: false, final false
static inline bool get_IsUsingGamepad() ;

/// [CompilerGenerated]
/// @brief Method get_SuppressNoInputListenerWarning, addr 0x9fb4c20, size 0x58, virtual false, abstract: false, final false
static inline bool get_SuppressNoInputListenerWarning() ;

/// [CompilerGenerated]
/// @brief Method remove_SwappedControlScheme, addr 0x9fab120, size 0xf4, virtual false, abstract: false, final false
static inline void remove_SwappedControlScheme(::System::Action_1<bool>*  value) ;

static inline void setStaticF_CachedHandlersForCurrentCall(::System::Collections::Generic::List_1<::System::Action*>*  value) ;

static inline void setStaticF_Handlers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action*,int32_t>>*>*  value) ;

static inline void setStaticF_Prompts(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ModioUIInput_ModioAction,::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value) ;

static inline void setStaticF_RawCursorProvider(::System::Func_1<::UnityEngine::Vector2>*  value) ;

static inline void setStaticF_SwappedControlScheme(::System::Action_1<bool>*  value) ;

static inline void setStaticF__AnyBindingsExist_k__BackingField(bool  value) ;

static inline void setStaticF__IsUsingGamepad_k__BackingField(bool  value) ;

static inline void setStaticF__SuppressNoInputListenerWarning_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_AnyBindingsExist, addr 0x9fb4d30, size 0x60, virtual false, abstract: false, final false
static inline void set_AnyBindingsExist(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsUsingGamepad, addr 0x9fb4bc0, size 0x60, virtual false, abstract: false, final false
static inline void set_IsUsingGamepad(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SuppressNoInputListenerWarning, addr 0x9fb4c78, size 0x60, virtual false, abstract: false, final false
static inline void set_SuppressNoInputListenerWarning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIInput(ModioUIInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIInput(ModioUIInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIInput) == 0x10, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
// Dependencies System.Object
namespace Modio::Unity::UI::Input {
// Is value type: false
// CS Name: Modio.Unity.UI.Input.ModioUIInput/InputPromptDisplayInfo
class CORDL_TYPE ModioUIInput_InputPromptDisplayInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Icons, put=set_Icons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  Icons;

 __declspec(property(get=get_InputHasListeners, put=set_InputHasListeners)) bool  InputHasListeners;

/// @brief Field OnUpdated, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUpdated, put=__cordl_internal_set_OnUpdated)) ::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  OnUpdated;

 __declspec(property(get=get_TextPrompts, put=set_TextPrompts)) ::System::Collections::Generic::List_1<::StringW>*  TextPrompts;

/// @brief Field <Icons>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Icons_k__BackingField, put=__cordl_internal_set__Icons_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  _Icons_k__BackingField;

/// @brief Field <InputHasListeners>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__InputHasListeners_k__BackingField, put=__cordl_internal_set__InputHasListeners_k__BackingField)) bool  _InputHasListeners_k__BackingField;

/// @brief Field <TextPrompts>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TextPrompts_k__BackingField, put=__cordl_internal_set__TextPrompts_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _TextPrompts_k__BackingField;

static inline ::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo* New_ctor() ;

/// @brief Method UpdateInfo, addr 0x9fb540c, size 0x344, virtual true, abstract: false, final false
inline void UpdateInfo(::System::Collections::Generic::List_1<::StringW>*  textPrompts, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  icons, bool  hasListeners) ;

/// @brief Method UpdateListenerInfo, addr 0x9fb4e9c, size 0x40, virtual false, abstract: false, final false
inline void UpdateListenerInfo(bool  hasListeners) ;

constexpr ::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>* const& __cordl_internal_get_OnUpdated() const;

constexpr ::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*& __cordl_internal_get_OnUpdated() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* const& __cordl_internal_get__Icons_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*& __cordl_internal_get__Icons_k__BackingField() ;

constexpr bool const& __cordl_internal_get__InputHasListeners_k__BackingField() const;

constexpr bool& __cordl_internal_get__InputHasListeners_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__TextPrompts_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__TextPrompts_k__BackingField() ;

constexpr void __cordl_internal_set_OnUpdated(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value) ;

constexpr void __cordl_internal_set__Icons_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  value) ;

constexpr void __cordl_internal_set__InputHasListeners_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TextPrompts_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9fb5088, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnUpdated, addr 0x9fb52ac, size 0xb0, virtual false, abstract: false, final false
inline void add_OnUpdated(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Icons, addr 0x9fb527c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>* get_Icons() ;

/// [CompilerGenerated]
/// @brief Method get_InputHasListeners, addr 0x9fb529c, size 0x8, virtual false, abstract: false, final false
inline bool get_InputHasListeners() ;

/// [CompilerGenerated]
/// @brief Method get_TextPrompts, addr 0x9fb528c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_TextPrompts() ;

/// [CompilerGenerated]
/// @brief Method remove_OnUpdated, addr 0x9fb535c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnUpdated(::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Icons, addr 0x9fb5284, size 0x8, virtual false, abstract: false, final false
inline void set_Icons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InputHasListeners, addr 0x9fb52a4, size 0x8, virtual false, abstract: false, final false
inline void set_InputHasListeners(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TextPrompts, addr 0x9fb5294, size 0x8, virtual false, abstract: false, final false
inline void set_TextPrompts(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUIInput_InputPromptDisplayInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInput_InputPromptDisplayInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUIInput_InputPromptDisplayInfo(ModioUIInput_InputPromptDisplayInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUIInput_InputPromptDisplayInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUIInput_InputPromptDisplayInfo(ModioUIInput_InputPromptDisplayInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27124};

/// [CompilerGenerated]
/// @brief Field <Icons>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Sprite>>*  ____Icons_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TextPrompts>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____TextPrompts_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InputHasListeners>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____InputHasListeners_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnUpdated, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo*>*  ___OnUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo, ____Icons_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo, ____TextPrompts_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo, ____InputHasListeners_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo, ___OnUpdated) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Input::ModioUIInput_InputPromptDisplayInfo) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Input
