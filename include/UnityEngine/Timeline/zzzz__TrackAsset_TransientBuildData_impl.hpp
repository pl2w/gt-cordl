#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/TrackAsset_TransientBuildData.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_TransientBuildData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrackAsset_TransientBuildData.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TrackAsset_TransientBuildData (*)()>(&::GlobalNamespace::TrackAsset_TransientBuildData::Create)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb3c1a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackAsset_TransientBuildData>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrackAsset_TransientBuildData.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TrackAsset_TransientBuildData::*)()>(&::GlobalNamespace::TrackAsset_TransientBuildData::Clear)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb3bf5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackAsset_TransientBuildData>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::TrackAsset_TransientBuildData GlobalNamespace::TrackAsset_TransientBuildData::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackAsset_TransientBuildData>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TrackAsset_TransientBuildData>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TrackAsset_TransientBuildData::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TrackAsset_TransientBuildData>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "markerList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackAsset_TransientBuildData::TrackAsset_TransientBuildData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Timeline::TrackAsset>>*  trackList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  clipList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markerList) noexcept  {
this->trackList = trackList;
this->clipList = clipList;
this->markerList = markerList;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackAsset_TransientBuildData::TrackAsset_TransientBuildData()   {
}
