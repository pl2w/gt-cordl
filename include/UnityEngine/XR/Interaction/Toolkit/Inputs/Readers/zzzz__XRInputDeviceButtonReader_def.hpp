#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/XRInputDeviceButtonReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRInputDeviceButtonReader)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class IXRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceBoolValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceFloatValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class UnityObjectReferenceCache_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputDeviceButtonReader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Readers", "XRInputDeviceButtonReader");
// [AddComponentMenu("XR/Input/XR Input Device Button Reader", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceButtonReader.html")]
// [DefaultExecutionOrder(-31000)]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceButtonReader
class CORDL_TYPE XRInputDeviceButtonReader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_boolValueReader, put=set_boolValueReader)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>  boolValueReader;

 __declspec(property(get=get_floatValueReader, put=set_floatValueReader)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>  floatValueReader;

/// @brief Field m_BoolValueReader, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoolValueReader, put=__cordl_internal_set_m_BoolValueReader)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>  m_BoolValueReader;

/// @brief Field m_BoolValueReaderCache, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_BoolValueReaderCache, put=__cordl_internal_set_m_BoolValueReaderCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>>*  m_BoolValueReaderCache;

/// @brief Field m_FloatValueReader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatValueReader, put=__cordl_internal_set_m_FloatValueReader)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>  m_FloatValueReader;

/// @brief Field m_FloatValueReaderCache, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FloatValueReaderCache, put=__cordl_internal_set_m_FloatValueReaderCache)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>>*  m_FloatValueReaderCache;

/// @brief Field m_IsPerformed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsPerformed, put=__cordl_internal_set_m_IsPerformed)) bool  m_IsPerformed;

/// @brief Field m_WasCompletedThisFrame, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasCompletedThisFrame, put=__cordl_internal_set_m_WasCompletedThisFrame)) bool  m_WasCompletedThisFrame;

/// @brief Field m_WasPerformedThisFrame, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasPerformedThisFrame, put=__cordl_internal_set_m_WasPerformedThisFrame)) bool  m_WasPerformedThisFrame;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept;

/// @brief Method Awake, addr 0xb4c9b98, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader* New_ctor() ;

/// @brief Method ReadIsPerformed, addr 0xb4c9d84, size 0x8, virtual true, abstract: false, final true
inline bool ReadIsPerformed() ;

/// @brief Method ReadValue, addr 0xb4c9d9c, size 0x34, virtual true, abstract: false, final true
inline float_t ReadValue() ;

/// @brief Method ReadWasCompletedThisFrame, addr 0xb4c9d94, size 0x8, virtual true, abstract: false, final true
inline bool ReadWasCompletedThisFrame() ;

/// @brief Method ReadWasPerformedThisFrame, addr 0xb4c9d8c, size 0x8, virtual true, abstract: false, final true
inline bool ReadWasPerformedThisFrame() ;

/// @brief Method TryGetBoolValueReader, addr 0xb4c9d28, size 0x5c, virtual false, abstract: false, final false
inline bool TryGetBoolValueReader(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*>  reference) ;

/// @brief Method TryGetFloatValueReader, addr 0xb4c9dd0, size 0x5c, virtual false, abstract: false, final false
inline bool TryGetFloatValueReader(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader*>  reference) ;

/// @brief Method TryReadValue, addr 0xb4c9e2c, size 0x54, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<float_t>  value) ;

/// @brief Method Update, addr 0xb4c9cb8, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader> const& __cordl_internal_get_m_BoolValueReader() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>& __cordl_internal_get_m_BoolValueReader() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>>* const& __cordl_internal_get_m_BoolValueReaderCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>>*& __cordl_internal_get_m_BoolValueReaderCache() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader> const& __cordl_internal_get_m_FloatValueReader() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>& __cordl_internal_get_m_FloatValueReader() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>>* const& __cordl_internal_get_m_FloatValueReaderCache() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>>*& __cordl_internal_get_m_FloatValueReaderCache() ;

constexpr bool const& __cordl_internal_get_m_IsPerformed() const;

constexpr bool& __cordl_internal_get_m_IsPerformed() ;

constexpr bool const& __cordl_internal_get_m_WasCompletedThisFrame() const;

constexpr bool& __cordl_internal_get_m_WasCompletedThisFrame() ;

constexpr bool const& __cordl_internal_get_m_WasPerformedThisFrame() const;

constexpr bool& __cordl_internal_get_m_WasPerformedThisFrame() ;

constexpr void __cordl_internal_set_m_BoolValueReader(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>  value) ;

constexpr void __cordl_internal_set_m_BoolValueReaderCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>>*  value) ;

constexpr void __cordl_internal_set_m_FloatValueReader(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>  value) ;

constexpr void __cordl_internal_set_m_FloatValueReaderCache(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>>*  value) ;

constexpr void __cordl_internal_set_m_IsPerformed(bool  value) ;

constexpr void __cordl_internal_set_m_WasCompletedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_WasPerformedThisFrame(bool  value) ;

/// @brief Method .ctor, addr 0xb4c9e80, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_boolValueReader, addr 0xb4c9b78, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader> get_boolValueReader() ;

/// @brief Method get_floatValueReader, addr 0xb4c9b88, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader> get_floatValueReader() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputButtonReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept;

/// @brief Method set_boolValueReader, addr 0xb4c9b80, size 0x8, virtual false, abstract: false, final false
inline void set_boolValueReader(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader*  value) ;

/// @brief Method set_floatValueReader, addr 0xb4c9b90, size 0x8, virtual false, abstract: false, final false
inline void set_floatValueReader(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputDeviceButtonReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceButtonReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputDeviceButtonReader(XRInputDeviceButtonReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputDeviceButtonReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputDeviceButtonReader(XRInputDeviceButtonReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11649};

/// [SerializeField]
/// [Tooltip("The value that is read to determine whether the button is down.")]
/// @brief Field m_BoolValueReader, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>  ___m_BoolValueReader;

/// [SerializeField]
/// [Tooltip("The value that is read to determine the scalar value that varies from 0 to 1.")]
/// @brief Field m_FloatValueReader, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>  ___m_FloatValueReader;

/// @brief Field m_IsPerformed, offset: 0x30, size: 0x1, def value: None
 bool  ___m_IsPerformed;

/// @brief Field m_WasPerformedThisFrame, offset: 0x31, size: 0x1, def value: None
 bool  ___m_WasPerformedThisFrame;

/// @brief Field m_WasCompletedThisFrame, offset: 0x32, size: 0x1, def value: None
 bool  ___m_WasCompletedThisFrame;

/// @brief Field m_BoolValueReaderCache, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceBoolValueReader>>*  ___m_BoolValueReaderCache;

/// @brief Field m_FloatValueReaderCache, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceFloatValueReader>>*  ___m_FloatValueReaderCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_BoolValueReader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_FloatValueReader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_IsPerformed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_WasPerformedThisFrame) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_WasCompletedThisFrame) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_BoolValueReaderCache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader, ___m_FloatValueReaderCache) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputDeviceButtonReader) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Readers
