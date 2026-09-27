#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/VignetteParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VignetteParameters)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class VignetteParameters_Defaults;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class VignetteParameters;
}
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
class VignetteParameters_Defaults;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters_Defaults*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "VignetteParameters");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters_Defaults*, "UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort", "VignetteParameters/Defaults");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.VignetteParameters
class CORDL_TYPE VignetteParameters : public ::System::Object {
public:
// Declarations
using Defaults = ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters_Defaults;

 __declspec(property(get=get_apertureSize, put=set_apertureSize)) float_t  apertureSize;

 __declspec(property(get=get_apertureVerticalPosition, put=set_apertureVerticalPosition)) float_t  apertureVerticalPosition;

 __declspec(property(get=get_easeInTime, put=set_easeInTime)) float_t  easeInTime;

 __declspec(property(get=get_easeInTimeLock, put=set_easeInTimeLock)) bool  easeInTimeLock;

 __declspec(property(get=get_easeOutDelayTime, put=set_easeOutDelayTime)) float_t  easeOutDelayTime;

 __declspec(property(get=get_easeOutTime, put=set_easeOutTime)) float_t  easeOutTime;

 __declspec(property(get=get_featheringEffect, put=set_featheringEffect)) float_t  featheringEffect;

/// @brief Field m_ApertureSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ApertureSize, put=__cordl_internal_set_m_ApertureSize)) float_t  m_ApertureSize;

/// @brief Field m_ApertureVerticalPosition, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ApertureVerticalPosition, put=__cordl_internal_set_m_ApertureVerticalPosition)) float_t  m_ApertureVerticalPosition;

/// @brief Field m_EaseInTime, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EaseInTime, put=__cordl_internal_set_m_EaseInTime)) float_t  m_EaseInTime;

/// @brief Field m_EaseInTimeLock, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EaseInTimeLock, put=__cordl_internal_set_m_EaseInTimeLock)) bool  m_EaseInTimeLock;

/// @brief Field m_EaseOutDelayTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EaseOutDelayTime, put=__cordl_internal_set_m_EaseOutDelayTime)) float_t  m_EaseOutDelayTime;

/// @brief Field m_EaseOutTime, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EaseOutTime, put=__cordl_internal_set_m_EaseOutTime)) float_t  m_EaseOutTime;

/// @brief Field m_FeatheringEffect, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FeatheringEffect, put=__cordl_internal_set_m_FeatheringEffect)) float_t  m_FeatheringEffect;

/// @brief Field m_VignetteColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_VignetteColor, put=__cordl_internal_set_m_VignetteColor)) ::UnityEngine::Color  m_VignetteColor;

/// @brief Field m_VignetteColorBlend, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_VignetteColorBlend, put=__cordl_internal_set_m_VignetteColorBlend)) ::UnityEngine::Color  m_VignetteColorBlend;

 __declspec(property(get=get_vignetteColor, put=set_vignetteColor)) ::UnityEngine::Color  vignetteColor;

 __declspec(property(get=get_vignetteColorBlend, put=set_vignetteColorBlend)) ::UnityEngine::Color  vignetteColorBlend;

/// @brief Method CopyFrom, addr 0xb454ee8, size 0x84, virtual false, abstract: false, final false
inline void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  parameters) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* New_ctor() ;

constexpr float_t const& __cordl_internal_get_m_ApertureSize() const;

constexpr float_t& __cordl_internal_get_m_ApertureSize() ;

constexpr float_t const& __cordl_internal_get_m_ApertureVerticalPosition() const;

constexpr float_t& __cordl_internal_get_m_ApertureVerticalPosition() ;

constexpr float_t const& __cordl_internal_get_m_EaseInTime() const;

constexpr float_t& __cordl_internal_get_m_EaseInTime() ;

constexpr bool const& __cordl_internal_get_m_EaseInTimeLock() const;

constexpr bool& __cordl_internal_get_m_EaseInTimeLock() ;

constexpr float_t const& __cordl_internal_get_m_EaseOutDelayTime() const;

constexpr float_t& __cordl_internal_get_m_EaseOutDelayTime() ;

constexpr float_t const& __cordl_internal_get_m_EaseOutTime() const;

constexpr float_t& __cordl_internal_get_m_EaseOutTime() ;

constexpr float_t const& __cordl_internal_get_m_FeatheringEffect() const;

