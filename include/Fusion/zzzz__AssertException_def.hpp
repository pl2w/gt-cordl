#pragma once
// IWYU pragma private; include "Fusion/AssertException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssertException)
// Forward declare root types
namespace Fusion {
class AssertException;
}
// Write type traits
MARK_REF_T(::Fusion::AssertException*);
DEFINE_IL2CPP_CLASS(::Fusion::AssertException*, "Fusion", "AssertException");
// Dependencies System.Exception
namespace Fusion {
// Is value type: false
// CS Name: Fusion.AssertException
class CORDL_TYPE AssertException : public ::System::Exception {
public:
// Declarations
static inline ::Fusion::AssertException* New_ctor() ;

static inline ::Fusion::AssertException* New_ctor(::StringW  msg) ;

/// @brief Method .ctor, addr 0x5f44204, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f4425c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssertException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssertException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssertException(AssertException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssertException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssertException(AssertException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32713};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::AssertException) == 0x90, "Size mismatch!");

} // namespace end def Fusion
