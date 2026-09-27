#pragma once
// IWYU pragma private; include "GlobalNamespace/AutoSyncTransforms.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AutoSyncTransforms_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutoSyncTransforms.get_TargetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::AutoSyncTransforms::*)()>(&::GlobalNamespace::AutoSyncTransforms::get_TargetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a0a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"get_TargetTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoSyncTransforms.get_TargetRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::GlobalNamespace::AutoSyncTransforms::*)()>(&::GlobalNamespace::AutoSyncTransforms::get_TargetRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a0a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"get_TargetRigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoSyncTransforms.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoSyncTransforms::*)()>(&::GlobalNamespace::AutoSyncTransforms::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x57a0aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoSyncTransforms.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoSyncTransforms::*)()>(&::GlobalNamespace::AutoSyncTransforms::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57a0c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoSyncTransforms.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoSyncTransforms::*)()>(&::GlobalNamespace::AutoSyncTransforms::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57a0ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutoSyncTransforms._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutoSyncTransforms::*)()>(&::GlobalNamespace::AutoSyncTransforms::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57a0d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AutoSyncTransforms::__cordl_internal_get_m_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AutoSyncTransforms::__cordl_internal_get_m_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_transform;
}
constexpr void GlobalNamespace::AutoSyncTransforms::__cordl_internal_set_m_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_transform = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::AutoSyncTransforms::__cordl_internal_get_m_rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::AutoSyncTransforms::__cordl_internal_get_m_rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rigidbody;
}
constexpr void GlobalNamespace::AutoSyncTransforms::__cordl_internal_set_m_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rigidbody = value;
}
constexpr bool& GlobalNamespace::AutoSyncTransforms::__cordl_internal_get_clean()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clean;
}
constexpr bool const& GlobalNamespace::AutoSyncTransforms::__cordl_internal_get_clean() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clean;
}
constexpr void GlobalNamespace::AutoSyncTransforms::__cordl_internal_set_clean(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clean = value;
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::AutoSyncTransforms::get_TargetTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"get_TargetTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> GlobalNamespace::AutoSyncTransforms::get_TargetRigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"get_TargetRigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void GlobalNamespace::AutoSyncTransforms::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutoSyncTransforms::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutoSyncTransforms::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutoSyncTransforms::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutoSyncTransforms*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AutoSyncTransforms* GlobalNamespace::AutoSyncTransforms::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutoSyncTransforms*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutoSyncTransforms::AutoSyncTransforms()   {
}
