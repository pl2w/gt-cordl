#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayableBoundaryManager.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__PlayableBoundaryManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayableBoundaryTracker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.get_ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PlayableBoundaryManager::get_ShouldRender)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56369ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"get_ShouldRender", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.set_ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PlayableBoundaryManager::set_ShouldRender)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5636a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"set_ShouldRender", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5636ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::Setup)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5636b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5636e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5636e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.UpdateSim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::UpdateSim)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5632dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"UpdateSim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager._GetSignedDistanceToBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayableBoundaryManager::*)(::Unity::Mathematics::float3, float_t)>(&::GlobalNamespace::PlayableBoundaryManager::_GetSignedDistanceToBoundary)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5636fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"_GetSignedDistanceToBoundary", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.SDFSmoothMerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayableBoundaryManager::*)(float_t, float_t, float_t)>(&::GlobalNamespace::PlayableBoundaryManager::SDFSmoothMerge)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56371d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"SDFSmoothMerge", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.Hash3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Vector3> (*)(float_t)>(&::GlobalNamespace::PlayableBoundaryManager::Hash3)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5636ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"Hash3", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager.GetSmoothFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::GetSmoothFactor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x56371ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"GetSmoothFactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayableBoundaryManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayableBoundaryManager::*)()>(&::GlobalNamespace::PlayableBoundaryManager::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x563728c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_tracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tracked;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>* const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_tracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tracked;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set_tracked(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tracked = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_bigCylinderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bigCylinderRadius;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_bigCylinderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bigCylinderRadius;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set_m_bigCylinderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bigCylinderRadius = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_smoothFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothFactor;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_smoothFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smoothFactor;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set_m_smoothFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smoothFactor = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_smallCylindersRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallCylindersRadius;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_smallCylindersRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallCylindersRadius;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set_m_smallCylindersRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smallCylindersRadius = value;
}
constexpr double_t& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_smallCylindersMoveTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallCylindersMoveTimeScale;
}
constexpr double_t const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_m_smallCylindersMoveTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallCylindersMoveTimeScale;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set_m_smallCylindersMoveTimeScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smallCylindersMoveTimeScale = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get__cylinders_centers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinders_centers;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get__cylinders_centers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinders_centers;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set__cylinders_centers(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinders_centers = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get__cylinders_radiusHeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinders_radiusHeights;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get__cylinders_radiusHeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinders_radiusHeights;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set__cylinders_radiusHeights(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinders_radiusHeights = value;
}
constexpr float_t& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_radiusScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radiusScale;
}
constexpr float_t const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get_radiusScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radiusScale;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set_radiusScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radiusScale = value;
}
constexpr int32_t& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get__lastFrameUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameUpdated;
}
constexpr int32_t const& GlobalNamespace::PlayableBoundaryManager::__cordl_internal_get__lastFrameUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastFrameUpdated;
}
constexpr void GlobalNamespace::PlayableBoundaryManager::__cordl_internal_set__lastFrameUpdated(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastFrameUpdated = value;
}
inline void GlobalNamespace::PlayableBoundaryManager::setStaticF__GTGameModes_PlayableBoundary_Cylinders_Centers(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_Cylinders_Centers", ::GlobalNamespace::PlayableBoundaryManager*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::PlayableBoundaryManager::getStaticF__GTGameModes_PlayableBoundary_Cylinders_Centers()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_Cylinders_Centers", ::GlobalNamespace::PlayableBoundaryManager*>();
}
inline void GlobalNamespace::PlayableBoundaryManager::setStaticF__GTGameModes_PlayableBoundary_Cylinders_RadiusHeights(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_Cylinders_RadiusHeights", ::GlobalNamespace::PlayableBoundaryManager*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::PlayableBoundaryManager::getStaticF__GTGameModes_PlayableBoundary_Cylinders_RadiusHeights()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_Cylinders_RadiusHeights", ::GlobalNamespace::PlayableBoundaryManager*>();
}
inline void GlobalNamespace::PlayableBoundaryManager::setStaticF__GTGameModes_PlayableBoundary_NonZeroSmoothRadius(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_NonZeroSmoothRadius", ::GlobalNamespace::PlayableBoundaryManager*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::PlayableBoundaryManager::getStaticF__GTGameModes_PlayableBoundary_NonZeroSmoothRadius()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_NonZeroSmoothRadius", ::GlobalNamespace::PlayableBoundaryManager*>();
}
inline void GlobalNamespace::PlayableBoundaryManager::setStaticF__GTGameModes_PlayableBoundary_IsEnabled(::GlobalNamespace::ShaderHashId  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_IsEnabled", ::GlobalNamespace::PlayableBoundaryManager*>(std::forward<::GlobalNamespace::ShaderHashId>(value));
}
inline ::GlobalNamespace::ShaderHashId GlobalNamespace::PlayableBoundaryManager::getStaticF__GTGameModes_PlayableBoundary_IsEnabled()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ShaderHashId, "_GTGameModes_PlayableBoundary_IsEnabled", ::GlobalNamespace::PlayableBoundaryManager*>();
}
inline void GlobalNamespace::PlayableBoundaryManager::setStaticF_kHashVec(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "kHashVec", ::GlobalNamespace::PlayableBoundaryManager*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::PlayableBoundaryManager::getStaticF_kHashVec()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kHashVec", ::GlobalNamespace::PlayableBoundaryManager*>();
}
inline bool GlobalNamespace::PlayableBoundaryManager::get_ShouldRender()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"get_ShouldRender", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryManager::set_ShouldRender(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"set_ShouldRender", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayableBoundaryManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryManager::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryManager::UpdateSim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"UpdateSim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::PlayableBoundaryManager::_GetSignedDistanceToBoundary(::Unity::Mathematics::float3  tracked_center, float_t  tracked_radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"_GetSignedDistanceToBoundary", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, tracked_center, tracked_radius);
}
inline float_t GlobalNamespace::PlayableBoundaryManager::SDFSmoothMerge(float_t  signedDist1, float_t  signedDist2, float_t  smoothRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"SDFSmoothMerge", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, signedDist1, signedDist2, smoothRadius);
}
inline ::by_ref<::UnityEngine::Vector3> GlobalNamespace::PlayableBoundaryManager::Hash3(float_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"Hash3", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Vector3>>(nullptr, ___internal_method, n);
}
inline float_t GlobalNamespace::PlayableBoundaryManager::GetSmoothFactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {"GetSmoothFactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayableBoundaryManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayableBoundaryManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayableBoundaryManager* GlobalNamespace::PlayableBoundaryManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayableBoundaryManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayableBoundaryManager::PlayableBoundaryManager()   {
}
