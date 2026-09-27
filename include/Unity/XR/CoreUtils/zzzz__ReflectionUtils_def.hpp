#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ReflectionUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReflectionUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class ReflectionUtils;
}
// Write type traits
MARK_REF_T(::Unity::XR::CoreUtils::ReflectionUtils*);
DEFINE_IL2CPP_CLASS(::Unity::XR::CoreUtils::ReflectionUtils*, "Unity.XR.CoreUtils", "ReflectionUtils");
// Dependencies System.Object, System.Reflection.Assembly
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: Unity.XR.CoreUtils.ReflectionUtils
class CORDL_TYPE ReflectionUtils : public ::System::Object {
public:
// Declarations
/// @brief Field s_Assemblies, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Assemblies, put=setStaticF_s_Assemblies)) ::ArrayW<::System::Reflection::Assembly*>  s_Assemblies;

/// @brief Field s_AssemblyTypeMaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_AssemblyTypeMaps, put=setStaticF_s_AssemblyTypeMaps)) ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*  s_AssemblyTypeMaps;

/// @brief Field s_TypesPerAssembly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TypesPerAssembly, put=setStaticF_s_TypesPerAssembly)) ::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*  s_TypesPerAssembly;

/// @brief Method FindType, addr 0xb3f925c, size 0x1b8, virtual false, abstract: false, final false
static inline ::System::Type* FindType(::System::Func_2<::System::Type*,bool>*  predicate) ;

/// @brief Method FindTypeByFullName, addr 0xb3f9414, size 0x168, virtual false, abstract: false, final false
static inline ::System::Type* FindTypeByFullName(::StringW  fullName) ;

/// @brief Method FindTypeInAssemblyByFullName, addr 0xb3f9b94, size 0x120, virtual false, abstract: false, final false
static inline ::System::Type* FindTypeInAssemblyByFullName(::StringW  assemblyName, ::StringW  typeName) ;

/// @brief Method FindTypesBatch, addr 0xb3f957c, size 0x270, virtual false, abstract: false, final false
static inline void FindTypesBatch(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*,bool>*>*  predicates, ::System::Collections::Generic::List_1<::System::Type*>*  resultList) ;

/// @brief Method FindTypesByFullNameBatch, addr 0xb3f97ec, size 0x3a8, virtual false, abstract: false, final false
static inline void FindTypesByFullNameBatch(::System::Collections::Generic::List_1<::StringW>*  typeNames, ::System::Collections::Generic::List_1<::System::Type*>*  resultList) ;

/// @brief Method ForEachAssembly, addr 0xb3f9154, size 0x108, virtual false, abstract: false, final false
static inline void ForEachAssembly(::System::Action_1<::System::Reflection::Assembly*>*  callback) ;

/// @brief Method ForEachType, addr 0xb3f0afc, size 0x190, virtual false, abstract: false, final false
static inline void ForEachType(::System::Action_1<::System::Type*>*  callback) ;

/// @brief Method GetCachedAssemblies, addr 0xb3f8aa4, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::Assembly*> GetCachedAssemblies() ;

/// @brief Method GetCachedAssemblyTypeMaps, addr 0xb3f8d5c, size 0x3f4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>* GetCachedAssemblyTypeMaps() ;

/// @brief Method GetCachedTypesPerAssembly, addr 0xb3f8b2c, size 0x230, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>* GetCachedTypesPerAssembly() ;

/// @brief Method NicifyVariableName, addr 0xb3f9cb4, size 0x1dc, virtual false, abstract: false, final false
static inline ::StringW NicifyVariableName(::StringW  name) ;

/// @brief Method PreWarmTypeCache, addr 0xb3f9150, size 0x4, virtual false, abstract: false, final false
static inline void PreWarmTypeCache() ;

static inline ::ArrayW<::System::Reflection::Assembly*> getStaticF_s_Assemblies() ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>* getStaticF_s_AssemblyTypeMaps() ;

static inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>* getStaticF_s_TypesPerAssembly() ;

static inline void setStaticF_s_Assemblies(::ArrayW<::System::Reflection::Assembly*>  value) ;

static inline void setStaticF_s_AssemblyTypeMaps(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>*  value) ;

static inline void setStaticF_s_TypesPerAssembly(::System::Collections::Generic::List_1<::ArrayW<::System::Type*>>*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::XR::CoreUtils::ReflectionUtils) == 0x10, "Size mismatch!");

} // namespace end def Unity::XR::CoreUtils
