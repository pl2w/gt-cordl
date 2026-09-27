#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ShadowHandExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShadowHandExtensions)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class ShadowHand;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ShadowHandExtensions;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ShadowHandExtensions*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ShadowHandExtensions*, "Oculus.Interaction.Input", "ShadowHandExtensions");
// [Extension]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ShadowHandExtensions
class CORDL_TYPE ShadowHandExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method FromHand, addr 0xa51317c, size 0x30, virtual false, abstract: false, final false
static inline void FromHand(::Oculus::Interaction::Input::ShadowHand*  shadow, ::Oculus::Interaction::Input::IHand*  hand, bool  flipHandedness) ;

/// [Extension]
/// @brief Method FromHandFingers, addr 0xa512ecc, size 0xcc, virtual false, abstract: false, final false
static inline void FromHandFingers(::Oculus::Interaction::Input::ShadowHand*  shadow, ::Oculus::Interaction::Input::IHand*  hand, bool  flipHandedness) ;

/// [Extension]
/// @brief Method FromHandRoot, addr 0xa512d80, size 0x14c, virtual false, abstract: false, final false
static inline void FromHandRoot(::Oculus::Interaction::Input::ShadowHand*  shadow, ::Oculus::Interaction::Input::IHand*  hand) ;

/// [Extension]
/// @brief Method FromJoints, addr 0xa512f98, size 0x1e4, virtual false, abstract: false, final false
static inline void FromJoints(::Oculus::Interaction::Input::ShadowHand*  shadow, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*  localJointPoses, bool  flipHandedness) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShadowHandExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShadowHandExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShadowHandExtensions(ShadowHandExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShadowHandExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShadowHandExtensions(ShadowHandExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16504};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::ShadowHandExtensions) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
