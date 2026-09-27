#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/ClientPathHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ClientPathHelper)
// Forward declare root types
namespace Backtrace::Unity::Common {
class ClientPathHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::ClientPathHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::ClientPathHelper*, "Backtrace.Unity.Common", "ClientPathHelper");
// [Extension]
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.ClientPathHelper
class CORDL_TYPE ClientPathHelper : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GenerateFullPath, addr 0x5f264dc, size 0x15c, virtual false, abstract: false, final false
static inline ::StringW GenerateFullPath(::StringW  path) ;

/// @brief Method GetFullPath, addr 0x5f26324, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetFullPath(::StringW  path) ;

/// @brief Method IsFileInDatabaseDirectory, addr 0x5f26638, size 0x158, virtual false, abstract: false, final false
static inline bool IsFileInDatabaseDirectory(::StringW  databasePath, ::StringW  filePath) ;

/// [Extension]
/// @brief Method ParseInterpolatedString, addr 0x5f26364, size 0x178, virtual false, abstract: false, final false
static inline ::StringW ParseInterpolatedString(::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClientPathHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClientPathHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClientPathHelper(ClientPathHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClientPathHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClientPathHelper(ClientPathHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::ClientPathHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
