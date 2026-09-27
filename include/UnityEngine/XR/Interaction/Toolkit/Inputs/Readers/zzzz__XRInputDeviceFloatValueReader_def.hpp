#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceFloatValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRInputDeviceFloatValueReader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceFloatValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceFloatValueReader");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceFloatValueReader.html")]
// [CreateAssetMenu(fileName = "XRInputDeviceFloatValueReader", menuName = "XR/Input Value Reader/float")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader`1<TValue>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceFloatValueReader
class CORDL_TYPE XRInputDeviceFloatValueReader : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<float_t> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader* New_ctor() ;

/// @brief Method ReadValue, addr 0xb4c9f5c, size 0x48, virtual true, abstract: false, final false
inline float_t ReadValue() ;

/// @brief Method TryReadValue, addr 0xb4c9fa4, size 0x58, virtual true, abstract: false, final false
inline bool TryReadValue(::by_ref<float_t>  value) ;

/// @brief Method .ctor, addr 0xb4c9ffc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceFloatValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceFloatValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceFloatValueReader(XRInputDeviceFloatValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceFloatValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceFloatValueReader(XRInputDeviceFloatValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11650};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
