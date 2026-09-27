#pragma once
// IWYU pragma private; include "PlayFab/Json/PocoJsonSerializerStrategy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PocoJsonSerializerStrategy)
namespace PlayFab::Json {
class IJsonSerializerStrategy;
}
namespace PlayFab::Json {
class JsonProperty;
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
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Enum;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayFab::Json {
class PocoJsonSerializerStrategy;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::PocoJsonSerializerStrategy*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::PocoJsonSerializerStrategy*, "PlayFab.Json", "PocoJsonSerializerStrategy");
// [GeneratedCode("simple-json", "1.0.0")]
// Dependencies System.Object, System.Type
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.PocoJsonSerializerStrategy
class CORDL_TYPE PocoJsonSerializerStrategy : public ::System::Object {
public:
// Declarations
/// @brief Field ArrayConstructorParameterTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ArrayConstructorParameterTypes, put=setStaticF_ArrayConstructorParameterTypes)) ::ArrayW<::System::Type*>  ArrayConstructorParameterTypes;

/// @brief Field ConstructorCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConstructorCache, put=__cordl_internal_set_ConstructorCache)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>*  ConstructorCache;

/// @brief Field EmptyTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyTypes, put=setStaticF_EmptyTypes)) ::ArrayW<::System::Type*>  EmptyTypes;

/// @brief Field GetCache, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_GetCache, put=__cordl_internal_set_GetCache)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>*  GetCache;

/// @brief Field Iso8601Format, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Iso8601Format, put=setStaticF_Iso8601Format)) ::ArrayW<::StringW>  Iso8601Format;

/// @brief Field SetCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SetCache, put=__cordl_internal_set_SetCache)) ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>*  SetCache;

/// @brief Convert operator to "::PlayFab::Json::IJsonSerializerStrategy"
constexpr operator  ::PlayFab::Json::IJsonSerializerStrategy*() noexcept;

/// @brief Method ContructorDelegateFactory, addr 0xa83b498, size 0xbc, virtual true, abstract: false, final false
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* ContructorDelegateFactory(::System::Type*  key) ;

/// @brief Method DeserializeObject, addr 0xa83c7bc, size 0x17cc, virtual true, abstract: false, final false
inline ::System::Object* DeserializeObject(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method GetterValueFactory, addr 0xa83b5b8, size 0x778, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>* GetterValueFactory(::System::Type*  type) ;

/// @brief Method MapClrMemberNameToJsonFieldName, addr 0xa83b1a0, size 0x158, virtual true, abstract: false, final false
inline ::StringW MapClrMemberNameToJsonFieldName(::System::Reflection::MemberInfo*  memberInfo) ;

/// @brief Method MapClrMemberNameToJsonFieldName, addr 0xa83b2f8, size 0x1a0, virtual true, abstract: false, final false
inline void MapClrMemberNameToJsonFieldName(::System::Reflection::MemberInfo*  memberInfo, ::by_ref<::StringW>  jsonName, ::by_ref<::PlayFab::Json::JsonProperty*>  jsonProp) ;

static inline ::PlayFab::Json::PocoJsonSerializerStrategy* New_ctor() ;

/// @brief Method SerializeEnum, addr 0xa83e92c, size 0xb4, virtual true, abstract: false, final false
inline ::System::Object* SerializeEnum(::System::Enum*  p) ;

/// @brief Method SetterValueFactory, addr 0xa83be38, size 0x860, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>* SetterValueFactory(::System::Type*  type) ;

/// @brief Method TrySerializeKnownTypes, addr 0xa83e9e0, size 0x314, virtual true, abstract: false, final false
inline bool TrySerializeKnownTypes(::System::Object*  input, ::by_ref<::System::Object*>  output) ;

/// @brief Method TrySerializeNonPrimitiveObject, addr 0xa83c760, size 0x5c, virtual true, abstract: false, final false
inline bool TrySerializeNonPrimitiveObject(::System::Object*  input, ::by_ref<::System::Object*>  output) ;

/// @brief Method TrySerializeUnknownTypes, addr 0xa83ecf4, size 0x61c, virtual true, abstract: false, final false
inline bool TrySerializeUnknownTypes(::System::Object*  input, ::by_ref<::System::Object*>  output) ;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>* const& __cordl_internal_get_ConstructorCache() const;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>*& __cordl_internal_get_ConstructorCache() ;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>* const& __cordl_internal_get_GetCache() const;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>*& __cordl_internal_get_GetCache() ;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>* const& __cordl_internal_get_SetCache() const;

constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>*& __cordl_internal_get_SetCache() ;

constexpr void __cordl_internal_set_ConstructorCache(::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>*  value) ;

constexpr void __cordl_internal_set_GetCache(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>*  value) ;

constexpr void __cordl_internal_set_SetCache(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>*  value) ;

/// @brief Method .ctor, addr 0xa83afb8, size 0x1e8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Type*> getStaticF_ArrayConstructorParameterTypes() ;

static inline ::ArrayW<::System::Type*> getStaticF_EmptyTypes() ;

static inline ::ArrayW<::StringW> getStaticF_Iso8601Format() ;

/// @brief Convert to "::PlayFab::Json::IJsonSerializerStrategy"
constexpr ::PlayFab::Json::IJsonSerializerStrategy* i___PlayFab__Json__IJsonSerializerStrategy() noexcept;

static inline void setStaticF_ArrayConstructorParameterTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_EmptyTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_Iso8601Format(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PocoJsonSerializerStrategy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PocoJsonSerializerStrategy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PocoJsonSerializerStrategy(PocoJsonSerializerStrategy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PocoJsonSerializerStrategy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PocoJsonSerializerStrategy(PocoJsonSerializerStrategy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19545};

/// @brief Field ConstructorCache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>*  ___ConstructorCache;

/// @brief Field GetCache, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>*  ___GetCache;

/// @brief Field SetCache, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>*  ___SetCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::Json::PocoJsonSerializerStrategy, ___ConstructorCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Json::PocoJsonSerializerStrategy, ___GetCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::Json::PocoJsonSerializerStrategy, ___SetCache) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::Json::PocoJsonSerializerStrategy) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::Json
