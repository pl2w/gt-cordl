#pragma once
// IWYU pragma private; include "System/RuntimeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeType)
namespace GlobalNamespace {
template<typename T>
struct RuntimeType_ListBuilder_1;
}
namespace GlobalNamespace {
struct RuntimeType_MemberListType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
class CustomAttributeData;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
struct GenericParameterAttributes;
}
namespace System::Reflection {
struct InterfaceMapping;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class MethodBase;
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
class RuntimeAssembly;
}
namespace System::Reflection {
class RuntimeConstructorInfo;
}
namespace System::Reflection {
class RuntimeEventInfo;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
namespace System::Reflection {
class RuntimeMethodInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System {
class Array;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
struct Guid;
}
namespace System {
class ICloneable;
}
namespace System {
struct IntPtr;
}
namespace System {
class MonoTypeInfo;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
struct TypeCode;
}
namespace System {
struct TypeNameKind;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class RuntimeType;
}
// Write type traits
MARK_REF_T(::System::RuntimeType*);
DEFINE_IL2CPP_CLASS(::System::RuntimeType*, "System", "RuntimeType");
// Dependencies System.Reflection.BindingFlags, System.Reflection.TypeInfo, System.Type
namespace System {
// Is value type: false
// CS Name: System.RuntimeType
class CORDL_TYPE RuntimeType : public ::System::Reflection::TypeInfo {
public:
// Declarations
template<typename T>
using ListBuilder_1 = ::GlobalNamespace::RuntimeType_ListBuilder_1<T>;

using MemberListType = ::GlobalNamespace::RuntimeType_MemberListType;

 __declspec(property(get=get_Assembly)) ::System::Reflection::Assembly*  Assembly;

 __declspec(property(get=get_AssemblyQualifiedName)) ::StringW  AssemblyQualifiedName;

 __declspec(property(get=get_BaseType)) ::System::Type*  BaseType;

 __declspec(property(get=get_ContainsGenericParameters)) bool  ContainsGenericParameters;

 __declspec(property(get=get_DeclaringMethod)) ::System::Reflection::MethodBase*  DeclaringMethod;

 __declspec(property(get=get_DeclaringType)) ::System::Type*  DeclaringType;

/// @brief Field DelegateType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DelegateType, put=setStaticF_DelegateType)) ::System::RuntimeType*  DelegateType;

/// @brief Field EnumType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EnumType, put=setStaticF_EnumType)) ::System::RuntimeType*  EnumType;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_GUID)) ::System::Guid  GUID;

/// @brief Field GenericCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenericCache, put=__cordl_internal_set_GenericCache)) ::System::Object*  GenericCache;

 __declspec(property(get=get_GenericParameterAttributes)) ::System::Reflection::GenericParameterAttributes  GenericParameterAttributes;

 __declspec(property(get=get_GenericParameterPosition)) int32_t  GenericParameterPosition;

 __declspec(property(get=get_IsConstructedGenericType)) bool  IsConstructedGenericType;

 __declspec(property(get=get_IsEnum)) bool  IsEnum;

 __declspec(property(get=get_IsGenericParameter)) bool  IsGenericParameter;

 __declspec(property(get=get_IsGenericType)) bool  IsGenericType;

 __declspec(property(get=get_IsGenericTypeDefinition)) bool  IsGenericTypeDefinition;

 __declspec(property(get=get_IsSZArray)) bool  IsSZArray;

 __declspec(property(get=get_IsSzArray)) bool  IsSzArray;

/// @brief Field MakeTypeBuilderInstantiation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MakeTypeBuilderInstantiation, put=setStaticF_MakeTypeBuilderInstantiation)) ::System::Func_3<::System::Type*,::ArrayW<::System::Type*>,::System::Type*>*  MakeTypeBuilderInstantiation;

 __declspec(property(get=get_MemberType)) ::System::Reflection::MemberTypes  MemberType;

 __declspec(property(get=get_MetadataToken)) int32_t  MetadataToken;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

/// @brief Field ObjectType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ObjectType, put=setStaticF_ObjectType)) ::System::RuntimeType*  ObjectType;

 __declspec(property(get=get_ReflectedType)) ::System::Type*  ReflectedType;

/// @brief Field StringType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StringType, put=setStaticF_StringType)) ::System::RuntimeType*  StringType;

 __declspec(property(get=get_TypeHandle)) ::System::RuntimeTypeHandle  TypeHandle;

