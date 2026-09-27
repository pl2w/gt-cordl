#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TimelinePlayable_TrackCacheManager.hpp"
#include "UnityEngine/Timeline/zzzz__TimelinePlayable_TrackCacheManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Timeline/zzzz__AnimationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimelinePlayable_TrackCacheManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePlayable_TrackCacheManager::*)(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*)>(&::GlobalNamespace::TimelinePlayable_TrackCacheManager::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb3d055c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimelinePlayable_TrackCacheManager>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePlayable_TrackCacheManager.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePlayable_TrackCacheManager::*)()>(&::GlobalNamespace::TimelinePlayable_TrackCacheManager::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb3d0d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimelinePlayable_TrackCacheManager>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimelinePlayable_TrackCacheManager.GetTrackAssetsFromRuntimeElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimelinePlayable_TrackCacheManager::*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*)>(&::GlobalNamespace::TimelinePlayable_TrackCacheManager::GetTrackAssetsFromRuntimeElements)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb3d0b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimelinePlayable_TrackCacheManager>(),
                        {"GetTrackAssetsFromRuntimeElements", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimelinePlayable_TrackCacheManager::_ctor(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*  cache, ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*  activeRuntimeElements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimelinePlayable_TrackCacheManager>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cache, activeRuntimeElements);
}
inline void GlobalNamespace::TimelinePlayable_TrackCacheManager::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimelinePlayable_TrackCacheManager>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TimelinePlayable_TrackCacheManager::GetTrackAssetsFromRuntimeElements(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*  activeRuntimeElements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimelinePlayable_TrackCacheManager>(),
                        {"GetTrackAssetsFromRuntimeElements", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Timeline::RuntimeElement*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, activeRuntimeElements);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::TimelinePlayable_TrackCacheManager::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::TimelinePlayable_TrackCacheManager::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "trackCache", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimelinePlayable_TrackCacheManager::TimelinePlayable_TrackCacheManager(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Timeline::AnimationTrack>>*  trackCache) noexcept  {
this->trackCache = trackCache;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelinePlayable_TrackCacheManager::TimelinePlayable_TrackCacheManager()   {
}
