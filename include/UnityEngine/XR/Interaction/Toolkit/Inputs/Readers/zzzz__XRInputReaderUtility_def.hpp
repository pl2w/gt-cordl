#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputReaderUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRInputReaderUtility)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputHapticImpulseProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputValueReader;
}
namespace UnityEngine {
class Behaviour;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputReaderUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputReaderUtility");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputReaderUtility
class CORDL_TYPE XRInputReaderUtility : public ::System::Object {
public:
// Declarations
/// @brief Method SetInputProperty, addr 0xb4ca3fc, size 0x12c, virtual false, abstract: false, final false
static inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  value, ::UnityEngine::Behaviour*  behavior) ;

/// @brief Method SetInputProperty, addr 0xb4c3734, size 0x12c, virtual false, abstract: false, final false
static inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value, ::UnityEngine::Behaviour*  behavior) ;

/// @brief Method SetInputProperty, addr 0xb4ca578, size 0x1d0, virtual false, abstract: false, final false
static inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value, ::UnityEngine::Behaviour*  behavior, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  buttonReaders) ;

/// @brief Method SetInputProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  value, ::UnityEngine::Behaviour*  behavior) ;

/// @brief Method SetInputProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
static inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  value, ::UnityEngine::Behaviour*  behavior, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  valueReaders) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputReaderUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputReaderUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputReaderUtility(XRInputReaderUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputReaderUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputReaderUtility(XRInputReaderUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputReaderUtility) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
