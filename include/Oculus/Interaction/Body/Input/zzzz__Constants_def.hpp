#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
class Constants;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Body::Input::Constants*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::Constants*, "Oculus.Interaction.Body.Input", "Constants");
// Dependencies System.Object
namespace Oculus::Interaction::Body::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.Constants
class CORDL_TYPE Constants : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Constants(Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Constants(Constants const& ) = delete;

/// @brief Field NUM_BODY_JOINTS offset 0xffffffff size 0x4
static constexpr int32_t  NUM_BODY_JOINTS{static_cast<int32_t>(0x54)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16402};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Body::Input::Constants) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
