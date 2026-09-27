#pragma once
// IWYU pragma private; include "UnityEngine/RenderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RenderSettings)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct AmbientMode;
}
namespace UnityEngine::Rendering {
struct SphericalHarmonicsL2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::RenderSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RenderSettings*, "UnityEngine", "RenderSettings");
// [NativeHeader("Runtime/Graphics/QualitySettingsTypes.h")]
// [StaticAccessor("GetRenderSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Runtime/Camera/RenderSettings.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method get_ambientEquatorColor, addr 0xb58bd7c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_ambientEquatorColor() ;

/// @brief Method get_ambientEquatorColor_Injected, addr 0xb58bdc4, size 0x3c, virtual false, abstract: false, final false
static inline void get_ambientEquatorColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_ambientGroundColor, addr 0xb58be00, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_ambientGroundColor() ;

/// @brief Method get_ambientGroundColor_Injected, addr 0xb58be48, size 0x3c, virtual false, abstract: false, final false
static inline void get_ambientGroundColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_ambientMode, addr 0xb58bcd0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::AmbientMode get_ambientMode() ;

/// [NativeMethod("GetFinalAmbientProbe")]
/// @brief Method get_ambientProbe, addr 0xb58c0d0, size 0x6c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::SphericalHarmonicsL2 get_ambientProbe() ;

/// @brief Method get_ambientProbe_Injected, addr 0xb58c13c, size 0x3c, virtual false, abstract: false, final false
static inline void get_ambientProbe_Injected(::by_ref<::UnityEngine::Rendering::SphericalHarmonicsL2>  ret) ;

/// @brief Method get_ambientSkyColor, addr 0xb58bcf8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_ambientSkyColor() ;

/// @brief Method get_ambientSkyColor_Injected, addr 0xb58bd40, size 0x3c, virtual false, abstract: false, final false
static inline void get_ambientSkyColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_fog, addr 0xb58bca8, size 0x28, virtual false, abstract: false, final false
static inline bool get_fog() ;

/// @brief Method get_reflectionIntensity, addr 0xb58c178, size 0x28, virtual false, abstract: false, final false
static inline float_t get_reflectionIntensity() ;

/// @brief Method get_skybox, addr 0xb58bf08, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_skybox() ;

/// @brief Method get_skybox_Injected, addr 0xb58bf68, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_skybox_Injected() ;

/// @brief Method get_subtractiveShadowColor, addr 0xb58be84, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_subtractiveShadowColor() ;

/// @brief Method get_subtractiveShadowColor_Injected, addr 0xb58becc, size 0x3c, virtual false, abstract: false, final false
static inline void get_subtractiveShadowColor_Injected(::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_sun, addr 0xb58c048, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Light> get_sun() ;

/// @brief Method get_sun_Injected, addr 0xb58c0a8, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr get_sun_Injected() ;

/// @brief Method set_skybox, addr 0xb58bf90, size 0x7c, virtual false, abstract: false, final false
static inline void set_skybox(::UnityEngine::Material*  value) ;

/// @brief Method set_skybox_Injected, addr 0xb58c00c, size 0x3c, virtual false, abstract: false, final false
static inline void set_skybox_Injected(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderSettings(RenderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderSettings(RenderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RenderSettings) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
