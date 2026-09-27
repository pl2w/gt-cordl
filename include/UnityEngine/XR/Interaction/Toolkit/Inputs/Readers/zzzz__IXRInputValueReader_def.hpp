#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/IXRInputValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRInputValueReader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "IXRInputValueReader");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader
class CORDL_TYPE IXRInputValueReader {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IXRInputValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInputValueReader(IXRInputValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11658};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
