#pragma once
// IWYU pragma private; include "UnityEngine/Animations/IConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConstraint)
// Forward declare root types
namespace UnityEngine::Animations {
class IConstraint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::IConstraint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::IConstraint*, "UnityEngine.Animations", "IConstraint");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.IConstraint
class CORDL_TYPE IConstraint {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConstraint(IConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29829};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
