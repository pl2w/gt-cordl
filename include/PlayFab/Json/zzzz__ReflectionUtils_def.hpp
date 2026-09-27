#pragma once
// IWYU pragma private; include "PlayFab/Json/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionUtils)
namespace PlayFab::Json {
class ReflectionUtils_ConstructorDelegate;
}
namespace PlayFab::Json {
class ReflectionUtils_GetDelegate;
}
namespace PlayFab::Json {
class ReflectionUtils_SetDelegate;
}
namespace PlayFab::Json {
template<typename TKey,typename TValue>
class ReflectionUtils_ThreadSafeDictionaryValueFactory_2;
}
namespace PlayFab::Json {
template<typename TKey,typename TValue>
class ReflectionUtils_ThreadSafeDictionary_2;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass26_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass30_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass31_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass34_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass35_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Reflection {
class ConstructorInfo;
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
class PropertyInfo;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Attribute;
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
namespace System {
class Type;
}
// Forward declare root types
namespace PlayFab::Json {
class ReflectionUtils;
}
namespace PlayFab::Json {
class ReflectionUtils_ConstructorDelegate;
}
namespace PlayFab::Json {
class ReflectionUtils_GetDelegate;
}
namespace PlayFab::Json {
class ReflectionUtils_SetDelegate;
}
namespace PlayFab::Json {
template<typename TKey,typename TValue>
class ReflectionUtils_ThreadSafeDictionaryValueFactory_2;
}
namespace PlayFab::Json {
template<typename TKey,typename TValue>
class ReflectionUtils_ThreadSafeDictionary_2;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass26_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass30_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass31_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass34_0;
}
namespace PlayFab::Json {
class ReflectionUtils___c__DisplayClass35_0;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::ReflectionUtils*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils_ConstructorDelegate*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils_GetDelegate*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils_SetDelegate*);
MARK_GEN_REF_T_PTR(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2);
MARK_GEN_REF_T_PTR(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2);
MARK_REF_T(::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*);
MARK_REF_T(::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils*, "PlayFab.Json", "ReflectionUtils");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils_ConstructorDelegate*, "PlayFab.Json", "ReflectionUtils/ConstructorDelegate");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils_GetDelegate*, "PlayFab.Json", "ReflectionUtils/GetDelegate");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils_SetDelegate*, "PlayFab.Json", "ReflectionUtils/SetDelegate");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2, "PlayFab.Json", "ReflectionUtils/ThreadSafeDictionaryValueFactory`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2, "PlayFab.Json", "ReflectionUtils/ThreadSafeDictionary`2");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*, "PlayFab.Json", "ReflectionUtils/<>c__DisplayClass26_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*, "PlayFab.Json", "ReflectionUtils/<>c__DisplayClass30_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*, "PlayFab.Json", "ReflectionUtils/<>c__DisplayClass31_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*, "PlayFab.Json", "ReflectionUtils/<>c__DisplayClass34_0");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*, "PlayFab.Json", "ReflectionUtils/<>c__DisplayClass35_0");
// [GeneratedCode("reflection-utils", "1.0.0")]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils
class CORDL_TYPE ReflectionUtils : public ::System::Object {
public:
// Declarations
using ConstructorDelegate = ::PlayFab::Json::ReflectionUtils_ConstructorDelegate;

using GetDelegate = ::PlayFab::Json::ReflectionUtils_GetDelegate;

using SetDelegate = ::PlayFab::Json::ReflectionUtils_SetDelegate;

template<typename TKey,typename TValue>
using ThreadSafeDictionaryValueFactory_2 = ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey, TValue>;

template<typename TKey,typename TValue>
using ThreadSafeDictionary_2 = ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey, TValue>;

using __c__DisplayClass26_0 = ::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0;

using __c__DisplayClass30_0 = ::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0;

using __c__DisplayClass31_0 = ::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0;

using __c__DisplayClass34_0 = ::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0;

using __c__DisplayClass35_0 = ::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0;

/// @brief Field EmptyObjects, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyObjects, put=setStaticF_EmptyObjects)) ::ArrayW<::System::Object*>  EmptyObjects;

/// @brief Field _1ObjArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__1ObjArray, put=setStaticF__1ObjArray)) ::ArrayW<::System::Object*>  _1ObjArray;

/// @brief Method GetAttribute, addr 0xa83f4fc, size 0x88, virtual false, abstract: false, final false
static inline ::System::Attribute* GetAttribute(::System::Reflection::MemberInfo*  info, ::System::Type*  type) ;

/// @brief Method GetAttribute, addr 0xa83f5ec, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Attribute* GetAttribute(::System::Type*  objectType, ::System::Type*  attributeType) ;

/// @brief Method GetConstructorByReflection, addr 0xa83fb5c, size 0xb8, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* GetConstructorByReflection(::System::Reflection::ConstructorInfo*  constructorInfo) ;

/// @brief Method GetConstructorByReflection, addr 0xa83fc14, size 0xd0, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* GetConstructorByReflection(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  argsType) ;

/// @brief Method GetConstructorInfo, addr 0xa83f700, size 0x408, virtual false, abstract: false, final false
static inline ::System::Reflection::ConstructorInfo* GetConstructorInfo(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  argsType) ;

/// @brief Method GetConstructors, addr 0xa83f6ec, size 0x14, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Type*  type) ;

/// @brief Method GetContructor, addr 0xa83fb08, size 0x54, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* GetContructor(::System::Reflection::ConstructorInfo*  constructorInfo) ;

/// @brief Method GetContructor, addr 0xa83b554, size 0x64, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* GetContructor(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  argsType) ;

/// @brief Method GetFields, addr 0xa83bdc4, size 0x20, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type*  type) ;

/// @brief Method GetGenericListElementType, addr 0xa83e3f4, size 0x46c, virtual false, abstract: false, final false
static inline ::System::Type* GetGenericListElementType(::System::Type*  type) ;

/// @brief Method GetGenericTypeArguments, addr 0xa83e1f0, size 0x1c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Type*> GetGenericTypeArguments(::System::Type*  type) ;

/// @brief Method GetGetMethod, addr 0xa83bde4, size 0x54, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_GetDelegate* GetGetMethod(::System::Reflection::FieldInfo*  fieldInfo) ;

/// @brief Method GetGetMethod, addr 0xa83bd70, size 0x54, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_GetDelegate* GetGetMethod(::System::Reflection::PropertyInfo*  propertyInfo) ;

/// @brief Method GetGetMethodByReflection, addr 0xa83feec, size 0xb8, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_GetDelegate* GetGetMethodByReflection(::System::Reflection::FieldInfo*  fieldInfo) ;

/// @brief Method GetGetMethodByReflection, addr 0xa83fdf4, size 0xf8, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_GetDelegate* GetGetMethodByReflection(::System::Reflection::PropertyInfo*  propertyInfo) ;

/// @brief Method GetGetterMethodInfo, addr 0xa83bd50, size 0x20, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetGetterMethodInfo(::System::Reflection::PropertyInfo*  propertyInfo) ;

/// @brief Method GetProperties, addr 0xa83bd30, size 0x20, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type*  type) ;

/// @brief Method GetSetMethod, addr 0xa83c70c, size 0x54, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_SetDelegate* GetSetMethod(::System::Reflection::FieldInfo*  fieldInfo) ;

/// @brief Method GetSetMethod, addr 0xa83c6b8, size 0x54, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_SetDelegate* GetSetMethod(::System::Reflection::PropertyInfo*  propertyInfo) ;

/// @brief Method GetSetMethodByReflection, addr 0xa8401b4, size 0xb8, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_SetDelegate* GetSetMethodByReflection(::System::Reflection::FieldInfo*  fieldInfo) ;

/// @brief Method GetSetMethodByReflection, addr 0xa8400bc, size 0xf8, virtual false, abstract: false, final false
static inline ::PlayFab::Json::ReflectionUtils_SetDelegate* GetSetMethodByReflection(::System::Reflection::PropertyInfo*  propertyInfo) ;

/// @brief Method GetSetterMethodInfo, addr 0xa83c698, size 0x20, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetSetterMethodInfo(::System::Reflection::PropertyInfo*  propertyInfo) ;

/// @brief Method GetTypeInfo, addr 0xa83f4f8, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeInfo(::System::Type*  type) ;

/// @brief Method IsAssignableFrom, addr 0xa83e37c, size 0x78, virtual false, abstract: false, final false
static inline bool IsAssignableFrom(::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method IsNullableType, addr 0xa83df88, size 0xe4, virtual false, abstract: false, final false
static inline bool IsNullableType(::System::Type*  type) ;

/// @brief Method IsTypeDictionary, addr 0xa83e06c, size 0x184, virtual false, abstract: false, final false
static inline bool IsTypeDictionary(::System::Type*  type) ;

/// @brief Method IsTypeGeneric, addr 0xa83f584, size 0x68, virtual false, abstract: false, final false
static inline bool IsTypeGeneric(::System::Type*  type) ;

/// @brief Method IsTypeGenericeCollectionInterface, addr 0xa83e20c, size 0x170, virtual false, abstract: false, final false
static inline bool IsTypeGenericeCollectionInterface(::System::Type*  type) ;

/// @brief Method IsValueType, addr 0xa83f68c, size 0x60, virtual false, abstract: false, final false
static inline bool IsValueType(::System::Type*  type) ;

static inline ::PlayFab::Json::ReflectionUtils* New_ctor() ;

/// @brief Method ToNullableType, addr 0xa83e860, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Object* ToNullableType(::System::Object*  obj, ::System::Type*  nullableType) ;

/// @brief Method .ctor, addr 0xa840388, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Object*> getStaticF_EmptyObjects() ;

static inline ::ArrayW<::System::Object*> getStaticF__1ObjArray() ;

static inline void setStaticF_EmptyObjects(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF__1ObjArray(::ArrayW<::System::Object*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils(ReflectionUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils(ReflectionUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19556};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::ReflectionUtils) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/<>c__DisplayClass35_0
class CORDL_TYPE ReflectionUtils___c__DisplayClass35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field fieldInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fieldInfo, put=__cordl_internal_set_fieldInfo)) ::System::Reflection::FieldInfo*  fieldInfo;

static inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0* New_ctor() ;

/// @brief Method <GetSetMethodByReflection>b__0, addr 0xa8406d0, size 0x18, virtual false, abstract: false, final false
inline void _GetSetMethodByReflection_b__0(::System::Object*  source, ::System::Object*  value) ;

constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get_fieldInfo() const;

constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_fieldInfo() ;

constexpr void __cordl_internal_set_fieldInfo(::System::Reflection::FieldInfo*  value) ;

/// @brief Method .ctor, addr 0xa840380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils___c__DisplayClass35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass35_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils___c__DisplayClass35_0(ReflectionUtils___c__DisplayClass35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass35_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils___c__DisplayClass35_0(ReflectionUtils___c__DisplayClass35_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19555};

/// @brief Field fieldInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  ___fieldInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0, ___fieldInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/<>c__DisplayClass34_0
class CORDL_TYPE ReflectionUtils___c__DisplayClass34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field methodInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_methodInfo, put=__cordl_internal_set_methodInfo)) ::System::Reflection::MethodInfo*  methodInfo;

static inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0* New_ctor() ;

/// @brief Method <GetSetMethodByReflection>b__0, addr 0xa840584, size 0x14c, virtual false, abstract: false, final false
inline void _GetSetMethodByReflection_b__0(::System::Object*  source, ::System::Object*  value) ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_methodInfo() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_methodInfo() ;

constexpr void __cordl_internal_set_methodInfo(::System::Reflection::MethodInfo*  value) ;

/// @brief Method .ctor, addr 0xa84026c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils___c__DisplayClass34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass34_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils___c__DisplayClass34_0(ReflectionUtils___c__DisplayClass34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass34_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils___c__DisplayClass34_0(ReflectionUtils___c__DisplayClass34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19554};

/// @brief Field methodInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___methodInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0, ___methodInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/<>c__DisplayClass31_0
class CORDL_TYPE ReflectionUtils___c__DisplayClass31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field fieldInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fieldInfo, put=__cordl_internal_set_fieldInfo)) ::System::Reflection::FieldInfo*  fieldInfo;

static inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0* New_ctor() ;

/// @brief Method <GetGetMethodByReflection>b__0, addr 0xa840564, size 0x20, virtual false, abstract: false, final false
inline ::System::Object* _GetGetMethodByReflection_b__0(::System::Object*  source) ;

constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get_fieldInfo() const;

constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_fieldInfo() ;

constexpr void __cordl_internal_set_fieldInfo(::System::Reflection::FieldInfo*  value) ;

/// @brief Method .ctor, addr 0xa8400b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils___c__DisplayClass31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils___c__DisplayClass31_0(ReflectionUtils___c__DisplayClass31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils___c__DisplayClass31_0(ReflectionUtils___c__DisplayClass31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19553};

/// @brief Field fieldInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  ___fieldInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0, ___fieldInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/<>c__DisplayClass30_0
class CORDL_TYPE ReflectionUtils___c__DisplayClass30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field methodInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_methodInfo, put=__cordl_internal_set_methodInfo)) ::System::Reflection::MethodInfo*  methodInfo;

static inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0* New_ctor() ;

/// @brief Method <GetGetMethodByReflection>b__0, addr 0xa8404e4, size 0x80, virtual false, abstract: false, final false
inline ::System::Object* _GetGetMethodByReflection_b__0(::System::Object*  source) ;

constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_methodInfo() const;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_methodInfo() ;

constexpr void __cordl_internal_set_methodInfo(::System::Reflection::MethodInfo*  value) ;

/// @brief Method .ctor, addr 0xa83ffa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils___c__DisplayClass30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils___c__DisplayClass30_0(ReflectionUtils___c__DisplayClass30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils___c__DisplayClass30_0(ReflectionUtils___c__DisplayClass30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19552};

/// @brief Field methodInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___methodInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0, ___methodInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Json
// [CompilerGenerated]
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/<>c__DisplayClass26_0
class CORDL_TYPE ReflectionUtils___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field constructorInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_constructorInfo, put=__cordl_internal_set_constructorInfo)) ::System::Reflection::ConstructorInfo*  constructorInfo;

static inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <GetConstructorByReflection>b__0, addr 0xa8404cc, size 0x18, virtual false, abstract: false, final false
inline ::System::Object* _GetConstructorByReflection_b__0(::ArrayW<::System::Object*>  args) ;

constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get_constructorInfo() const;

constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get_constructorInfo() ;

constexpr void __cordl_internal_set_constructorInfo(::System::Reflection::ConstructorInfo*  value) ;

/// @brief Method .ctor, addr 0xa83fce4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils___c__DisplayClass26_0(ReflectionUtils___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils___c__DisplayClass26_0(ReflectionUtils___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19551};

/// @brief Field constructorInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::ConstructorInfo*  ___constructorInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0, ___constructorInfo) == 0x10, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::Json
// [DefaultMember("Item")]
// Dependencies System.Object
namespace PlayFab::Json {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/ThreadSafeDictionary`2<TKey,TValue>
class CORDL_TYPE ReflectionUtils_ThreadSafeDictionary_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>*  Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<TValue>*  Values;

