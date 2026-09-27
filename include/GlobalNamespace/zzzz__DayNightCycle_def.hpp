#pragma once
// IWYU pragma private; include "GlobalNamespace/DayNightCycle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DayNightCycle_LerpBakedLightingJob_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DayNightCycle)
namespace GlobalNamespace {
struct DayNightCycle_LerpBakedLightingJob;
}
namespace GlobalNamespace {
class DayNightCycle__UpdateWork_d__37;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class LightmapData;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class DayNightCycle;
}
namespace GlobalNamespace {
class DayNightCycle__UpdateWork_d__37;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DayNightCycle*);
MARK_REF_T(::GlobalNamespace::DayNightCycle__UpdateWork_d__37*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DayNightCycle*, "", "DayNightCycle");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DayNightCycle__UpdateWork_d__37*, "", "DayNightCycle/<UpdateWork>d__37");
// Dependencies DayNightCycle::LerpBakedLightingJob, Unity.Jobs.JobHandle, UnityEngine.Color, UnityEngine.LightmapData, UnityEngine.MonoBehaviour, UnityEngine.Texture2D
namespace GlobalNamespace {
// Is value type: false
// CS Name: DayNightCycle
class CORDL_TYPE DayNightCycle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LerpBakedLightingJob = ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob;

using _UpdateWork_d__37 = ::GlobalNamespace::DayNightCycle__UpdateWork_d__37;

/// @brief Field _dayMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dayMap, put=__cordl_internal_set__dayMap)) ::UnityW<::UnityEngine::Texture2D>  _dayMap;

/// @brief Field _sunriseMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sunriseMap, put=__cordl_internal_set__sunriseMap)) ::UnityW<::UnityEngine::Texture2D>  _sunriseMap;

/// @brief Field currentColumn, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentColumn, put=__cordl_internal_set_currentColumn)) int32_t  currentColumn;

/// @brief Field currentRow, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRow, put=__cordl_internal_set_currentRow)) int32_t  currentRow;

/// @brief Field currentRowInSubtexture, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRowInSubtexture, put=__cordl_internal_set_currentRowInSubtexture)) int32_t  currentRowInSubtexture;

/// @brief Field currentSubTexture, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSubTexture, put=__cordl_internal_set_currentSubTexture)) int32_t  currentSubTexture;

/// @brief Field finishedCoroutine, offset 0x102, size 0x1 
 __declspec(property(get=__cordl_internal_get_finishedCoroutine, put=__cordl_internal_set_finishedCoroutine)) bool  finishedCoroutine;

/// @brief Field fromMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromMap, put=__cordl_internal_set_fromMap)) ::UnityW<::UnityEngine::Texture2D>  fromMap;

/// @brief Field fromPixels, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromPixels, put=__cordl_internal_set_fromPixels)) ::ArrayW<::UnityEngine::Color>  fromPixels;

/// @brief Field isComplete, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_isComplete, put=__cordl_internal_set_isComplete)) bool  isComplete;

/// @brief Field job, offset 0x40, size 0x38 
 __declspec(property(get=__cordl_internal_get_job, put=__cordl_internal_set_job)) ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob  job;

/// @brief Field jobHandle, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field jobStarted, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_jobStarted, put=__cordl_internal_set_jobStarted)) bool  jobStarted;

/// @brief Field lerpAmount, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpAmount, put=__cordl_internal_set_lerpAmount)) float_t  lerpAmount;

/// @brief Field mixedPixels, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixedPixels, put=__cordl_internal_set_mixedPixels)) ::ArrayW<::UnityEngine::Color>  mixedPixels;

/// @brief Field newData, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_newData, put=__cordl_internal_set_newData)) ::UnityEngine::LightmapData*  newData;

/// @brief Field newDatas, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_newDatas, put=__cordl_internal_set_newDatas)) ::ArrayW<::UnityEngine::LightmapData*>  newDatas;

/// @brief Field newTexture, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_newTexture, put=__cordl_internal_set_newTexture)) ::UnityW<::UnityEngine::Texture2D>  newTexture;

/// @brief Field startCoroutine, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_startCoroutine, put=__cordl_internal_set_startCoroutine)) bool  startCoroutine;

/// @brief Field startJob, offset 0x103, size 0x1 
 __declspec(property(get=__cordl_internal_get_startJob, put=__cordl_internal_set_startJob)) bool  startJob;

/// @brief Field startTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) float_t  startTime;

/// @brief Field startedCoroutine, offset 0x101, size 0x1 
 __declspec(property(get=__cordl_internal_get_startedCoroutine, put=__cordl_internal_set_startedCoroutine)) bool  startedCoroutine;

/// @brief Field subTextureArray, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_subTextureArray, put=__cordl_internal_set_subTextureArray)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  subTextureArray;

/// @brief Field subTextureSize, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_subTextureSize, put=__cordl_internal_set_subTextureSize)) int32_t  subTextureSize;

/// @brief Field switchTimeTaken, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_switchTimeTaken, put=__cordl_internal_set_switchTimeTaken)) float_t  switchTimeTaken;

/// @brief Field textureHeight, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_textureHeight, put=__cordl_internal_set_textureHeight)) int32_t  textureHeight;

/// @brief Field textureWidth, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_textureWidth, put=__cordl_internal_set_textureWidth)) int32_t  textureWidth;

/// @brief Field timeTakenDuringJob, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeTakenDuringJob, put=__cordl_internal_set_timeTakenDuringJob)) float_t  timeTakenDuringJob;

/// @brief Field timeTakenPostJob, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeTakenPostJob, put=__cordl_internal_set_timeTakenPostJob)) float_t  timeTakenPostJob;

/// @brief Field timeTakenStartingJob, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeTakenStartingJob, put=__cordl_internal_set_timeTakenStartingJob)) float_t  timeTakenStartingJob;

/// @brief Field toMap, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_toMap, put=__cordl_internal_set_toMap)) ::UnityW<::UnityEngine::Texture2D>  toMap;

/// @brief Field toPixels, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toPixels, put=__cordl_internal_set_toPixels)) ::ArrayW<::UnityEngine::Color>  toPixels;

/// @brief Field workBlockFrom, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_workBlockFrom, put=__cordl_internal_set_workBlockFrom)) ::ArrayW<::UnityEngine::Color>  workBlockFrom;

/// @brief Field workBlockMix, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_workBlockMix, put=__cordl_internal_set_workBlockMix)) ::ArrayW<::UnityEngine::Color>  workBlockMix;

/// @brief Field workBlockTo, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_workBlockTo, put=__cordl_internal_set_workBlockTo)) ::ArrayW<::UnityEngine::Color>  workBlockTo;

/// @brief Method Awake, addr 0x5995728, size 0x430, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::DayNightCycle* New_ctor() ;

/// @brief Method Update, addr 0x5995b58, size 0x348, virtual false, abstract: false, final false
inline void Update() ;

/// [IteratorStateMachine(typeof(DayNightCycle::<UpdateWork>d__37))]
/// @brief Method UpdateWork, addr 0x5995ea0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateWork() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__dayMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__dayMap() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__sunriseMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__sunriseMap() ;

constexpr int32_t const& __cordl_internal_get_currentColumn() const;

constexpr int32_t& __cordl_internal_get_currentColumn() ;

constexpr int32_t const& __cordl_internal_get_currentRow() const;

constexpr int32_t& __cordl_internal_get_currentRow() ;

constexpr int32_t const& __cordl_internal_get_currentRowInSubtexture() const;

constexpr int32_t& __cordl_internal_get_currentRowInSubtexture() ;

constexpr int32_t const& __cordl_internal_get_currentSubTexture() const;

constexpr int32_t& __cordl_internal_get_currentSubTexture() ;

constexpr bool const& __cordl_internal_get_finishedCoroutine() const;

constexpr bool& __cordl_internal_get_finishedCoroutine() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_fromMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_fromMap() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_fromPixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_fromPixels() ;

constexpr bool const& __cordl_internal_get_isComplete() const;

constexpr bool& __cordl_internal_get_isComplete() ;

constexpr ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob const& __cordl_internal_get_job() const;

constexpr ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob& __cordl_internal_get_job() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr bool const& __cordl_internal_get_jobStarted() const;

constexpr bool& __cordl_internal_get_jobStarted() ;

constexpr float_t const& __cordl_internal_get_lerpAmount() const;

constexpr float_t& __cordl_internal_get_lerpAmount() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_mixedPixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_mixedPixels() ;

constexpr ::UnityEngine::LightmapData* const& __cordl_internal_get_newData() const;

constexpr ::UnityEngine::LightmapData*& __cordl_internal_get_newData() ;

constexpr ::ArrayW<::UnityEngine::LightmapData*> const& __cordl_internal_get_newDatas() const;

constexpr ::ArrayW<::UnityEngine::LightmapData*>& __cordl_internal_get_newDatas() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_newTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_newTexture() ;

constexpr bool const& __cordl_internal_get_startCoroutine() const;

constexpr bool& __cordl_internal_get_startCoroutine() ;

constexpr bool const& __cordl_internal_get_startJob() const;

constexpr bool& __cordl_internal_get_startJob() ;

constexpr float_t const& __cordl_internal_get_startTime() const;

constexpr float_t& __cordl_internal_get_startTime() ;

constexpr bool const& __cordl_internal_get_startedCoroutine() const;

constexpr bool& __cordl_internal_get_startedCoroutine() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_subTextureArray() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_subTextureArray() ;

constexpr int32_t const& __cordl_internal_get_subTextureSize() const;

constexpr int32_t& __cordl_internal_get_subTextureSize() ;

constexpr float_t const& __cordl_internal_get_switchTimeTaken() const;

constexpr float_t& __cordl_internal_get_switchTimeTaken() ;

constexpr int32_t const& __cordl_internal_get_textureHeight() const;

constexpr int32_t& __cordl_internal_get_textureHeight() ;

constexpr int32_t const& __cordl_internal_get_textureWidth() const;

constexpr int32_t& __cordl_internal_get_textureWidth() ;

constexpr float_t const& __cordl_internal_get_timeTakenDuringJob() const;

constexpr float_t& __cordl_internal_get_timeTakenDuringJob() ;

constexpr float_t const& __cordl_internal_get_timeTakenPostJob() const;

constexpr float_t& __cordl_internal_get_timeTakenPostJob() ;

constexpr float_t const& __cordl_internal_get_timeTakenStartingJob() const;

constexpr float_t& __cordl_internal_get_timeTakenStartingJob() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_toMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_toMap() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_toPixels() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_toPixels() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_workBlockFrom() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_workBlockFrom() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_workBlockMix() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_workBlockMix() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_workBlockTo() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_workBlockTo() ;

constexpr void __cordl_internal_set__dayMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__sunriseMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_currentColumn(int32_t  value) ;

constexpr void __cordl_internal_set_currentRow(int32_t  value) ;

constexpr void __cordl_internal_set_currentRowInSubtexture(int32_t  value) ;

constexpr void __cordl_internal_set_currentSubTexture(int32_t  value) ;

constexpr void __cordl_internal_set_finishedCoroutine(bool  value) ;

constexpr void __cordl_internal_set_fromMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_fromPixels(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_isComplete(bool  value) ;

constexpr void __cordl_internal_set_job(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_jobStarted(bool  value) ;

constexpr void __cordl_internal_set_lerpAmount(float_t  value) ;

constexpr void __cordl_internal_set_mixedPixels(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_newData(::UnityEngine::LightmapData*  value) ;

constexpr void __cordl_internal_set_newDatas(::ArrayW<::UnityEngine::LightmapData*>  value) ;

constexpr void __cordl_internal_set_newTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_startCoroutine(bool  value) ;

constexpr void __cordl_internal_set_startJob(bool  value) ;

constexpr void __cordl_internal_set_startTime(float_t  value) ;

constexpr void __cordl_internal_set_startedCoroutine(bool  value) ;

constexpr void __cordl_internal_set_subTextureArray(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_subTextureSize(int32_t  value) ;

constexpr void __cordl_internal_set_switchTimeTaken(float_t  value) ;

constexpr void __cordl_internal_set_textureHeight(int32_t  value) ;

constexpr void __cordl_internal_set_textureWidth(int32_t  value) ;

constexpr void __cordl_internal_set_timeTakenDuringJob(float_t  value) ;

constexpr void __cordl_internal_set_timeTakenPostJob(float_t  value) ;

constexpr void __cordl_internal_set_timeTakenStartingJob(float_t  value) ;

constexpr void __cordl_internal_set_toMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_toPixels(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_workBlockFrom(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_workBlockMix(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_workBlockTo(::ArrayW<::UnityEngine::Color>  value) ;

/// @brief Method .ctor, addr 0x5995f34, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DayNightCycle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DayNightCycle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DayNightCycle(DayNightCycle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DayNightCycle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DayNightCycle(DayNightCycle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2591};

/// @brief Field _dayMap, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____dayMap;

/// @brief Field fromMap, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___fromMap;

/// @brief Field _sunriseMap, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____sunriseMap;

/// @brief Field toMap, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___toMap;

/// @brief Field job, offset: 0x40, size: 0x38, def value: None
 ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob  ___job;

/// @brief Field jobHandle, offset: 0x78, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field isComplete, offset: 0x88, size: 0x1, def value: None
 bool  ___isComplete;

/// @brief Field startTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___startTime;

/// @brief Field timeTakenStartingJob, offset: 0x90, size: 0x4, def value: None
 float_t  ___timeTakenStartingJob;

/// @brief Field timeTakenPostJob, offset: 0x94, size: 0x4, def value: None
 float_t  ___timeTakenPostJob;

/// @brief Field timeTakenDuringJob, offset: 0x98, size: 0x4, def value: None
 float_t  ___timeTakenDuringJob;

/// @brief Field newData, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::LightmapData*  ___newData;

/// @brief Field fromPixels, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___fromPixels;

/// @brief Field toPixels, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___toPixels;

/// @brief Field mixedPixels, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___mixedPixels;

/// @brief Field newDatas, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::LightmapData*>  ___newDatas;

/// @brief Field newTexture, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___newTexture;

/// @brief Field textureWidth, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___textureWidth;

/// @brief Field textureHeight, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___textureHeight;

/// @brief Field workBlockFrom, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___workBlockFrom;

/// @brief Field workBlockTo, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___workBlockTo;

/// @brief Field workBlockMix, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___workBlockMix;

/// @brief Field subTextureSize, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___subTextureSize;

/// @brief Field subTextureArray, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___subTextureArray;

/// @brief Field startCoroutine, offset: 0x100, size: 0x1, def value: None
 bool  ___startCoroutine;

/// @brief Field startedCoroutine, offset: 0x101, size: 0x1, def value: None
 bool  ___startedCoroutine;

/// @brief Field finishedCoroutine, offset: 0x102, size: 0x1, def value: None
 bool  ___finishedCoroutine;

/// @brief Field startJob, offset: 0x103, size: 0x1, def value: None
 bool  ___startJob;

/// @brief Field switchTimeTaken, offset: 0x104, size: 0x4, def value: None
 float_t  ___switchTimeTaken;

/// @brief Field jobStarted, offset: 0x108, size: 0x1, def value: None
 bool  ___jobStarted;

/// @brief Field lerpAmount, offset: 0x10c, size: 0x4, def value: None
 float_t  ___lerpAmount;

/// @brief Field currentRow, offset: 0x110, size: 0x4, def value: None
 int32_t  ___currentRow;

/// @brief Field currentColumn, offset: 0x114, size: 0x4, def value: None
 int32_t  ___currentColumn;

/// @brief Field currentSubTexture, offset: 0x118, size: 0x4, def value: None
 int32_t  ___currentSubTexture;

/// @brief Field currentRowInSubtexture, offset: 0x11c, size: 0x4, def value: None
 int32_t  ___currentRowInSubtexture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DayNightCycle, ____dayMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___fromMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ____sunriseMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___toMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___job) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___jobHandle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___isComplete) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___startTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___timeTakenStartingJob) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___timeTakenPostJob) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___timeTakenDuringJob) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___newData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___fromPixels) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___toPixels) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___mixedPixels) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___newDatas) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___newTexture) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___textureWidth) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___textureHeight) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___workBlockFrom) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___workBlockTo) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___workBlockMix) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___subTextureSize) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___subTextureArray) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___startCoroutine) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___startedCoroutine) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___finishedCoroutine) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___startJob) == 0x103, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___switchTimeTaken) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___jobStarted) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___lerpAmount) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___currentRow) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___currentColumn) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___currentSubTexture) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle, ___currentRowInSubtexture) == 0x11c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DayNightCycle) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DayNightCycle/<UpdateWork>d__37
