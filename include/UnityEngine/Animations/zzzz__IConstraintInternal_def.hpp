#pragma once
// IWYU pragma private; include "UnityEngine/Animations/IConstraintInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IConstraintInternal)
// Forward declare root types
namespace UnityEngine::Animations {
class IConstraintInternal;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::IConstraintInternal*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::IConstraintInternal*, "UnityEngine.Animations", "IConstraintInternal");
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: false
// CS Name: UnityEngine.Animations.IConstraintInternal
class CORDL_TYPE IConstraintInternal {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IConstraintInternal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IConstraintInternal(IConstraintInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29830};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
