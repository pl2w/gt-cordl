#pragma once
// IWYU pragma private; include "System/ComponentModel/PropertyDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyDescriptor)
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
struct DesignerSerializationVisibility;
}
namespace System::ComponentModel {
class MemberDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Attribute;
}
namespace System {
class EventArgs;
}
namespace System {
class EventHandler;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class PropertyDescriptor;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::PropertyDescriptor*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::PropertyDescriptor*, "System.ComponentModel", "PropertyDescriptor");
// Dependencies System.ComponentModel.MemberDescriptor, System.Object, System.Type
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.PropertyDescriptor
class CORDL_TYPE PropertyDescriptor : public ::System::ComponentModel::MemberDescriptor {
public:
// Declarations
 __declspec(property(get=get_ComponentType)) ::System::Type*  ComponentType;

 __declspec(property(get=get_Converter)) ::System::ComponentModel::TypeConverter*  Converter;

 __declspec(property(get=get_IsLocalizable)) bool  IsLocalizable;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_PropertyType)) ::System::Type*  PropertyType;

 __declspec(property(get=get_SerializationVisibility)) ::System::ComponentModel::DesignerSerializationVisibility  SerializationVisibility;

 __declspec(property(get=get_SupportsChangeEvents)) bool  SupportsChangeEvents;

/// @brief Field _converter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__converter, put=__cordl_internal_set__converter)) ::System::ComponentModel::TypeConverter*  _converter;

/// @brief Field _editorCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__editorCount, put=__cordl_internal_set__editorCount)) int32_t  _editorCount;

/// @brief Field _editorTypes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__editorTypes, put=__cordl_internal_set__editorTypes)) ::ArrayW<::System::Type*>  _editorTypes;

/// @brief Field _editors, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__editors, put=__cordl_internal_set__editors)) ::ArrayW<::System::Object*>  _editors;

/// @brief Field _valueChangedHandlers, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueChangedHandlers, put=__cordl_internal_set__valueChangedHandlers)) ::System::Collections::Hashtable*  _valueChangedHandlers;

/// @brief Method AddValueChanged, addr 0xad63168, size 0x164, virtual true, abstract: false, final false
inline void AddValueChanged(::System::Object*  component, ::System::EventHandler*  handler) ;

/// @brief Method CanResetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanResetValue(::System::Object*  component) ;

/// @brief Method CreateInstance, addr 0xad62dc4, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Object* CreateInstance(::System::Type*  type) ;

/// @brief Method Equals, addr 0xad632cc, size 0x1e4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method FillAttributes, addr 0xad634b0, size 0x58, virtual true, abstract: false, final false
inline void FillAttributes(::System::Collections::IList*  attributeList) ;

/// @brief Method GetChildProperties, addr 0xad63508, size 0x18, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties() ;

/// @brief Method GetChildProperties, addr 0xad63520, size 0x18, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::ArrayW<::System::Attribute*>  filter) ;

/// @brief Method GetChildProperties, addr 0xad63538, size 0x14, virtual false, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::System::Object*  instance) ;

/// @brief Method GetChildProperties, addr 0xad6354c, size 0xb8, virtual true, abstract: false, final false
inline ::System::ComponentModel::PropertyDescriptorCollection* GetChildProperties(::System::Object*  instance, ::ArrayW<::System::Attribute*>  filter) ;

/// @brief Method GetEditor, addr 0xad63604, size 0x400, virtual true, abstract: false, final false
inline ::System::Object* GetEditor(::System::Type*  editorBaseType) ;

/// @brief Method GetHashCode, addr 0xad63a04, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInvocationTarget, addr 0xad63a58, size 0xe8, virtual true, abstract: false, final false
inline ::System::Object* GetInvocationTarget(::System::Type*  type, ::System::Object*  instance) ;

/// @brief Method GetTypeFromName, addr 0xad62bd4, size 0x1f0, virtual false, abstract: false, final false
inline ::System::Type* GetTypeFromName(::StringW  typeName) ;

/// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* GetValue(::System::Object*  component) ;

