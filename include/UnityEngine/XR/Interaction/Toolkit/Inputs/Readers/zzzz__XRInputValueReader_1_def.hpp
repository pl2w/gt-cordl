#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputValueReader_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XRInputValueReader_1)
namespace GlobalNamespace {
template<typename TValue>
struct XRInputValueReader_1_BypassScope;
}
namespace GlobalNamespace {
struct XRInputValueReader_InputSourceMode;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class IXRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename TInterface,typename TObject>
class UnityObjectReferenceCache_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputValueReader`1");
// Dependencies UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// cpp template
template<typename TValue>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputValueReader`1<TValue>
class CORDL_TYPE XRInputValueReader_1 : public ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader {
public:
// Declarations
using BypassScope = ::GlobalNamespace::XRInputValueReader_1_BypassScope<TValue>;

/// @brief Field <bypass>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__bypass_k__BackingField, put=__cordl_internal_set__bypass_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*  _bypass_k__BackingField;

 __declspec(property(get=get_bypass, put=set_bypass)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*  bypass;

/// @brief Field m_CallingBypass, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CallingBypass, put=__cordl_internal_set_m_CallingBypass)) bool  m_CallingBypass;

/// @brief Field m_ManualValue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManualValue, put=__cordl_internal_set_m_ManualValue)) TValue  m_ManualValue;

/// @brief Field m_ObjectReference, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectReference, put=__cordl_internal_set_m_ObjectReference)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*,::UnityW<::UnityEngine::Object>>*  m_ObjectReference;

/// @brief Field m_ObjectReferenceObject, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ObjectReferenceObject, put=__cordl_internal_set_m_ObjectReferenceObject)) ::UnityW<::UnityEngine::Object>  m_ObjectReferenceObject;

 __declspec(property(get=get_manualValue, put=set_manualValue)) TValue  manualValue;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*() noexcept;

/// @brief Method GetObjectReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* GetObjectReference() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>* New_ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>* New_ctor(::StringW  name, ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode) ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue ReadValue() ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TValue ReadValue(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method SetObjectReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetObjectReference(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*  value) ;

/// @brief Method TryReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryReadValue(::UnityEngine::InputSystem::InputAction*  action, ::by_ref<TValue>  value) ;

/// @brief Method TryReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<TValue>  value) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* const& __cordl_internal_get__bypass_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*& __cordl_internal_get__bypass_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_CallingBypass() const;

constexpr bool& __cordl_internal_get_m_CallingBypass() ;

constexpr TValue const& __cordl_internal_get_m_ManualValue() const;

constexpr TValue& __cordl_internal_get_m_ManualValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*,::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_ObjectReference() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*,::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_ObjectReference() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_ObjectReferenceObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_ObjectReferenceObject() ;

constexpr void __cordl_internal_set__bypass_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*  value) ;

constexpr void __cordl_internal_set_m_CallingBypass(bool  value) ;

constexpr void __cordl_internal_set_m_ManualValue(TValue  value) ;

constexpr void __cordl_internal_set_m_ObjectReference(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*,::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_ObjectReferenceObject(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::GlobalNamespace::XRInputValueReader_InputSourceMode  inputSourceMode) ;

/// [CompilerGenerated]
/// @brief Method get_bypass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* get_bypass() ;

/// @brief Method get_manualValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue get_manualValue() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_TValue_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_bypass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_bypass(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*  value) ;

/// @brief Method set_manualValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_manualValue(TValue  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputValueReader_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputValueReader_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputValueReader_1(XRInputValueReader_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputValueReader_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputValueReader_1(XRInputValueReader_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11663};

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.IXRInputValueReader))]
/// @brief Field m_ObjectReferenceObject, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___m_ObjectReferenceObject;

/// [SerializeField]
/// @brief Field m_ManualValue, offset: 0x38, size: 0x8, def value: None
 TValue  ___m_ManualValue;

/// [CompilerGenerated]
/// @brief Field <bypass>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*  ____bypass_k__BackingField;

/// @brief Field m_CallingBypass, offset: 0x48, size: 0x1, def value: None
 bool  ___m_CallingBypass;

/// @brief Field m_ObjectReference, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<TValue>*,::UnityW<::UnityEngine::Object>>*  ___m_ObjectReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
