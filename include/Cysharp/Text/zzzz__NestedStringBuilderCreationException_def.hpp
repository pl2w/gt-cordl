#pragma once
// IWYU pragma private; include "Cysharp/Text/NestedStringBuilderCreationException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NestedStringBuilderCreationException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Text {
class NestedStringBuilderCreationException;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::NestedStringBuilderCreationException*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::NestedStringBuilderCreationException*, "Cysharp.Text", "NestedStringBuilderCreationException");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.InvalidOperationException
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.NestedStringBuilderCreationException
class CORDL_TYPE NestedStringBuilderCreationException : public ::System::InvalidOperationException {
public:
// Declarations
static inline ::Cysharp::Text::NestedStringBuilderCreationException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

static inline ::Cysharp::Text::NestedStringBuilderCreationException* New_ctor(::StringW  typeName, ::StringW  extraMessage) ;

/// @brief Method .ctor, addr 0xb9aae40, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xb9aadb0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  typeName, ::StringW  extraMessage) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NestedStringBuilderCreationException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NestedStringBuilderCreationException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NestedStringBuilderCreationException(NestedStringBuilderCreationException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NestedStringBuilderCreationException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NestedStringBuilderCreationException(NestedStringBuilderCreationException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::NestedStringBuilderCreationException) == 0x90, "Size mismatch!");

} // namespace end def Cysharp::Text
