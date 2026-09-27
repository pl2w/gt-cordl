#pragma once
// IWYU pragma private; include "GorillaTag/Dev/Benchmarks/VisualBenchmark.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_EState_impl.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_StatInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_def.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_EState_def.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_StatInfo_def.hpp"
#include "GorillaTag/Dev/Benchmarks/zzzz__VisualBenchmark_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark::Awake)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x5d45a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark::OnEnable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d46040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark::OnDisable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d46138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark::LateUpdate)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x5d461ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark.RecordLocationStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark::*)(::UnityEngine::Transform*)>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark::RecordLocationStats)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5d464a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"RecordLocationStats", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d46920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_benchmarkLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___benchmarkLocations;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_benchmarkLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___benchmarkLocations;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_benchmarkLocations(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___benchmarkLocations = value;
}
constexpr float_t& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_collectGarbageDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectGarbageDelay;
}
constexpr float_t const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_collectGarbageDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectGarbageDelay;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_collectGarbageDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectGarbageDelay = value;
}
constexpr float_t& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_recordStatsDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordStatsDelay;
}
constexpr float_t const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_recordStatsDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recordStatsDelay;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_recordStatsDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recordStatsDelay = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_cam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_cam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cam;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cam = value;
}
constexpr ::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo>& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_availableRenderStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableRenderStats;
}
constexpr ::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo> const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_availableRenderStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableRenderStats;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_availableRenderStats(::ArrayW<::GlobalNamespace::VisualBenchmark_StatInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableRenderStats = value;
}
constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder>& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_renderStatsRecorders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderStatsRecorders;
}
constexpr ::ArrayW<::Unity::Profiling::ProfilerRecorder> const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_renderStatsRecorders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderStatsRecorders;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_renderStatsRecorders(::ArrayW<::Unity::Profiling::ProfilerRecorder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderStatsRecorders = value;
}
constexpr int32_t& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_currentLocationIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLocationIndex;
}
constexpr int32_t const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_currentLocationIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLocationIndex;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_currentLocationIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLocationIndex = value;
}
constexpr ::GlobalNamespace::VisualBenchmark_EState& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::VisualBenchmark_EState const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_state(::GlobalNamespace::VisualBenchmark_EState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr float_t& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
constexpr ::System::Text::StringBuilder*& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_sb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr ::System::Text::StringBuilder* const& GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_get_sb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sb;
}
constexpr void GorillaTag::Dev::Benchmarks::VisualBenchmark::__cordl_internal_set_sb(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sb = value;
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::setStaticF_isQuitting(bool  value)  {
::cordl_internals::setStaticField<bool, "isQuitting", ::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(std::forward<bool>(value));
}
inline bool GorillaTag::Dev::Benchmarks::VisualBenchmark::getStaticF_isQuitting()  {
return ::cordl_internals::getStaticField<bool, "isQuitting", ::GorillaTag::Dev::Benchmarks::VisualBenchmark*>();
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::RecordLocationStats(::UnityEngine::Transform*  xform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {"RecordLocationStats", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xform);
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Dev::Benchmarks::VisualBenchmark* GorillaTag::Dev::Benchmarks::VisualBenchmark::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Dev::Benchmarks::VisualBenchmark*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Dev::Benchmarks::VisualBenchmark::VisualBenchmark()   {
}
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark___c::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d46a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c._Awake_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Dev::Benchmarks::VisualBenchmark___c::*)()>(&::GorillaTag::Dev::Benchmarks::VisualBenchmark___c::_Awake_b__13_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d46a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(),
                        {"<Awake>b__13_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark___c::setStaticF___9(::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*  value)  {
::cordl_internals::setStaticField<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*, "<>9", ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(std::forward<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(value));
}
inline ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c* GorillaTag::Dev::Benchmarks::VisualBenchmark___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*, "<>9", ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>();
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark___c::setStaticF___9__13_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__13_0", ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTag::Dev::Benchmarks::VisualBenchmark___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__13_0", ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>();
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Dev::Benchmarks::VisualBenchmark___c::_Awake_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>(),
                        {"<Awake>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c* GorillaTag::Dev::Benchmarks::VisualBenchmark___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Dev::Benchmarks::VisualBenchmark___c*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Dev::Benchmarks::VisualBenchmark___c::VisualBenchmark___c()   {
}