class CORDL_TYPE DayNightCycle__UpdateWork_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DayNightCycle>  __4__this;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field <j>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__j_5__3, put=__cordl_internal_set__j_5__3)) int32_t  _j_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5995f94, size 0x550, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::DayNightCycle__UpdateWork_d__37* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59964e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59964ec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5996524, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5995f90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::DayNightCycle> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::DayNightCycle>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr int32_t const& __cordl_internal_get__j_5__3() const;

constexpr int32_t& __cordl_internal_get__j_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DayNightCycle>  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__j_5__3(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5995f0c, size 0x28, virtual false, abstract: false, final false
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
constexpr DayNightCycle__UpdateWork_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DayNightCycle__UpdateWork_d__37", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DayNightCycle__UpdateWork_d__37(DayNightCycle__UpdateWork_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DayNightCycle__UpdateWork_d__37", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DayNightCycle__UpdateWork_d__37(DayNightCycle__UpdateWork_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2590};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DayNightCycle>  _____4__this;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

/// @brief Field <j>5__3, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____j_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DayNightCycle__UpdateWork_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle__UpdateWork_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle__UpdateWork_d__37, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle__UpdateWork_d__37, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DayNightCycle__UpdateWork_d__37, ____j_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DayNightCycle__UpdateWork_d__37) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
