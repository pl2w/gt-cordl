#pragma once
// IWYU pragma private; include "VYaml/Serialization/BuiltinResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BuiltinResolver)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace VYaml::Serialization {
template<typename T>
class BuiltinResolver_FormatterCache_1;
}
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
// Forward declare root types
namespace VYaml::Serialization {
class BuiltinResolver;
}
namespace VYaml::Serialization {
template<typename T>
class BuiltinResolver_FormatterCache_1;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::BuiltinResolver*);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::BuiltinResolver_FormatterCache_1);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::BuiltinResolver*, "VYaml.Serialization", "BuiltinResolver");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::BuiltinResolver_FormatterCache_1, "VYaml.Serialization", "BuiltinResolver/FormatterCache`1");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.BuiltinResolver
class CORDL_TYPE BuiltinResolver : public ::System::Object {
public:
// Declarations
template<typename T>
using FormatterCache_1 = ::VYaml::Serialization::BuiltinResolver_FormatterCache_1<T>;

/// @brief Field FormatterMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FormatterMap, put=setStaticF_FormatterMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*  FormatterMap;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::BuiltinResolver*  Instance;

/// @brief Field KnownGenericTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_KnownGenericTypes, put=setStaticF_KnownGenericTypes)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  KnownGenericTypes;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr operator  ::VYaml::Serialization::IYamlFormatterResolver*() noexcept;

/// [NullableContext(2)]
/// @brief Method GetFormatter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() ;

static inline ::VYaml::Serialization::BuiltinResolver* New_ctor() ;

/// @brief Method TryCreateGenericFormatter, addr 0xb9556c0, size 0x250, virtual false, abstract: false, final false
static inline ::System::Object* TryCreateGenericFormatter(::System::Type*  type) ;

/// @brief Method TryCreateGenericFormatterType, addr 0xb955910, size 0x130, virtual false, abstract: false, final false
static inline ::System::Type* TryCreateGenericFormatterType(::System::Type*  type, ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Type*>*  knownTypes) ;

/// @brief Method .ctor, addr 0xb955a40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>* getStaticF_FormatterMap() ;

static inline ::VYaml::Serialization::BuiltinResolver* getStaticF_Instance() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>* getStaticF_KnownGenericTypes() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* i___VYaml__Serialization__IYamlFormatterResolver() noexcept;

static inline void setStaticF_FormatterMap(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Object*>*  value) ;

static inline void setStaticF_Instance(::VYaml::Serialization::BuiltinResolver*  value) ;

static inline void setStaticF_KnownGenericTypes(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Type*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuiltinResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuiltinResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuiltinResolver(BuiltinResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuiltinResolver(BuiltinResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::BuiltinResolver) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
// [NullableContext(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.BuiltinResolver/FormatterCache`1<T>
class CORDL_TYPE BuiltinResolver_FormatterCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Formatter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Formatter, put=setStaticF_Formatter)) ::VYaml::Serialization::IYamlFormatter_1<T>*  Formatter;

static inline ::VYaml::Serialization::IYamlFormatter_1<T>* getStaticF_Formatter() ;

static inline void setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuiltinResolver_FormatterCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuiltinResolver_FormatterCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuiltinResolver_FormatterCache_1(BuiltinResolver_FormatterCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuiltinResolver_FormatterCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuiltinResolver_FormatterCache_1(BuiltinResolver_FormatterCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
