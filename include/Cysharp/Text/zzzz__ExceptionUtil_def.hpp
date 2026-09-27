#pragma once
// IWYU pragma private; include "Cysharp/Text/ExceptionUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ExceptionUtil)
// Forward declare root types
namespace Cysharp::Text {
class ExceptionUtil;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::ExceptionUtil*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::ExceptionUtil*, "Cysharp.Text", "ExceptionUtil");
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.ExceptionUtil
class CORDL_TYPE ExceptionUtil : public ::System::Object {
public:
// Declarations
/// [NullableContext(1)]
/// @brief Method ThrowArgumentException, addr 0xb9a98b4, size 0x58, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::StringW  paramName) ;

/// @brief Method ThrowFormatError, addr 0xb9a9958, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowFormatError() ;

/// @brief Method ThrowFormatException, addr 0xb9a990c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowFormatException() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionUtil(ExceptionUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionUtil(ExceptionUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::ExceptionUtil) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
