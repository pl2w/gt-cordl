#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboard)
namespace GlobalNamespace {
struct TouchScreenKeyboard_InputFieldAppearance;
}
namespace GlobalNamespace {
struct TouchScreenKeyboard_Status;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct RangeInt;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
class TouchScreenKeyboard_BindingsMarshaller;
}
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
// Forward declare root types
namespace UnityEngine {
class TouchScreenKeyboard;
}
namespace UnityEngine {
class TouchScreenKeyboard_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::TouchScreenKeyboard*);
MARK_REF_T(::UnityEngine::TouchScreenKeyboard_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
DEFINE_IL2CPP_CLASS(::UnityEngine::TouchScreenKeyboard_BindingsMarshaller*, "UnityEngine", "TouchScreenKeyboard/BindingsMarshaller");
// [NativeHeader("Runtime/Input/KeyboardOnScreen.h")]
// [NativeHeader("Runtime/Export/TouchScreenKeyboard/TouchScreenKeyboard.bindings.h")]
// [NativeConditional("ENABLE_ONSCREEN_KEYBOARD")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TouchScreenKeyboard
class CORDL_TYPE TouchScreenKeyboard : public ::System::Object {
public:
// Declarations
using InputFieldAppearance = ::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance;

using Status = ::GlobalNamespace::TouchScreenKeyboard_Status;

using BindingsMarshaller = ::UnityEngine::TouchScreenKeyboard_BindingsMarshaller;

/// @brief Field <disableInPlaceEditing>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__disableInPlaceEditing_k__BackingField, put=setStaticF__disableInPlaceEditing_k__BackingField)) bool  _disableInPlaceEditing_k__BackingField;

 __declspec(property(get=get_active, put=set_active)) bool  active;

 __declspec(property(get=get_canGetSelection)) bool  canGetSelection;

 __declspec(property(get=get_canSetSelection)) bool  canSetSelection;

 __declspec(property(put=set_characterLimit)) int32_t  characterLimit;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_selection, put=set_selection)) ::UnityEngine::RangeInt  selection;

 __declspec(property(get=get_status)) ::GlobalNamespace::TouchScreenKeyboard_Status  status;

 __declspec(property(get=get_text, put=set_text)) ::StringW  text;

/// @brief Method Destroy, addr 0xb5ee8a0, size 0x94, virtual false, abstract: false, final false
inline void Destroy() ;

/// @brief Method Finalize, addr 0xb5ee934, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetSelection, addr 0xb5ef708, size 0x44, virtual false, abstract: false, final false
static inline void GetSelection(::by_ref<int32_t>  start, ::by_ref<int32_t>  length) ;

/// [FreeFunction("TouchScreenKeyboard_Destroy", IsThreadSafe = true)]
/// @brief Method Internal_Destroy, addr 0xb5ee864, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Destroy(::System::IntPtr  ptr) ;

/// @brief Method IsInPlaceEditingAllowed, addr 0xb5eeebc, size 0x28, virtual false, abstract: false, final false
static inline bool IsInPlaceEditingAllowed() ;

static inline ::UnityEngine::TouchScreenKeyboard* New_ctor(::StringW  text, ::UnityEngine::TouchScreenKeyboardType  keyboardType, bool  autocorrection, bool  multiline, bool  secure, bool  alert, ::StringW  textPlaceholder, int32_t  characterLimit) ;

/// [ExcludeFromDocs]
/// @brief Method Open, addr 0xb5eef9c, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW  text, ::UnityEngine::TouchScreenKeyboardType  keyboardType, bool  autocorrection, bool  multiline, bool  secure) ;

/// @brief Method Open, addr 0xb5eeee4, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::TouchScreenKeyboard* Open(::StringW  text, /* [DefaultValue("TouchScreenKeyboardType.Default")] */ ::UnityEngine::TouchScreenKeyboardType  keyboardType, /* [DefaultValue("true")] */ bool  autocorrection, /* [DefaultValue("false")] */ bool  multiline, /* [DefaultValue("false")] */ bool  secure, /* [DefaultValue("false")] */ bool  alert, /* [DefaultValue("\"\"")] */ ::StringW  textPlaceholder, /* [DefaultValue("0")] */ int32_t  characterLimit) ;

/// @brief Method SetSelection, addr 0xb5ef854, size 0x44, virtual false, abstract: false, final false
static inline void SetSelection(int32_t  start, int32_t  length) ;

/// [FreeFunction("TouchScreenKeyboard_InternalConstructorHelper")]
/// @brief Method TouchScreenKeyboard_InternalConstructorHelper, addr 0xb5eeafc, size 0x1fc, virtual false, abstract: false, final false
static inline ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>  arguments, ::StringW  text, ::StringW  textPlaceholder) ;

