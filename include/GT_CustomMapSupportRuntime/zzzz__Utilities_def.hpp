#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Utilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Utilities)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class Utilities;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::Utilities*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::Utilities*, "GT_CustomMapSupportRuntime", "Utilities");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.Utilities
class CORDL_TYPE Utilities : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utilities(Utilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utilities(Utilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GT_CustomMapSupportRuntime::Utilities) == 0x10, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
