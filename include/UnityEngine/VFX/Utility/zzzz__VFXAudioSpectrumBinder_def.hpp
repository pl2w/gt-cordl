#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXAudioSpectrumBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXAudioSpectrumBinder_AudioSourceMode_def.hpp"
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FFTWindow_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXAudioSpectrumBinder)
namespace GlobalNamespace {
struct VFXAudioSpectrumBinder_AudioSourceMode;
}
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXAudioSpectrumBinder;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder*, "UnityEngine.VFX.Utility", "VFXAudioSpectrumBinder");
// [AddComponentMenu("VFX/Property Binders/Audio Spectrum Binder")]
// [VFXBinder("Audio/Audio Spectrum to AttributeMap")]
// Dependencies UnityEngine.Color, UnityEngine.FFTWindow, UnityEngine.VFX.Utility.VFXAudioSpectrumBinder::AudioSourceMode, UnityEngine.VFX.Utility.VFXBinderBase
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXAudioSpectrumBinder
class CORDL_TYPE VFXAudioSpectrumBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
// Declarations
using AudioSourceMode = ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode;

/// @brief Field AudioSource, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_AudioSource, put=__cordl_internal_set_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

 __declspec(property(get=get_CountProperty, put=set_CountProperty)) ::StringW  CountProperty;

/// @brief Field FFTWindow, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_FFTWindow, put=__cordl_internal_set_FFTWindow)) ::UnityEngine::FFTWindow  FFTWindow;

/// @brief Field Mode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_Mode, put=__cordl_internal_set_Mode)) ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode  Mode;

/// @brief Field Samples, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Samples, put=__cordl_internal_set_Samples)) uint32_t  Samples;

 __declspec(property(get=get_TextureProperty, put=set_TextureProperty)) ::StringW  TextureProperty;

/// @brief Field m_AudioCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioCache, put=__cordl_internal_set_m_AudioCache)) ::ArrayW<float_t>  m_AudioCache;

/// @brief Field m_ColorCache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ColorCache, put=__cordl_internal_set_m_ColorCache)) ::ArrayW<::UnityEngine::Color>  m_ColorCache;

/// @brief Field m_CountProperty, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CountProperty, put=__cordl_internal_set_m_CountProperty)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_CountProperty;

/// @brief Field m_Texture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Texture, put=__cordl_internal_set_m_Texture)) ::UnityW<::UnityEngine::Texture2D>  m_Texture;

/// @brief Field m_TextureProperty, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextureProperty, put=__cordl_internal_set_m_TextureProperty)) ::UnityEngine::VFX::Utility::ExposedProperty*  m_TextureProperty;

/// @brief Method IsValid, addr 0xb3e6a94, size 0xc4, virtual true, abstract: false, final false
inline bool IsValid(::UnityEngine::VFX::VisualEffect*  component) ;

static inline ::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder* New_ctor() ;

/// @brief Method ToString, addr 0xb3e6e58, size 0x8c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateBinding, addr 0xb3e6dfc, size 0x5c, virtual true, abstract: false, final false
inline void UpdateBinding(::UnityEngine::VFX::VisualEffect*  component) ;

/// @brief Method UpdateTexture, addr 0xb3e6b58, size 0x2a4, virtual false, abstract: false, final false
inline void UpdateTexture() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_AudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_AudioSource() ;

constexpr ::UnityEngine::FFTWindow const& __cordl_internal_get_FFTWindow() const;

constexpr ::UnityEngine::FFTWindow& __cordl_internal_get_FFTWindow() ;

constexpr ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode const& __cordl_internal_get_Mode() const;

constexpr ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode& __cordl_internal_get_Mode() ;

constexpr uint32_t const& __cordl_internal_get_Samples() const;

constexpr uint32_t& __cordl_internal_get_Samples() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_AudioCache() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_AudioCache() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_m_ColorCache() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_m_ColorCache() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_CountProperty() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_CountProperty() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Texture() ;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_TextureProperty() const;

constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_TextureProperty() ;

constexpr void __cordl_internal_set_AudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_FFTWindow(::UnityEngine::FFTWindow  value) ;

constexpr void __cordl_internal_set_Mode(::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode  value) ;

constexpr void __cordl_internal_set_Samples(uint32_t  value) ;

constexpr void __cordl_internal_set_m_AudioCache(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_ColorCache(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_m_CountProperty(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

constexpr void __cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_m_TextureProperty(::UnityEngine::VFX::Utility::ExposedProperty*  value) ;

/// @brief Method .ctor, addr 0xb3e6ee4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CountProperty, addr 0xb3e6a1c, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_CountProperty() ;

/// @brief Method get_TextureProperty, addr 0xb3e6a58, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_TextureProperty() ;

/// @brief Method set_CountProperty, addr 0xb3e6a34, size 0x24, virtual false, abstract: false, final false
inline void set_CountProperty(::StringW  value) ;

/// @brief Method set_TextureProperty, addr 0xb3e6a70, size 0x24, virtual false, abstract: false, final false
inline void set_TextureProperty(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VFXAudioSpectrumBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VFXAudioSpectrumBinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VFXAudioSpectrumBinder(VFXAudioSpectrumBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VFXAudioSpectrumBinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VFXAudioSpectrumBinder(VFXAudioSpectrumBinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30058};

/// [VFXPropertyBinding(new[] { "System.UInt32" })]
/// [SerializeField]
/// [FormerlySerializedAs("m_CountParameter")]
/// @brief Field m_CountProperty, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_CountProperty;

/// [VFXPropertyBinding(new[] { "UnityEngine.Texture2D" })]
/// [SerializeField]
/// [FormerlySerializedAs("m_TextureParameter")]
/// @brief Field m_TextureProperty, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::VFX::Utility::ExposedProperty*  ___m_TextureProperty;

/// @brief Field FFTWindow, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::FFTWindow  ___FFTWindow;

/// @brief Field Samples, offset: 0x3c, size: 0x4, def value: None
 uint32_t  ___Samples;

/// @brief Field Mode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::VFXAudioSpectrumBinder_AudioSourceMode  ___Mode;

/// @brief Field AudioSource, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___AudioSource;

/// @brief Field m_Texture, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___m_Texture;

/// @brief Field m_AudioCache, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_AudioCache;

/// @brief Field m_ColorCache, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___m_ColorCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_CountProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_TextureProperty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___FFTWindow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___Samples) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___Mode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___AudioSource) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_Texture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_AudioCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder, ___m_ColorCache) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXAudioSpectrumBinder) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::VFX::Utility
