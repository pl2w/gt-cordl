#pragma once
// IWYU pragma private; include "VYaml/Serialization/EnumAsStringNonGenericCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnumAsStringNonGenericCache)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace VYaml::Serialization {
class EnumAsStringNonGenericCache;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::EnumAsStringNonGenericCache*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::EnumAsStringNonGenericCache*, "VYaml.Serialization", "EnumAsStringNonGenericCache");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.EnumAsStringNonGenericCache
class CORDL_TYPE EnumAsStringNonGenericCache : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::EnumAsStringNonGenericCache*  Instance;

/// @brief Field stringValues, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringValues, put=__cordl_internal_set_stringValues)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>*  stringValues;

/// @brief Field valueFactory, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueFactory, put=__cordl_internal_set_valueFactory)) ::System::Func_3<::System::Object*,::System::Type*,::StringW>*  valueFactory;

/// @brief Method CreateValue, addr 0xb950ebc, size 0x94, virtual false, abstract: false, final false
static inline ::StringW CreateValue(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method GetStringValue, addr 0xb950e10, size 0xac, virtual false, abstract: false, final false
inline ::StringW GetStringValue(::System::Type*  type, ::System::Object*  value) ;

static inline ::VYaml::Serialization::EnumAsStringNonGenericCache* New_ctor() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>* const& __cordl_internal_get_stringValues() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>*& __cordl_internal_get_stringValues() ;

constexpr ::System::Func_3<::System::Object*,::System::Type*,::StringW>* const& __cordl_internal_get_valueFactory() const;

constexpr ::System::Func_3<::System::Object*,::System::Type*,::StringW>*& __cordl_internal_get_valueFactory() ;

constexpr void __cordl_internal_set_stringValues(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>*  value) ;

constexpr void __cordl_internal_set_valueFactory(::System::Func_3<::System::Object*,::System::Type*,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb951000, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::EnumAsStringNonGenericCache* getStaticF_Instance() ;

static inline void setStaticF_Instance(::VYaml::Serialization::EnumAsStringNonGenericCache*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumAsStringNonGenericCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringNonGenericCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumAsStringNonGenericCache(EnumAsStringNonGenericCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumAsStringNonGenericCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumAsStringNonGenericCache(EnumAsStringNonGenericCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28932};

/// @brief Field stringValues, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>*  ___stringValues;

/// @brief Field valueFactory, offset: 0x18, size: 0x8, def value: None
 ::System::Func_3<::System::Object*,::System::Type*,::StringW>*  ___valueFactory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Serialization::EnumAsStringNonGenericCache, ___stringValues) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::EnumAsStringNonGenericCache, ___valueFactory) == 0x18, "Offset mismatch!");

static_assert(sizeof(::VYaml::Serialization::EnumAsStringNonGenericCache) == 0x20, "Size mismatch!");

} // namespace end def VYaml::Serialization
