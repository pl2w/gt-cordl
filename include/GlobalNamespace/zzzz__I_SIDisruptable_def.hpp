#pragma once
// IWYU pragma private; include "GlobalNamespace/I_SIDisruptable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(I_SIDisruptable)
// Forward declare root types
namespace GlobalNamespace {
class I_SIDisruptable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::I_SIDisruptable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::I_SIDisruptable*, "", "I_SIDisruptable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: I_SIDisruptable
class CORDL_TYPE I_SIDisruptable {
public:
// Declarations
/// @brief Method Disrupt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Disrupt(float_t  disruptTime) ;

// Ctor Parameters [CppParam { name: "", ty: "I_SIDisruptable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
I_SIDisruptable(I_SIDisruptable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
