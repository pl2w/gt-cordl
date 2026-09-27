#pragma once
// IWYU pragma private; include "GlobalNamespace/ProxyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ProxyType)
namespace GlobalNamespace {
class InvalidType;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ProxyType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProxyType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProxyType*, "", "ProxyType");
// Dependencies System.Type
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProxyType
class CORDL_TYPE ProxyType : public ::System::Type {
public:
// Declarations
 __declspec(property(get=get_Assembly)) ::System::Reflection::Assembly*  Assembly;

 __declspec(property(get=get_AssemblyQualifiedName)) ::StringW  AssemblyQualifiedName;

 __declspec(property(get=get_BaseType)) ::System::Type*  BaseType;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_GUID)) ::System::Guid  GUID;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_UnderlyingSystemType)) ::System::Type*  UnderlyingSystemType;

/// @brief Field _self, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__self, put=__cordl_internal_set__self)) ::System::Type*  _self;

/// @brief Field _typeName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeName, put=__cordl_internal_set__typeName)) ::StringW  _typeName;

/// @brief Field kInvalidType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kInvalidType, put=setStaticF_kInvalidType)) ::GlobalNamespace::InvalidType*  kInvalidType;

/// @brief Field kPrefix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kPrefix, put=setStaticF_kPrefix)) ::StringW  kPrefix;

/// @brief Method GetAttributeFlagsImpl, addr 0x5b21528, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructorImpl, addr 0x5b21530, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method GetConstructors, addr 0x5b21538, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetCustomAttributes, addr 0x5b214a4, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x5b21480, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetElementType, addr 0x5b21558, size 0x20, virtual true, abstract: false, final false
inline ::System::Type* GetElementType() ;

/// @brief Method GetEvent, addr 0x5b21578, size 0x20, virtual true, abstract: false, final false
inline ::System::Reflection::EventInfo* GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetEvents, addr 0x5b21598, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::EventInfo*> GetEvents(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetField, addr 0x5b215b8, size 0x20, virtual true, abstract: false, final false
inline ::System::Reflection::FieldInfo* GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetFields, addr 0x5b215d8, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::FieldInfo*> GetFields(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetInterface, addr 0x5b2180c, size 0x24, virtual true, abstract: false, final false
inline ::System::Type* GetInterface(::StringW  name, bool  ignoreCase) ;

/// @brief Method GetInterfaces, addr 0x5b21830, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetInterfaces() ;

/// @brief Method GetMembers, addr 0x5b215f8, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*> GetMembers(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMethodImpl, addr 0x5b21618, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method GetMethods, addr 0x5b21620, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethods(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedType, addr 0x5b217cc, size 0x20, virtual true, abstract: false, final false
inline ::System::Type* GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedTypes, addr 0x5b217ec, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetNestedTypes(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetProperties, addr 0x5b21640, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetPropertyImpl, addr 0x5b217bc, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method HasElementTypeImpl, addr 0x5b217c4, size 0x8, virtual true, abstract: false, final false
inline bool HasElementTypeImpl() ;

/// @brief Method InvokeMember, addr 0x5b21660, size 0x2c, virtual true, abstract: false, final false
inline ::System::Object* InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*>  args, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW>  namedParameters) ;

/// @brief Method IsArrayImpl, addr 0x5b216ac, size 0x8, virtual true, abstract: false, final false
inline bool IsArrayImpl() ;

/// @brief Method IsByRefImpl, addr 0x5b216b4, size 0x8, virtual true, abstract: false, final false
inline bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl, addr 0x5b216bc, size 0x8, virtual true, abstract: false, final false
inline bool IsCOMObjectImpl() ;

/// @brief Method IsDefined, addr 0x5b214c8, size 0x20, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsPointerImpl, addr 0x5b216c4, size 0x8, virtual true, abstract: false, final false
inline bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl, addr 0x5b216cc, size 0x8, virtual true, abstract: false, final false
inline bool IsPrimitiveImpl() ;

static inline ::GlobalNamespace::ProxyType* New_ctor() ;

static inline ::GlobalNamespace::ProxyType* New_ctor(::StringW  typeName) ;

/// @brief Method Parse, addr 0x5b21244, size 0x1e4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::ProxyType* Parse(::StringW  input) ;

/// @brief Method ToString, addr 0x5b21428, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Type* const& __cordl_internal_get__self() const;

constexpr ::System::Type*& __cordl_internal_get__self() ;

constexpr ::StringW const& __cordl_internal_get__typeName() const;

constexpr ::StringW& __cordl_internal_get__typeName() ;

constexpr void __cordl_internal_set__self(::System::Type*  value) ;

constexpr void __cordl_internal_set__typeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b210bc, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b2113c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeName) ;

static inline ::GlobalNamespace::InvalidType* getStaticF_kInvalidType() ;

static inline ::StringW getStaticF_kPrefix() ;

/// @brief Method get_Assembly, addr 0x5b216d4, size 0x20, virtual true, abstract: false, final false
inline ::System::Reflection::Assembly* get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName, addr 0x5b216f4, size 0x88, virtual true, abstract: false, final false
inline ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType, addr 0x5b2177c, size 0x20, virtual true, abstract: false, final false
inline ::System::Type* get_BaseType() ;

/// @brief Method get_FullName, addr 0x5b211e0, size 0x64, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_GUID, addr 0x5b2179c, size 0x20, virtual true, abstract: false, final false
inline ::System::Guid get_GUID() ;

/// @brief Method get_Module, addr 0x5b214e8, size 0x20, virtual true, abstract: false, final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_Name, addr 0x5b211d8, size 0x8, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Namespace, addr 0x5b21508, size 0x20, virtual true, abstract: false, final false
inline ::StringW get_Namespace() ;

/// @brief Method get_UnderlyingSystemType, addr 0x5b2168c, size 0x20, virtual true, abstract: false, final false
inline ::System::Type* get_UnderlyingSystemType() ;

static inline void setStaticF_kInvalidType(::GlobalNamespace::InvalidType*  value) ;

static inline void setStaticF_kPrefix(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProxyType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProxyType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProxyType(ProxyType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProxyType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProxyType(ProxyType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3609};

/// @brief Field _self, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ____self;

/// @brief Field _typeName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____typeName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProxyType, ____self) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProxyType, ____typeName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProxyType) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
