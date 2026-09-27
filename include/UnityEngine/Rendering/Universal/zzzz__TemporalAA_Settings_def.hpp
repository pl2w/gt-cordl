#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TemporalAA_Settings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAAQuality_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemporalAA_Settings)
namespace UnityEngine::Rendering::Universal {
struct TemporalAAQuality;
}
// Forward declare root types
namespace GlobalNamespace {
struct TemporalAA_Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TemporalAA_Settings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TemporalAA_Settings, "UnityEngine.Rendering.Universal", "TemporalAA/Settings");
// Dependencies UnityEngine.Rendering.Universal.TemporalAAQuality
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/Settings
struct CORDL_TYPE TemporalAA_Settings {
public:
// Declarations
 __declspec(property(get=get_baseBlendFactor, put=set_baseBlendFactor)) float_t  baseBlendFactor;

 __declspec(property(get=get_contrastAdaptiveSharpening, put=set_contrastAdaptiveSharpening)) float_t  contrastAdaptiveSharpening;

 __declspec(property(get=get_jitterScale, put=set_jitterScale)) float_t  jitterScale;

 __declspec(property(get=get_mipBias, put=set_mipBias)) float_t  mipBias;

 __declspec(property(get=get_quality, put=set_quality)) ::UnityEngine::Rendering::Universal::TemporalAAQuality  quality;

 __declspec(property(get=get_varianceClampScale, put=set_varianceClampScale)) float_t  varianceClampScale;

/// @brief Method Create, addr 0xb2a1bf8, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TemporalAA_Settings Create() ;

/// @brief Method get_baseBlendFactor, addr 0xb2a1b20, size 0x10, virtual false, abstract: false, final false
inline float_t get_baseBlendFactor() ;

/// @brief Method get_contrastAdaptiveSharpening, addr 0xb2a1bd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_contrastAdaptiveSharpening() ;

/// @brief Method get_jitterScale, addr 0xb2a1b54, size 0x8, virtual false, abstract: false, final false
inline float_t get_jitterScale() ;

/// @brief Method get_mipBias, addr 0xb2a1b7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_mipBias() ;

/// @brief Method get_quality, addr 0xb2a1b00, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::TemporalAAQuality get_quality() ;

/// @brief Method get_varianceClampScale, addr 0xb2a1ba4, size 0x8, virtual false, abstract: false, final false
inline float_t get_varianceClampScale() ;

/// @brief Method set_baseBlendFactor, addr 0xb2a1b30, size 0x24, virtual false, abstract: false, final false
inline void set_baseBlendFactor(float_t  value) ;

/// @brief Method set_contrastAdaptiveSharpening, addr 0xb2a1bd8, size 0x20, virtual false, abstract: false, final false
inline void set_contrastAdaptiveSharpening(float_t  value) ;

/// @brief Method set_jitterScale, addr 0xb2a1b5c, size 0x20, virtual false, abstract: false, final false
inline void set_jitterScale(float_t  value) ;

/// @brief Method set_mipBias, addr 0xb2a1b84, size 0x20, virtual false, abstract: false, final false
inline void set_mipBias(float_t  value) ;

/// @brief Method set_quality, addr 0xb2a1b08, size 0x18, virtual false, abstract: false, final false
inline void set_quality(::UnityEngine::Rendering::Universal::TemporalAAQuality  value) ;

/// @brief Method set_varianceClampScale, addr 0xb2a1bac, size 0x24, virtual false, abstract: false, final false
inline void set_varianceClampScale(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TemporalAA_Settings() ;

// Ctor Parameters [CppParam { name: "m_Quality", ty: "::UnityEngine::Rendering::Universal::TemporalAAQuality", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FrameInfluence", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_JitterScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MipBias", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_VarianceClampScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ContrastAdaptiveSharpening", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "resetHistoryFrames", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "jitterFrameCountOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TemporalAA_Settings(::UnityEngine::Rendering::Universal::TemporalAAQuality  m_Quality, float_t  m_FrameInfluence, float_t  m_JitterScale, float_t  m_MipBias, float_t  m_VarianceClampScale, float_t  m_ContrastAdaptiveSharpening, int32_t  resetHistoryFrames, int32_t  jitterFrameCountOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// [FormerlySerializedAs("quality")]
/// @brief Field m_Quality, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Rendering::Universal::TemporalAAQuality  m_Quality;

/// [SerializeField]
/// [FormerlySerializedAs("frameInfluence")]
/// @brief Field m_FrameInfluence, offset: 0x4, size: 0x4, def value: None
 float_t  m_FrameInfluence;

/// [SerializeField]
/// [FormerlySerializedAs("jitterScale")]
/// @brief Field m_JitterScale, offset: 0x8, size: 0x4, def value: None
 float_t  m_JitterScale;

/// [SerializeField]
/// [FormerlySerializedAs("mipBias")]
/// @brief Field m_MipBias, offset: 0xc, size: 0x4, def value: None
 float_t  m_MipBias;

/// [SerializeField]
/// [FormerlySerializedAs("varianceClampScale")]
/// @brief Field m_VarianceClampScale, offset: 0x10, size: 0x4, def value: None
 float_t  m_VarianceClampScale;

/// [SerializeField]
/// [FormerlySerializedAs("contrastAdaptiveSharpening")]
/// @brief Field m_ContrastAdaptiveSharpening, offset: 0x14, size: 0x4, def value: None
 float_t  m_ContrastAdaptiveSharpening;

/// @brief Field resetHistoryFrames, offset: 0x18, size: 0x4, def value: None
 int32_t  resetHistoryFrames;

/// @brief Field jitterFrameCountOffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  jitterFrameCountOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, m_Quality) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, m_FrameInfluence) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, m_JitterScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, m_MipBias) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, m_VarianceClampScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, m_ContrastAdaptiveSharpening) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, resetHistoryFrames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TemporalAA_Settings, jitterFrameCountOffset) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TemporalAA_Settings) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
