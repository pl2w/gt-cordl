#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeMethodInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeMethodInfo)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Globalization {
class CultureInfo;
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
class CustomAttributeData;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct PInvokeAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class RuntimeModule;
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
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeMethodInfo;
}
// Write type traits
MARK_REF_T(::System::Reflection::RuntimeMethodInfo*);
DEFINE_IL2CPP_CLASS(::System::Reflection::RuntimeMethodInfo*, "System.Reflection", "RuntimeMethodInfo");
// Dependencies System.IntPtr, System.Reflection.MethodInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeMethodInfo
class CORDL_TYPE RuntimeMethodInfo : public ::System::Reflection::MethodInfo {
public:
// Declarations
 __declspec(property(get=get_Attributes)) ::System::Reflection::MethodAttributes  Attributes;

 __declspec(property(get=get_BindingFlags)) ::System::Reflection::BindingFlags  BindingFlags;

 __declspec(property(get=get_CallingConvention)) ::System::Reflection::CallingConventions  CallingConvention;

 __declspec(property(get=get_ContainsGenericParameters)) bool  ContainsGenericParameters;

 __declspec(property(get=get_DeclaringType)) ::System::Type*  DeclaringType;

 __declspec(property(get=get_IsGenericMethod)) bool  IsGenericMethod;

 __declspec(property(get=get_IsGenericMethodDefinition)) bool  IsGenericMethodDefinition;

 __declspec(property(get=get_IsSecurityCritical)) bool  IsSecurityCritical;

 __declspec(property(get=get_MetadataToken)) int32_t  MetadataToken;

 __declspec(property(get=get_MethodHandle)) ::System::RuntimeMethodHandle  MethodHandle;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ReflectedType)) ::System::Type*  ReflectedType;

 __declspec(property(get=get_ReflectedTypeInternal)) ::System::RuntimeType*  ReflectedTypeInternal;

 __declspec(property(get=get_ReturnParameter)) ::System::Reflection::ParameterInfo*  ReturnParameter;

 __declspec(property(get=get_ReturnType)) ::System::Type*  ReturnType;

/// @brief Field mhandle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mhandle, put=__cordl_internal_set_mhandle)) ::System::IntPtr  mhandle;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field reftype, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_reftype, put=__cordl_internal_set_reftype)) ::System::Type*  reftype;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method ConvertValues, addr 0xa2046b8, size 0x2d0, virtual false, abstract: false, final false
static inline void ConvertValues(::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*>  args, ::ArrayW<::System::Reflection::ParameterInfo*>  pinfo, ::System::Globalization::CultureInfo*  culture, ::System::Reflection::BindingFlags  invokeAttr) ;

/// @brief Method CreateDelegate, addr 0xa203fe8, size 0x14, virtual true, abstract: false, final false
inline ::System::Delegate* CreateDelegate(::System::Type*  delegateType) ;

/// @brief Method CreateDelegate, addr 0xa203ffc, size 0x18, virtual true, abstract: false, final false
inline ::System::Delegate* CreateDelegate(::System::Type*  delegateType, ::System::Object*  target) ;

/// @brief Method FormatNameAndSig, addr 0xa203c94, size 0x160, virtual true, abstract: false, final false
inline ::StringW FormatNameAndSig(bool  serialization) ;

/// @brief Method GetBaseDefinition, addr 0xa204294, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetBaseDefinition() ;

/// @brief Method GetBaseMethod, addr 0xa20429c, size 0x8, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetBaseMethod() ;

/// @brief Method GetCustomAttributes, addr 0xa204ae4, size 0x70, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0xa204a7c, size 0x68, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetCustomAttributesData, addr 0xa205a14, size 0x4, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData() ;

/// @brief Method GetDllImportAttributeData, addr 0xa204eac, size 0x6f8, virtual false, abstract: false, final false
inline ::System::Reflection::CustomAttributeData* GetDllImportAttributeData() ;

