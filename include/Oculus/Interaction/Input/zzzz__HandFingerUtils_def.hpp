#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFingerUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HandFingerUtils)
namespace Oculus::Interaction::Input {
struct HandFingerFlags;
}
namespace Oculus::Interaction::Input {
struct HandFinger;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandFingerUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandFingerUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandFingerUtils*, "Oculus.Interaction.Input", "HandFingerUtils");
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandFingerUtils
class CORDL_TYPE HandFingerUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ToFlags, addr 0xa500890, size 0xc, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandFingerFlags ToFlags(::Oculus::Interaction::Input::HandFinger  handFinger) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::HandFingerUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
