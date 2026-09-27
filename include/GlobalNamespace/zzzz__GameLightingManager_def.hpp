#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataLegacy_def.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataPacked_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLightingManager)
namespace GlobalNamespace {
class GameLight;
}
namespace GlobalNamespace {
struct GameLightingManager_LightDataLegacy;
}
namespace GlobalNamespace {
struct GameLightingManager_LightDataPacked;
}
namespace GlobalNamespace {
struct GameLightingManager_LightInput;
}
namespace GlobalNamespace {
class GameLightingManager__Preheat_d__33;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLightingManager;
}
namespace GlobalNamespace {
class GameLightingManager__Preheat_d__33;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameLightingManager*);
MARK_REF_T(::GlobalNamespace::GameLightingManager__Preheat_d__33*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightingManager*, "", "GameLightingManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightingManager__Preheat_d__33*, "", "GameLightingManager/<Preheat>d__33");
// Dependencies GameLight, GameLightingManager::LightDataLegacy, GameLightingManager::LightDataPacked, MonoBehaviourTick, Unity.Collections.NativeArray`1<T>, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLightingManager
class CORDL_TYPE GameLightingManager : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using LightDataLegacy = ::GlobalNamespace::GameLightingManager_LightDataLegacy;

using LightDataPacked = ::GlobalNamespace::GameLightingManager_LightDataPacked;

using LightInput = ::GlobalNamespace::GameLightingManager_LightInput;

using _Preheat_d__33 = ::GlobalNamespace::GameLightingManager__Preheat_d__33;

 __declspec(property(get=get_GR_NearsightedDimLight)) ::UnityW<::UnityEngine::Light>  GR_NearsightedDimLight;

 __declspec(property(get=get_IsDynamicLightingEnabled)) bool  IsDynamicLightingEnabled;

/// @brief Field _GR_NearsightedDimLight, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__GR_NearsightedDimLight, put=__cordl_internal_set__GR_NearsightedDimLight)) ::UnityW<::UnityEngine::Light>  _GR_NearsightedDimLight;

/// @brief Field _shaderPropId_DesaturateAndTint_TintAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderPropId_DesaturateAndTint_TintAmount, put=setStaticF__shaderPropId_DesaturateAndTint_TintAmount)) int32_t  _shaderPropId_DesaturateAndTint_TintAmount;

/// @brief Field _shaderPropId_DesaturateAndTint_TintColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderPropId_DesaturateAndTint_TintColor, put=setStaticF__shaderPropId_DesaturateAndTint_TintColor)) int32_t  _shaderPropId_DesaturateAndTint_TintColor;

/// @brief Field _shaderPropId_GameLight_Ambient_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderPropId_GameLight_Ambient_Color, put=setStaticF__shaderPropId_GameLight_Ambient_Color)) int32_t  _shaderPropId_GameLight_Ambient_Color;

/// @brief Field _shaderPropId_GameLight_Lights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderPropId_GameLight_Lights, put=setStaticF__shaderPropId_GameLight_Lights)) int32_t  _shaderPropId_GameLight_Lights;

/// @brief Field _shaderPropId_GameLight_LightsPacked, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderPropId_GameLight_LightsPacked, put=setStaticF__shaderPropId_GameLight_LightsPacked)) int32_t  _shaderPropId_GameLight_LightsPacked;

/// @brief Field _shaderPropId_GameLight_UseMaxLights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderPropId_GameLight_UseMaxLights, put=setStaticF__shaderPropId_GameLight_UseMaxLights)) int32_t  _shaderPropId_GameLight_UseMaxLights;

/// @brief Field customVertexLightingEnabled, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_customVertexLightingEnabled, put=__cordl_internal_set_customVertexLightingEnabled)) bool  customVertexLightingEnabled;

/// @brief Field desaturateAndTintEnabled, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_desaturateAndTintEnabled, put=__cordl_internal_set_desaturateAndTintEnabled)) bool  desaturateAndTintEnabled;

/// @brief Field gameLights, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameLights, put=__cordl_internal_set_gameLights)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>*  gameLights;

/// @brief Field immediateSort, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_immediateSort, put=__cordl_internal_set_immediateSort)) bool  immediateSort;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::GameLightingManager>  instance;

/// @brief Field lightData, offset 0x90, size 0x10 
 __declspec(property(get=__cordl_internal_get_lightData, put=__cordl_internal_set_lightData)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked>  lightData;

/// @brief Field lightDataBuffer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightDataBuffer, put=__cordl_internal_set_lightDataBuffer)) ::UnityEngine::GraphicsBuffer*  lightDataBuffer;

/// @brief Field lightDataBufferLegacy, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightDataBufferLegacy, put=__cordl_internal_set_lightDataBufferLegacy)) ::UnityEngine::GraphicsBuffer*  lightDataBufferLegacy;

/// @brief Field lightDataLegacy, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_lightDataLegacy, put=__cordl_internal_set_lightDataLegacy)) ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy>  lightDataLegacy;

/// @brief Field mainCameraTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCameraTransform, put=__cordl_internal_set_mainCameraTransform)) ::UnityW<::UnityEngine::Transform>  mainCameraTransform;

/// @brief Field maxUseTestLights, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxUseTestLights, put=__cordl_internal_set_maxUseTestLights)) int32_t  maxUseTestLights;

/// @brief Field nextLightCacheUpdate, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLightCacheUpdate, put=__cordl_internal_set_nextLightCacheUpdate)) int32_t  nextLightCacheUpdate;

/// @brief Field nextLightUpdate, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLightUpdate, put=__cordl_internal_set_nextLightUpdate)) int32_t  nextLightUpdate;

/// @brief Field skipNextSlice, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipNextSlice, put=__cordl_internal_set_skipNextSlice)) bool  skipNextSlice;

/// @brief Field sortKeys, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortKeys, put=__cordl_internal_set_sortKeys)) ::ArrayW<float_t>  sortKeys;

/// @brief Field sortValues, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_sortValues, put=__cordl_internal_set_sortValues)) ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  sortValues;

/// @brief Field testAmbience, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_testAmbience, put=__cordl_internal_set_testAmbience)) ::UnityEngine::Color  testAmbience;

/// @brief Field testLightBrightness, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_testLightBrightness, put=__cordl_internal_set_testLightBrightness)) float_t  testLightBrightness;

/// @brief Field testLightColor, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_testLightColor, put=__cordl_internal_set_testLightColor)) ::UnityEngine::Color  testLightColor;

/// @brief Field testLightRadius, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_testLightRadius, put=__cordl_internal_set_testLightRadius)) float_t  testLightRadius;

/// @brief Field testLightsCenter, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_testLightsCenter, put=__cordl_internal_set_testLightsCenter)) ::UnityW<::UnityEngine::Transform>  testLightsCenter;

/// @brief Field zoneDynamicLightingEnableCount, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneDynamicLightingEnableCount, put=__cordl_internal_set_zoneDynamicLightingEnableCount)) int32_t  zoneDynamicLightingEnableCount;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method AddGameLight, addr 0x5835ac8, size 0x19c, virtual false, abstract: false, final false
inline int32_t AddGameLight(::GlobalNamespace::GameLight*  light, bool  ignoreUnityLightDisable) ;

/// @brief Method Awake, addr 0x5836028, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheAllLightData, addr 0x5836f94, size 0x180, virtual false, abstract: false, final false
inline void CacheAllLightData() ;

/// @brief Method CacheLightDataForNonCloseLights, addr 0x5837114, size 0x1ac, virtual false, abstract: false, final false
inline void CacheLightDataForNonCloseLights(int32_t  numLightsToUpdateCache) ;

/// @brief Method ClearGameLights, addr 0x58362d4, size 0x198, virtual false, abstract: false, final false
inline void ClearGameLights() ;

/// @brief Method GetFromLight, addr 0x58374a8, size 0x304, virtual false, abstract: false, final false
inline void GetFromLight(int32_t  lightIndex, int32_t  gameLightIndex) ;

/// @brief Method InitData, addr 0x583602c, size 0x2a8, virtual false, abstract: false, final false
inline void InitData() ;

static inline ::GlobalNamespace::GameLightingManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5836744, size 0x100, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5836868, size 0x24, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5836844, size 0x24, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PackHalf2, addr 0x5835ff0, size 0x38, virtual false, abstract: false, final false
static inline uint32_t PackHalf2(float_t  a, float_t  b) ;

/// [IteratorStateMachine(typeof(GameLightingManager::<Preheat>d__33))]
/// @brief Method Preheat, addr 0x58366b0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Preheat() ;

/// @brief Method PullLightData, addr 0x58372c0, size 0x1e8, virtual false, abstract: false, final false
inline void PullLightData(int32_t  numLightsToPull) ;

/// @brief Method RefreshLightData, addr 0x5836db0, size 0x1e4, virtual false, abstract: false, final false
inline void RefreshLightData() ;

/// @brief Method RemoveGameLight, addr 0x5835d6c, size 0x1a4, virtual false, abstract: false, final false
inline void RemoveGameLight(::GlobalNamespace::GameLight*  light) ;

/// @brief Method ResetLight, addr 0x58377ac, size 0x34, virtual false, abstract: false, final false
inline void ResetLight(int32_t  lightIndex) ;

/// @brief Method SetAmbientLightDynamic, addr 0x5836534, size 0x8c, virtual false, abstract: false, final false
inline void SetAmbientLightDynamic(::UnityEngine::Color  color) ;

/// @brief Method SetCustomDynamicLightingEnabled, addr 0x58365c0, size 0x70, virtual false, abstract: false, final false
inline void SetCustomDynamicLightingEnabled(bool  enable) ;

/// @brief Method SetDesaturateAndTintEnabled, addr 0x583646c, size 0xc8, virtual false, abstract: false, final false
inline void SetDesaturateAndTintEnabled(bool  enable, ::UnityEngine::Color  tint) ;

/// @brief Method SetMaxLights, addr 0x5836630, size 0x80, virtual false, abstract: false, final false
inline void SetMaxLights(int32_t  maxLights) ;

/// @brief Method SliceUpdate, addr 0x58369fc, size 0x18, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method SortLights, addr 0x5836a14, size 0x398, virtual false, abstract: false, final false
inline void SortLights() ;

/// @brief Method Tick, addr 0x5836dac, size 0x4, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method ToggleCustomDynamicLightingEnabled, addr 0x58369ec, size 0x10, virtual false, abstract: false, final false
inline void ToggleCustomDynamicLightingEnabled() ;

/// @brief Method ZoneEnableCustomDynamicLighting, addr 0x583688c, size 0x160, virtual false, abstract: false, final false
inline void ZoneEnableCustomDynamicLighting(bool  enable) ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get__GR_NearsightedDimLight() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get__GR_NearsightedDimLight() ;

constexpr bool const& __cordl_internal_get_customVertexLightingEnabled() const;

constexpr bool& __cordl_internal_get_customVertexLightingEnabled() ;

constexpr bool const& __cordl_internal_get_desaturateAndTintEnabled() const;

constexpr bool& __cordl_internal_get_desaturateAndTintEnabled() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>* const& __cordl_internal_get_gameLights() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>*& __cordl_internal_get_gameLights() ;

constexpr bool const& __cordl_internal_get_immediateSort() const;

constexpr bool& __cordl_internal_get_immediateSort() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked> const& __cordl_internal_get_lightData() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked>& __cordl_internal_get_lightData() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_lightDataBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_lightDataBuffer() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_lightDataBufferLegacy() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_lightDataBufferLegacy() ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy> const& __cordl_internal_get_lightDataLegacy() const;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy>& __cordl_internal_get_lightDataLegacy() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mainCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mainCameraTransform() ;

constexpr int32_t const& __cordl_internal_get_maxUseTestLights() const;

constexpr int32_t& __cordl_internal_get_maxUseTestLights() ;

constexpr int32_t const& __cordl_internal_get_nextLightCacheUpdate() const;

constexpr int32_t& __cordl_internal_get_nextLightCacheUpdate() ;

constexpr int32_t const& __cordl_internal_get_nextLightUpdate() const;

constexpr int32_t& __cordl_internal_get_nextLightUpdate() ;

constexpr bool const& __cordl_internal_get_skipNextSlice() const;

constexpr bool& __cordl_internal_get_skipNextSlice() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_sortKeys() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_sortKeys() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>> const& __cordl_internal_get_sortValues() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>& __cordl_internal_get_sortValues() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_testAmbience() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_testAmbience() ;

constexpr float_t const& __cordl_internal_get_testLightBrightness() const;

constexpr float_t& __cordl_internal_get_testLightBrightness() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_testLightColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_testLightColor() ;

constexpr float_t const& __cordl_internal_get_testLightRadius() const;

constexpr float_t& __cordl_internal_get_testLightRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_testLightsCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_testLightsCenter() ;

constexpr int32_t const& __cordl_internal_get_zoneDynamicLightingEnableCount() const;

constexpr int32_t& __cordl_internal_get_zoneDynamicLightingEnableCount() ;

constexpr void __cordl_internal_set__GR_NearsightedDimLight(::UnityW<::UnityEngine::Light>  value) ;

constexpr void __cordl_internal_set_customVertexLightingEnabled(bool  value) ;

constexpr void __cordl_internal_set_desaturateAndTintEnabled(bool  value) ;

constexpr void __cordl_internal_set_gameLights(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>*  value) ;

constexpr void __cordl_internal_set_immediateSort(bool  value) ;

constexpr void __cordl_internal_set_lightData(::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked>  value) ;

constexpr void __cordl_internal_set_lightDataBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_lightDataBufferLegacy(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_lightDataLegacy(::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy>  value) ;

constexpr void __cordl_internal_set_mainCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxUseTestLights(int32_t  value) ;

constexpr void __cordl_internal_set_nextLightCacheUpdate(int32_t  value) ;

constexpr void __cordl_internal_set_nextLightUpdate(int32_t  value) ;

constexpr void __cordl_internal_set_skipNextSlice(bool  value) ;

constexpr void __cordl_internal_set_sortKeys(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_sortValues(::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  value) ;

constexpr void __cordl_internal_set_testAmbience(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_testLightBrightness(float_t  value) ;

constexpr void __cordl_internal_set_testLightColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_testLightRadius(float_t  value) ;

constexpr void __cordl_internal_set_testLightsCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_zoneDynamicLightingEnableCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x58377e8, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__shaderPropId_DesaturateAndTint_TintAmount() ;

static inline int32_t getStaticF__shaderPropId_DesaturateAndTint_TintColor() ;

static inline int32_t getStaticF__shaderPropId_GameLight_Ambient_Color() ;

static inline int32_t getStaticF__shaderPropId_GameLight_Lights() ;

static inline int32_t getStaticF__shaderPropId_GameLight_LightsPacked() ;

static inline int32_t getStaticF__shaderPropId_GameLight_UseMaxLights() ;

static inline ::UnityW<::GlobalNamespace::GameLightingManager> getStaticF_instance() ;

/// @brief Method get_GR_NearsightedDimLight, addr 0x58377e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Light> get_GR_NearsightedDimLight() ;

/// @brief Method get_IsDynamicLightingEnabled, addr 0x5835fe8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDynamicLightingEnabled() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF__shaderPropId_DesaturateAndTint_TintAmount(int32_t  value) ;

static inline void setStaticF__shaderPropId_DesaturateAndTint_TintColor(int32_t  value) ;

static inline void setStaticF__shaderPropId_GameLight_Ambient_Color(int32_t  value) ;

static inline void setStaticF__shaderPropId_GameLight_Lights(int32_t  value) ;

static inline void setStaticF__shaderPropId_GameLight_LightsPacked(int32_t  value) ;

static inline void setStaticF__shaderPropId_GameLight_UseMaxLights(int32_t  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::GameLightingManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameLightingManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameLightingManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLightingManager(GameLightingManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLightingManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLightingManager(GameLightingManager const& ) = delete;

/// @brief Field MAX_UPDATE_LIGHTS_PER_FRAME offset 0xffffffff size 0x4
static constexpr int32_t  MAX_UPDATE_LIGHTS_PER_FRAME{static_cast<int32_t>(0xa)};

/// @brief Field MAX_VERTEX_LIGHTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_VERTEX_LIGHTS{static_cast<int32_t>(0x32)};

/// @brief Field USE_MAX_VERTEX_LIGHTS offset 0xffffffff size 0x4
static constexpr int32_t  USE_MAX_VERTEX_LIGHTS{static_cast<int32_t>(0x14)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1776};

/// @brief Field testLightsCenter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___testLightsCenter;

/// [ColorUsage(true, true)]
/// @brief Field testAmbience, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___testAmbience;

/// [ColorUsage(true, true)]
/// @brief Field testLightColor, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Color  ___testLightColor;

/// @brief Field testLightBrightness, offset: 0x50, size: 0x4, def value: None
 float_t  ___testLightBrightness;

/// @brief Field testLightRadius, offset: 0x54, size: 0x4, def value: None
 float_t  ___testLightRadius;

/// @brief Field maxUseTestLights, offset: 0x58, size: 0x4, def value: None
 int32_t  ___maxUseTestLights;

/// [ReadOnly]
/// [SerializeField]
/// @brief Field gameLights, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>*  ___gameLights;

/// @brief Field customVertexLightingEnabled, offset: 0x68, size: 0x1, def value: None
 bool  ___customVertexLightingEnabled;

/// @brief Field desaturateAndTintEnabled, offset: 0x69, size: 0x1, def value: None
 bool  ___desaturateAndTintEnabled;

/// @brief Field mainCameraTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mainCameraTransform;

/// @brief Field zoneDynamicLightingEnableCount, offset: 0x78, size: 0x4, def value: None
 int32_t  ___zoneDynamicLightingEnableCount;

/// @brief Field sortKeys, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ___sortKeys;

/// @brief Field sortValues, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  ___sortValues;

/// @brief Field lightData, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked>  ___lightData;

/// @brief Field lightDataLegacy, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy>  ___lightDataLegacy;

/// @brief Field lightDataBuffer, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___lightDataBuffer;

/// @brief Field lightDataBufferLegacy, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___lightDataBufferLegacy;

/// @brief Field skipNextSlice, offset: 0xc0, size: 0x1, def value: None
 bool  ___skipNextSlice;

/// @brief Field immediateSort, offset: 0xc1, size: 0x1, def value: None
 bool  ___immediateSort;

/// @brief Field nextLightUpdate, offset: 0xc4, size: 0x4, def value: None
 int32_t  ___nextLightUpdate;

/// @brief Field nextLightCacheUpdate, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___nextLightCacheUpdate;

/// [SerializeField]
/// @brief Field _GR_NearsightedDimLight, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ____GR_NearsightedDimLight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___testLightsCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___testAmbience) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___testLightColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___testLightBrightness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___testLightRadius) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___maxUseTestLights) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___gameLights) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___customVertexLightingEnabled) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___desaturateAndTintEnabled) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___mainCameraTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___zoneDynamicLightingEnableCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___sortKeys) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___sortValues) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___lightData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___lightDataLegacy) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___lightDataBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___lightDataBufferLegacy) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___skipNextSlice) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___immediateSort) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___nextLightUpdate) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ___nextLightCacheUpdate) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager, ____GR_NearsightedDimLight) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLightingManager) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameLightingManager/<Preheat>d__33
class CORDL_TYPE GameLightingManager__Preheat_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GameLightingManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5837988, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GameLightingManager__Preheat_d__33* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5837a34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5837a3c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5837a74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5837984, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GameLightingManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GameLightingManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameLightingManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x583671c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameLightingManager__Preheat_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameLightingManager__Preheat_d__33", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLightingManager__Preheat_d__33(GameLightingManager__Preheat_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLightingManager__Preheat_d__33", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLightingManager__Preheat_d__33(GameLightingManager__Preheat_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1775};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameLightingManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLightingManager__Preheat_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager__Preheat_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager__Preheat_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLightingManager__Preheat_d__33) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
