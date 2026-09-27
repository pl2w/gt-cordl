#pragma once
// IWYU pragma private; include "GlobalNamespace/FXSArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FXSArgs)
// Forward declare root types
namespace GlobalNamespace {
class FXSArgs;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FXSArgs*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FXSArgs*, "", "FXSArgs");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FXSArgs
class CORDL_TYPE FXSArgs : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::FXSArgs* New_ctor() ;

/// @brief Method .ctor, addr 0x5ac43dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FXSArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FXSArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FXSArgs(FXSArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FXSArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FXSArgs(FXSArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::FXSArgs) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
