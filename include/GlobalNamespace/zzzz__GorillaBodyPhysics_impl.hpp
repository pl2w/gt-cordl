#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBodyPhysics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaBodyPhysics_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyPhysics.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyPhysics::*)()>(&::GlobalNamespace::GorillaBodyPhysics::FixedUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x579d2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyPhysics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyPhysics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyPhysics::*)()>(&::GlobalNamespace::GorillaBodyPhysics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyPhysics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaBodyPhysics::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaBodyPhysics::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::GorillaBodyPhysics::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaBodyPhysics::__cordl_internal_get_bodyColliderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaBodyPhysics::__cordl_internal_get_bodyColliderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderOffset;
}
constexpr void GlobalNamespace::GorillaBodyPhysics::__cordl_internal_set_bodyColliderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyColliderOffset = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaBodyPhysics::__cordl_internal_get_headsetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaBodyPhysics::__cordl_internal_get_headsetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr void GlobalNamespace::GorillaBodyPhysics::__cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headsetTransform = value;
}
inline void GlobalNamespace::GorillaBodyPhysics::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyPhysics*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyPhysics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyPhysics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaBodyPhysics* GlobalNamespace::GorillaBodyPhysics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaBodyPhysics*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaBodyPhysics::GorillaBodyPhysics()   {
}
