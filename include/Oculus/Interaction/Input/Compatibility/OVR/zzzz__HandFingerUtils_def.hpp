#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandFingerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HandFingerUtils)
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandFinger;
}
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
class HandFingerUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils*, "Oculus.Interaction.Input.Compatibility.OVR", "HandFingerUtils");
// Dependencies System.Object
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: false
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandFingerUtils
class CORDL_TYPE HandFingerUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ToFlags, addr 0xa5154f4, size 0xc, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerFlags ToFlags(::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  handFinger) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandFingerUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandFingerUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandFingerUtils(HandFingerUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandFingerUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandFingerUtils(HandFingerUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
