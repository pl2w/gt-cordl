#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/CardinalUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CardinalUtility)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct Cardinal;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class CardinalUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "CardinalUtility");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.CardinalUtility
class CORDL_TYPE CardinalUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetNearestCardinal, addr 0xb4b0fd4, size 0x64, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal GetNearestCardinal(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CardinalUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CardinalUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CardinalUtility(CardinalUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CardinalUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CardinalUtility(CardinalUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11589};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::CardinalUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
