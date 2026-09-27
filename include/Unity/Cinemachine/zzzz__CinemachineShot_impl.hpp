#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShot.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineShot_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShot.CreatePlayable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::Unity::Cinemachine::CinemachineShot::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::Unity::Cinemachine::CinemachineShot::CreatePlayable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xaf00a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShot.GatherProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShot::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::Unity::Cinemachine::CinemachineShot::GatherProperties)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xaf00bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(),
                        {"GatherProperties", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>(), ::i2c::type_of<::UnityEngine::Timeline::IPropertyCollector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineShot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineShot::*)()>(&::Unity::Cinemachine::CinemachineShot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf011b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Cinemachine::CinemachineShot::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& Unity::Cinemachine::CinemachineShot::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void Unity::Cinemachine::CinemachineShot::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>& Unity::Cinemachine::CinemachineShot::__cordl_internal_get_VirtualCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCamera;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>> const& Unity::Cinemachine::CinemachineShot::__cordl_internal_get_VirtualCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCamera;
}
constexpr void Unity::Cinemachine::CinemachineShot::__cordl_internal_set_VirtualCamera(::UnityEngine::ExposedReference_1<::UnityW<::Unity::Cinemachine::CinemachineVirtualCameraBase>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCamera = value;
}
inline ::UnityEngine::Playables::Playable Unity::Cinemachine::CinemachineShot::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  owner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, owner);
}
inline void Unity::Cinemachine::CinemachineShot::GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(),
                        {"GatherProperties", {}, {::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>(), ::i2c::type_of<::UnityEngine::Timeline::IPropertyCollector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, director, driver);
}
inline void Unity::Cinemachine::CinemachineShot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineShot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineShot* Unity::Cinemachine::CinemachineShot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineShot*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr  Unity::Cinemachine::CinemachineShot::operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept {
return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
constexpr ::UnityEngine::Timeline::IPropertyPreview* Unity::Cinemachine::CinemachineShot::i___UnityEngine__Timeline__IPropertyPreview() noexcept {
return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineShot::CinemachineShot()   {
}
