#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_AOSampleOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_DepthSource_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_NormalQuality_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionSettings)
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_AOMethodOptions;
}
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_AOSampleOption;
}
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions;
}
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_DepthSource;
}
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionSettings_NormalQuality;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionSettings");
// Dependencies System.Object, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::AOMethodOptions, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::AOSampleOption, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::BlurQualityOptions, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::DepthSource, UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings::NormalQuality
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionSettings
class CORDL_TYPE ScreenSpaceAmbientOcclusionSettings : public ::System::Object {
public:
// Declarations
using AOMethodOptions = ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions;

using AOSampleOption = ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption;

using BlurQualityOptions = ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions;

using DepthSource = ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource;

using NormalQuality = ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality;

/// @brief Field AOMethod, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_AOMethod, put=__cordl_internal_set_AOMethod)) ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions  AOMethod;

/// @brief Field AfterOpaque, offset 0x15, size 0x1 
 __declspec(property(get=__cordl_internal_get_AfterOpaque, put=__cordl_internal_set_AfterOpaque)) bool  AfterOpaque;

/// @brief Field BlurQuality, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlurQuality, put=__cordl_internal_set_BlurQuality)) ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions  BlurQuality;

/// @brief Field DirectLightingStrength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_DirectLightingStrength, put=__cordl_internal_set_DirectLightingStrength)) float_t  DirectLightingStrength;

/// @brief Field Downsample, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_Downsample, put=__cordl_internal_set_Downsample)) bool  Downsample;

/// @brief Field Falloff, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_Falloff, put=__cordl_internal_set_Falloff)) float_t  Falloff;

/// @brief Field Intensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Intensity, put=__cordl_internal_set_Intensity)) float_t  Intensity;

/// @brief Field NormalSamples, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_NormalSamples, put=__cordl_internal_set_NormalSamples)) ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality  NormalSamples;

/// @brief Field Radius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field SampleCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_SampleCount, put=__cordl_internal_set_SampleCount)) int32_t  SampleCount;

/// @brief Field Samples, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Samples, put=__cordl_internal_set_Samples)) ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption  Samples;

/// @brief Field Source, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Source, put=__cordl_internal_set_Source)) ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource  Source;

static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* New_ctor() ;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions const& __cordl_internal_get_AOMethod() const;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions& __cordl_internal_get_AOMethod() ;

constexpr bool const& __cordl_internal_get_AfterOpaque() const;

constexpr bool& __cordl_internal_get_AfterOpaque() ;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const& __cordl_internal_get_BlurQuality() const;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions& __cordl_internal_get_BlurQuality() ;

constexpr float_t const& __cordl_internal_get_DirectLightingStrength() const;

constexpr float_t& __cordl_internal_get_DirectLightingStrength() ;

constexpr bool const& __cordl_internal_get_Downsample() const;

constexpr bool& __cordl_internal_get_Downsample() ;

constexpr float_t const& __cordl_internal_get_Falloff() const;

constexpr float_t& __cordl_internal_get_Falloff() ;

constexpr float_t const& __cordl_internal_get_Intensity() const;

constexpr float_t& __cordl_internal_get_Intensity() ;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality const& __cordl_internal_get_NormalSamples() const;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality& __cordl_internal_get_NormalSamples() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr int32_t const& __cordl_internal_get_SampleCount() const;

constexpr int32_t& __cordl_internal_get_SampleCount() ;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption const& __cordl_internal_get_Samples() const;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption& __cordl_internal_get_Samples() ;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource const& __cordl_internal_get_Source() const;

constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource& __cordl_internal_get_Source() ;

constexpr void __cordl_internal_set_AOMethod(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions  value) ;

constexpr void __cordl_internal_set_AfterOpaque(bool  value) ;

constexpr void __cordl_internal_set_BlurQuality(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions  value) ;

constexpr void __cordl_internal_set_DirectLightingStrength(float_t  value) ;

constexpr void __cordl_internal_set_Downsample(bool  value) ;

constexpr void __cordl_internal_set_Falloff(float_t  value) ;

constexpr void __cordl_internal_set_Intensity(float_t  value) ;

constexpr void __cordl_internal_set_NormalSamples(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_SampleCount(int32_t  value) ;

constexpr void __cordl_internal_set_Samples(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption  value) ;

constexpr void __cordl_internal_set_Source(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource  value) ;

/// @brief Method .ctor, addr 0xb2815d4, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceAmbientOcclusionSettings(ScreenSpaceAmbientOcclusionSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusionSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceAmbientOcclusionSettings(ScreenSpaceAmbientOcclusionSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18577};

/// [SerializeField]
/// @brief Field AOMethod, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions  ___AOMethod;

/// [SerializeField]
/// @brief Field Downsample, offset: 0x14, size: 0x1, def value: None
 bool  ___Downsample;

/// [SerializeField]
/// @brief Field AfterOpaque, offset: 0x15, size: 0x1, def value: None
 bool  ___AfterOpaque;

/// [SerializeField]
/// @brief Field Source, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource  ___Source;

/// [SerializeField]
/// @brief Field NormalSamples, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality  ___NormalSamples;

/// [SerializeField]
/// @brief Field Intensity, offset: 0x20, size: 0x4, def value: None
 float_t  ___Intensity;

/// [SerializeField]
/// @brief Field DirectLightingStrength, offset: 0x24, size: 0x4, def value: None
 float_t  ___DirectLightingStrength;

/// [SerializeField]
/// @brief Field Radius, offset: 0x28, size: 0x4, def value: None
 float_t  ___Radius;

/// [SerializeField]
/// @brief Field Samples, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption  ___Samples;

/// [SerializeField]
/// @brief Field BlurQuality, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions  ___BlurQuality;

/// [SerializeField]
/// @brief Field Falloff, offset: 0x34, size: 0x4, def value: None
 float_t  ___Falloff;

/// [SerializeField]
/// @brief Field SampleCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___SampleCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___AOMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Downsample) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___AfterOpaque) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___NormalSamples) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Intensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___DirectLightingStrength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Radius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Samples) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___BlurQuality) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___Falloff) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings, ___SampleCount) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
