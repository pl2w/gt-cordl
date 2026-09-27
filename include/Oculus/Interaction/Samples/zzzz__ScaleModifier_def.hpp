#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ScaleModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScaleModifier)
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ScaleModifier;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ScaleModifier*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ScaleModifier*, "Oculus.Interaction.Samples", "ScaleModifier");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ScaleModifier
class CORDL_TYPE ScaleModifier : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Oculus::Interaction::Samples::ScaleModifier* New_ctor() ;

/// @brief Method SetScaleX, addr 0xa43f074, size 0x7c, virtual false, abstract: false, final false
inline void SetScaleX(float_t  x) ;

/// @brief Method SetScaleY, addr 0xa43f0f0, size 0x7c, virtual false, abstract: false, final false
inline void SetScaleY(float_t  y) ;

/// @brief Method SetScaleZ, addr 0xa43f16c, size 0x7c, virtual false, abstract: false, final false
inline void SetScaleZ(float_t  z) ;

/// @brief Method .ctor, addr 0xa43f1e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScaleModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScaleModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScaleModifier(ScaleModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScaleModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScaleModifier(ScaleModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Samples::ScaleModifier) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
