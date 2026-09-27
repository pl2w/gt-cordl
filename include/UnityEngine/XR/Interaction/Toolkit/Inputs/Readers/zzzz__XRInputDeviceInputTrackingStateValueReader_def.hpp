#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceInputTrackingStateValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
CORDL_MODULE_EXPORT(XRInputDeviceInputTrackingStateValueReader)
namespace UnityEngine::XR {
struct InputTrackingState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceInputTrackingStateValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceInputTrackingStateValueReader");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceInputTrackingStateValueReader.html")]
// [CreateAssetMenu(fileName = "XRInputDeviceInputTrackingStateValueReader", menuName = "XR/Input Value Reader/InputTrackingState")]
// Dependencies UnityEngine.XR.InputTrackingState, UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader`1<TValue>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceInputTrackingStateValueReader
class CORDL_TYPE XRInputDeviceInputTrackingStateValueReader : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<::UnityEngine::XR::InputTrackingState> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader* New_ctor() ;

/// @brief Method ReadValue, addr 0xb4ca044, size 0x48, virtual true, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState ReadValue() ;

/// @brief Method TryReadValue, addr 0xb4ca08c, size 0x58, virtual true, abstract: false, final false
inline bool TryReadValue(::by_ref<::UnityEngine::XR::InputTrackingState>  value) ;

/// @brief Method .ctor, addr 0xb4ca0e4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceInputTrackingStateValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceInputTrackingStateValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceInputTrackingStateValueReader(XRInputDeviceInputTrackingStateValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceInputTrackingStateValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceInputTrackingStateValueReader(XRInputDeviceInputTrackingStateValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11651};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceInputTrackingStateValueReader) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
