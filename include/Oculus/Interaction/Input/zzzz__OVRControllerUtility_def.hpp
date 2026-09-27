#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRControllerUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRControllerUtility)
namespace GlobalNamespace {
struct OVRInput_Controller;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class OVRControllerUtility;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::OVRControllerUtility*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::OVRControllerUtility*, "Oculus.Interaction.Input", "OVRControllerUtility");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.OVRControllerUtility
class CORDL_TYPE OVRControllerUtility : public ::System::Object {
public:
// Declarations
/// @brief Method GetIndexCurl, addr 0xa41b87c, size 0xc8, virtual false, abstract: false, final false
static inline float_t GetIndexCurl(::GlobalNamespace::OVRInput_Controller  ovrController) ;

/// @brief Method GetIndexSlide, addr 0xa41b944, size 0x78, virtual false, abstract: false, final false
static inline float_t GetIndexSlide(::GlobalNamespace::OVRInput_Controller  ovrController) ;

/// @brief Method GetPinchAmount, addr 0xa41fbd0, size 0x5c, virtual false, abstract: false, final false
static inline float_t GetPinchAmount(::GlobalNamespace::OVRInput_Controller  ovrController) ;

/// @brief Method SupportsAnalogIndex, addr 0xa41fc2c, size 0x80, virtual false, abstract: false, final false
static inline bool SupportsAnalogIndex(::GlobalNamespace::OVRInput_Controller  ovrController) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRControllerUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRControllerUtility(OVRControllerUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRControllerUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRControllerUtility(OVRControllerUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31150};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::OVRControllerUtility) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