/// @brief Method GetGenericArguments, addr 0xa2058d4, size 0x4, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*> GetGenericArguments() ;

/// @brief Method GetGenericMethodDefinition, addr 0xa2058dc, size 0x5c, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition() ;

/// @brief Method GetGenericMethodDefinition_impl, addr 0xa2058d8, size 0x4, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl() ;

/// @brief Method GetMethodFromHandleInternalType, addr 0xa204278, size 0x8, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType(::System::IntPtr  method_handle, ::System::IntPtr  type_handle) ;

/// @brief Method GetMethodFromHandleInternalType_native, addr 0xa20426c, size 0x4, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(::System::IntPtr  method_handle, ::System::IntPtr  type_handle, bool  genericCheck) ;

/// @brief Method GetMethodFromHandleNoGenericCheck, addr 0xa204260, size 0xc, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle  handle) ;

/// @brief Method GetMethodFromHandleNoGenericCheck, addr 0xa204270, size 0x8, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(::System::RuntimeMethodHandle  handle, ::System::RuntimeTypeHandle  reflectedType) ;

/// @brief Method GetMethodImplementationFlags, addr 0xa2042d8, size 0x2c, virtual true, abstract: false, final false
inline ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method GetObjectData, addr 0xa2040a4, size 0x120, virtual true, abstract: false, final true
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetPInvoke, addr 0xa204b54, size 0x4, virtual false, abstract: false, final false
inline void GetPInvoke(::by_ref<::System::Reflection::PInvokeAttributes>  flags, ::by_ref<::StringW>  entryPoint, ::by_ref<::StringW>  dllName) ;

/// @brief Method GetParameters, addr 0xa204304, size 0x90, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ParameterInfo*> GetParameters() ;

/// @brief Method GetParametersCount, addr 0xa2043a0, size 0x24, virtual true, abstract: false, final false
inline int32_t GetParametersCount() ;

/// @brief Method GetParametersInternal, addr 0xa204394, size 0xc, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersInternal() ;

/// @brief Method GetPseudoCustomAttributes, addr 0xa204b58, size 0x180, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> GetPseudoCustomAttributes() ;

/// @brief Method GetPseudoCustomAttributesData, addr 0xa204cd8, size 0x1d4, virtual false, abstract: false, final false
inline ::ArrayW<::System::Reflection::CustomAttributeData*> GetPseudoCustomAttributesData() ;

/// @brief Method GetRuntimeModule, addr 0xa203b84, size 0x8c, virtual false, abstract: false, final false
inline ::System::Reflection::RuntimeModule* GetRuntimeModule() ;

/// @brief Method InternalInvoke, addr 0xa2043c4, size 0x4, virtual false, abstract: false, final false
inline ::System::Object* InternalInvoke(::System::Object*  obj, ::ArrayW<::System::Object*>  parameters, ::by_ref<::System::Exception*>  exc) ;

