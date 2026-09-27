#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBehaviorsBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRBehaviorsBase)
// Forward declare root types
namespace GlobalNamespace {
class GRBehaviorsBase;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBehaviorsBase*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBehaviorsBase*, "", "GRBehaviorsBase");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBehaviorsBase
class CORDL_TYPE GRBehaviorsBase : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::GRBehaviorsBase* New_ctor() ;

/// @brief Method .ctor, addr 0x587ea6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBehaviorsBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBehaviorsBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBehaviorsBase(GRBehaviorsBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBehaviorsBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBehaviorsBase(GRBehaviorsBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1927};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRBehaviorsBase) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
