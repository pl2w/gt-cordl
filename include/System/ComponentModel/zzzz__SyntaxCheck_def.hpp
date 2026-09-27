#pragma once
// IWYU pragma private; include "System/ComponentModel/SyntaxCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SyntaxCheck)
// Forward declare root types
namespace System::ComponentModel {
class SyntaxCheck;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::SyntaxCheck*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::SyntaxCheck*, "System.ComponentModel", "SyntaxCheck");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.SyntaxCheck
class CORDL_TYPE SyntaxCheck : public ::System::Object {
public:
// Declarations
/// @brief Method CheckMachineName, addr 0xad69ce4, size 0x64, virtual false, abstract: false, final false
static inline bool CheckMachineName(::StringW  value) ;

/// @brief Method CheckPath, addr 0xad69d48, size 0x98, virtual false, abstract: false, final false
static inline bool CheckPath(::StringW  value) ;

/// @brief Method CheckRootedPath, addr 0xad69de0, size 0xa4, virtual false, abstract: false, final false
static inline bool CheckRootedPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyntaxCheck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyntaxCheck", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyntaxCheck(SyntaxCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyntaxCheck", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyntaxCheck(SyntaxCheck const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::SyntaxCheck) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
