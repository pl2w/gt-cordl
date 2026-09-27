#pragma once
// IWYU pragma private; include "GlobalNamespace/DayNightCycle.hpp"
#include "GlobalNamespace/zzzz__DayNightCycle_LerpBakedLightingJob_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LightmapData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__DayNightCycle_def.hpp"
#include "GlobalNamespace/zzzz__DayNightCycle_LerpBakedLightingJob_def.hpp"
#include "GlobalNamespace/zzzz__DayNightCycle_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle::*)()>(&::GlobalNamespace::DayNightCycle::Awake)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5995728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle::*)()>(&::GlobalNamespace::DayNightCycle::Update)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x5995b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle.UpdateWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::DayNightCycle::*)()>(&::GlobalNamespace::DayNightCycle::UpdateWork)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5995ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {"UpdateWork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle::*)()>(&::GlobalNamespace::DayNightCycle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5995f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayNightCycle::__cordl_internal_get__dayMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dayMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayNightCycle::__cordl_internal_get__dayMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dayMap;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set__dayMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dayMap = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayNightCycle::__cordl_internal_get_fromMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_fromMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromMap;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_fromMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromMap = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayNightCycle::__cordl_internal_get__sunriseMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sunriseMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayNightCycle::__cordl_internal_get__sunriseMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sunriseMap;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set__sunriseMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sunriseMap = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayNightCycle::__cordl_internal_get_toMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toMap;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_toMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toMap;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_toMap(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toMap = value;
}
constexpr ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob& GlobalNamespace::DayNightCycle::__cordl_internal_get_job()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob const& GlobalNamespace::DayNightCycle::__cordl_internal_get_job() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___job;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_job(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___job = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::DayNightCycle::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::DayNightCycle::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr bool& GlobalNamespace::DayNightCycle::__cordl_internal_get_isComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr bool const& GlobalNamespace::DayNightCycle::__cordl_internal_get_isComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_isComplete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isComplete = value;
}
constexpr float_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr float_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_timeTakenStartingJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTakenStartingJob;
}
constexpr float_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_timeTakenStartingJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTakenStartingJob;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_timeTakenStartingJob(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeTakenStartingJob = value;
}
constexpr float_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_timeTakenPostJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTakenPostJob;
}
constexpr float_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_timeTakenPostJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTakenPostJob;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_timeTakenPostJob(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeTakenPostJob = value;
}
constexpr float_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_timeTakenDuringJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTakenDuringJob;
}
constexpr float_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_timeTakenDuringJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeTakenDuringJob;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_timeTakenDuringJob(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeTakenDuringJob = value;
}
constexpr ::UnityEngine::LightmapData*& GlobalNamespace::DayNightCycle::__cordl_internal_get_newData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newData;
}
constexpr ::UnityEngine::LightmapData* const& GlobalNamespace::DayNightCycle::__cordl_internal_get_newData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newData;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_newData(::UnityEngine::LightmapData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newData = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::DayNightCycle::__cordl_internal_get_fromPixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromPixels;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_fromPixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromPixels;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_fromPixels(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromPixels = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::DayNightCycle::__cordl_internal_get_toPixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toPixels;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_toPixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toPixels;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_toPixels(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toPixels = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::DayNightCycle::__cordl_internal_get_mixedPixels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixedPixels;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_mixedPixels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mixedPixels;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_mixedPixels(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mixedPixels = value;
}
constexpr ::ArrayW<::UnityEngine::LightmapData*>& GlobalNamespace::DayNightCycle::__cordl_internal_get_newDatas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newDatas;
}
constexpr ::ArrayW<::UnityEngine::LightmapData*> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_newDatas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newDatas;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_newDatas(::ArrayW<::UnityEngine::LightmapData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newDatas = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::DayNightCycle::__cordl_internal_get_newTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_newTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTexture;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_newTexture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newTexture = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_textureWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureWidth;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_textureWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureWidth;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_textureWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureWidth = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_textureHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureHeight;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_textureHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureHeight;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_textureHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureHeight = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::DayNightCycle::__cordl_internal_get_workBlockFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workBlockFrom;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_workBlockFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workBlockFrom;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_workBlockFrom(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workBlockFrom = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::DayNightCycle::__cordl_internal_get_workBlockTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workBlockTo;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_workBlockTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workBlockTo;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_workBlockTo(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workBlockTo = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GlobalNamespace::DayNightCycle::__cordl_internal_get_workBlockMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workBlockMix;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_workBlockMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workBlockMix;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_workBlockMix(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workBlockMix = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_subTextureSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTextureSize;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_subTextureSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTextureSize;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_subTextureSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subTextureSize = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::DayNightCycle::__cordl_internal_get_subTextureArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTextureArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::DayNightCycle::__cordl_internal_get_subTextureArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTextureArray;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_subTextureArray(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subTextureArray = value;
}
constexpr bool& GlobalNamespace::DayNightCycle::__cordl_internal_get_startCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCoroutine;
}
constexpr bool const& GlobalNamespace::DayNightCycle::__cordl_internal_get_startCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCoroutine;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_startCoroutine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startCoroutine = value;
}
constexpr bool& GlobalNamespace::DayNightCycle::__cordl_internal_get_startedCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startedCoroutine;
}
constexpr bool const& GlobalNamespace::DayNightCycle::__cordl_internal_get_startedCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startedCoroutine;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_startedCoroutine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startedCoroutine = value;
}
constexpr bool& GlobalNamespace::DayNightCycle::__cordl_internal_get_finishedCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedCoroutine;
}
constexpr bool const& GlobalNamespace::DayNightCycle::__cordl_internal_get_finishedCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedCoroutine;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_finishedCoroutine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedCoroutine = value;
}
constexpr bool& GlobalNamespace::DayNightCycle::__cordl_internal_get_startJob()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startJob;
}
constexpr bool const& GlobalNamespace::DayNightCycle::__cordl_internal_get_startJob() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startJob;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_startJob(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startJob = value;
}
constexpr float_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_switchTimeTaken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchTimeTaken;
}
constexpr float_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_switchTimeTaken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchTimeTaken;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_switchTimeTaken(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchTimeTaken = value;
}
constexpr bool& GlobalNamespace::DayNightCycle::__cordl_internal_get_jobStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobStarted;
}
constexpr bool const& GlobalNamespace::DayNightCycle::__cordl_internal_get_jobStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobStarted;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_jobStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobStarted = value;
}
constexpr float_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_lerpAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpAmount;
}
constexpr float_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_lerpAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpAmount;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_lerpAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpAmount = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentRow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRow;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentRow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRow;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_currentRow(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRow = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentColumn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColumn;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentColumn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColumn;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_currentColumn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentColumn = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentSubTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSubTexture;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentSubTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSubTexture;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_currentSubTexture(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSubTexture = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentRowInSubtexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRowInSubtexture;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle::__cordl_internal_get_currentRowInSubtexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRowInSubtexture;
}
constexpr void GlobalNamespace::DayNightCycle::__cordl_internal_set_currentRowInSubtexture(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRowInSubtexture = value;
}
inline void GlobalNamespace::DayNightCycle::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DayNightCycle::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::DayNightCycle::UpdateWork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {"UpdateWork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::DayNightCycle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DayNightCycle* GlobalNamespace::DayNightCycle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DayNightCycle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DayNightCycle::DayNightCycle()   {
}
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle__UpdateWork_d__37._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle__UpdateWork_d__37::*)(int32_t)>(&::GlobalNamespace::DayNightCycle__UpdateWork_d__37::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5995f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle__UpdateWork_d__37.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle__UpdateWork_d__37::*)()>(&::GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5995f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle__UpdateWork_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::DayNightCycle__UpdateWork_d__37::*)()>(&::GlobalNamespace::DayNightCycle__UpdateWork_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5995f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle__UpdateWork_d__37.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DayNightCycle__UpdateWork_d__37::*)()>(&::GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59964e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle__UpdateWork_d__37.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DayNightCycle__UpdateWork_d__37::*)()>(&::GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59964ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DayNightCycle__UpdateWork_d__37.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::DayNightCycle__UpdateWork_d__37::*)()>(&::GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5996524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::DayNightCycle>& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::DayNightCycle> const& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DayNightCycle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
constexpr int32_t& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get__j_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____j_5__3;
}
constexpr int32_t const& GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_get__j_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____j_5__3;
}
constexpr void GlobalNamespace::DayNightCycle__UpdateWork_d__37::__cordl_internal_set__j_5__3(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____j_5__3 = value;
}
inline void GlobalNamespace::DayNightCycle__UpdateWork_d__37::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::DayNightCycle__UpdateWork_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::DayNightCycle__UpdateWork_d__37::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::DayNightCycle__UpdateWork_d__37* GlobalNamespace::DayNightCycle__UpdateWork_d__37::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DayNightCycle__UpdateWork_d__37*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::DayNightCycle__UpdateWork_d__37::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::DayNightCycle__UpdateWork_d__37::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::DayNightCycle__UpdateWork_d__37::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::DayNightCycle__UpdateWork_d__37::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::DayNightCycle__UpdateWork_d__37::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::DayNightCycle__UpdateWork_d__37::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DayNightCycle__UpdateWork_d__37::DayNightCycle__UpdateWork_d__37()   {
}
