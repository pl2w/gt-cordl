#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Gaze/IXRAimAssist.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRAimAssist)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class IXRAimAssist;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*, "UnityEngine.XR.Interaction.Toolkit.Gaze", "IXRAimAssist");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Gaze.IXRAimAssist
class CORDL_TYPE IXRAimAssist {
public:
// Declarations
/// @brief Method GetAssistedVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity) ;

/// @brief Method GetAssistedVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetAssistedVelocity(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  source, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  velocity, float_t  gravity, float_t  maxAngle) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRAimAssist", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRAimAssist(IXRAimAssist const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Gaze