 __declspec(property(get=get_UnderlyingSystemType)) ::System::Type*  UnderlyingSystemType;

/// @brief Field ValueType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ValueType, put=setStaticF_ValueType)) ::System::RuntimeType*  ValueType;

/// @brief Field m_serializationCtor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_serializationCtor, put=__cordl_internal_set_m_serializationCtor)) ::System::Reflection::RuntimeConstructorInfo*  m_serializationCtor;

/// @brief Field s_SICtorParamTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SICtorParamTypes, put=setStaticF_s_SICtorParamTypes)) ::ArrayW<::System::Type*>  s_SICtorParamTypes;

/// @brief Field s_typedRef, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_typedRef, put=setStaticF_s_typedRef)) ::System::RuntimeType*  s_typedRef;

/// @brief Field type_info, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_type_info, put=__cordl_internal_set_type_info)) ::System::MonoTypeInfo*  type_info;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CheckValue, addr 0xa320dc4, size 0x144, virtual false, abstract: false, final false
inline ::System::Object* CheckValue(::System::Object*  value, ::System::Reflection::Binder*  binder, ::System::Globalization::CultureInfo*  culture, ::System::Reflection::BindingFlags  invokeAttr) ;

/// @brief Method Clone, addr 0xa31feb4, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method CreateInstanceCheckThis, addr 0xa3204fc, size 0x1ec, virtual false, abstract: false, final false
inline void CreateInstanceCheckThis() ;

/// [DebuggerStepThrough]
/// [DebuggerHidden]
/// @brief Method CreateInstanceDefaultCtor, addr 0xa30ac60, size 0x118, virtual false, abstract: false, final false
inline ::System::Object* CreateInstanceDefaultCtor(bool  publicOnly, bool  skipCheckThis, bool  fillCache, bool  wrapExceptions, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method CreateInstanceForAnotherGenericParameter, addr 0xa321b50, size 0x120, virtual false, abstract: false, final false
static inline ::System::Object* CreateInstanceForAnotherGenericParameter(::System::Type*  genericType, ::System::RuntimeType*  genericArgument) ;

/// @brief Method CreateInstanceImpl, addr 0xa30a154, size 0x950, virtual false, abstract: false, final false
inline ::System::Object* CreateInstanceImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*>  args, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::System::Object*>  activationAttributes, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method CreateInstanceInternal, addr 0xa320dc0, size 0x4, virtual false, abstract: false, final false
static inline ::System::Object* CreateInstanceInternal(::System::Type*  type) ;

/// @brief Method CreateInstanceMono, addr 0xa320b00, size 0x2c0, virtual false, abstract: false, final false
inline ::System::Object* CreateInstanceMono(bool  nonPublic, bool  wrapExceptions) ;

/// @brief Method CreateInstanceSlow, addr 0xa3206f0, size 0x3c, virtual false, abstract: false, final false
inline ::System::Object* CreateInstanceSlow(bool  publicOnly, bool  wrapExceptions, bool  skipCheckThis, bool  fillCache) ;

/// @brief Method Equals, addr 0xa31fea8, size 0xc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method FilterApplyBase, addr 0xa319788, size 0x1f0, virtual false, abstract: false, final false
static inline bool FilterApplyBase(::System::Reflection::MemberInfo*  memberInfo, ::System::Reflection::BindingFlags  bindingFlags, bool  isPublic, bool  isNonProtectedInternal, bool  isStatic, ::StringW  name, bool  prefixLookup) ;

/// @brief Method FilterApplyConstructorInfo, addr 0xa319d04, size 0x80, virtual false, abstract: false, final false
static inline bool FilterApplyConstructorInfo(::System::Reflection::RuntimeConstructorInfo*  constructor, ::System::Reflection::BindingFlags  bindingFlags, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  argumentTypes) ;

/// @brief Method FilterApplyMethodBase, addr 0xa319b10, size 0x1f4, virtual false, abstract: false, final false
static inline bool FilterApplyMethodBase(::System::Reflection::MethodBase*  methodBase, ::System::Reflection::BindingFlags  methodFlags, ::System::Reflection::BindingFlags  bindingFlags, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  argumentTypes) ;

/// @brief Method FilterApplyMethodInfo, addr 0xa319a90, size 0x80, virtual false, abstract: false, final false
static inline bool FilterApplyMethodInfo(::System::Reflection::RuntimeMethodInfo*  method, ::System::Reflection::BindingFlags  bindingFlags, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  argumentTypes) ;

/// @brief Method FilterApplyPrefixLookup, addr 0xa31971c, size 0x6c, virtual false, abstract: false, final false
static inline bool FilterApplyPrefixLookup(::System::Reflection::MemberInfo*  memberInfo, ::StringW  name, bool  ignoreCase) ;

/// @brief Method FilterApplyType, addr 0xa319978, size 0x118, virtual false, abstract: false, final false
static inline bool FilterApplyType(::System::Type*  type, ::System::Reflection::BindingFlags  bindingFlags, ::StringW  name, bool  prefixLookup, ::StringW  ns) ;

/// @brief Method FilterHelper, addr 0xa319558, size 0x138, virtual false, abstract: false, final false
static inline void FilterHelper(::System::Reflection::BindingFlags  bindingFlags, ::by_ref<::StringW>  name, bool  allowPrefixLookup, ::by_ref<bool>  prefixLookup, ::by_ref<bool>  ignoreCase, ::by_ref<::GlobalNamespace::RuntimeType_MemberListType>  listType) ;

/// @brief Method FilterHelper, addr 0xa319690, size 0x8c, virtual false, abstract: false, final false
static inline void FilterHelper(::System::Reflection::BindingFlags  bindingFlags, ::by_ref<::StringW>  name, ::by_ref<bool>  ignoreCase, ::by_ref<::GlobalNamespace::RuntimeType_MemberListType>  listType) ;

/// @brief Method FilterPreCalculate, addr 0xa31951c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Reflection::BindingFlags FilterPreCalculate(bool  isPublic, bool  isInherited, bool  isStatic) ;

/// @brief Method FormatTypeName, addr 0xa3202ec, size 0x16c, virtual true, abstract: false, final false
inline ::StringW FormatTypeName(bool  serialization) ;

/// @brief Method GetArrayRank, addr 0xa31da00, size 0x84, virtual true, abstract: false, final false
inline int32_t GetArrayRank() ;

/// @brief Method GetAttributeFlagsImpl, addr 0xa31d7ac, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetBaseType, addr 0xa31d5c8, size 0x1e0, virtual false, abstract: false, final false
inline ::System::RuntimeType* GetBaseType() ;

/// @brief Method GetCachedName, addr 0xa320458, size 0x4c, virtual false, abstract: false, final false
inline ::StringW GetCachedName(::System::TypeNameKind  kind) ;

/// @brief Method GetConstructorCandidates, addr 0xa31a300, size 0x27c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Reflection::ConstructorInfo*> GetConstructorCandidates(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  types, bool  allowPrefixLookup) ;

/// @brief Method GetConstructorImpl, addr 0xa31c0b8, size 0x218, virtual true, abstract: false, final false
inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// [ComVisible(true)]
/// @brief Method GetConstructors, addr 0xa31bb3c, size 0x94, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetConstructors_internal, addr 0xa31a57c, size 0x238, virtual false, abstract: false, final false
inline ::ArrayW<::System::Reflection::RuntimeConstructorInfo*> GetConstructors_internal(::System::Reflection::BindingFlags  bindingAttr, ::System::RuntimeType*  reflectedType) ;

/// @brief Method GetConstructors_native, addr 0xa321c78, size 0x4, virtual false, abstract: false, final false
inline ::System::IntPtr GetConstructors_native(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetCustomAttributes, addr 0xa31ffbc, size 0x194, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa31ff1c, size 0xa0, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributesData, addr 0xa3202e4, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData() ;

/// @brief Method GetDefaultConstructor, addr 0xa32072c, size 0x1a4, virtual false, abstract: false, final false
inline ::System::Reflection::RuntimeConstructorInfo* GetDefaultConstructor() ;

/// @brief Method GetDefaultMemberName, addr 0xa31fdd0, size 0xd8, virtual false, abstract: false, final false
inline ::StringW GetDefaultMemberName() ;

/// @brief Method GetElementType, addr 0xa31da84, size 0x8, virtual true, abstract: false, final false
inline ::System::Type* GetElementType() ;

/// @brief Method GetEnumName, addr 0xa31e27c, size 0x1c8, virtual true, abstract: false, final false
inline ::StringW GetEnumName(::System::Object*  value) ;

/// @brief Method GetEnumNames, addr 0xa31da8c, size 0x110, virtual true, abstract: false, final false
inline ::ArrayW<::StringW> GetEnumNames() ;

/// @brief Method GetEnumUnderlyingType, addr 0xa31dcec, size 0xac, virtual true, abstract: false, final false
inline ::System::Type* GetEnumUnderlyingType() ;

/// @brief Method GetEnumValues, addr 0xa31db9c, size 0x150, virtual true, abstract: false, final false
inline ::System::Array* GetEnumValues() ;

/// @brief Method GetEvent, addr 0xa31c560, size 0x1c8, virtual true, abstract: false, final false
inline ::System::Reflection::EventInfo* GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetEventCandidates, addr 0xa31ac9c, size 0x1cc, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Reflection::EventInfo*> GetEventCandidates(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, bool  allowPrefixLookup) ;

/// @brief Method GetEvents, addr 0xa31bc54, size 0x80, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::EventInfo*> GetEvents(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetEvents_internal, addr 0xa31ae68, size 0x268, virtual false, abstract: false, final false
inline ::ArrayW<::System::Reflection::RuntimeEventInfo*> GetEvents_internal(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType, ::System::RuntimeType*  reflectedType) ;

/// @brief Method GetEvents_native, addr 0xa32209c, size 0x4, virtual false, abstract: false, final false
inline ::System::IntPtr GetEvents_native(::System::IntPtr  name, ::GlobalNamespace::RuntimeType_MemberListType  listType) ;

/// @brief Method GetField, addr 0xa31c728, size 0x2ec, virtual true, abstract: false, final false
inline ::System::Reflection::FieldInfo* GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetFieldCandidates, addr 0xa31b0d0, size 0x1d0, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Reflection::FieldInfo*> GetFieldCandidates(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, bool  allowPrefixLookup) ;

/// @brief Method GetFields, addr 0xa31bcd4, size 0x80, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::FieldInfo*> GetFields(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetFields_internal, addr 0xa31b2a0, size 0x2e4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Reflection::RuntimeFieldInfo*> GetFields_internal(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType, ::System::RuntimeType*  reflectedType) ;

/// @brief Method GetFields_native, addr 0xa3220a0, size 0x4, virtual false, abstract: false, final false
inline ::System::IntPtr GetFields_native(::System::IntPtr  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType) ;

/// @brief Method GetGUID, addr 0xa321f34, size 0x4, virtual false, abstract: false, final false
static inline void GetGUID(::System::Type*  type, ::ArrayW<uint8_t>  guid) ;

/// @brief Method GetGenericArguments, addr 0xa31e4b8, size 0xa8, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetGenericArguments() ;

/// @brief Method GetGenericArgumentsInternal, addr 0xa31e444, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::System::RuntimeType*> GetGenericArgumentsInternal() ;

/// @brief Method GetGenericArgumentsInternal, addr 0xa31e4b4, size 0x4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> GetGenericArgumentsInternal(bool  runtimeArray) ;

/// @brief Method GetGenericParameterAttributes, addr 0xa31d9ac, size 0x44, virtual false, abstract: false, final false
inline ::System::Reflection::GenericParameterAttributes GetGenericParameterAttributes() ;

/// @brief Method GetGenericParameterConstraints, addr 0xa321a5c, size 0xf4, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetGenericParameterConstraints() ;

/// @brief Method GetGenericParameterPosition, addr 0xa31ead0, size 0x4, virtual false, abstract: false, final false
inline int32_t GetGenericParameterPosition() ;

/// @brief Method GetGenericTypeDefinition, addr 0xa31ead4, size 0x84, virtual true, abstract: false, final false
inline ::System::Type* GetGenericTypeDefinition() ;

/// @brief Method GetHashCode, addr 0xa3220c4, size 0xa8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInterface, addr 0xa31ca14, size 0x388, virtual true, abstract: false, final false
inline ::System::Type* GetInterface(::StringW  fullname, bool  ignoreCase) ;

/// @brief Method GetInterfaceMap, addr 0xa321c7c, size 0x2b4, virtual true, abstract: false, final false
inline ::System::Reflection::InterfaceMapping GetInterfaceMap(::System::Type*  ifaceType) ;

/// @brief Method GetInterfaceMapData, addr 0xa321f30, size 0x4, virtual false, abstract: false, final false
static inline void GetInterfaceMapData(::System::Type*  t, ::System::Type*  iface, ::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>  targets, ::by_ref<::ArrayW<::System::Reflection::MethodInfo*>>  methods) ;

/// @brief Method GetInterfaces, addr 0xa3220a4, size 0x4, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetInterfaces() ;

/// @brief Method GetMember, addr 0xa31cf84, size 0x474, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*> GetMember(::StringW  name, ::System::Reflection::MemberTypes  type, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMembers, addr 0xa31bdd4, size 0x2e4, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*> GetMembers(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMethodCandidates, addr 0xa319dc4, size 0x258, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  types, int32_t  genericParamCount, bool  allowPrefixLookup) ;

/// @brief Method GetMethodCandidates, addr 0xa322698, size 0x20c, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Reflection::MethodInfo*> GetMethodCandidates(::StringW  name, int32_t  genericParameterCount, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  types, bool  allowPrefixLookup) ;

/// @brief Method GetMethodImpl, addr 0xa3223a8, size 0x30, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method GetMethodImplCommon, addr 0xa3223d8, size 0x2c0, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImplCommon(::StringW  name, int32_t  genericParameterCount, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConv, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method GetMethods, addr 0xa31bab0, size 0x8c, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MethodInfo*> GetMethods(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMethodsByName, addr 0xa31a01c, size 0x2e4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Reflection::RuntimeMethodInfo*> GetMethodsByName(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType, ::System::RuntimeType*  reflectedType) ;

/// @brief Method GetMethodsByName_native, addr 0xa321c70, size 0x4, virtual false, abstract: false, final false
inline ::System::IntPtr GetMethodsByName_native(::System::IntPtr  namePtr, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType) ;

/// @brief Method GetNestedType, addr 0xa31cd9c, size 0x1e8, virtual true, abstract: false, final false
inline ::System::Type* GetNestedType(::StringW  fullname, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedTypeCandidates, addr 0xa31b584, size 0x1b4, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Type*> GetNestedTypeCandidates(::StringW  fullname, ::System::Reflection::BindingFlags  bindingAttr, bool  allowPrefixLookup) ;

/// @brief Method GetNestedTypes, addr 0xa31bd54, size 0x80, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetNestedTypes(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedTypes_internal, addr 0xa31b738, size 0x378, virtual false, abstract: false, final false
inline ::ArrayW<::System::RuntimeType*> GetNestedTypes_internal(::StringW  displayName, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType) ;

/// @brief Method GetNestedTypes_native, addr 0xa3220a8, size 0x4, virtual false, abstract: false, final false
inline ::System::IntPtr GetNestedTypes_native(::System::IntPtr  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType) ;

/// @brief Method GetObjectData, addr 0xa31feb8, size 0x64, virtual true, abstract: false, final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetProperties, addr 0xa31bbd0, size 0x84, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetPropertiesByName, addr 0xa31a9b8, size 0x2e4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Reflection::RuntimePropertyInfo*> GetPropertiesByName(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType, ::System::RuntimeType*  reflectedType) ;

/// @brief Method GetPropertiesByName_native, addr 0xa321c74, size 0x4, virtual false, abstract: false, final false
inline ::System::IntPtr GetPropertiesByName_native(::System::IntPtr  name, ::System::Reflection::BindingFlags  bindingAttr, ::GlobalNamespace::RuntimeType_MemberListType  listType) ;

/// @brief Method GetPropertyCandidates, addr 0xa31a7b4, size 0x204, virtual false, abstract: false, final false
inline ::GlobalNamespace::RuntimeType_ListBuilder_1<::System::Reflection::PropertyInfo*> GetPropertyCandidates(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Type*>  types, bool  allowPrefixLookup) ;

/// @brief Method GetPropertyImpl, addr 0xa31c2d0, size 0x290, virtual true, abstract: false, final false
inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers) ;

/// @brief Method GetRuntimeAssembly, addr 0xa31d410, size 0x8, virtual false, abstract: false, final false
inline ::System::Reflection::RuntimeAssembly* GetRuntimeAssembly() ;

/// @brief Method GetRuntimeModule, addr 0xa31d400, size 0x8, virtual false, abstract: false, final false
inline ::System::Reflection::RuntimeModule* GetRuntimeModule() ;

/// @brief Method GetSerializationCtor, addr 0xa3208d0, size 0x230, virtual false, abstract: false, final false
inline ::System::Reflection::RuntimeConstructorInfo* GetSerializationCtor() ;

/// @brief Method GetType, addr 0xa31905c, size 0x68, virtual false, abstract: false, final false
static inline ::System::RuntimeType* GetType(::StringW  typeName, bool  throwOnError, bool  ignoreCase, bool  reflectionOnly, ::by_ref<::System::Threading::StackCrawlMark>  stackMark) ;

/// @brief Method GetTypeCodeImpl, addr 0xa322030, size 0x54, virtual true, abstract: false, final false
inline ::System::TypeCode GetTypeCodeImpl() ;

/// @brief Method GetTypeCodeImplInternal, addr 0xa322084, size 0x4, virtual false, abstract: false, final false
static inline ::System::TypeCode GetTypeCodeImplInternal(::System::Type*  type) ;

/// @brief Method GetTypeFromCLSIDImpl, addr 0xa321fe4, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeFromCLSIDImpl(::System::Guid  clsid, ::StringW  server, bool  throwOnError) ;

/// @brief Method HasElementTypeImpl, addr 0xa31d924, size 0x8, virtual true, abstract: false, final false
inline bool HasElementTypeImpl() ;

/// [DebuggerHidden]
/// [DebuggerStepThrough]
/// @brief Method InvokeMember, addr 0xa31eba8, size 0x1228, virtual true, abstract: false, final false
inline ::System::Object* InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  bindingFlags, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*>  providedArgs, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW>  namedParams) ;

/// @brief Method IsArrayImpl, addr 0xa31d9f8, size 0x8, virtual true, abstract: false, final false
inline bool IsArrayImpl() ;

/// @brief Method IsAssignableFrom, addr 0xa31d440, size 0xd8, virtual true, abstract: false, final false
inline bool IsAssignableFrom(::System::Type*  c) ;

/// @brief Method IsByRefImpl, addr 0xa31d7bc, size 0x8, virtual true, abstract: false, final false
inline bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl, addr 0xa31d7d4, size 0xc, virtual true, abstract: false, final false
inline bool IsCOMObjectImpl() ;

/// @brief Method IsContextfulImpl, addr 0xa31d7b4, size 0x8, virtual true, abstract: false, final false
inline bool IsContextfulImpl() ;

/// @brief Method IsConvertibleToPrimitiveType, addr 0xa32111c, size 0x690, virtual false, abstract: false, final false
static inline ::System::Object* IsConvertibleToPrimitiveType(::System::Object*  value, ::System::Type*  targetType) ;

/// @brief Method IsDefined, addr 0xa320150, size 0x194, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsEnumDefined, addr 0xa31dd98, size 0x4e4, virtual true, abstract: false, final false
inline bool IsEnumDefined(::System::Object*  value) ;

/// @brief Method IsEquivalentTo, addr 0xa31d518, size 0xac, virtual true, abstract: false, final false
inline bool IsEquivalentTo(::System::Type*  other) ;

/// @brief Method IsGenericCOMObjectImpl, addr 0xa3206e8, size 0x8, virtual false, abstract: false, final false
inline bool IsGenericCOMObjectImpl() ;

/// @brief Method IsInstanceOfType, addr 0xa31d438, size 0x8, virtual true, abstract: false, final false
inline bool IsInstanceOfType(::System::Object*  o) ;

/// @brief Method IsPointerImpl, addr 0xa31d7cc, size 0x8, virtual true, abstract: false, final false
inline bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl, addr 0xa31d7c4, size 0x8, virtual true, abstract: false, final false
inline bool IsPrimitiveImpl() ;

/// [ComVisible(true)]
/// @brief Method IsSubclassOf, addr 0xa3222b4, size 0xf4, virtual true, abstract: false, final false
inline bool IsSubclassOf(::System::Type*  type) ;

/// @brief Method IsValueTypeImpl, addr 0xa31d7e0, size 0xd0, virtual true, abstract: false, final false
inline bool IsValueTypeImpl() ;

/// @brief Method MakeArrayType, addr 0xa3217b0, size 0x8, virtual true, abstract: false, final false
inline ::System::Type* MakeArrayType() ;

/// @brief Method MakeArrayType, addr 0xa3217b8, size 0x48, virtual true, abstract: false, final false
inline ::System::Type* MakeArrayType(int32_t  rank) ;

/// @brief Method MakeByRefType, addr 0xa321804, size 0x68, virtual true, abstract: false, final false
inline ::System::Type* MakeByRefType() ;

/// @brief Method MakeGenericType, addr 0xa31ea3c, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* MakeGenericType(::System::Type*  gt, ::ArrayW<::System::Type*>  types) ;

/// @brief Method MakeGenericType, addr 0xa31e560, size 0x4dc, virtual true, abstract: false, final false
inline ::System::Type* MakeGenericType(/* [ParamArray] */ ::ArrayW<::System::Type*>  instantiation) ;

/// @brief Method MakePointerType, addr 0xa321870, size 0xe4, virtual true, abstract: false, final false
inline ::System::Type* MakePointerType() ;

/// @brief Method MakePointerType, addr 0xa32186c, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* MakePointerType(::System::Type*  type) ;

static inline ::System::RuntimeType* New_ctor() ;

/// @brief Method SanityCheckGenericArguments, addr 0xa3191e8, size 0x204, virtual false, abstract: false, final false
static inline void SanityCheckGenericArguments(::ArrayW<::System::RuntimeType*>  genericArguments, ::ArrayW<::System::RuntimeType*>  genericParamters) ;

/// @brief Method SplitName, addr 0xa3193ec, size 0x130, virtual false, abstract: false, final false
static inline void SplitName(::StringW  fullname, ::by_ref<::StringW>  name, ::by_ref<::StringW>  ns) ;

/// @brief Method ThrowIfTypeNeverValidGenericArgument, addr 0xa3190c4, size 0x124, virtual false, abstract: false, final false
static inline void ThrowIfTypeNeverValidGenericArgument(::System::RuntimeType*  type) ;

/// @brief Method ToString, addr 0xa322088, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryConvertToType, addr 0xa320f08, size 0x214, virtual false, abstract: false, final false
inline ::System::Object* TryConvertToType(::System::Object*  value, ::by_ref<bool>  failed) ;

constexpr ::System::Object* const& __cordl_internal_get_GenericCache() const;

constexpr ::System::Object*& __cordl_internal_get_GenericCache() ;

constexpr ::System::Reflection::RuntimeConstructorInfo* const& __cordl_internal_get_m_serializationCtor() const;

constexpr ::System::Reflection::RuntimeConstructorInfo*& __cordl_internal_get_m_serializationCtor() ;

constexpr ::System::MonoTypeInfo* const& __cordl_internal_get_type_info() const;

constexpr ::System::MonoTypeInfo*& __cordl_internal_get_type_info() ;

constexpr void __cordl_internal_set_GenericCache(::System::Object*  value) ;

constexpr void __cordl_internal_set_m_serializationCtor(::System::Reflection::RuntimeConstructorInfo*  value) ;

constexpr void __cordl_internal_set_type_info(::System::MonoTypeInfo*  value) ;

/// @brief Method .ctor, addr 0xa319d84, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getFullName, addr 0xa322094, size 0x4, virtual false, abstract: false, final false
inline ::StringW getFullName(bool  full_name, bool  assembly_qualified) ;

static inline ::System::RuntimeType* getStaticF_DelegateType() ;

static inline ::System::RuntimeType* getStaticF_EnumType() ;

static inline ::System::Func_3<::System::Type*,::ArrayW<::System::Type*>,::System::Type*>* getStaticF_MakeTypeBuilderInstantiation() ;

static inline ::System::RuntimeType* getStaticF_ObjectType() ;

static inline ::System::RuntimeType* getStaticF_StringType() ;

static inline ::System::RuntimeType* getStaticF_ValueType() ;

static inline ::ArrayW<::System::Type*> getStaticF_s_SICtorParamTypes() ;

static inline ::System::RuntimeType* getStaticF_s_typedRef() ;

/// @brief Method get_Assembly, addr 0xa31d408, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::Assembly* get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName, addr 0xa3220ac, size 0xc, virtual true, abstract: false, final false
inline ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType, addr 0xa31d5c4, size 0x4, virtual true, abstract: false, final false
inline ::System::Type* get_BaseType() ;

/// @brief Method get_ContainsGenericParameters, addr 0xa321954, size 0x108, virtual true, abstract: false, final false
inline bool get_ContainsGenericParameters() ;

/// @brief Method get_DeclaringMethod, addr 0xa322098, size 0x4, virtual true, abstract: false, final false
inline ::System::Reflection::MethodBase* get_DeclaringMethod() ;

/// @brief Method get_DeclaringType, addr 0xa3220b8, size 0x4, virtual true, abstract: false, final false
inline ::System::Type* get_DeclaringType() ;

/// @brief Method get_FullName, addr 0xa32216c, size 0xf0, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_GUID, addr 0xa321f38, size 0xac, virtual true, abstract: false, final false
inline ::System::Guid get_GUID() ;

/// @brief Method get_GenericParameterAttributes, addr 0xa31d92c, size 0x80, virtual true, abstract: false, final false
inline ::System::Reflection::GenericParameterAttributes get_GenericParameterAttributes() ;

/// @brief Method get_GenericParameterPosition, addr 0xa31ea50, size 0x80, virtual true, abstract: false, final false
inline int32_t get_GenericParameterPosition() ;

/// @brief Method get_IsConstructedGenericType, addr 0xa31eb60, size 0x48, virtual true, abstract: false, final false
inline bool get_IsConstructedGenericType() ;

/// @brief Method get_IsEnum, addr 0xa31d8b0, size 0x74, virtual true, abstract: false, final false
inline bool get_IsEnum() ;

/// @brief Method get_IsGenericParameter, addr 0xa31ea48, size 0x8, virtual true, abstract: false, final false
inline bool get_IsGenericParameter() ;

/// @brief Method get_IsGenericType, addr 0xa31eb58, size 0x8, virtual true, abstract: false, final false
inline bool get_IsGenericType() ;

/// @brief Method get_IsGenericTypeDefinition, addr 0xa31ea40, size 0x8, virtual true, abstract: false, final false
inline bool get_IsGenericTypeDefinition() ;

/// @brief Method get_IsSZArray, addr 0xa32225c, size 0x58, virtual true, abstract: false, final false
inline bool get_IsSZArray() ;

/// @brief Method get_IsSzArray, addr 0xa31d9f0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsSzArray() ;

/// @brief Method get_MemberType, addr 0xa3204a4, size 0x44, virtual true, abstract: false, final false
inline ::System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method get_MetadataToken, addr 0xa3204f4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_MetadataToken() ;

/// @brief Method get_Module, addr 0xa31d3f8, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_Name, addr 0xa3220bc, size 0x4, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Namespace, addr 0xa3220c0, size 0x4, virtual true, abstract: false, final false
inline ::StringW get_Namespace() ;

/// @brief Method get_ReflectedType, addr 0xa3204e8, size 0xc, virtual true, abstract: false, final false
inline ::System::Type* get_ReflectedType() ;

/// @brief Method get_TypeHandle, addr 0xa31d418, size 0x20, virtual true, abstract: false, final false
inline ::System::RuntimeTypeHandle get_TypeHandle() ;

/// @brief Method get_UnderlyingSystemType, addr 0xa31d7a8, size 0x4, virtual true, abstract: false, final false
inline ::System::Type* get_UnderlyingSystemType() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method make_array_type, addr 0xa3217ac, size 0x4, virtual false, abstract: false, final false
inline ::System::Type* make_array_type(int32_t  rank) ;

/// @brief Method make_byref_type, addr 0xa321800, size 0x4, virtual false, abstract: false, final false
inline ::System::Type* make_byref_type() ;

/// @brief Method op_Equality, addr 0xa30a148, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::System::RuntimeType*  left, ::System::RuntimeType*  right) ;

/// @brief Method op_Inequality, addr 0xa30cb40, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::RuntimeType*  left, ::System::RuntimeType*  right) ;

static inline void setStaticF_DelegateType(::System::RuntimeType*  value) ;

static inline void setStaticF_EnumType(::System::RuntimeType*  value) ;

static inline void setStaticF_MakeTypeBuilderInstantiation(::System::Func_3<::System::Type*,::ArrayW<::System::Type*>,::System::Type*>*  value) ;

static inline void setStaticF_ObjectType(::System::RuntimeType*  value) ;

static inline void setStaticF_StringType(::System::RuntimeType*  value) ;

static inline void setStaticF_ValueType(::System::RuntimeType*  value) ;

static inline void setStaticF_s_SICtorParamTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_s_typedRef(::System::RuntimeType*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeType(RuntimeType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeType(RuntimeType const& ) = delete;

/// @brief Field BinderGetSetField value: I32(3072)
static ::System::Reflection::BindingFlags const BinderGetSetField;

/// @brief Field BinderGetSetProperty value: I32(12288)
static ::System::Reflection::BindingFlags const BinderGetSetProperty;

/// @brief Field BinderNonCreateInstance value: I32(15616)
static ::System::Reflection::BindingFlags const BinderNonCreateInstance;

/// @brief Field BinderNonFieldGetSet value: I32(16773888)
static ::System::Reflection::BindingFlags const BinderNonFieldGetSet;

/// @brief Field BinderSetInvokeField value: I32(2304)
static ::System::Reflection::BindingFlags const BinderSetInvokeField;

/// @brief Field BinderSetInvokeProperty value: I32(8448)
static ::System::Reflection::BindingFlags const BinderSetInvokeProperty;

/// @brief Field ClassicBindingMask value: I32(61696)
static ::System::Reflection::BindingFlags const ClassicBindingMask;

/// @brief Field GenericParameterCountAny offset 0xffffffff size 0x4
static constexpr int32_t  GenericParameterCountAny{static_cast<int32_t>(0xffffffff)};

/// @brief Field InvocationMask value: I32(65280)
static ::System::Reflection::BindingFlags const InvocationMask;

/// @brief Field MemberBindingMask value: I32(255)
static ::System::Reflection::BindingFlags const MemberBindingMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5691};

/// @brief Field type_info, offset: 0x18, size: 0x8, def value: None
 ::System::MonoTypeInfo*  ___type_info;

/// @brief Field GenericCache, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___GenericCache;

/// @brief Field m_serializationCtor, offset: 0x28, size: 0x8, def value: None
 ::System::Reflection::RuntimeConstructorInfo*  ___m_serializationCtor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::RuntimeType, ___type_info) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::RuntimeType, ___GenericCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::RuntimeType, ___m_serializationCtor) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::RuntimeType) == 0x30, "Size mismatch!");

} // namespace end def System
