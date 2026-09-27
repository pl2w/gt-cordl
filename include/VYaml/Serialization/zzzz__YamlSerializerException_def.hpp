#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializerException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(YamlSerializerException)
namespace VYaml::Parser {
struct Marker;
}
// Forward declare root types
namespace VYaml::Serialization {
class YamlSerializerException;
}
// Write type traits
MARK_REF_T(::VYaml::Serialization::YamlSerializerException*);
DEFINE_IL2CPP_CLASS(::VYaml::Serialization::YamlSerializerException*, "VYaml.Serialization", "YamlSerializerException");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Exception
namespace VYaml::Serialization {
// Is value type: false
// CS Name: VYaml.Serialization.YamlSerializerException
class CORDL_TYPE YamlSerializerException : public ::System::Exception {
public:
// Declarations
static inline ::VYaml::Serialization::YamlSerializerException* New_ctor(::VYaml::Parser::Marker  mark, ::StringW  message) ;

static inline ::VYaml::Serialization::YamlSerializerException* New_ctor(::StringW  message) ;

/// [NullableContext(2)]
/// @brief Method ThrowInvalidType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowInvalidType() ;

/// @brief Method ThrowInvalidType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowInvalidType(T  value) ;

/// @brief Method .ctor, addr 0xb958654, size 0xe8, virtual false, abstract: false, final false
inline void _ctor(::VYaml::Parser::Marker  mark, ::StringW  message) ;

/// @brief Method .ctor, addr 0xb94fbc0, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlSerializerException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializerException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlSerializerException(YamlSerializerException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlSerializerException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlSerializerException(YamlSerializerException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Serialization::YamlSerializerException) == 0x90, "Size mismatch!");

} // namespace end def VYaml::Serialization
