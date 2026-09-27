#pragma once
// IWYU pragma private; include "BuildSafe/Reflection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(Reflection_1)
namespace System::Reflection {
class EventInfo;
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
class Type;
}
// Forward declare root types
namespace BuildSafe {
template<typename T>
class Reflection_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::BuildSafe::Reflection_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::BuildSafe::Reflection_1, "BuildSafe", "Reflection`1");
// Dependencies System.Object, System.Reflection.EventInfo, System.Reflection.FieldInfo, System.Reflection.MethodInfo, System.Reflection.PropertyInfo
namespace BuildSafe {
// cpp template
template<typename T>
// Is value type: false
// CS Name: BuildSafe.Reflection`1<T>
class CORDL_TYPE Reflection_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <Type>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Type_k__BackingField, put=setStaticF__Type_k__BackingField)) ::System::Type*  _Type_k__BackingField;

/// @brief Field gCachedType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gCachedType, put=setStaticF_gCachedType)) ::System::Type*  gCachedType;

/// @brief Field gEventsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gEventsCache, put=setStaticF_gEventsCache)) ::ArrayW<::System::Reflection::EventInfo*>  gEventsCache;

/// @brief Field gFieldsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gFieldsCache, put=setStaticF_gFieldsCache)) ::ArrayW<::System::Reflection::FieldInfo*>  gFieldsCache;

/// @brief Field gMethodsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gMethodsCache, put=setStaticF_gMethodsCache)) ::ArrayW<::System::Reflection::MethodInfo*>  gMethodsCache;

/// @brief Field gPropertiesCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gPropertiesCache, put=setStaticF_gPropertiesCache)) ::ArrayW<::System::Reflection::PropertyInfo*>  gPropertiesCache;

/// @brief Method PreFetchEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::EventInfo*> PreFetchEvents() ;

/// @brief Method PreFetchFields, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::FieldInfo*> PreFetchFields() ;

/// @brief Method PreFetchMethods, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::MethodInfo*> PreFetchMethods() ;

/// @brief Method PreFetchProperties, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::PropertyInfo*> PreFetchProperties() ;

static inline ::System::Type* getStaticF__Type_k__BackingField() ;

static inline ::System::Type* getStaticF_gCachedType() ;

static inline ::ArrayW<::System::Reflection::EventInfo*> getStaticF_gEventsCache() ;

static inline ::ArrayW<::System::Reflection::FieldInfo*> getStaticF_gFieldsCache() ;

static inline ::ArrayW<::System::Reflection::MethodInfo*> getStaticF_gMethodsCache() ;

static inline ::ArrayW<::System::Reflection::PropertyInfo*> getStaticF_gPropertiesCache() ;

/// @brief Method get_Events, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::EventInfo*> get_Events() ;

/// @brief Method get_Fields, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::FieldInfo*> get_Fields() ;

/// @brief Method get_Methods, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::MethodInfo*> get_Methods() ;

/// @brief Method get_Properties, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::PropertyInfo*> get_Properties() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Type* get_Type() ;

static inline void setStaticF__Type_k__BackingField(::System::Type*  value) ;

static inline void setStaticF_gCachedType(::System::Type*  value) ;

static inline void setStaticF_gEventsCache(::ArrayW<::System::Reflection::EventInfo*>  value) ;

static inline void setStaticF_gFieldsCache(::ArrayW<::System::Reflection::FieldInfo*>  value) ;

static inline void setStaticF_gMethodsCache(::ArrayW<::System::Reflection::MethodInfo*>  value) ;

static inline void setStaticF_gPropertiesCache(::ArrayW<::System::Reflection::PropertyInfo*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Reflection_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Reflection_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Reflection_1(Reflection_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Reflection_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Reflection_1(Reflection_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4253};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BuildSafe
