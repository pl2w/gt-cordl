#pragma once
// IWYU pragma private; include "VYaml/Serialization/StandardResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VYaml/Serialization/zzzz__IYamlFormatterResolver_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(StandardResolver)
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
namespace VYaml::Serialization {
template<typename T>
class StandardResolver_FormatterCache_1;
}
// Forward declare root types
namespace VYaml::Serialization {
class StandardResolver;
}
namespace VYaml::Serialization {
template<typename T>
class StandardResolver_FormatterCache_1;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::StandardResolver*);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::StandardResolver_FormatterCache_1);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::StandardResolver*, "VYaml.Serialization", "StandardResolver");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::StandardResolver_FormatterCache_1, "VYaml.Serialization", "StandardResolver/FormatterCache`1");
// Dependencies System.Object, VYaml.Serialization.IYamlFormatterResolver
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.StandardResolver
class CORDL_TYPE StandardResolver : public ::System::Object {
public:
// Declarations
template<typename T>
using FormatterCache_1 = ::VYaml::Serialization::StandardResolver_FormatterCache_1<T>;

/// @brief Field DefaultResolvers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DefaultResolvers, put=setStaticF_DefaultResolvers)) ::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*>  DefaultResolvers;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::StandardResolver*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr operator  ::VYaml::Serialization::IYamlFormatterResolver*() noexcept;

/// [NullableContext(2)]
/// @brief Method GetFormatter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() ;

static inline ::VYaml::Serialization::StandardResolver* New_ctor() ;

/// @brief Method .ctor, addr 0xb958338, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*> getStaticF_DefaultResolvers() ;

static inline ::VYaml::Serialization::StandardResolver* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* i___VYaml__Serialization__IYamlFormatterResolver() noexcept;

static inline void setStaticF_DefaultResolvers(::ArrayW<::VYaml::Serialization::IYamlFormatterResolver*>  value) ;

static inline void setStaticF_Instance(::VYaml::Serialization::StandardResolver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardResolver(StandardResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardResolver(StandardResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::StandardResolver) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.StandardResolver/FormatterCache`1<T>
class CORDL_TYPE StandardResolver_FormatterCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Formatter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Formatter, put=setStaticF_Formatter)) ::VYaml::Serialization::IYamlFormatter_1<T>*  Formatter;

static inline ::VYaml::Serialization::IYamlFormatter_1<T>* getStaticF_Formatter() ;

static inline void setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardResolver_FormatterCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardResolver_FormatterCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardResolver_FormatterCache_1(StandardResolver_FormatterCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardResolver_FormatterCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardResolver_FormatterCache_1(StandardResolver_FormatterCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
