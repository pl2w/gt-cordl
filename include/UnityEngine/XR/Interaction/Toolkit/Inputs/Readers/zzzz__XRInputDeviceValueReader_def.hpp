#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(XRInputDeviceValueReader)
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceValueReader");
// Dependencies UnityEngine.ScriptableObject, UnityEngine.XR.InputDeviceCharacteristics
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceValueReader
class CORDL_TYPE XRInputDeviceValueReader : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_characteristics, put=set_characteristics)) ::UnityEngine::XR::InputDeviceCharacteristics  characteristics;

/// @brief Field m_Characteristics, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Characteristics, put=__cordl_internal_set_m_Characteristics)) ::UnityEngine::XR::InputDeviceCharacteristics  m_Characteristics;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader* New_ctor() ;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& __cordl_internal_get_m_Characteristics() const;

constexpr ::UnityEngine::XR::InputDeviceCharacteristics& __cordl_internal_get_m_Characteristics() ;

constexpr void __cordl_internal_set_m_Characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value) ;

/// @brief Method .ctor, addr 0xb4ca224, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_characteristics, addr 0xb4ca214, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputDeviceCharacteristics get_characteristics() ;

/// @brief Method set_characteristics, addr 0xb4ca21c, size 0x8, virtual false, abstract: false, final false
inline void set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceValueReader(XRInputDeviceValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceValueReader(XRInputDeviceValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11653};

/// [SerializeField]
/// [Tooltip("Characteristics of the input device to read from. Controllers are either:\nHeld In Hand, Tracked Device, Controller, Left\nHeld In Hand, Tracked Device, Controller, Right")]
/// @brief Field m_Characteristics, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::XR::InputDeviceCharacteristics  ___m_Characteristics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader, ___m_Characteristics) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceValueReader) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
