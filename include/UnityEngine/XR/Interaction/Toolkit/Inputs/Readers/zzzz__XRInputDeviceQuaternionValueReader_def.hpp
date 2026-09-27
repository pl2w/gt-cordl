#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceQuaternionValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(XRInputDeviceQuaternionValueReader)
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceQuaternionValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceQuaternionValueReader");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceQuaternionValueReader.html")]
// [CreateAssetMenu(fileName = "XRInputDeviceQuaternionValueReader", menuName = "XR/Input Value Reader/Quaternion")]
// Dependencies UnityEngine.Quaternion, UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader`1<TValue>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceQuaternionValueReader
class CORDL_TYPE XRInputDeviceQuaternionValueReader : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<::UnityEngine::Quaternion> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader* New_ctor() ;

/// @brief Method ReadValue, addr 0xb4ca12c, size 0x48, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion ReadValue() ;

/// @brief Method TryReadValue, addr 0xb4ca174, size 0x58, virtual true, abstract: false, final false
inline bool TryReadValue(::by_ref<::UnityEngine::Quaternion>  value) ;

/// @brief Method .ctor, addr 0xb4ca1cc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceQuaternionValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceQuaternionValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceQuaternionValueReader(XRInputDeviceQuaternionValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceQuaternionValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceQuaternionValueReader(XRInputDeviceQuaternionValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11652};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceQuaternionValueReader) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
