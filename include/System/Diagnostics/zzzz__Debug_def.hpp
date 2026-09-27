#pragma once
// IWYU pragma private; include "System/Diagnostics/Debug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Debug)
// Forward declare root types
namespace System::Diagnostics {
class Debug;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::Debug*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::Debug*, "System.Diagnostics", "Debug");
// Dependencies System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.Debug
class CORDL_TYPE Debug : public ::System::Object {
public:
// Declarations
/// [Conditional("DEBUG")]
/// @brief Method WriteLine, addr 0xad269c8, size 0x54, virtual false, abstract: false, final false
static inline void WriteLine(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Debug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Debug(Debug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Debug", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Debug(Debug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Diagnostics::Debug) == 0x10, "Size mismatch!");

} // namespace end def System::Diagnostics
