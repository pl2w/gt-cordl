#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Feedback/HapticImpulseData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HapticImpulseData)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
class HapticImpulseData;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*, "UnityEngine.XR.Interaction.Toolkit.Feedback", "HapticImpulseData");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Feedback.HapticImpulseData
class CORDL_TYPE HapticImpulseData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_amplitude, put=set_amplitude)) float_t  amplitude;

 __declspec(property(get=get_duration, put=set_duration)) float_t  duration;

 __declspec(property(get=get_frequency, put=set_frequency)) float_t  frequency;

/// @brief Field m_Amplitude, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Amplitude, put=__cordl_internal_set_m_Amplitude)) float_t  m_Amplitude;

/// @brief Field m_Duration, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Duration, put=__cordl_internal_set_m_Duration)) float_t  m_Duration;

/// @brief Field m_Frequency, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Frequency, put=__cordl_internal_set_m_Frequency)) float_t  m_Frequency;

static inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* New_ctor() ;

constexpr float_t const& __cordl_internal_get_m_Amplitude() const;

constexpr float_t& __cordl_internal_get_m_Amplitude() ;

constexpr float_t const& __cordl_internal_get_m_Duration() const;

constexpr float_t& __cordl_internal_get_m_Duration() ;

constexpr float_t const& __cordl_internal_get_m_Frequency() const;

constexpr float_t& __cordl_internal_get_m_Frequency() ;

constexpr void __cordl_internal_set_m_Amplitude(float_t  value) ;

constexpr void __cordl_internal_set_m_Duration(float_t  value) ;

constexpr void __cordl_internal_set_m_Frequency(float_t  value) ;

/// @brief Method .ctor, addr 0xb4ce480, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_amplitude, addr 0xb4ce450, size 0x8, virtual false, abstract: false, final false
inline float_t get_amplitude() ;

/// @brief Method get_duration, addr 0xb4ce460, size 0x8, virtual false, abstract: false, final false
inline float_t get_duration() ;

/// @brief Method get_frequency, addr 0xb4ce470, size 0x8, virtual false, abstract: false, final false
inline float_t get_frequency() ;

/// @brief Method set_amplitude, addr 0xb4ce458, size 0x8, virtual false, abstract: false, final false
inline void set_amplitude(float_t  value) ;

/// @brief Method set_duration, addr 0xb4ce468, size 0x8, virtual false, abstract: false, final false
inline void set_duration(float_t  value) ;

/// @brief Method set_frequency, addr 0xb4ce478, size 0x8, virtual false, abstract: false, final false
inline void set_frequency(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticImpulseData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulseData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticImpulseData(HapticImpulseData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulseData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticImpulseData(HapticImpulseData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11691};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_Amplitude, offset: 0x10, size: 0x4, def value: None
 float_t  ___m_Amplitude;

/// [SerializeField]
/// @brief Field m_Duration, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_Duration;

/// [SerializeField]
/// @brief Field m_Frequency, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_Frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData, ___m_Amplitude) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData, ___m_Duration) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData, ___m_Frequency) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Feedback
