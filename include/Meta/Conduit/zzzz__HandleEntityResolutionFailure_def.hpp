#pragma once
// IWYU pragma private; include "Meta/Conduit/HandleEntityResolutionFailure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(HandleEntityResolutionFailure)
// Forward declare root types
namespace Meta::Conduit {
class HandleEntityResolutionFailure;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::HandleEntityResolutionFailure*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::HandleEntityResolutionFailure*, "Meta.Conduit", "HandleEntityResolutionFailure");
// [AttributeUsage((System.AttributeTargets)64, AllowMultiple = true)]
// Dependencies System.Attribute
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.HandleEntityResolutionFailure
class CORDL_TYPE HandleEntityResolutionFailure : public ::System::Attribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandleEntityResolutionFailure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandleEntityResolutionFailure", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandleEntityResolutionFailure(HandleEntityResolutionFailure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandleEntityResolutionFailure", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandleEntityResolutionFailure(HandleEntityResolutionFailure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25403};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Conduit::HandleEntityResolutionFailure) == 0x10, "Size mismatch!");

} // namespace end def Meta::Conduit
