#pragma once
// IWYU pragma private; include "System/ComponentModel/IntSecurity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IntSecurity)
// Forward declare root types
namespace System::ComponentModel {
class IntSecurity;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::IntSecurity*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::IntSecurity*, "System.ComponentModel", "IntSecurity");
// Dependencies System.Object
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.IntSecurity
class CORDL_TYPE IntSecurity : public ::System::Object {
public:
// Declarations
/// @brief Method UnsafeGetFullPath, addr 0xad73224, size 0x58, virtual false, abstract: false, final false
static inline ::StringW UnsafeGetFullPath(::StringW  fileName) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IntSecurity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IntSecurity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IntSecurity(IntSecurity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntSecurity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntSecurity(IntSecurity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::IntSecurity) == 0x10, "Size mismatch!");

} // namespace end def System::ComponentModel
