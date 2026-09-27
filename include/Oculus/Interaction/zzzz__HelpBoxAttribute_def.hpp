#pragma once
// IWYU pragma private; include "Oculus/Interaction/HelpBoxAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__ConditionalHideAttribute_DisplayMode_def.hpp"
#include "Oculus/Interaction/zzzz__HelpBoxAttribute_MessageType_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HelpBoxAttribute)
namespace GlobalNamespace {
struct ConditionalHideAttribute_DisplayMode;
}
namespace GlobalNamespace {
struct HelpBoxAttribute_MessageType;
}
namespace Oculus::Interaction {
class HelpBoxAttribute_HelpBoxCondition;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class HelpBoxAttribute;
}
namespace Oculus::Interaction {
class HelpBoxAttribute_HelpBoxCondition;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HelpBoxAttribute*);
MARK_REF_T(::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HelpBoxAttribute*, "Oculus.Interaction", "HelpBoxAttribute");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition*, "Oculus.Interaction", "HelpBoxAttribute/HelpBoxCondition");
// Dependencies Oculus.Interaction.ConditionalHideAttribute::DisplayMode, Oculus.Interaction.HelpBoxAttribute::MessageType, UnityEngine.PropertyAttribute
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HelpBoxAttribute
class CORDL_TYPE HelpBoxAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
using MessageType = ::GlobalNamespace::HelpBoxAttribute_MessageType;

using HelpBoxCondition = ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition;

 __declspec(property(get=get_Display, put=set_Display)) ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  Display;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_Type, put=set_Type)) ::GlobalNamespace::HelpBoxAttribute_MessageType  Type;

 __declspec(property(get=get_Value, put=set_Value)) ::System::Object*  Value;

/// @brief Field <Display>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Display_k__BackingField, put=__cordl_internal_set__Display_k__BackingField)) ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  _Display_k__BackingField;

/// @brief Field <Message>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Message_k__BackingField, put=__cordl_internal_set__Message_k__BackingField)) ::StringW  _Message_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::GlobalNamespace::HelpBoxAttribute_MessageType  _Type_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) ::System::Object*  _Value_k__BackingField;

static inline ::Oculus::Interaction::HelpBoxAttribute* New_ctor(::StringW  message) ;

static inline ::Oculus::Interaction::HelpBoxAttribute* New_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type) ;

static inline ::Oculus::Interaction::HelpBoxAttribute* New_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value) ;

static inline ::Oculus::Interaction::HelpBoxAttribute* New_ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  display) ;

constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode const& __cordl_internal_get__Display_k__BackingField() const;

constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode& __cordl_internal_get__Display_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Message_k__BackingField() ;

constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::GlobalNamespace::HelpBoxAttribute_MessageType& __cordl_internal_get__Type_k__BackingField() ;

constexpr ::System::Object* const& __cordl_internal_get__Value_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Value_k__BackingField() ;

constexpr void __cordl_internal_set__Display_k__BackingField(::GlobalNamespace::ConditionalHideAttribute_DisplayMode  value) ;

constexpr void __cordl_internal_set__Message_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::GlobalNamespace::HelpBoxAttribute_MessageType  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3ffa98, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xa3ffae8, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type) ;

/// @brief Method .ctor, addr 0xa3ffb38, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa3ffb98, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::GlobalNamespace::HelpBoxAttribute_MessageType  type, ::System::Object*  value, ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  display) ;

/// [CompilerGenerated]
/// @brief Method get_Display, addr 0xa3ffa88, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ConditionalHideAttribute_DisplayMode get_Display() ;

/// [CompilerGenerated]
/// @brief Method get_Message, addr 0xa3ffa58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xa3ffa78, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HelpBoxAttribute_MessageType get_Type() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0xa3ffa68, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

/// [CompilerGenerated]
/// @brief Method set_Display, addr 0xa3ffa90, size 0x8, virtual false, abstract: false, final false
inline void set_Display(::GlobalNamespace::ConditionalHideAttribute_DisplayMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0xa3ffa60, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0xa3ffa80, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::GlobalNamespace::HelpBoxAttribute_MessageType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0xa3ffa70, size 0x8, virtual false, abstract: false, final false
inline void set_Value(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelpBoxAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelpBoxAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpBoxAttribute(HelpBoxAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpBoxAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpBoxAttribute(HelpBoxAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15687};

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Message_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ____Value_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::HelpBoxAttribute_MessageType  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Display>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  ____Display_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HelpBoxAttribute, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HelpBoxAttribute, ____Value_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HelpBoxAttribute, ____Type_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HelpBoxAttribute, ____Display_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HelpBoxAttribute) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HelpBoxAttribute/HelpBoxCondition
class CORDL_TYPE HelpBoxAttribute_HelpBoxCondition : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa3ffca8, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa3ffcc4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa3ffc94, size 0x14, virtual true, abstract: false, final false
inline bool Invoke() ;

static inline ::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa3ffbf8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HelpBoxAttribute_HelpBoxCondition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HelpBoxAttribute_HelpBoxCondition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HelpBoxAttribute_HelpBoxCondition(HelpBoxAttribute_HelpBoxCondition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HelpBoxAttribute_HelpBoxCondition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HelpBoxAttribute_HelpBoxCondition(HelpBoxAttribute_HelpBoxCondition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15686};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HelpBoxAttribute_HelpBoxCondition) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction
