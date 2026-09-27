#pragma once
// IWYU pragma private; include "Oculus/Interaction/ICandidatePosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICandidatePosition)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class ICandidatePosition;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ICandidatePosition*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ICandidatePosition*, "Oculus.Interaction", "ICandidatePosition");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ICandidatePosition
class CORDL_TYPE ICandidatePosition {
public:
// Declarations
 __declspec(property(get=get_CandidatePosition)) ::UnityEngine::Vector3  CandidatePosition;

/// @brief Method get_CandidatePosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_CandidatePosition() ;

// Ctor Parameters [CppParam { name: "", ty: "ICandidatePosition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICandidatePosition(ICandidatePosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
