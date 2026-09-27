#pragma once
// IWYU pragma private; include "GlobalNamespace/LockRotation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GlobalNamespace/zzzz__LockRotation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LockRotation.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockRotation::*)()>(&::GlobalNamespace::LockRotation::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a6a6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockRotation*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockRotation.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockRotation::*)()>(&::GlobalNamespace::LockRotation::LateUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a6a714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockRotation*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LockRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LockRotation::*)()>(&::GlobalNamespace::LockRotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a6a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockRotation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Quaternion& GlobalNamespace::LockRotation::__cordl_internal_get_lockedRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::LockRotation::__cordl_internal_get_lockedRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedRot;
}
constexpr void GlobalNamespace::LockRotation::__cordl_internal_set_lockedRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedRot = value;
}
inline void GlobalNamespace::LockRotation::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockRotation*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LockRotation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockRotation*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LockRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LockRotation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LockRotation* GlobalNamespace::LockRotation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LockRotation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LockRotation::LockRotation()   {
}
