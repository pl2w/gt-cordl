#pragma once
// IWYU pragma private; include "VYaml/Internal/TypeHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeHelper)
namespace System {
class Type;
}
// Forward declare root types
namespace VYaml::Internal {
class TypeHelper;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::TypeHelper*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::TypeHelper*, "VYaml.Internal", "TypeHelper");
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.TypeHelper
class CORDL_TYPE TypeHelper : public ::System::Object {
public:
// Declarations
/// [NullableContext(1)]
/// @brief Method IsAnonymous, addr 0xb96b5ec, size 0x170, virtual false, abstract: false, final false
static inline bool IsAnonymous(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeHelper(TypeHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeHelper(TypeHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::TypeHelper) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
