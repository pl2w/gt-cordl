#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceRecalculateBounds.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ForceRecalculateBounds_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ForceRecalculateBounds.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceRecalculateBounds::*)()>(&::GlobalNamespace::ForceRecalculateBounds::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57121c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceRecalculateBounds.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceRecalculateBounds::*)()>(&::GlobalNamespace::ForceRecalculateBounds::Tick)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x571229c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(),
                    {::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ForceRecalculateBounds._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ForceRecalculateBounds::*)()>(&::GlobalNamespace::ForceRecalculateBounds::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57123bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::ForceRecalculateBounds::__cordl_internal_get_skinnedMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMesh;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::ForceRecalculateBounds::__cordl_internal_get_skinnedMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMesh;
}
constexpr void GlobalNamespace::ForceRecalculateBounds::__cordl_internal_set_skinnedMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedMesh = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ForceRecalculateBounds::__cordl_internal_get_mainCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ForceRecalculateBounds::__cordl_internal_get_mainCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCamera;
}
constexpr void GlobalNamespace::ForceRecalculateBounds::__cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCamera = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ForceRecalculateBounds::__cordl_internal_get_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ForceRecalculateBounds::__cordl_internal_get_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounds;
}
constexpr void GlobalNamespace::ForceRecalculateBounds::__cordl_internal_set_bounds(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounds = value;
}
inline void GlobalNamespace::ForceRecalculateBounds::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceRecalculateBounds::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ForceRecalculateBounds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForceRecalculateBounds*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ForceRecalculateBounds* GlobalNamespace::ForceRecalculateBounds::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ForceRecalculateBounds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ForceRecalculateBounds::ForceRecalculateBounds()   {
}
