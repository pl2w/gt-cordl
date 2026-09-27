#pragma once
// IWYU pragma private; include "VYaml/Internal/KeyNameMutator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(KeyNameMutator)
namespace VYaml::Annotations {
struct NamingConvention;
}
// Forward declare root types
namespace VYaml::Internal {
class KeyNameMutator;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::KeyNameMutator*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::KeyNameMutator*, "VYaml.Internal", "KeyNameMutator");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.KeyNameMutator
class CORDL_TYPE KeyNameMutator : public ::System::Object {
public:
// Declarations
/// @brief Method Mutate, addr 0xb950f50, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Mutate(::StringW  s, ::VYaml::Annotations::NamingConvention  namingConvention) ;

/// @brief Method ToLowerCamelCase, addr 0xb9674ac, size 0x214, virtual false, abstract: false, final false
static inline ::StringW ToLowerCamelCase(::StringW  s) ;

/// @brief Method ToSnakeCase, addr 0xb9676c0, size 0x310, virtual false, abstract: false, final false
static inline ::StringW ToSnakeCase(::StringW  s, char16_t  separator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KeyNameMutator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KeyNameMutator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyNameMutator(KeyNameMutator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyNameMutator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyNameMutator(KeyNameMutator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29030};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::KeyNameMutator) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