constexpr float_t& __cordl_internal_get_m_FeatheringEffect() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_VignetteColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_VignetteColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_m_VignetteColorBlend() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_m_VignetteColorBlend() ;

constexpr void __cordl_internal_set_m_ApertureSize(float_t  value) ;

constexpr void __cordl_internal_set_m_ApertureVerticalPosition(float_t  value) ;

constexpr void __cordl_internal_set_m_EaseInTime(float_t  value) ;

constexpr void __cordl_internal_set_m_EaseInTimeLock(bool  value) ;

constexpr void __cordl_internal_set_m_EaseOutDelayTime(float_t  value) ;

constexpr void __cordl_internal_set_m_EaseOutTime(float_t  value) ;

constexpr void __cordl_internal_set_m_FeatheringEffect(float_t  value) ;

constexpr void __cordl_internal_set_m_VignetteColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_VignetteColorBlend(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xb454f6c, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_apertureSize, addr 0xb454e48, size 0x8, virtual false, abstract: false, final false
inline float_t get_apertureSize() ;

/// @brief Method get_apertureVerticalPosition, addr 0xb454ed8, size 0x8, virtual false, abstract: false, final false
inline float_t get_apertureVerticalPosition() ;

/// @brief Method get_easeInTime, addr 0xb454e68, size 0x8, virtual false, abstract: false, final false
inline float_t get_easeInTime() ;

/// @brief Method get_easeInTimeLock, addr 0xb454e88, size 0x8, virtual false, abstract: false, final false
inline bool get_easeInTimeLock() ;

/// @brief Method get_easeOutDelayTime, addr 0xb454e98, size 0x8, virtual false, abstract: false, final false
inline float_t get_easeOutDelayTime() ;

/// @brief Method get_easeOutTime, addr 0xb454e78, size 0x8, virtual false, abstract: false, final false
inline float_t get_easeOutTime() ;

/// @brief Method get_featheringEffect, addr 0xb454e58, size 0x8, virtual false, abstract: false, final false
inline float_t get_featheringEffect() ;

/// @brief Method get_vignetteColor, addr 0xb454ea8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_vignetteColor() ;

/// @brief Method get_vignetteColorBlend, addr 0xb454ec0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_vignetteColorBlend() ;

/// @brief Method set_apertureSize, addr 0xb454e50, size 0x8, virtual false, abstract: false, final false
inline void set_apertureSize(float_t  value) ;

/// @brief Method set_apertureVerticalPosition, addr 0xb454ee0, size 0x8, virtual false, abstract: false, final false
inline void set_apertureVerticalPosition(float_t  value) ;

/// @brief Method set_easeInTime, addr 0xb454e70, size 0x8, virtual false, abstract: false, final false
inline void set_easeInTime(float_t  value) ;

/// @brief Method set_easeInTimeLock, addr 0xb454e90, size 0x8, virtual false, abstract: false, final false
inline void set_easeInTimeLock(bool  value) ;

/// @brief Method set_easeOutDelayTime, addr 0xb454ea0, size 0x8, virtual false, abstract: false, final false
inline void set_easeOutDelayTime(float_t  value) ;

/// @brief Method set_easeOutTime, addr 0xb454e80, size 0x8, virtual false, abstract: false, final false
inline void set_easeOutTime(float_t  value) ;

/// @brief Method set_featheringEffect, addr 0xb454e60, size 0x8, virtual false, abstract: false, final false
inline void set_featheringEffect(float_t  value) ;

/// @brief Method set_vignetteColor, addr 0xb454eb4, size 0xc, virtual false, abstract: false, final false
inline void set_vignetteColor(::UnityEngine::Color  value) ;

/// @brief Method set_vignetteColorBlend, addr 0xb454ecc, size 0xc, virtual false, abstract: false, final false
inline void set_vignetteColorBlend(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VignetteParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VignetteParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VignetteParameters(VignetteParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VignetteParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VignetteParameters(VignetteParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11380};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_ApertureSize, offset: 0x10, size: 0x4, def value: None
 float_t  ___m_ApertureSize;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_FeatheringEffect, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_FeatheringEffect;

/// [SerializeField]
/// @brief Field m_EaseInTime, offset: 0x18, size: 0x4, def value: None
 float_t  ___m_EaseInTime;

/// [SerializeField]
/// @brief Field m_EaseOutTime, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_EaseOutTime;

/// [SerializeField]
/// @brief Field m_EaseInTimeLock, offset: 0x20, size: 0x1, def value: None
 bool  ___m_EaseInTimeLock;

/// [SerializeField]
/// @brief Field m_EaseOutDelayTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_EaseOutDelayTime;

/// [SerializeField]
/// @brief Field m_VignetteColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_VignetteColor;

/// [SerializeField]
/// @brief Field m_VignetteColorBlend, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___m_VignetteColorBlend;

/// [SerializeField]
/// [Range(-0.2, 0.2)]
/// @brief Field m_ApertureVerticalPosition, offset: 0x48, size: 0x4, def value: None
 float_t  ___m_ApertureVerticalPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_ApertureSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_FeatheringEffect) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_EaseInTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_EaseOutTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_EaseInTimeLock) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_EaseOutDelayTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_VignetteColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_VignetteColorBlend) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters, ___m_ApertureVerticalPosition) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.VignetteParameters/Defaults
