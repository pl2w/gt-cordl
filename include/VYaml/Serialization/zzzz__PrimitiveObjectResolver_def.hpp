#pragma once
// IWYU pragma private; include "VYaml/Serialization/PrimitiveObjectResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PrimitiveObjectResolver)
namespace VYaml::Serialization {
class IYamlFormatterResolver;
}
namespace VYaml::Serialization {
template<typename T>
class IYamlFormatter_1;
}
namespace VYaml::Serialization {
template<typename T>
class PrimitiveObjectResolver_FormatterCache_1;
}
// Forward declare root types
namespace VYaml::Serialization {
class PrimitiveObjectResolver;
}
namespace VYaml::Serialization {
template<typename T>
class PrimitiveObjectResolver_FormatterCache_1;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::PrimitiveObjectResolver*);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::PrimitiveObjectResolver*, "VYaml.Serialization", "PrimitiveObjectResolver");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1, "VYaml.Serialization", "PrimitiveObjectResolver/FormatterCache`1");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.PrimitiveObjectResolver
class CORDL_TYPE PrimitiveObjectResolver : public ::System::Object {
public:
// Declarations
template<typename T>
using FormatterCache_1 = ::VYaml::Serialization::PrimitiveObjectResolver_FormatterCache_1<T>;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::PrimitiveObjectResolver*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr operator  ::VYaml::Serialization::IYamlFormatterResolver*() noexcept;

/// [NullableContext(1)]
/// @brief Method GetFormatter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() ;

static inline ::VYaml::Serialization::PrimitiveObjectResolver* New_ctor() ;

/// @brief Method .ctor, addr 0xb9582c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::PrimitiveObjectResolver* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* i___VYaml__Serialization__IYamlFormatterResolver() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::PrimitiveObjectResolver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitiveObjectResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveObjectResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitiveObjectResolver(PrimitiveObjectResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveObjectResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitiveObjectResolver(PrimitiveObjectResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::PrimitiveObjectResolver) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.PrimitiveObjectResolver/FormatterCache`1<T>
class CORDL_TYPE PrimitiveObjectResolver_FormatterCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Formatter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Formatter, put=setStaticF_Formatter)) ::VYaml::Serialization::IYamlFormatter_1<T>*  Formatter;

static inline ::VYaml::Serialization::IYamlFormatter_1<T>* getStaticF_Formatter() ;

static inline void setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitiveObjectResolver_FormatterCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveObjectResolver_FormatterCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitiveObjectResolver_FormatterCache_1(PrimitiveObjectResolver_FormatterCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitiveObjectResolver_FormatterCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitiveObjectResolver_FormatterCache_1(PrimitiveObjectResolver_FormatterCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28999};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
