#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/IOUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IOUtility)
// Forward declare root types
namespace Meta::WitAi::Utilities {
class IOUtility;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::IOUtility*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::IOUtility*, "Meta.WitAi.Utilities", "IOUtility");
// Dependencies System.Object
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.IOUtility
class CORDL_TYPE IOUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CreateDirectory, addr 0x9e84c58, size 0x150, virtual false, abstract: false, final false
static inline bool CreateDirectory(::StringW  directoryPath, bool  recursively) ;

/// @brief Method LogError, addr 0x9e84bc8, size 0x90, virtual false, abstract: false, final false
static inline void LogError(::StringW  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IOUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IOUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IOUtility(IOUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IOUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IOUtility(IOUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25581};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Utilities::IOUtility) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