/// @brief Method TouchScreenKeyboard_InternalConstructorHelper_Injected, addr 0xb5eecf8, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr TouchScreenKeyboard_InternalConstructorHelper_Injected(::by_ref<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments>  arguments, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  text, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  textPlaceholder) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb5ee9b8, size 0x144, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, ::UnityEngine::TouchScreenKeyboardType  keyboardType, bool  autocorrection, bool  multiline, bool  secure, bool  alert, ::StringW  textPlaceholder, int32_t  characterLimit) ;

static inline bool getStaticF__disableInPlaceEditing_k__BackingField() ;

/// [NativeName("IsActive")]
/// @brief Method get_active, addr 0xb5ef36c, size 0x4c, virtual false, abstract: false, final false
inline bool get_active() ;

/// @brief Method get_active_Injected, addr 0xb5ef3b8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_active_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("CanGetSelection")]
/// @brief Method get_canGetSelection, addr 0xb5ef5ac, size 0x4c, virtual false, abstract: false, final false
inline bool get_canGetSelection() ;

/// @brief Method get_canGetSelection_Injected, addr 0xb5ef5f8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_canGetSelection_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("CanSetSelection")]
/// @brief Method get_canSetSelection, addr 0xb5ef634, size 0x4c, virtual false, abstract: false, final false
inline bool get_canSetSelection() ;

/// @brief Method get_canSetSelection_Injected, addr 0xb5ef680, size 0x3c, virtual false, abstract: false, final false
static inline bool get_canSetSelection_Injected(::System::IntPtr  _unity_self) ;

/// [CompilerGenerated]
/// @brief Method get_disableInPlaceEditing, addr 0xb5eee08, size 0x48, virtual false, abstract: false, final false
static inline bool get_disableInPlaceEditing() ;

/// [NativeName("GetInputFieldAppearance")]
/// @brief Method get_inputFieldAppearance, addr 0xb5ef344, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TouchScreenKeyboard_InputFieldAppearance get_inputFieldAppearance() ;

/// @brief Method get_isInPlaceEditingAllowed, addr 0xb5eee50, size 0x6c, virtual false, abstract: false, final false
static inline bool get_isInPlaceEditingAllowed() ;

/// @brief Method get_isSupported, addr 0xb5eed4c, size 0xbc, virtual false, abstract: false, final false
static inline bool get_isSupported() ;

/// @brief Method get_selection, addr 0xb5ef6bc, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::RangeInt get_selection() ;

/// [NativeName("GetKeyboardStatus")]
/// @brief Method get_status, addr 0xb5ef48c, size 0x4c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TouchScreenKeyboard_Status get_status() ;

/// @brief Method get_status_Injected, addr 0xb5ef4d8, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TouchScreenKeyboard_Status get_status_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetText")]
/// @brief Method get_text, addr 0xb5ef028, size 0xf8, virtual false, abstract: false, final false
inline ::StringW get_text() ;

/// @brief Method get_text_Injected, addr 0xb5ef120, size 0x44, virtual false, abstract: false, final false
static inline void get_text_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

static inline void setStaticF__disableInPlaceEditing_k__BackingField(bool  value) ;

/// [NativeName("SetActive")]
/// @brief Method set_active, addr 0xb5ef3f4, size 0x54, virtual false, abstract: false, final false
inline void set_active(bool  value) ;

/// @brief Method set_active_Injected, addr 0xb5ef448, size 0x44, virtual false, abstract: false, final false
static inline void set_active_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// [NativeName("SetCharacterLimit")]
/// @brief Method set_characterLimit, addr 0xb5ef514, size 0x54, virtual false, abstract: false, final false
inline void set_characterLimit(int32_t  value) ;

/// @brief Method set_characterLimit_Injected, addr 0xb5ef568, size 0x44, virtual false, abstract: false, final false
static inline void set_characterLimit_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// [NativeName("SetInputHidden")]
/// @brief Method set_hideInput, addr 0xb5ef308, size 0x3c, virtual false, abstract: false, final false
static inline void set_hideInput(bool  value) ;

/// @brief Method set_selection, addr 0xb5ef74c, size 0x108, virtual false, abstract: false, final false
inline void set_selection(::UnityEngine::RangeInt  value) ;

/// [NativeName("SetText")]
/// @brief Method set_text, addr 0xb5ef164, size 0x160, virtual false, abstract: false, final false
inline void set_text(::StringW  value) ;

/// @brief Method set_text_Injected, addr 0xb5ef2c4, size 0x44, virtual false, abstract: false, final false
static inline void set_text_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchScreenKeyboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchScreenKeyboard(TouchScreenKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchScreenKeyboard(TouchScreenKeyboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15148};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TouchScreenKeyboard, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TouchScreenKeyboard) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.TouchScreenKeyboard/BindingsMarshaller
class CORDL_TYPE TouchScreenKeyboard_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb5ef898, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::TouchScreenKeyboard*  touchScreenKeyboard) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchScreenKeyboard_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchScreenKeyboard_BindingsMarshaller(TouchScreenKeyboard_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchScreenKeyboard_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchScreenKeyboard_BindingsMarshaller(TouchScreenKeyboard_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TouchScreenKeyboard_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
