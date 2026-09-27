#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceVector2ValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputDeviceValueReader_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(XRInputDeviceVector2ValueReader)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceVector2ValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector2ValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector2ValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceVector2ValueReader");
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceVector2ValueReader.html")]
// [CreateAssetMenu(fileName = "XRInputDeviceVector2ValueReader", menuName = "XR/Input Value Reader/Vector2")]
// Dependencies UnityEngine.Vector2, UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader`1<TValue>
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceVector2ValueReader
class CORDL_TYPE XRInputDeviceVector2ValueReader : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader_1<::UnityEngine::Vector2> {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector2ValueReader* New_ctor() ;

/// @brief Method ReadValue, addr 0xb4ca22c, size 0x48, virtual true, abstract: false, final false
inline ::UnityEngine::Vector2 ReadValue() ;

/// @brief Method TryReadValue, addr 0xb4ca274, size 0x58, virtual true, abstract: false, final false
inline bool TryReadValue(::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method .ctor, addr 0xb4ca2cc, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceVector2ValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceVector2ValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceVector2ValueReader(XRInputDeviceVector2ValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceVector2ValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceVector2ValueReader(XRInputDeviceVector2ValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11655};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceVector2ValueReader) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
