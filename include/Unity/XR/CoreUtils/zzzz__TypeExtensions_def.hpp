#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/TypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TypeExtensions)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace Unity::XR::CoreUtils {
class TypeExtensions___c__DisplayClass2_0;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class TypeExtensions;
}
namespace Unity::XR::CoreUtils {
class TypeExtensions___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::TypeExtensions*);
MARK_REF_T(::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::TypeExtensions*, "Unity.XR.CoreUtils", "TypeExtensions");
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*, "Unity.XR.CoreUtils", "TypeExtensions/<>c__DisplayClass2_0");
// [Extension]
// Dependencies System.Attribute, System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.TypeExtensions
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0;

/// @brief Field k_Fields, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Fields, put=setStaticF_k_Fields)) ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  k_Fields;

/// @brief Field k_TypeNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_TypeNames, put=setStaticF_k_TypeNames)) ::System::Collections::Generic::List_1<::StringW>*  k_TypeNames;

/// [Extension]
/// @brief Method GetAssignableTypes, addr 0xb3f0a08, size 0xec, virtual false, abstract: false, final false
static inline void GetAssignableTypes(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  list, ::System::Func_2<::System::Type*,bool>*  predicate) ;

/// [Extension]
/// @brief Method GetAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
static inline TAttribute GetAttribute(::System::Type*  type, bool  inherit) ;

/// [Extension]
/// @brief Method GetExtensionsOfClass, addr 0xb3f0d10, size 0x84, virtual false, abstract: false, final false
static inline void GetExtensionsOfClass(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  list) ;

/// [Extension]
/// @brief Method GetFieldInTypeOrBaseType, addr 0xb3f1b74, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Reflection::FieldInfo* GetFieldInTypeOrBaseType(::System::Type*  type, ::StringW  fieldName) ;

/// [Extension]
/// @brief Method GetFieldRecursively, addr 0xb3f1018, size 0x110, virtual false, abstract: false, final false
static inline ::System::Reflection::FieldInfo* GetFieldRecursively(::System::Type*  type, ::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// [Extension]
/// @brief Method GetFieldsRecursively, addr 0xb3f1128, size 0x160, virtual false, abstract: false, final false
static inline void GetFieldsRecursively(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  fields, ::System::Reflection::BindingFlags  bindingAttr) ;

/// [Extension]
/// @brief Method GetFullNameWithGenericArguments, addr 0xb3f2218, size 0x2d4, virtual false, abstract: false, final false
static inline ::StringW GetFullNameWithGenericArguments(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetFullNameWithGenericArgumentsInternal, addr 0xb3f2024, size 0x1f4, virtual false, abstract: false, final false
static inline ::StringW GetFullNameWithGenericArgumentsInternal(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetGenericInterfaces, addr 0xb3f0d94, size 0x17c, virtual false, abstract: false, final false
static inline void GetGenericInterfaces(::System::Type*  type, ::System::Type*  genericInterface, ::System::Collections::Generic::List_1<::System::Type*>*  interfaces) ;

/// [Extension]
/// @brief Method GetImplementationsOfInterface, addr 0xb3f0c8c, size 0x84, virtual false, abstract: false, final false
static inline void GetImplementationsOfInterface(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  list) ;

/// [Extension]
/// @brief Method GetInterfaceFieldsFromClasses, addr 0xb3f13e8, size 0x78c, virtual false, abstract: false, final false
static inline void GetInterfaceFieldsFromClasses(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  classes, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  fields, ::System::Collections::Generic::List_1<::System::Type*>*  interfaceTypes, ::System::Reflection::BindingFlags  bindingAttr) ;

/// [Extension]
/// @brief Method GetMethodRecursively, addr 0xb3f2548, size 0x108, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetMethodRecursively(::System::Type*  type, ::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// [Extension]
/// @brief Method GetNameWithFullGenericArguments, addr 0xb3f1e20, size 0x204, virtual false, abstract: false, final false
static inline ::StringW GetNameWithFullGenericArguments(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetNameWithGenericArguments, addr 0xb3f1c1c, size 0x204, virtual false, abstract: false, final false
static inline ::StringW GetNameWithGenericArguments(::System::Type*  type) ;

/// [Extension]
/// @brief Method GetPropertiesRecursively, addr 0xb3f1288, size 0x160, virtual false, abstract: false, final false
static inline void GetPropertiesRecursively(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  fields, ::System::Reflection::BindingFlags  bindingAttr) ;

/// [Extension]
/// @brief Method GetPropertyRecursively, addr 0xb3f0f10, size 0x108, virtual false, abstract: false, final false
static inline ::System::Reflection::PropertyInfo* GetPropertyRecursively(::System::Type*  type, ::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// [Extension]
/// @brief Method IsAssignableFromOrSubclassOf, addr 0xb3f24ec, size 0x5c, virtual false, abstract: false, final false
static inline bool IsAssignableFromOrSubclassOf(::System::Type*  checkType, ::System::Type*  baseType) ;

/// [Extension]
/// @brief Method IsDefinedGetInheritedTypes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
static inline void IsDefinedGetInheritedTypes(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  types) ;

static inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* getStaticF_k_Fields() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_k_TypeNames() ;

static inline void setStaticF_k_Fields(::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  value) ;

static inline void setStaticF_k_TypeNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeExtensions(TypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeExtensions(TypeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30403};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::TypeExtensions) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.TypeExtensions/<>c__DisplayClass2_0
class CORDL_TYPE TypeExtensions___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field list, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_list, put=__cordl_internal_set_list)) ::System::Collections::Generic::List_1<::System::Type*>*  list;

/// @brief Field predicate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_2<::System::Type*,bool>*  predicate;

/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <GetAssignableTypes>b__0, addr 0xb3f2740, size 0x11c, virtual false, abstract: false, final false
inline void _GetAssignableTypes_b__0(::System::Type*  t) ;

constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& __cordl_internal_get_list() const;

constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __cordl_internal_get_list() ;

constexpr ::System::Func_2<::System::Type*,bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_2<::System::Type*,bool>*& __cordl_internal_get_predicate() ;

constexpr ::System::Type* const& __cordl_internal_get_type() const;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

constexpr void __cordl_internal_set_predicate(::System::Func_2<::System::Type*,bool>*  value) ;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xb3f0af4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeExtensions___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeExtensions___c__DisplayClass2_0(TypeExtensions___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions___c__DisplayClass2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeExtensions___c__DisplayClass2_0(TypeExtensions___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30402};

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

/// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::System::Type*,bool>*  ___predicate;

/// @brief Field list, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Type*>*  ___list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0, ___predicate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0, ___list) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0) == 0x28, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
