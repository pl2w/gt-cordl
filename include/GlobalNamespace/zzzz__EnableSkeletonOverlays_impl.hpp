#pragma once
// IWYU pragma private; include "GlobalNamespace/EnableSkeletonOverlays.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableSkeletonOverlays_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableSkeletonOverlays.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableSkeletonOverlays::*)()>(&::GlobalNamespace::EnableSkeletonOverlays::OnEnable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x567329c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnableSkeletonOverlays*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableSkeletonOverlays.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableSkeletonOverlays::*)()>(&::GlobalNamespace::EnableSkeletonOverlays::OnDisable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x567330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnableSkeletonOverlays*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableSkeletonOverlays._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableSkeletonOverlays::*)()>(&::GlobalNamespace::EnableSkeletonOverlays::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5673370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnableSkeletonOverlays*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_get_bodyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_get_bodyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyMaterial;
}
constexpr void GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_set_bodyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_get_skeletonMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeletonMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_get_skeletonMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeletonMaterial;
}
constexpr void GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_set_skeletonMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skeletonMaterial = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_get__BlackAndWhite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlackAndWhite;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_get__BlackAndWhite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlackAndWhite;
}
constexpr void GlobalNamespace::EnableSkeletonOverlays::__cordl_internal_set__BlackAndWhite(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlackAndWhite = value;
}
inline void GlobalNamespace::EnableSkeletonOverlays::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnableSkeletonOverlays*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableSkeletonOverlays::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnableSkeletonOverlays*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EnableSkeletonOverlays::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EnableSkeletonOverlays*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableSkeletonOverlays* GlobalNamespace::EnableSkeletonOverlays::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnableSkeletonOverlays*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableSkeletonOverlays::EnableSkeletonOverlays()   {
}
