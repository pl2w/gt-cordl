#pragma once
// IWYU pragma private; include "Constants/Strings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Strings)
// Forward declare root types
namespace Constants {
class Strings;
}
// Write type traits
MARK_REF_T(::Constants::Strings*);
DEFINE_IL2CPP_CLASS(::Constants::Strings*, "Constants", "Strings");
// Dependencies System.Object
namespace Constants {
// Is value type: false
// CS Name: Constants.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3848};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Constants::Strings) == 0x10, "Size mismatch!");

} // namespace end def Constants
