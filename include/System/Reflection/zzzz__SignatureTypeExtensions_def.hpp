#pragma once
// IWYU pragma private; include "System/Reflection/SignatureTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureTypeExtensions)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class SignatureType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class SignatureTypeExtensions;
}
// Write type traits
MARK_REF_T(::System::Reflection::SignatureTypeExtensions*);
DEFINE_IL2CPP_CLASS(::System::Reflection::SignatureTypeExtensions*, "System.Reflection", "SignatureTypeExtensions");
// [Extension]
// Dependencies System.Object
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.SignatureTypeExtensions
class CORDL_TYPE SignatureTypeExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method MatchesExactly, addr 0xa1fa380, size 0x3a4, virtual false, abstract: false, final false
static inline bool MatchesExactly(::System::Reflection::SignatureType*  pattern, ::System::Type*  actual) ;

/// [Extension]
/// @brief Method MatchesParameterTypeExactly, addr 0xa1fa2c4, size 0xbc, virtual false, abstract: false, final false
static inline bool MatchesParameterTypeExactly(::System::Type*  pattern, ::System::Reflection::ParameterInfo*  parameter) ;

/// [Extension]
/// @brief Method TryMakeArrayType, addr 0xa1fab38, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Type* TryMakeArrayType(::System::Type*  type) ;

/// [Extension]
/// @brief Method TryMakeArrayType, addr 0xa1fabd4, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Type* TryMakeArrayType(::System::Type*  type, int32_t  rank) ;

/// [Extension]
/// @brief Method TryMakeByRefType, addr 0xa1fac70, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Type* TryMakeByRefType(::System::Type*  type) ;

/// [Extension]
/// @brief Method TryMakeGenericType, addr 0xa1fada8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Type* TryMakeGenericType(::System::Type*  type, ::ArrayW<::System::Type*>  instantiation) ;

/// [Extension]
/// @brief Method TryMakePointerType, addr 0xa1fad0c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Type* TryMakePointerType(::System::Type*  type) ;

/// [Extension]
/// @brief Method TryResolve, addr 0xa1fa75c, size 0x3dc, virtual false, abstract: false, final false
static inline ::System::Type* TryResolve(::System::Reflection::SignatureType*  signatureType, ::ArrayW<::System::Type*>  genericMethodParameters) ;

/// [Extension]
/// @brief Method TryResolveAgainstGenericMethod, addr 0xa1fa724, size 0x38, virtual false, abstract: false, final false
static inline ::System::Type* TryResolveAgainstGenericMethod(::System::Reflection::SignatureType*  signatureType, ::System::Reflection::MethodInfo*  genericMethod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignatureTypeExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignatureTypeExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureTypeExtensions(SignatureTypeExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureTypeExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureTypeExtensions(SignatureTypeExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6645};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Reflection::SignatureTypeExtensions) == 0x10, "Size mismatch!");

} // namespace end def System::Reflection
