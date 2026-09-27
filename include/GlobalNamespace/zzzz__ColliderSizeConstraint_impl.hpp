#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderSizeConstraint.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ColliderSizeConstraint_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColliderSizeConstraint.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderSizeConstraint::*)()>(&::GlobalNamespace::ColliderSizeConstraint::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa427c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSizeConstraint*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColliderSizeConstraint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColliderSizeConstraint::*)()>(&::GlobalNamespace::ColliderSizeConstraint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa427e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSizeConstraint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___size;
}
constexpr void GlobalNamespace::ColliderSizeConstraint::__cordl_internal_set_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___size = value;
}
constexpr int32_t& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_expandingAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandingAxis;
}
constexpr int32_t const& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_expandingAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expandingAxis;
}
constexpr void GlobalNamespace::ColliderSizeConstraint::__cordl_internal_set_expandingAxis(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expandingAxis = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_pointA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointA;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_pointA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointA;
}
constexpr void GlobalNamespace::ColliderSizeConstraint::__cordl_internal_set_pointA(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointA = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_pointB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointB;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_pointB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pointB;
}
constexpr void GlobalNamespace::ColliderSizeConstraint::__cordl_internal_set_pointB(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pointB = value;
}
constexpr float_t& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_wideSideOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wideSideOffset;
}
constexpr float_t const& GlobalNamespace::ColliderSizeConstraint::__cordl_internal_get_wideSideOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wideSideOffset;
}
constexpr void GlobalNamespace::ColliderSizeConstraint::__cordl_internal_set_wideSideOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wideSideOffset = value;
}
inline void GlobalNamespace::ColliderSizeConstraint::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSizeConstraint*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColliderSizeConstraint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ColliderSizeConstraint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColliderSizeConstraint* GlobalNamespace::ColliderSizeConstraint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColliderSizeConstraint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColliderSizeConstraint::ColliderSizeConstraint()   {
}