/// [DebuggerHidden]
/// [DebuggerStepThrough]
/// @brief Method Invoke, addr 0xa2043c8, size 0x2f0, virtual true, abstract: false, final false
inline ::System::Object* Invoke(::System::Object*  obj, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Object*>  parameters, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method IsDefined, addr 0xa204a0c, size 0x70, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method MakeGenericMethod, addr 0xa2055a4, size 0x32c, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* MakeGenericMethod(/* [ParamArray] */ ::ArrayW<::System::Type*>  methodInstantiation) ;

/// @brief Method MakeGenericMethod_impl, addr 0xa2058d0, size 0x4, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* MakeGenericMethod_impl(::ArrayW<::System::Type*>  types) ;

static inline ::System::Reflection::RuntimeMethodInfo* New_ctor() ;

/// @brief Method SerializationToString, addr 0xa2041c4, size 0x9c, virtual false, abstract: false, final false
inline ::StringW SerializationToString() ;

/// @brief Method ToString, addr 0xa204014, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::IntPtr const& __cordl_internal_get_mhandle() const;

constexpr ::System::IntPtr& __cordl_internal_get_mhandle() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::System::Type* const& __cordl_internal_get_reftype() const;

constexpr ::System::Type*& __cordl_internal_get_reftype() ;

constexpr void __cordl_internal_set_mhandle(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_reftype(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xa204280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Attributes, addr 0xa204990, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_BindingFlags, addr 0xa203b78, size 0x8, virtual false, abstract: false, final false
inline ::System::Reflection::BindingFlags get_BindingFlags() ;

/// @brief Method get_CallingConvention, addr 0xa204998, size 0x2c, virtual true, abstract: false, final false
inline ::System::Reflection::CallingConventions get_CallingConvention() ;

/// @brief Method get_ContainsGenericParameters, addr 0xa205940, size 0xd4, virtual true, abstract: false, final false
inline bool get_ContainsGenericParameters() ;

/// @brief Method get_DeclaringType, addr 0xa2049cc, size 0x2c, virtual true, abstract: false, final false
inline ::System::Type* get_DeclaringType() ;

/// @brief Method get_IsGenericMethod, addr 0xa20593c, size 0x4, virtual true, abstract: false, final false
inline bool get_IsGenericMethod() ;

/// @brief Method get_IsGenericMethodDefinition, addr 0xa205938, size 0x4, virtual true, abstract: false, final false
inline bool get_IsGenericMethodDefinition() ;

/// @brief Method get_IsSecurityCritical, addr 0xa205a20, size 0x8, virtual true, abstract: false, final false
inline bool get_IsSecurityCritical() ;

/// @brief Method get_MetadataToken, addr 0xa2042d4, size 0x4, virtual true, abstract: false, final false
inline int32_t get_MetadataToken() ;

/// @brief Method get_MethodHandle, addr 0xa204988, size 0x8, virtual true, abstract: false, final false
inline ::System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_Module, addr 0xa203b80, size 0x4, virtual true, abstract: false, final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_Name, addr 0xa2049f8, size 0x14, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_ReflectedType, addr 0xa2049c4, size 0x8, virtual true, abstract: false, final false
inline ::System::Type* get_ReflectedType() ;

/// @brief Method get_ReflectedTypeInternal, addr 0xa203c10, size 0x84, virtual false, abstract: false, final false
inline ::System::RuntimeType* get_ReflectedTypeInternal() ;

/// @brief Method get_ReturnParameter, addr 0xa2042a4, size 0x4, virtual true, abstract: false, final false
inline ::System::Reflection::ParameterInfo* get_ReturnParameter() ;

/// @brief Method get_ReturnType, addr 0xa2042a8, size 0x2c, virtual true, abstract: false, final false
inline ::System::Type* get_ReturnType() ;

/// @brief Method get_base_method, addr 0xa20428c, size 0x4, virtual false, abstract: false, final false
static inline ::System::Reflection::RuntimeMethodInfo* get_base_method(::System::Reflection::RuntimeMethodInfo*  method, bool  definition) ;

/// @brief Method get_core_clr_security_level, addr 0xa205a18, size 0x8, virtual false, abstract: false, final false
static inline int32_t get_core_clr_security_level() ;

/// @brief Method get_metadata_token, addr 0xa204290, size 0x4, virtual false, abstract: false, final false
static inline int32_t get_metadata_token(::System::Reflection::RuntimeMethodInfo*  method) ;

/// @brief Method get_name, addr 0xa204288, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_name(::System::Reflection::MethodBase*  method) ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeMethodInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeMethodInfo(RuntimeMethodInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeMethodInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeMethodInfo(RuntimeMethodInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6675};

/// @brief Field mhandle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___mhandle;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field reftype, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___reftype;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___mhandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeMethodInfo, ___reftype) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Reflection::RuntimeMethodInfo) == 0x28, "Size mismatch!");

} // namespace end def System::Reflection