/// @brief Field _dictionary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dictionary, put=__cordl_internal_set__dictionary)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary;

/// @brief Field _lock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__lock, put=__cordl_internal_set__lock)) ::System::Object*  _lock;

/// @brief Field _valueFactory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueFactory, put=__cordl_internal_set__valueFactory)) ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  _valueFactory;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(TKey  key, TValue  value) ;

/// @brief Method AddValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue AddValue(TKey  key) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(TKey  key) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  arrayIndex) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue Get(TKey  key) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* GetEnumerator() ;

static inline ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>* New_ctor(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  valueFactory) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(TKey  key) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* const& __cordl_internal_get__dictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>*& __cordl_internal_get__dictionary() ;

constexpr ::System::Object* const& __cordl_internal_get__lock() const;

constexpr ::System::Object*& __cordl_internal_get__lock() ;

constexpr ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>* const& __cordl_internal_get__valueFactory() const;

constexpr ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*& __cordl_internal_get__valueFactory() ;

constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set__lock(::System::Object*  value) ;

constexpr void __cordl_internal_set__valueFactory(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  valueFactory) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Item(TKey  key) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* get_Keys() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TValue>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(TKey  key, TValue  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils_ThreadSafeDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_ThreadSafeDictionary_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils_ThreadSafeDictionary_2(ReflectionUtils_ThreadSafeDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_ThreadSafeDictionary_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils_ThreadSafeDictionary_2(ReflectionUtils_ThreadSafeDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19550};

/// @brief Field _lock, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ____lock;

/// @brief Field _valueFactory, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  ____valueFactory;

/// @brief Field _dictionary, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  ____dictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Json
// Dependencies System.MulticastDelegate
namespace PlayFab::Json {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>
class CORDL_TYPE ReflectionUtils_ThreadSafeDictionaryValueFactory_2 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(TKey  key, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TValue EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TValue Invoke(TKey  key) ;

static inline ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils_ThreadSafeDictionaryValueFactory_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_ThreadSafeDictionaryValueFactory_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils_ThreadSafeDictionaryValueFactory_2(ReflectionUtils_ThreadSafeDictionaryValueFactory_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_ThreadSafeDictionaryValueFactory_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils_ThreadSafeDictionaryValueFactory_2(ReflectionUtils_ThreadSafeDictionaryValueFactory_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19549};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Json
// Dependencies System.MulticastDelegate
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/ConstructorDelegate
class CORDL_TYPE ReflectionUtils_ConstructorDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa8404a0, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::System::Object*>  args, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa8404c0, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa84048c, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Invoke(/* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

static inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa83fcec, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils_ConstructorDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_ConstructorDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils_ConstructorDelegate(ReflectionUtils_ConstructorDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_ConstructorDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils_ConstructorDelegate(ReflectionUtils_ConstructorDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19548};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::ReflectionUtils_ConstructorDelegate) == 0x80, "Size mismatch!");

} // namespace end def PlayFab::Json
// Dependencies System.MulticastDelegate
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/SetDelegate
class CORDL_TYPE ReflectionUtils_SetDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa840458, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  source, ::System::Object*  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa840480, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa840444, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  source, ::System::Object*  value) ;

static inline ::PlayFab::Json::ReflectionUtils_SetDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa840274, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils_SetDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_SetDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils_SetDelegate(ReflectionUtils_SetDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_SetDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils_SetDelegate(ReflectionUtils_SetDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19547};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::ReflectionUtils_SetDelegate) == 0x80, "Size mismatch!");

} // namespace end def PlayFab::Json
// Dependencies System.MulticastDelegate
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.ReflectionUtils/GetDelegate
class CORDL_TYPE ReflectionUtils_GetDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa840418, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  source, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa840438, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa840404, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Invoke(::System::Object*  source) ;

static inline ::PlayFab::Json::ReflectionUtils_GetDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa83ffac, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionUtils_GetDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_GetDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionUtils_GetDelegate(ReflectionUtils_GetDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionUtils_GetDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionUtils_GetDelegate(ReflectionUtils_GetDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19546};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::ReflectionUtils_GetDelegate) == 0x80, "Size mismatch!");

} // namespace end def PlayFab::Json