/// @brief Method GetValueChangedHandler, addr 0xad63d64, size 0x80, virtual false, abstract: false, final false
inline ::System::EventHandler* GetValueChangedHandler(::System::Object*  component) ;

static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor*  descr) ;

static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::System::ComponentModel::MemberDescriptor*  descr, ::ArrayW<::System::Attribute*>  attrs) ;

static inline ::System::ComponentModel::PropertyDescriptor* New_ctor(::StringW  name, ::ArrayW<::System::Attribute*>  attrs) ;

/// @brief Method OnValueChanged, addr 0xad63b40, size 0xb0, virtual true, abstract: false, final false
inline void OnValueChanged(::System::Object*  component, ::System::EventArgs*  e) ;

/// @brief Method RemoveValueChanged, addr 0xad63bf0, size 0x174, virtual true, abstract: false, final false
inline void RemoveValueChanged(::System::Object*  component, ::System::EventHandler*  handler) ;

/// @brief Method ResetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ResetValue(::System::Object*  component) ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetValue(::System::Object*  component, ::System::Object*  value) ;

/// @brief Method ShouldSerializeValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldSerializeValue(::System::Object*  component) ;

constexpr ::System::ComponentModel::TypeConverter* const& __cordl_internal_get__converter() const;

constexpr ::System::ComponentModel::TypeConverter*& __cordl_internal_get__converter() ;

constexpr int32_t const& __cordl_internal_get__editorCount() const;

constexpr int32_t& __cordl_internal_get__editorCount() ;

constexpr ::ArrayW<::System::Type*> const& __cordl_internal_get__editorTypes() const;

constexpr ::ArrayW<::System::Type*>& __cordl_internal_get__editorTypes() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get__editors() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get__editors() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get__valueChangedHandlers() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get__valueChangedHandlers() ;

constexpr void __cordl_internal_set__converter(::System::ComponentModel::TypeConverter*  value) ;

constexpr void __cordl_internal_set__editorCount(int32_t  value) ;

constexpr void __cordl_internal_set__editorTypes(::ArrayW<::System::Type*>  value) ;

constexpr void __cordl_internal_set__editors(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set__valueChangedHandlers(::System::Collections::Hashtable*  value) ;

/// @brief Method .ctor, addr 0xad62960, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::MemberDescriptor*  descr) ;

/// @brief Method .ctor, addr 0xad57a08, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::ComponentModel::MemberDescriptor*  descr, ::ArrayW<::System::Attribute*>  attrs) ;

/// @brief Method .ctor, addr 0xad62958, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::ArrayW<::System::Attribute*>  attrs) ;

/// @brief Method get_ComponentType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* get_ComponentType() ;

/// @brief Method get_Converter, addr 0xad62968, size 0x26c, virtual true, abstract: false, final false
inline ::System::ComponentModel::TypeConverter* get_Converter() ;

/// @brief Method get_IsLocalizable, addr 0xad62fbc, size 0xe0, virtual true, abstract: false, final false
inline bool get_IsLocalizable() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_PropertyType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* get_PropertyType() ;

/// @brief Method get_SerializationVisibility, addr 0xad6309c, size 0xcc, virtual false, abstract: false, final false
inline ::System::ComponentModel::DesignerSerializationVisibility get_SerializationVisibility() ;

/// @brief Method get_SupportsChangeEvents, addr 0xad63de4, size 0x8, virtual true, abstract: false, final false
inline bool get_SupportsChangeEvents() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyDescriptor(PropertyDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyDescriptor(PropertyDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10215};

/// @brief Field _converter, offset: 0x60, size: 0x8, def value: None
 ::System::ComponentModel::TypeConverter*  ____converter;

/// @brief Field _valueChangedHandlers, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ____valueChangedHandlers;

/// @brief Field _editors, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ____editors;

/// @brief Field _editorTypes, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::System::Type*>  ____editorTypes;

/// @brief Field _editorCount, offset: 0x80, size: 0x4, def value: None
 int32_t  ____editorCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____converter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____valueChangedHandlers) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____editors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____editorTypes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::PropertyDescriptor, ____editorCount) == 0x80, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::PropertyDescriptor) == 0x88, "Size mismatch!");

} // namespace end def System::ComponentModel
