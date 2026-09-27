#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputValueReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_InputSourceMode_def.hpp"
CORDL_MODULE_EXPORT(XRInputValueReader)
namespace GlobalNamespace {
struct XRInputValueReader_InputSourceMode;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class UnityObjectReferenceCache_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputValueReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputValueReader");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader::InputSourceMode
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader
class CORDL_TYPE XRInputValueReader : public ::System::Object {
public:
// Declarations
using InputSourceMode = ::GlobalNamespace::XRInputValueReader_InputSourceMode;

 __declspec(property(get=get_inputAction, put=set_inputAction)) ::UnityEngine::InputSystem::InputAction*  inputAction;

 __declspec(property(get=get_inputActionReference, put=set_inputActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  inputActionReference;

 __declspec(property(get=get_inputSourceMode, put=set_inputSourceMode)) ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode;

/// @brief Field m_InputAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputAction, put=__cordl_internal_set_m_InputAction)) ::UnityEngine::InputSystem::InputAction*  m_InputAction;

/// @brief Field m_InputActionReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReference, put=__cordl_internal_set_m_InputActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_InputActionReference;

/// @brief Field m_InputActionReferenceCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionReferenceCache, put=__cordl_internal_set_m_InputActionReferenceCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  m_InputActionReferenceCache;

/// @brief Field m_InputSourceMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputSourceMode, put=__cordl_internal_set_m_InputSourceMode)) ::GlobalNamespace::XRInputValueReader_InputSourceMode  m_InputSourceMode;

/// @brief Method DisableDirectActionIfModeUsed, addr 0xb4ca8e8, size 0x28, virtual false, abstract: false, final false
inline void DisableDirectActionIfModeUsed() ;

/// @brief Method EnableDirectActionIfModeUsed, addr 0xb4ca8c0, size 0x28, virtual false, abstract: false, final false
inline void EnableDirectActionIfModeUsed() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader* New_ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader* New_ctor(::UnityEngine::InputSystem::InputAction*  inputAction, ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode) ;

/// @brief Method TryGetInputActionReference, addr 0xb4ca910, size 0x5c, virtual false, abstract: false, final false
inline bool TryGetInputActionReference(::by_ref<::UnityEngine::InputSystem::InputActionReference*>  reference) ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_InputAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_InputAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_InputActionReference() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_InputActionReference() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>* const& __cordl_internal_get_m_InputActionReferenceCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*& __cordl_internal_get_m_InputActionReferenceCache() ;

constexpr ::GlobalNamespace::XRInputValueReader_InputSourceMode const& __cordl_internal_get_m_InputSourceMode() const;

constexpr ::GlobalNamespace::XRInputValueReader_InputSourceMode& __cordl_internal_get_m_InputSourceMode() ;

constexpr void __cordl_internal_set_m_InputAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_InputActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_InputActionReferenceCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  value) ;

constexpr void __cordl_internal_set_m_InputSourceMode(::GlobalNamespace::XRInputValueReader_InputSourceMode  value) ;

/// @brief Method .ctor, addr 0xb4ca778, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb4ca808, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputAction*  inputAction, ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode) ;

/// @brief Method get_inputAction, addr 0xb4ca758, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_inputAction() ;

/// @brief Method get_inputActionReference, addr 0xb4ca768, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_inputActionReference() ;

/// @brief Method get_inputSourceMode, addr 0xb4ca748, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInputValueReader_InputSourceMode get_inputSourceMode() ;

/// @brief Method set_inputAction, addr 0xb4ca760, size 0x8, virtual false, abstract: false, final false
inline void set_inputAction(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method set_inputActionReference, addr 0xb4ca770, size 0x8, virtual false, abstract: false, final false
inline void set_inputActionReference(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_inputSourceMode, addr 0xb4ca750, size 0x8, virtual false, abstract: false, final false
inline void set_inputSourceMode(::GlobalNamespace::XRInputValueReader_InputSourceMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputValueReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputValueReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputValueReader(XRInputValueReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputValueReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputValueReader(XRInputValueReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11661};

/// [SerializeField]
/// @brief Field m_InputSourceMode, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::XRInputValueReader_InputSourceMode  ___m_InputSourceMode;

/// [SerializeField]
/// @brief Field m_InputAction, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_InputAction;

/// [SerializeField]
/// @brief Field m_InputActionReference, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_InputActionReference;

/// @brief Field m_InputActionReferenceCache, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::InputSystem::InputActionReference>>*  ___m_InputActionReferenceCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader, ___m_InputSourceMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader, ___m_InputAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader, ___m_InputActionReference) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader, ___m_InputActionReferenceCache) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
