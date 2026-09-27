#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineRoll_RollCache.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollCache_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineRoll_RollCache.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CinemachineSplineRoll_RollCache::*)(::UnityEngine::MonoBehaviour*)>(&::GlobalNamespace::CinemachineSplineRoll_RollCache::Refresh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xae9881c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollCache>(),
                        {"Refresh", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CinemachineSplineRoll_RollCache.GetSplineRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::Cinemachine::CinemachineSplineRoll> (::GlobalNamespace::CinemachineSplineRoll_RollCache::*)(::UnityEngine::MonoBehaviour*)>(&::GlobalNamespace::CinemachineSplineRoll_RollCache::GetSplineRoll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae98974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollCache>(),
                        {"GetSplineRoll", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CinemachineSplineRoll_RollCache::Refresh(::UnityEngine::MonoBehaviour*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollCache>(),
                        {"Refresh", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, owner);
}
inline ::UnityW<::Unity::Cinemachine::CinemachineSplineRoll> GlobalNamespace::CinemachineSplineRoll_RollCache::GetSplineRoll(::UnityEngine::MonoBehaviour*  owner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CinemachineSplineRoll_RollCache>(),
                        {"GetSplineRoll", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::Cinemachine::CinemachineSplineRoll>>(*this, ___internal_method, owner);
}
// Ctor Parameters [CppParam { name: "m_RollCache", ty: "::UnityW<::Unity::Cinemachine::CinemachineSplineRoll>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache::CinemachineSplineRoll_RollCache(::UnityW<::Unity::Cinemachine::CinemachineSplineRoll>  m_RollCache) noexcept  {
this->m_RollCache = m_RollCache;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache::CinemachineSplineRoll_RollCache()   {
}