class CORDL_TYPE VignetteParameters_Defaults : public ::System::Object {
public:
// Declarations
/// @brief Field defaultEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultEffect, put=setStaticF_defaultEffect)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  defaultEffect;

/// @brief Field noEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_noEffect, put=setStaticF_noEffect)) ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  noEffect;

/// @brief Field vignetteColorBlendDefault, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_vignetteColorBlendDefault, put=setStaticF_vignetteColorBlendDefault)) ::UnityEngine::Color  vignetteColorBlendDefault;

/// @brief Field vignetteColorDefault, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_vignetteColorDefault, put=setStaticF_vignetteColorDefault)) ::UnityEngine::Color  vignetteColorDefault;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* getStaticF_defaultEffect() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters* getStaticF_noEffect() ;

static inline ::UnityEngine::Color getStaticF_vignetteColorBlendDefault() ;

static inline ::UnityEngine::Color getStaticF_vignetteColorDefault() ;

static inline void setStaticF_defaultEffect(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

static inline void setStaticF_noEffect(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters*  value) ;

static inline void setStaticF_vignetteColorBlendDefault(::UnityEngine::Color  value) ;

static inline void setStaticF_vignetteColorDefault(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VignetteParameters_Defaults() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VignetteParameters_Defaults", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VignetteParameters_Defaults(VignetteParameters_Defaults && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VignetteParameters_Defaults", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VignetteParameters_Defaults(VignetteParameters_Defaults const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11379};

/// @brief Field apertureSizeDefault offset 0xffffffff size 0x4
static constexpr float_t  apertureSizeDefault{static_cast<float_t>(0.7f)};

/// @brief Field apertureSizeMax offset 0xffffffff size 0x4
static constexpr float_t  apertureSizeMax{static_cast<float_t>(1.0f)};

/// @brief Field apertureVerticalPositionDefault offset 0xffffffff size 0x4
static constexpr float_t  apertureVerticalPositionDefault{static_cast<float_t>(0.0f)};

/// @brief Field apertureVerticalPositionMax offset 0xffffffff size 0x4
static constexpr float_t  apertureVerticalPositionMax{static_cast<float_t>(0.2f)};

/// @brief Field apertureVerticalPositionMin offset 0xffffffff size 0x4
static constexpr float_t  apertureVerticalPositionMin{static_cast<float_t>(-0.2f)};

/// @brief Field easeInTimeDefault offset 0xffffffff size 0x4
static constexpr float_t  easeInTimeDefault{static_cast<float_t>(0.3f)};

/// @brief Field easeInTimeLockDefault offset 0xffffffff size 0x1
static constexpr bool  easeInTimeLockDefault{false};

/// @brief Field easeOutDelayTimeDefault offset 0xffffffff size 0x4
static constexpr float_t  easeOutDelayTimeDefault{static_cast<float_t>(0.0f)};

/// @brief Field easeOutTimeDefault offset 0xffffffff size 0x4
static constexpr float_t  easeOutTimeDefault{static_cast<float_t>(0.3f)};

/// @brief Field featheringEffectDefault offset 0xffffffff size 0x4
static constexpr float_t  featheringEffectDefault{static_cast<float_t>(0.2f)};

/// @brief Field featheringEffectMax offset 0xffffffff size 0x4
static constexpr float_t  featheringEffectMax{static_cast<float_t>(1.0f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::VignetteParameters_Defaults) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort
