#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_LightCookieMapping_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ShaderBitArray_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager)
namespace GlobalNamespace {
struct LightCookieManager_LightCookieMapping;
}
namespace GlobalNamespace {
struct LightCookieManager_LightCookieShaderFormat;
}
namespace GlobalNamespace {
struct LightCookieManager_Settings;
}
namespace GlobalNamespace {
template<typename T>
struct LightCookieManager_WorkSlice_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_LightCookieShaderData;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_ShaderProperty;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_WorkMemory;
}
namespace UnityEngine::Rendering::Universal {
struct ShaderBitArray;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class Texture2DAtlas;
}
namespace UnityEngine::Rendering {
struct VisibleLight;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_LightCookieShaderData;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_ShaderProperty;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager_WorkMemory;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieMapping_LightCookieManager___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::LightCookieManager*);
MARK_REF_T(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*);
MARK_REF_T(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*);
MARK_REF_T(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::LightCookieManager*, "UnityEngine.Rendering.Universal", "LightCookieManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieShaderData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty*, "UnityEngine.Rendering.Universal", "LightCookieManager/ShaderProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkMemory");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*, "UnityEngine.Rendering.Universal", "LightCookieManager/LightCookieMapping/<>c");
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rendering.Universal.LightCookieManager::Settings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager
class CORDL_TYPE LightCookieManager : public ::System::Object {
public:
// Declarations
using LightCookieMapping = ::GlobalNamespace::LightCookieManager_LightCookieMapping;

using LightCookieShaderFormat = ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat;

using Settings = ::GlobalNamespace::LightCookieManager_Settings;

template<typename T>
using WorkSlice_1 = ::GlobalNamespace::LightCookieManager_WorkSlice_1<T>;

using LightCookieShaderData = ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData;

using ShaderProperty = ::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty;

using WorkMemory = ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory;

 __declspec(property(get=get_AdditionalLightsCookieAtlasTexture)) ::UnityEngine::Rendering::RTHandle*  AdditionalLightsCookieAtlasTexture;

 __declspec(property(get=get_IsKeywordLightCookieEnabled, put=set_IsKeywordLightCookieEnabled)) bool  IsKeywordLightCookieEnabled;

/// @brief Field <IsKeywordLightCookieEnabled>k__BackingField, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField, put=__cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField)) bool  _IsKeywordLightCookieEnabled_k__BackingField;

/// @brief Field m_AdditionalLightsCookieAtlas, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightsCookieAtlas, put=__cordl_internal_set_m_AdditionalLightsCookieAtlas)) ::UnityEngine::Rendering::Texture2DAtlas*  m_AdditionalLightsCookieAtlas;

/// @brief Field m_AdditionalLightsCookieShaderData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AdditionalLightsCookieShaderData, put=__cordl_internal_set_m_AdditionalLightsCookieShaderData)) ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*  m_AdditionalLightsCookieShaderData;

/// @brief Field m_CookieSizeDivisor, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CookieSizeDivisor, put=__cordl_internal_set_m_CookieSizeDivisor)) int32_t  m_CookieSizeDivisor;

/// @brief Field m_PrevCookieRequestPixelCount, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrevCookieRequestPixelCount, put=__cordl_internal_set_m_PrevCookieRequestPixelCount)) uint32_t  m_PrevCookieRequestPixelCount;

/// @brief Field m_PrevWarnFrame, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PrevWarnFrame, put=__cordl_internal_set_m_PrevWarnFrame)) int32_t  m_PrevWarnFrame;

/// @brief Field m_Settings, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::GlobalNamespace::LightCookieManager_Settings  m_Settings;

/// @brief Field m_VisibleLightIndexToShaderDataIndex, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VisibleLightIndexToShaderDataIndex, put=__cordl_internal_set_m_VisibleLightIndexToShaderDataIndex)) ::ArrayW<int32_t>  m_VisibleLightIndexToShaderDataIndex;

/// @brief Field m_WorkMem, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WorkMem, put=__cordl_internal_set_m_WorkMem)) ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*  m_WorkMem;

/// @brief Field s_DirLightProj, offset 0xffffffff, size 0x40 
 __declspec(property(get=getStaticF_s_DirLightProj, put=setStaticF_s_DirLightProj)) ::UnityEngine::Matrix4x4  s_DirLightProj;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AdjustUVRect, addr 0xb257214, size 0xac, virtual false, abstract: false, final false
inline void AdjustUVRect(::by_ref<::UnityEngine::Vector4>  uvScaleOffset, ::UnityEngine::Texture*  cookie, ::by_ref<::UnityEngine::Vector2>  cookieSize) ;

/// @brief Method ApproximateCookieSizeDivisor, addr 0xb256cd0, size 0x2c, virtual false, abstract: false, final false
inline int32_t ApproximateCookieSizeDivisor(float_t  requestAtlasRatio) ;

/// @brief Method ComputeCookieRequestPixelCount, addr 0xb256bd4, size 0xfc, virtual false, abstract: false, final false
inline uint32_t ComputeCookieRequestPixelCount(::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings) ;

/// @brief Method ComputeOctahedralCookieSize, addr 0xb2572c0, size 0x128, virtual false, abstract: false, final false
inline int32_t ComputeOctahedralCookieSize(::UnityEngine::Texture*  cookie) ;

/// @brief Method Dispose, addr 0xb2551c0, size 0x30, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Fetch2D, addr 0xb2570b8, size 0x15c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 Fetch2D(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  cookie, int32_t  cookieSizeDivisor) ;

/// @brief Method FetchCube, addr 0xb256f54, size 0x164, virtual false, abstract: false, final false
inline ::UnityEngine::Vector4 FetchCube(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  cookie, int32_t  cookieSizeDivisor) ;

/// @brief Method FetchUVRects, addr 0xb256cfc, size 0x258, virtual false, abstract: false, final false
inline int32_t FetchUVRects(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings, ::ArrayW<::UnityEngine::Vector4>  textureAtlasUVRects, int32_t  cookieSizeDivisor) ;

/// @brief Method FilterAndValidateAdditionalLights, addr 0xb255ebc, size 0x4fc, virtual false, abstract: false, final false
inline int32_t FilterAndValidateAdditionalLights(::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>  validLightMappings) ;

/// @brief Method GetLightCookieShaderDataIndex, addr 0xb255238, size 0x48, virtual false, abstract: false, final false
inline int32_t GetLightCookieShaderDataIndex(int32_t  visibleLightIndex) ;

/// @brief Method GetLightCookieShaderFormat, addr 0xb255b68, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::LightCookieManager_LightCookieShaderFormat GetLightCookieShaderFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  cookieFormat) ;

/// @brief Method GetLightUVScaleOffset, addr 0xb255c48, size 0x124, virtual false, abstract: false, final false
inline void GetLightUVScaleOffset(::by_ref<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>  additionalLightData, ::by_ref<::UnityEngine::Matrix4x4>  uvTransform) ;

/// @brief Method InitAdditionalLights, addr 0xb255020, size 0x14c, virtual false, abstract: false, final false
inline void InitAdditionalLights(int32_t  size) ;

static inline ::UnityEngine::Rendering::Universal::LightCookieManager* New_ctor(::by_ref<::GlobalNamespace::LightCookieManager_Settings>  settings) ;

/// @brief Method Setup, addr 0xb255280, size 0x28c, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData) ;

/// @brief Method SetupAdditionalLights, addr 0xb255940, size 0x198, virtual false, abstract: false, final false
inline bool SetupAdditionalLights(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData) ;

/// @brief Method SetupMainLight, addr 0xb25550c, size 0x434, virtual false, abstract: false, final false
inline bool SetupMainLight(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::VisibleLight>  visibleMainLight) ;

/// @brief Method ShrinkUVRect, addr 0xb257414, size 0xa4, virtual false, abstract: false, final false
inline void ShrinkUVRect(::by_ref<::UnityEngine::Vector4>  uvScaleOffset, float_t  amountPixels, ::by_ref<::UnityEngine::Vector2>  cookieSize) ;

/// @brief Method UpdateAdditionalLightsAtlas, addr 0xb2563b8, size 0x17c, virtual false, abstract: false, final false
inline int32_t UpdateAdditionalLightsAtlas(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings, ::ArrayW<::UnityEngine::Vector4>  textureAtlasUVRects) ;

/// @brief Method UploadAdditionalLights, addr 0xb256534, size 0x6a0, virtual false, abstract: false, final false
inline void UploadAdditionalLights(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalLightData*  lightData, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::GlobalNamespace::LightCookieManager_LightCookieMapping>>  validLightMappings, ::by_ref<::GlobalNamespace::LightCookieManager_WorkSlice_1<::UnityEngine::Vector4>>  validUvRects) ;

constexpr bool const& __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsKeywordLightCookieEnabled_k__BackingField() ;

constexpr ::UnityEngine::Rendering::Texture2DAtlas* const& __cordl_internal_get_m_AdditionalLightsCookieAtlas() const;

constexpr ::UnityEngine::Rendering::Texture2DAtlas*& __cordl_internal_get_m_AdditionalLightsCookieAtlas() ;

constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* const& __cordl_internal_get_m_AdditionalLightsCookieShaderData() const;

constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*& __cordl_internal_get_m_AdditionalLightsCookieShaderData() ;

constexpr int32_t const& __cordl_internal_get_m_CookieSizeDivisor() const;

constexpr int32_t& __cordl_internal_get_m_CookieSizeDivisor() ;

constexpr uint32_t const& __cordl_internal_get_m_PrevCookieRequestPixelCount() const;

constexpr uint32_t& __cordl_internal_get_m_PrevCookieRequestPixelCount() ;

constexpr int32_t const& __cordl_internal_get_m_PrevWarnFrame() const;

constexpr int32_t& __cordl_internal_get_m_PrevWarnFrame() ;

constexpr ::GlobalNamespace::LightCookieManager_Settings const& __cordl_internal_get_m_Settings() const;

constexpr ::GlobalNamespace::LightCookieManager_Settings& __cordl_internal_get_m_Settings() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_VisibleLightIndexToShaderDataIndex() ;

constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* const& __cordl_internal_get_m_WorkMem() const;

constexpr ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*& __cordl_internal_get_m_WorkMem() ;

constexpr void __cordl_internal_set__IsKeywordLightCookieEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightsCookieAtlas(::UnityEngine::Rendering::Texture2DAtlas*  value) ;

constexpr void __cordl_internal_set_m_AdditionalLightsCookieShaderData(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*  value) ;

constexpr void __cordl_internal_set_m_CookieSizeDivisor(int32_t  value) ;

constexpr void __cordl_internal_set_m_PrevCookieRequestPixelCount(uint32_t  value) ;

constexpr void __cordl_internal_set_m_PrevWarnFrame(int32_t  value) ;

constexpr void __cordl_internal_set_m_Settings(::GlobalNamespace::LightCookieManager_Settings  value) ;

constexpr void __cordl_internal_set_m_VisibleLightIndexToShaderDataIndex(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_WorkMem(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*  value) ;

/// @brief Method .ctor, addr 0xb254f7c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::GlobalNamespace::LightCookieManager_Settings>  settings) ;

static inline ::UnityEngine::Matrix4x4 getStaticF_s_DirLightProj() ;

/// @brief Method get_AdditionalLightsCookieAtlasTexture, addr 0xb254f64, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::RTHandle* get_AdditionalLightsCookieAtlasTexture() ;

/// [CompilerGenerated]
/// @brief Method get_IsKeywordLightCookieEnabled, addr 0xb254f54, size 0x8, virtual false, abstract: false, final false
inline bool get_IsKeywordLightCookieEnabled() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method isInitialized, addr 0xb2551a0, size 0x20, virtual false, abstract: false, final false
inline bool isInitialized() ;

static inline void setStaticF_s_DirLightProj(::UnityEngine::Matrix4x4  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsKeywordLightCookieEnabled, addr 0xb254f5c, size 0x8, virtual false, abstract: false, final false
inline void set_IsKeywordLightCookieEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCookieManager(LightCookieManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCookieManager(LightCookieManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18419};

/// @brief Field k_MaxCookieSizeDivisor offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxCookieSizeDivisor{static_cast<int32_t>(0x10)};

/// @brief Field m_AdditionalLightsCookieAtlas, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::Texture2DAtlas*  ___m_AdditionalLightsCookieAtlas;

/// @brief Field m_AdditionalLightsCookieShaderData, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData*  ___m_AdditionalLightsCookieShaderData;

/// @brief Field m_Settings, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::LightCookieManager_Settings  ___m_Settings;

/// @brief Field m_WorkMem, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory*  ___m_WorkMem;

/// @brief Field m_VisibleLightIndexToShaderDataIndex, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_VisibleLightIndexToShaderDataIndex;

/// @brief Field m_CookieSizeDivisor, offset: 0x48, size: 0x4, def value: None
 int32_t  ___m_CookieSizeDivisor;

/// @brief Field m_PrevCookieRequestPixelCount, offset: 0x4c, size: 0x4, def value: None
 uint32_t  ___m_PrevCookieRequestPixelCount;

/// @brief Field m_PrevWarnFrame, offset: 0x50, size: 0x4, def value: None
 int32_t  ___m_PrevWarnFrame;

/// [CompilerGenerated]
/// @brief Field <IsKeywordLightCookieEnabled>k__BackingField, offset: 0x54, size: 0x1, def value: None
 bool  ____IsKeywordLightCookieEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_AdditionalLightsCookieAtlas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_AdditionalLightsCookieShaderData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_WorkMem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_VisibleLightIndexToShaderDataIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_CookieSizeDivisor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_PrevCookieRequestPixelCount) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ___m_PrevWarnFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager, ____IsKeywordLightCookieEnabled_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::LightCookieManager) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Matrix4x4, UnityEngine.Rendering.Universal.ShaderBitArray, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieShaderData
class CORDL_TYPE LightCookieManager_LightCookieShaderData : public ::System::Object {
public:
// Declarations
/// @brief Field <isUploaded>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isUploaded_k__BackingField, put=__cordl_internal_set__isUploaded_k__BackingField)) bool  _isUploaded_k__BackingField;

 __declspec(property(get=get_atlasUVRects)) ::ArrayW<::UnityEngine::Vector4>  atlasUVRects;

 __declspec(property(get=get_cookieEnableBits)) ::UnityEngine::Rendering::Universal::ShaderBitArray  cookieEnableBits;

 __declspec(property(get=get_isUploaded, put=set_isUploaded)) bool  isUploaded;

 __declspec(property(get=get_lightTypes)) ::ArrayW<float_t>  lightTypes;

/// @brief Field m_AtlasUVRectBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AtlasUVRectBuffer, put=__cordl_internal_set_m_AtlasUVRectBuffer)) ::UnityEngine::ComputeBuffer*  m_AtlasUVRectBuffer;

/// @brief Field m_AtlasUVRectCpuData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AtlasUVRectCpuData, put=__cordl_internal_set_m_AtlasUVRectCpuData)) ::ArrayW<::UnityEngine::Vector4>  m_AtlasUVRectCpuData;

/// @brief Field m_CookieEnableBitsCpuData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CookieEnableBitsCpuData, put=__cordl_internal_set_m_CookieEnableBitsCpuData)) ::UnityEngine::Rendering::Universal::ShaderBitArray  m_CookieEnableBitsCpuData;

/// @brief Field m_LightTypeBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LightTypeBuffer, put=__cordl_internal_set_m_LightTypeBuffer)) ::UnityEngine::ComputeBuffer*  m_LightTypeBuffer;

/// @brief Field m_LightTypeCpuData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LightTypeCpuData, put=__cordl_internal_set_m_LightTypeCpuData)) ::ArrayW<float_t>  m_LightTypeCpuData;

/// @brief Field m_Size, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Size, put=__cordl_internal_set_m_Size)) int32_t  m_Size;

/// @brief Field m_UseStructuredBuffer, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseStructuredBuffer, put=__cordl_internal_set_m_UseStructuredBuffer)) bool  m_UseStructuredBuffer;

/// @brief Field m_WorldToLightBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WorldToLightBuffer, put=__cordl_internal_set_m_WorldToLightBuffer)) ::UnityEngine::ComputeBuffer*  m_WorldToLightBuffer;

/// @brief Field m_WorldToLightCpuData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_WorldToLightCpuData, put=__cordl_internal_set_m_WorldToLightCpuData)) ::ArrayW<::UnityEngine::Matrix4x4>  m_WorldToLightCpuData;

 __declspec(property(get=get_worldToLights)) ::ArrayW<::UnityEngine::Matrix4x4>  worldToLights;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Clear, addr 0xb255ad8, size 0x90, virtual false, abstract: false, final false
inline void Clear(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Dispose, addr 0xb2551f0, size 0x48, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData* New_ctor(int32_t  size, bool  useStructuredBuffer) ;

/// @brief Method Resize, addr 0xb2574b8, size 0x22c, virtual false, abstract: false, final false
inline void Resize(int32_t  size) ;

/// @brief Method Upload, addr 0xb2576e4, size 0x194, virtual false, abstract: false, final false
inline void Upload(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

constexpr bool const& __cordl_internal_get__isUploaded_k__BackingField() const;

constexpr bool& __cordl_internal_get__isUploaded_k__BackingField() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_AtlasUVRectBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_AtlasUVRectBuffer() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_m_AtlasUVRectCpuData() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_m_AtlasUVRectCpuData() ;

constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray const& __cordl_internal_get_m_CookieEnableBitsCpuData() const;

constexpr ::UnityEngine::Rendering::Universal::ShaderBitArray& __cordl_internal_get_m_CookieEnableBitsCpuData() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_LightTypeBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_LightTypeBuffer() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_LightTypeCpuData() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_m_LightTypeCpuData() ;

constexpr int32_t const& __cordl_internal_get_m_Size() const;

constexpr int32_t& __cordl_internal_get_m_Size() ;

constexpr bool const& __cordl_internal_get_m_UseStructuredBuffer() const;

constexpr bool& __cordl_internal_get_m_UseStructuredBuffer() ;

constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_WorldToLightBuffer() const;

constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_WorldToLightBuffer() ;

constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_m_WorldToLightCpuData() const;

constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_m_WorldToLightCpuData() ;

constexpr void __cordl_internal_set__isUploaded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AtlasUVRectBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_AtlasUVRectCpuData(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_m_CookieEnableBitsCpuData(::UnityEngine::Rendering::Universal::ShaderBitArray  value) ;

constexpr void __cordl_internal_set_m_LightTypeBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_LightTypeCpuData(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_m_Size(int32_t  value) ;

constexpr void __cordl_internal_set_m_UseStructuredBuffer(bool  value) ;

constexpr void __cordl_internal_set_m_WorldToLightBuffer(::UnityEngine::ComputeBuffer*  value) ;

constexpr void __cordl_internal_set_m_WorldToLightCpuData(::ArrayW<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method .ctor, addr 0xb25516c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  size, bool  useStructuredBuffer) ;

/// @brief Method get_atlasUVRects, addr 0xb257ed4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> get_atlasUVRects() ;

/// @brief Method get_cookieEnableBits, addr 0xb257ecc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::Universal::ShaderBitArray get_cookieEnableBits() ;

/// [CompilerGenerated]
/// @brief Method get_isUploaded, addr 0xb257ee4, size 0x8, virtual false, abstract: false, final false
inline bool get_isUploaded() ;

/// @brief Method get_lightTypes, addr 0xb257edc, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_lightTypes() ;

/// @brief Method get_worldToLights, addr 0xb257ec4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Matrix4x4> get_worldToLights() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_isUploaded, addr 0xb257eec, size 0x8, virtual false, abstract: false, final false
inline void set_isUploaded(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_LightCookieShaderData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_LightCookieShaderData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCookieManager_LightCookieShaderData(LightCookieManager_LightCookieShaderData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_LightCookieShaderData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCookieManager_LightCookieShaderData(LightCookieManager_LightCookieShaderData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18418};

/// @brief Field m_Size, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_Size;

/// @brief Field m_UseStructuredBuffer, offset: 0x14, size: 0x1, def value: None
 bool  ___m_UseStructuredBuffer;

/// @brief Field m_WorldToLightCpuData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Matrix4x4>  ___m_WorldToLightCpuData;

/// @brief Field m_AtlasUVRectCpuData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___m_AtlasUVRectCpuData;

/// @brief Field m_LightTypeCpuData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___m_LightTypeCpuData;

/// @brief Field m_CookieEnableBitsCpuData, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Rendering::Universal::ShaderBitArray  ___m_CookieEnableBitsCpuData;

/// @brief Field m_WorldToLightBuffer, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_WorldToLightBuffer;

/// @brief Field m_AtlasUVRectBuffer, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_AtlasUVRectBuffer;

/// @brief Field m_LightTypeBuffer, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::ComputeBuffer*  ___m_LightTypeBuffer;

/// [CompilerGenerated]
/// @brief Field <isUploaded>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____isUploaded_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_Size) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_UseStructuredBuffer) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_WorldToLightCpuData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_AtlasUVRectCpuData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_LightTypeCpuData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_CookieEnableBitsCpuData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_WorldToLightBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_AtlasUVRectBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ___m_LightTypeBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData, ____isUploaded_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::LightCookieManager_LightCookieShaderData) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.LightCookieManager::LightCookieMapping, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/WorkMemory
class CORDL_TYPE LightCookieManager_WorkMemory : public ::System::Object {
public:
// Declarations
/// @brief Field lightMappings, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightMappings, put=__cordl_internal_set_lightMappings)) ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>  lightMappings;

/// @brief Field uvRects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_uvRects, put=__cordl_internal_set_uvRects)) ::ArrayW<::UnityEngine::Vector4>  uvRects;

static inline ::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory* New_ctor() ;

/// @brief Method Resize, addr 0xb255d6c, size 0x150, virtual false, abstract: false, final false
inline void Resize(int32_t  size) ;

constexpr ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping> const& __cordl_internal_get_lightMappings() const;

constexpr ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>& __cordl_internal_get_lightMappings() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_uvRects() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_uvRects() ;

constexpr void __cordl_internal_set_lightMappings(::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>  value) ;

constexpr void __cordl_internal_set_uvRects(::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method .ctor, addr 0xb255018, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_WorkMemory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_WorkMemory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCookieManager_WorkMemory(LightCookieManager_WorkMemory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_WorkMemory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCookieManager_WorkMemory(LightCookieManager_WorkMemory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18417};

/// @brief Field lightMappings, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LightCookieManager_LightCookieMapping>  ___lightMappings;

/// @brief Field uvRects, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___uvRects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory, ___lightMappings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory, ___uvRects) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::LightCookieManager_WorkMemory) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping/<>c
class CORDL_TYPE LightCookieMapping_LightCookieManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*  __9;

static inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* New_ctor() ;

/// @brief Method <.cctor>b__6_0, addr 0xb257dec, size 0xcc, virtual false, abstract: false, final false
inline int32_t __cctor_b__6_0(::GlobalNamespace::LightCookieManager_LightCookieMapping  a, ::GlobalNamespace::LightCookieManager_LightCookieMapping  b) ;

/// @brief Method <.cctor>b__6_1, addr 0xb257eb8, size 0xc, virtual false, abstract: false, final false
inline int32_t __cctor_b__6_1(::GlobalNamespace::LightCookieManager_LightCookieMapping  a, ::GlobalNamespace::LightCookieManager_LightCookieMapping  b) ;

/// @brief Method .ctor, addr 0xb257de4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCookieMapping_LightCookieManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCookieMapping_LightCookieManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCookieMapping_LightCookieManager___c(LightCookieMapping_LightCookieManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCookieMapping_LightCookieManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCookieMapping_LightCookieManager___c(LightCookieMapping_LightCookieManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18414};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::LightCookieMapping_LightCookieManager___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/ShaderProperty
class CORDL_TYPE LightCookieManager_ShaderProperty : public ::System::Object {
public:
// Declarations
/// @brief Field additionalLightsCookieAtlasTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsCookieAtlasTexture, put=setStaticF_additionalLightsCookieAtlasTexture)) int32_t  additionalLightsCookieAtlasTexture;

/// @brief Field additionalLightsCookieAtlasTextureFormat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsCookieAtlasTextureFormat, put=setStaticF_additionalLightsCookieAtlasTextureFormat)) int32_t  additionalLightsCookieAtlasTextureFormat;

/// @brief Field additionalLightsCookieAtlasUVRectBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsCookieAtlasUVRectBuffer, put=setStaticF_additionalLightsCookieAtlasUVRectBuffer)) int32_t  additionalLightsCookieAtlasUVRectBuffer;

/// @brief Field additionalLightsCookieAtlasUVRects, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsCookieAtlasUVRects, put=setStaticF_additionalLightsCookieAtlasUVRects)) int32_t  additionalLightsCookieAtlasUVRects;

/// @brief Field additionalLightsCookieEnableBits, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsCookieEnableBits, put=setStaticF_additionalLightsCookieEnableBits)) int32_t  additionalLightsCookieEnableBits;

/// @brief Field additionalLightsLightTypeBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsLightTypeBuffer, put=setStaticF_additionalLightsLightTypeBuffer)) int32_t  additionalLightsLightTypeBuffer;

/// @brief Field additionalLightsLightTypes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsLightTypes, put=setStaticF_additionalLightsLightTypes)) int32_t  additionalLightsLightTypes;

/// @brief Field additionalLightsWorldToLightBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsWorldToLightBuffer, put=setStaticF_additionalLightsWorldToLightBuffer)) int32_t  additionalLightsWorldToLightBuffer;

/// @brief Field additionalLightsWorldToLights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_additionalLightsWorldToLights, put=setStaticF_additionalLightsWorldToLights)) int32_t  additionalLightsWorldToLights;

/// @brief Field mainLightCookieTextureFormat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mainLightCookieTextureFormat, put=setStaticF_mainLightCookieTextureFormat)) int32_t  mainLightCookieTextureFormat;

/// @brief Field mainLightTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mainLightTexture, put=setStaticF_mainLightTexture)) int32_t  mainLightTexture;

/// @brief Field mainLightWorldToLight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mainLightWorldToLight, put=setStaticF_mainLightWorldToLight)) int32_t  mainLightWorldToLight;

static inline int32_t getStaticF_additionalLightsCookieAtlasTexture() ;

static inline int32_t getStaticF_additionalLightsCookieAtlasTextureFormat() ;

static inline int32_t getStaticF_additionalLightsCookieAtlasUVRectBuffer() ;

static inline int32_t getStaticF_additionalLightsCookieAtlasUVRects() ;

static inline int32_t getStaticF_additionalLightsCookieEnableBits() ;

static inline int32_t getStaticF_additionalLightsLightTypeBuffer() ;

static inline int32_t getStaticF_additionalLightsLightTypes() ;

static inline int32_t getStaticF_additionalLightsWorldToLightBuffer() ;

static inline int32_t getStaticF_additionalLightsWorldToLights() ;

static inline int32_t getStaticF_mainLightCookieTextureFormat() ;

static inline int32_t getStaticF_mainLightTexture() ;

static inline int32_t getStaticF_mainLightWorldToLight() ;

static inline void setStaticF_additionalLightsCookieAtlasTexture(int32_t  value) ;

static inline void setStaticF_additionalLightsCookieAtlasTextureFormat(int32_t  value) ;

static inline void setStaticF_additionalLightsCookieAtlasUVRectBuffer(int32_t  value) ;

static inline void setStaticF_additionalLightsCookieAtlasUVRects(int32_t  value) ;

static inline void setStaticF_additionalLightsCookieEnableBits(int32_t  value) ;

static inline void setStaticF_additionalLightsLightTypeBuffer(int32_t  value) ;

static inline void setStaticF_additionalLightsLightTypes(int32_t  value) ;

static inline void setStaticF_additionalLightsWorldToLightBuffer(int32_t  value) ;

static inline void setStaticF_additionalLightsWorldToLights(int32_t  value) ;

static inline void setStaticF_mainLightCookieTextureFormat(int32_t  value) ;

static inline void setStaticF_mainLightTexture(int32_t  value) ;

static inline void setStaticF_mainLightWorldToLight(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_ShaderProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_ShaderProperty", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCookieManager_ShaderProperty(LightCookieManager_ShaderProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCookieManager_ShaderProperty", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCookieManager_ShaderProperty(LightCookieManager_ShaderProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18410};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::LightCookieManager_ShaderProperty) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
