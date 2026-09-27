#pragma once
// IWYU pragma private; include "GlobalNamespace/GRTransformLook.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRTransformLook_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRTransformLook.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTransformLook::*)()>(&::GlobalNamespace::GRTransformLook::Awake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58d1438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTransformLook*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTransformLook.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTransformLook::*)()>(&::GlobalNamespace::GRTransformLook::LateUpdate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58d147c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTransformLook*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRTransformLook._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRTransformLook::*)()>(&::GlobalNamespace::GRTransformLook::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d1594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTransformLook*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::GRTransformLook::__cordl_internal_get_followPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followPlayer;
}
constexpr bool const& GlobalNamespace::GRTransformLook::__cordl_internal_get_followPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followPlayer;
}
constexpr void GlobalNamespace::GRTransformLook::__cordl_internal_set_followPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followPlayer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRTransformLook::__cordl_internal_get_lookTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRTransformLook::__cordl_internal_get_lookTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookTarget;
}
constexpr void GlobalNamespace::GRTransformLook::__cordl_internal_set_lookTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookTarget = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRTransformLook::__cordl_internal_get_offsetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRTransformLook::__cordl_internal_get_offsetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetRotation;
}
constexpr void GlobalNamespace::GRTransformLook::__cordl_internal_set_offsetRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetRotation = value;
}
inline void GlobalNamespace::GRTransformLook::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTransformLook*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTransformLook::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTransformLook*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRTransformLook::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRTransformLook*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRTransformLook* GlobalNamespace::GRTransformLook::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRTransformLook*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRTransformLook::GRTransformLook()   {
}
