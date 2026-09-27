#pragma once
// IWYU pragma private; include "VYaml/Serialization/CompositeResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CompositeResolver)
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
namespace VYaml::Serialization {
class IYamlFormatter;
}
// Forward declare root types
namespace VYaml::Serialization {
class CompositeResolver;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::CompositeResolver*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::CompositeResolver*, "VYaml.Serialization", "CompositeResolver");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.CompositeResolver
class CORDL_TYPE CompositeResolver : public ::System::Object {
public:
// Declarations
/// @brief Field formatters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_formatters, put=__cordl_internal_set_formatters)) ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  formatters;

/// @brief Field formattersCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_formattersCache, put=__cordl_internal_set_formattersCache)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>*  formattersCache;

/// @brief Field gate, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Object*  gate;

/// @brief Field resolvers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_resolvers, put=__cordl_internal_set_resolvers)) ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr operator  ::VYaml::Serialization::IYamlFormatterResolver*() noexcept;

/// @brief Method AddFormatter, addr 0xb957f00, size 0x150, virtual false, abstract: false, final false
inline void AddFormatter(::VYaml::Serialization::IYamlFormatter*  formatter) ;

/// @brief Method AddResolver, addr 0xb958050, size 0x150, virtual false, abstract: false, final false
inline void AddResolver(::VYaml::Serialization::IYamlFormatterResolver*  resolver) ;

/// @brief Method Create, addr 0xb957de8, size 0x8c, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::CompositeResolver* Create(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*  formatters) ;

/// @brief Method Create, addr 0xb957bbc, size 0xbc, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::CompositeResolver* Create(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatter*>*  formatters, ::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers) ;

/// @brief Method Create, addr 0xb957e74, size 0x8c, virtual false, abstract: false, final false
static inline ::VYaml::Serialization::CompositeResolver* Create(::System::Collections::Generic::IEnumerable_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers) ;

/// [NullableContext(2)]
/// @brief Method GetFormatter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() ;

static inline ::VYaml::Serialization::CompositeResolver* New_ctor(/* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  formatters, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers) ;

constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>* const& __cordl_internal_get_formatters() const;

constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*& __cordl_internal_get_formatters() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>* const& __cordl_internal_get_formattersCache() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>*& __cordl_internal_get_formattersCache() ;

constexpr ::System::Object* const& __cordl_internal_get_gate() const;

constexpr ::System::Object*& __cordl_internal_get_gate() ;

constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>* const& __cordl_internal_get_resolvers() const;

constexpr ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*& __cordl_internal_get_resolvers() ;

constexpr void __cordl_internal_set_formatters(::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  value) ;

constexpr void __cordl_internal_set_formattersCache(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>*  value) ;

constexpr void __cordl_internal_set_gate(::System::Object*  value) ;

constexpr void __cordl_internal_set_resolvers(::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  value) ;

/// @brief Method .ctor, addr 0xb957c78, size 0x170, virtual false, abstract: false, final false
inline void _ctor(/* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  formatters, /* [Nullable(new[] { 2, 1 })] */ ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  resolvers) ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* i___VYaml__Serialization__IYamlFormatterResolver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CompositeResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CompositeResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CompositeResolver(CompositeResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompositeResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompositeResolver(CompositeResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28995};

/// @brief Field formattersCache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*,::VYaml::Serialization::IYamlFormatter*>*  ___formattersCache;

/// @brief Field formatters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatter*>*  ___formatters;

/// @brief Field resolvers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::VYaml::Serialization::IYamlFormatterResolver*>*  ___resolvers;

/// @brief Field gate, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___gate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Serialization::CompositeResolver, ___formattersCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::CompositeResolver, ___formatters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::CompositeResolver, ___resolvers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VYaml::Serialization::CompositeResolver, ___gate) == 0x28, "Offset mismatch!");

static_assert(sizeof(::VYaml::Serialization::CompositeResolver) == 0x30, "Size mismatch!");

} // namespace end def VYaml::Serialization
