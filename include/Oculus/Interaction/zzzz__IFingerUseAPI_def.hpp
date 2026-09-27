#pragma once
// IWYU pragma private; include "Oculus/Interaction/IFingerUseAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IFingerUseAPI)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
// Forward declare root types
namespace Oculus::Interaction {
class IFingerUseAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IFingerUseAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IFingerUseAPI*, "Oculus.Interaction", "IFingerUseAPI");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IFingerUseAPI
class CORDL_TYPE IFingerUseAPI {
public:
// Declarations
/// @brief Method GetFingerUseStrength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

// Ctor Parameters [CppParam { name: "", ty: "IFingerUseAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFingerUseAPI(IFingerUseAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15896};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
