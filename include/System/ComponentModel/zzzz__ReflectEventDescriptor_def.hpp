#pragma once
// IWYU pragma private; include "System/ComponentModel/ReflectEventDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReflectEventDescriptor)
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Attribute;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectEventDescriptor;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ReflectEventDescriptor*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ReflectEventDescriptor*, "System.ComponentModel", "ReflectEventDescriptor");
// Dependencies System.ComponentModel.EventDescriptor
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ReflectEventDescriptor
class CORDL_TYPE ReflectEventDescriptor : public ::System::ComponentModel::EventDescriptor {
public:
// Declarations
 __declspec(property(get=get_ComponentType)) ::System::Type*  ComponentType;

 __declspec(property(get=get_EventType)) ::System::Type*  EventType;

 __declspec(property(get=get_IsMulticast)) bool  IsMulticast;

/// @brief Field _addMethod, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__addMethod, put=__cordl_internal_set__addMethod)) ::System::Reflection::MethodInfo*  _addMethod;

/// @brief Field _componentClass, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__componentClass, put=__cordl_internal_set__componentClass)) ::System::Type*  _componentClass;

/// @brief Field _filledMethods, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__filledMethods, put=__cordl_internal_set__filledMethods)) bool  _filledMethods;

/// @brief Field _realEvent, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__realEvent, put=__cordl_internal_set__realEvent)) ::System::Reflection::EventInfo*  _realEvent;

/// @brief Field _removeMethod, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__removeMethod, put=__cordl_internal_set__removeMethod)) ::System::Reflection::MethodInfo*  _removeMethod;

/// @brief Field _type, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__type, put=__cordl_internal_set__type)) ::System::Type*  _type;

/// @brief Method AddEventHandler, addr 0xad67e54, size 0x730, virtual true, abstract: false, final false
inline void AddEventHandler(::System::Object*  component, ::System::Delegate*  value) ;

/// @brief Method FillAttributes, addr 0xad68584, size 0x68, virtual true, abstract: false, final false
inline void FillAttributes(::System::Collections::IList*  attributes) ;

/// @brief Method FillEventInfoAttribute, addr 0xad685ec, size 0x314, virtual false, abstract: false, final false
inline void FillEventInfoAttribute(::System::Reflection::EventInfo*  realEventInfo, ::System::Collections::IList*  attributes) ;

/// @brief Method FillMethods, addr 0xad67934, size 0x484, virtual false, abstract: false, final false
inline void FillMethods() ;

/// @brief Method FillSingleMethodAttribute, addr 0xad68900, size 0x354, virtual false, abstract: false, final false
inline void FillSingleMethodAttribute(::System::Reflection::MethodInfo*  realMethodInfo, ::System::Collections::IList*  attributes) ;

static inline ::System::ComponentModel::ReflectEventDescriptor* New_ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo) ;

static inline ::System::ComponentModel::ReflectEventDescriptor* New_ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes) ;

static inline ::System::ComponentModel::ReflectEventDescriptor* New_ctor(::System::Type*  componentType, ::System::ComponentModel::EventDescriptor*  oldReflectEventDescriptor, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method RemoveEventHandler, addr 0xad68c54, size 0x674, virtual true, abstract: false, final false
inline void RemoveEventHandler(::System::Object*  component, ::System::Delegate*  value) ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__addMethod() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__addMethod() ;

constexpr ::System::Type* const& __cordl_internal_get__componentClass() const;

constexpr ::System::Type*& __cordl_internal_get__componentClass() ;

constexpr bool const& __cordl_internal_get__filledMethods() const;

constexpr bool& __cordl_internal_get__filledMethods() ;

constexpr ::System::Reflection::EventInfo* const& __cordl_internal_get__realEvent() const;

constexpr ::System::Reflection::EventInfo*& __cordl_internal_get__realEvent() ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get__removeMethod() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get__removeMethod() ;

constexpr ::System::Type* const& __cordl_internal_get__type() const;

constexpr ::System::Type*& __cordl_internal_get__type() ;

constexpr void __cordl_internal_set__addMethod(::System::Reflection::MethodInfo*  value) ;

constexpr void __cordl_internal_set__componentClass(::System::Type*  value) ;

constexpr void __cordl_internal_set__filledMethods(bool  value) ;

constexpr void __cordl_internal_set__realEvent(::System::Reflection::EventInfo*  value) ;

constexpr void __cordl_internal_set__removeMethod(::System::Reflection::MethodInfo*  value) ;

constexpr void __cordl_internal_set__type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xad676b4, size 0x184, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  componentClass, ::System::Reflection::EventInfo*  eventInfo) ;

/// @brief Method .ctor, addr 0xad67518, size 0x19c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  componentClass, ::StringW  name, ::System::Type*  type, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method .ctor, addr 0xad67838, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  componentType, ::System::ComponentModel::EventDescriptor*  oldReflectEventDescriptor, ::ArrayW<::System::Attribute*>  attributes) ;

/// @brief Method get_ComponentType, addr 0xad67914, size 0x8, virtual true, abstract: false, final false
inline ::System::Type* get_ComponentType() ;

/// @brief Method get_EventType, addr 0xad6791c, size 0x18, virtual true, abstract: false, final false
inline ::System::Type* get_EventType() ;

/// @brief Method get_IsMulticast, addr 0xad67db8, size 0x9c, virtual true, abstract: false, final false
inline bool get_IsMulticast() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectEventDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectEventDescriptor(ReflectEventDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectEventDescriptor(ReflectEventDescriptor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10222};

/// @brief Field _type, offset: 0x60, size: 0x8, def value: None
 ::System::Type*  ____type;

/// @brief Field _componentClass, offset: 0x68, size: 0x8, def value: None
 ::System::Type*  ____componentClass;

/// @brief Field _addMethod, offset: 0x70, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ____addMethod;

/// @brief Field _removeMethod, offset: 0x78, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ____removeMethod;

/// @brief Field _realEvent, offset: 0x80, size: 0x8, def value: None
 ::System::Reflection::EventInfo*  ____realEvent;

/// @brief Field _filledMethods, offset: 0x88, size: 0x1, def value: None
 bool  ____filledMethods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____type) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____componentClass) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____addMethod) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____removeMethod) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____realEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____filledMethods) == 0x88, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ReflectEventDescriptor) == 0x90, "Size mismatch!");

} // namespace end def System::ComponentModel
