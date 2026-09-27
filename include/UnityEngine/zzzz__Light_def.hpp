#pragma once
// IWYU pragma private; include "UnityEngine/Light.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__LightShape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Light)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
struct LightShadowResolution;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightBakingOutput;
}
namespace UnityEngine {
struct LightShadows;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Light;
}
// Write type traits
MARK_REF_T(::UnityEngine::Light*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Light*, "UnityEngine", "Light");
// [NativeHeader("Runtime/Export/Graphics/Light.bindings.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Runtime/Camera/Light.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.Behaviour, UnityEngine.LightShape
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Light
class CORDL_TYPE Light : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief Field <shape>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__shape_k__BackingField, put=__cordl_internal_set__shape_k__BackingField)) ::UnityEngine::LightShape  _shape_k__BackingField;

 __declspec(property(get=get_areaSize)) ::UnityEngine::Vector2  areaSize;

 __declspec(property(get=get_bakingOutput, put=set_bakingOutput)) ::UnityEngine::LightBakingOutput  bakingOutput;

 __declspec(property(get=get_bounceIntensity)) float_t  bounceIntensity;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

 __declspec(property(get=get_colorTemperature)) float_t  colorTemperature;

 __declspec(property(get=get_cookie)) ::UnityW<::UnityEngine::Texture>  cookie;

 __declspec(property(get=get_cookieSize)) float_t  cookieSize;

 __declspec(property(get=get_dilatedRange)) float_t  dilatedRange;

 __declspec(property(get=get_enableSpotReflector)) bool  enableSpotReflector;

 __declspec(property(get=get_innerSpotAngle)) float_t  innerSpotAngle;

 __declspec(property(get=get_intensity, put=set_intensity)) float_t  intensity;

 __declspec(property(get=get_luxAtDistance)) float_t  luxAtDistance;

/// @brief Field m_BakedIndex, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BakedIndex, put=__cordl_internal_set_m_BakedIndex)) int32_t  m_BakedIndex;

 __declspec(property(get=get_range, put=set_range)) float_t  range;

 __declspec(property(put=set_renderingLayerMask)) int32_t  renderingLayerMask;

 __declspec(property(get=get_shadowBias)) float_t  shadowBias;

 __declspec(property(get=get_shadowNearPlane)) float_t  shadowNearPlane;

 __declspec(property(get=get_shadowNormalBias)) float_t  shadowNormalBias;

 __declspec(property(get=get_shadowResolution)) ::UnityEngine::Rendering::LightShadowResolution  shadowResolution;

 __declspec(property(get=get_shadowStrength)) float_t  shadowStrength;

 __declspec(property(get=get_shadows)) ::UnityEngine::LightShadows  shadows;

 __declspec(property(get=get_spotAngle)) float_t  spotAngle;

/// @brief [NativeProperty("LightType")]
 __declspec(property(get=get_type)) ::UnityEngine::LightType  type;

 __declspec(property(get=get_useColorTemperature)) bool  useColorTemperature;

static inline ::UnityEngine::Light* New_ctor() ;

constexpr ::UnityEngine::LightShape const& __cordl_internal_get__shape_k__BackingField() const;

constexpr ::UnityEngine::LightShape& __cordl_internal_get__shape_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_m_BakedIndex() const;

constexpr int32_t& __cordl_internal_get_m_BakedIndex() ;

constexpr void __cordl_internal_set__shape_k__BackingField(::UnityEngine::LightShape  value) ;

constexpr void __cordl_internal_set_m_BakedIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0xb59e558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_areaSize, addr 0xb59e48c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_areaSize() ;

/// @brief Method get_areaSize_Injected, addr 0xb59e514, size 0x44, virtual false, abstract: false, final false
static inline void get_areaSize_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_bakingOutput, addr 0xb59de7c, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::LightBakingOutput get_bakingOutput() ;

/// @brief Method get_bakingOutput_Injected, addr 0xb59df20, size 0x44, virtual false, abstract: false, final false
static inline void get_bakingOutput_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LightBakingOutput>  ret) ;

/// @brief Method get_bounceIntensity, addr 0xb59d808, size 0x78, virtual false, abstract: false, final false
inline float_t get_bounceIntensity() ;

/// @brief Method get_bounceIntensity_Injected, addr 0xb59d880, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_bounceIntensity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_color, addr 0xb59d36c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method get_colorTemperature, addr 0xb59d518, size 0x78, virtual false, abstract: false, final false
inline float_t get_colorTemperature() ;

/// @brief Method get_colorTemperature_Injected, addr 0xb59d590, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_colorTemperature_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_color_Injected, addr 0xb59d400, size 0x44, virtual false, abstract: false, final false
static inline void get_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret) ;

/// @brief Method get_cookie, addr 0xb59e3bc, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> get_cookie() ;

/// @brief Method get_cookieSize, addr 0xb59e308, size 0x78, virtual false, abstract: false, final false
inline float_t get_cookieSize() ;

/// @brief Method get_cookieSize_Injected, addr 0xb59e380, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_cookieSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_cookie_Injected, addr 0xb59e450, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_cookie_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_dilatedRange, addr 0xb59ddc8, size 0x78, virtual false, abstract: false, final false
inline float_t get_dilatedRange() ;

