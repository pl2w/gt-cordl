#pragma once
// IWYU pragma private; include "Oculus/Interaction/IFingerAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IFingerAPI)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class IFingerAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IFingerAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IFingerAPI*, "Oculus.Interaction", "IFingerAPI");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IFingerAPI
class CORDL_TYPE IFingerAPI {
public:
// Declarations
/// @brief Method GetFingerGrabScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t GetFingerGrabScore(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetFingerIsGrabbing(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsGrabbingChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetFingerIsGrabbingChanged(::Oculus::Interaction::Input::HandFinger  finger, bool  targetPinchState) ;

/// @brief Method GetWristOffsetLocal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetWristOffsetLocal() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(::Oculus::Interaction::Input::IHand*  hand) ;

// Ctor Parameters [CppParam { name: "", ty: "IFingerAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFingerAPI(IFingerAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
