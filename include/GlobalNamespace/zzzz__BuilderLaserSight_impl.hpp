#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderLaserSight.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderLaserSight_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderLaserSight.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderLaserSight::*)()>(&::GlobalNamespace::BuilderLaserSight::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57be818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderLaserSight.SetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderLaserSight::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BuilderLaserSight::SetPoints)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57be908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {"SetPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderLaserSight.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderLaserSight::*)(bool)>(&::GlobalNamespace::BuilderLaserSight::Show)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57be99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {"Show", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderLaserSight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderLaserSight::*)()>(&::GlobalNamespace::BuilderLaserSight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57bea34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& GlobalNamespace::BuilderLaserSight::__cordl_internal_get_lineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& GlobalNamespace::BuilderLaserSight::__cordl_internal_get_lineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineRenderer;
}
constexpr void GlobalNamespace::BuilderLaserSight::__cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineRenderer = value;
}
inline void GlobalNamespace::BuilderLaserSight::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderLaserSight::SetPoints(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {"SetPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline void GlobalNamespace::BuilderLaserSight::Show(bool  show)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {"Show", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, show);
}
inline void GlobalNamespace::BuilderLaserSight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderLaserSight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderLaserSight* GlobalNamespace::BuilderLaserSight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderLaserSight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderLaserSight::BuilderLaserSight()   {
}