/// @brief Method get_dilatedRange_Injected, addr 0xb59de40, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_dilatedRange_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_enableSpotReflector, addr 0xb59d970, size 0x78, virtual false, abstract: false, final false
inline bool get_enableSpotReflector() ;

/// @brief Method get_enableSpotReflector_Injected, addr 0xb59d9e8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_enableSpotReflector_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_innerSpotAngle, addr 0xb59d2b8, size 0x78, virtual false, abstract: false, final false
inline float_t get_innerSpotAngle() ;

/// @brief Method get_innerSpotAngle_Injected, addr 0xb59d330, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_innerSpotAngle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_intensity, addr 0xb59d680, size 0x78, virtual false, abstract: false, final false
inline float_t get_intensity() ;

/// @brief Method get_intensity_Injected, addr 0xb59d6f8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_intensity_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_luxAtDistance, addr 0xb59d8bc, size 0x78, virtual false, abstract: false, final false
inline float_t get_luxAtDistance() ;

/// @brief Method get_luxAtDistance_Injected, addr 0xb59d934, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_luxAtDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_range, addr 0xb59dc40, size 0x78, virtual false, abstract: false, final false
inline float_t get_range() ;

/// @brief Method get_range_Injected, addr 0xb59dcb8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_range_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowBias, addr 0xb59da24, size 0x78, virtual false, abstract: false, final false
inline float_t get_shadowBias() ;

/// @brief Method get_shadowBias_Injected, addr 0xb59da9c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowNearPlane, addr 0xb59db8c, size 0x78, virtual false, abstract: false, final false
inline float_t get_shadowNearPlane() ;

/// @brief Method get_shadowNearPlane_Injected, addr 0xb59dc04, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowNearPlane_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowNormalBias, addr 0xb59dad8, size 0x78, virtual false, abstract: false, final false
inline float_t get_shadowNormalBias() ;

/// @brief Method get_shadowNormalBias_Injected, addr 0xb59db50, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowNormalBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowResolution, addr 0xb59e254, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LightShadowResolution get_shadowResolution() ;

/// @brief Method get_shadowResolution_Injected, addr 0xb59e2cc, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::LightShadowResolution get_shadowResolution_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowStrength, addr 0xb59e1a0, size 0x78, virtual false, abstract: false, final false
inline float_t get_shadowStrength() ;

/// @brief Method get_shadowStrength_Injected, addr 0xb59e218, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowStrength_Injected(::System::IntPtr  _unity_self) ;

/// [NativeMethod("GetShadowType")]
/// @brief Method get_shadows, addr 0xb59e0ec, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::LightShadows get_shadows() ;

/// @brief Method get_shadows_Injected, addr 0xb59e164, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LightShadows get_shadows_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spotAngle, addr 0xb59d204, size 0x78, virtual false, abstract: false, final false
inline float_t get_spotAngle() ;

/// @brief Method get_spotAngle_Injected, addr 0xb59d27c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_spotAngle_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_type, addr 0xb59d150, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::LightType get_type() ;

/// @brief Method get_type_Injected, addr 0xb59d1c8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LightType get_type_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_useColorTemperature, addr 0xb59d5cc, size 0x78, virtual false, abstract: false, final false
inline bool get_useColorTemperature() ;

/// @brief Method get_useColorTemperature_Injected, addr 0xb59d644, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useColorTemperature_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_bakingOutput, addr 0xb59df64, size 0x80, virtual false, abstract: false, final false
inline void set_bakingOutput(::UnityEngine::LightBakingOutput  value) ;

/// @brief Method set_bakingOutput_Injected, addr 0xb59dfe4, size 0x44, virtual false, abstract: false, final false
static inline void set_bakingOutput_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::LightBakingOutput>  value) ;

/// @brief Method set_color, addr 0xb59d444, size 0x90, virtual false, abstract: false, final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method set_color_Injected, addr 0xb59d4d4, size 0x44, virtual false, abstract: false, final false
static inline void set_color_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method set_intensity, addr 0xb59d734, size 0x88, virtual false, abstract: false, final false
inline void set_intensity(float_t  value) ;

/// @brief Method set_intensity_Injected, addr 0xb59d7bc, size 0x4c, virtual false, abstract: false, final false
static inline void set_intensity_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_range, addr 0xb59dcf4, size 0x88, virtual false, abstract: false, final false
inline void set_range(float_t  value) ;

/// @brief Method set_range_Injected, addr 0xb59dd7c, size 0x4c, virtual false, abstract: false, final false
static inline void set_range_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_renderingLayerMask, addr 0xb59e028, size 0x80, virtual false, abstract: false, final false
inline void set_renderingLayerMask(int32_t  value) ;

/// @brief Method set_renderingLayerMask_Injected, addr 0xb59e0a8, size 0x44, virtual false, abstract: false, final false
static inline void set_renderingLayerMask_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Light() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Light(Light && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Light(Light const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14892};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <shape>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::UnityEngine::LightShape  ____shape_k__BackingField;

/// @brief Field m_BakedIndex, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_BakedIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Light, ____shape_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Light, ___m_BakedIndex) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Light) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
