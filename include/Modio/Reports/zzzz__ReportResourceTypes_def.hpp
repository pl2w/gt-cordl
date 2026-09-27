#pragma once
// IWYU pragma private; include "Modio/Reports/ReportResourceTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReportResourceTypes)
// Forward declare root types
namespace Modio::Reports {
class ReportResourceTypes;
}
// Write type traits
MARK_REF_T(::Modio::Reports::ReportResourceTypes*);
DEFINE_IL2CPP_CLASS(::Modio::Reports::ReportResourceTypes*, "Modio.Reports", "ReportResourceTypes");
// Dependencies System.Object
namespace Modio::Reports {
// Is value type: false
// CS Name: Modio.Reports.ReportResourceTypes
class CORDL_TYPE ReportResourceTypes : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReportResourceTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReportResourceTypes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReportResourceTypes(ReportResourceTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReportResourceTypes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReportResourceTypes(ReportResourceTypes const& ) = delete;

/// @brief Field GAMES offset 0xffffffff size 0x8
static constexpr ::ConstString  GAMES{u"games"};

/// @brief Field MODS offset 0xffffffff size 0x8
static constexpr ::ConstString  MODS{u"mods"};

/// @brief Field USERS offset 0xffffffff size 0x8
static constexpr ::ConstString  USERS{u"users"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17556};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Reports::ReportResourceTypes) == 0x10, "Size mismatch!");

} // namespace end def Modio::Reports
