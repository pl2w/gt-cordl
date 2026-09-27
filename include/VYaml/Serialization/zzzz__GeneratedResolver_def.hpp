#pragma once
// IWYU pragma private; include "VYaml/Serialization/GeneratedResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GeneratedResolver)
namespace System {
class Type;
}
namespace VYaml::Serialization {
template<typename T>
class GeneratedResolver_Cache_1;
}
namespace VYaml::Serialization {
template<typename T>
class GeneratedResolver_Check_1;
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
class GeneratedResolver;
}
namespace VYaml::Serialization {
template<typename T>
class GeneratedResolver_Cache_1;
}
namespace VYaml::Serialization {
template<typename T>
class GeneratedResolver_Check_1;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::GeneratedResolver*);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::GeneratedResolver_Cache_1);
MARK_GEN_REF_T_PTR(::VYaml::Serialization::GeneratedResolver_Check_1);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::GeneratedResolver*, "VYaml.Serialization", "GeneratedResolver");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::GeneratedResolver_Cache_1, "VYaml.Serialization", "GeneratedResolver/Cache`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Serialization::GeneratedResolver_Check_1, "VYaml.Serialization", "GeneratedResolver/Check`1");
// Dependencies System.Object
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.GeneratedResolver
class CORDL_TYPE GeneratedResolver : public ::System::Object {
public:
// Declarations
template<typename T>
using Cache_1 = ::VYaml::Serialization::GeneratedResolver_Cache_1<T>;

template<typename T>
using Check_1 = ::VYaml::Serialization::GeneratedResolver_Check_1<T>;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::VYaml::Serialization::GeneratedResolver*  Instance;

/// @brief Convert operator to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr operator  ::VYaml::Serialization::IYamlFormatterResolver*() noexcept;

/// [NullableContext(2)]
/// @brief Method GetFormatter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline ::VYaml::Serialization::IYamlFormatter_1<T>* GetFormatter() ;

static inline ::VYaml::Serialization::GeneratedResolver* New_ctor() ;

/// [NullableContext(1)]
/// [Preserve]
/// @brief Method Register, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Register(::VYaml::Serialization::IYamlFormatter_1<T>*  formatter) ;

/// [NullableContext(1)]
/// @brief Method TryInvokeRegisterYamlFormatter, addr 0xb9581a0, size 0xb8, virtual false, abstract: false, final false
static inline bool TryInvokeRegisterYamlFormatter(::System::Type*  type) ;

/// @brief Method .ctor, addr 0xb958258, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::VYaml::Serialization::GeneratedResolver* getStaticF_Instance() ;

/// @brief Convert to "::VYaml::Serialization::IYamlFormatterResolver"
constexpr ::VYaml::Serialization::IYamlFormatterResolver* i___VYaml__Serialization__IYamlFormatterResolver() noexcept;

static inline void setStaticF_Instance(::VYaml::Serialization::GeneratedResolver*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeneratedResolver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeneratedResolver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneratedResolver(GeneratedResolver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneratedResolver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneratedResolver(GeneratedResolver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28998};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::GeneratedResolver) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Serialization
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.GeneratedResolver/Cache`1<T>
class CORDL_TYPE GeneratedResolver_Cache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Formatter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Formatter, put=setStaticF_Formatter)) ::VYaml::Serialization::IYamlFormatter_1<T>*  Formatter;

static inline ::VYaml::Serialization::IYamlFormatter_1<T>* getStaticF_Formatter() ;

static inline void setStaticF_Formatter(::VYaml::Serialization::IYamlFormatter_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeneratedResolver_Cache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeneratedResolver_Cache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneratedResolver_Cache_1(GeneratedResolver_Cache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneratedResolver_Cache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneratedResolver_Cache_1(GeneratedResolver_Cache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28997};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
// Dependencies System.Object
namespace VYaml::Serialization {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Serialization.GeneratedResolver/Check`1<T>
class CORDL_TYPE GeneratedResolver_Check_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Registered, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_Registered, put=setStaticF_Registered)) bool  Registered;

static inline bool getStaticF_Registered() ;

static inline void setStaticF_Registered(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeneratedResolver_Check_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeneratedResolver_Check_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeneratedResolver_Check_1(GeneratedResolver_Check_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeneratedResolver_Check_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeneratedResolver_Check_1(GeneratedResolver_Check_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Serialization
