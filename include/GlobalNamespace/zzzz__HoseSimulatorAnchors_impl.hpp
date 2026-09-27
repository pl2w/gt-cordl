#pragma once
// IWYU pragma private; include "GlobalNamespace/HoseSimulatorAnchors.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__HoseSimulatorAnchors_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HoseSimulatorAnchors._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HoseSimulatorAnchors::*)()>(&::GlobalNamespace::HoseSimulatorAnchors::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5654f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulatorAnchors*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_leftAnchorPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftAnchorPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_leftAnchorPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftAnchorPoint;
}
constexpr void GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_set_leftAnchorPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftAnchorPoint = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_rightAnchorPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightAnchorPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_rightAnchorPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightAnchorPoint;
}
constexpr void GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_set_rightAnchorPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightAnchorPoint = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_miscAnchorsLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miscAnchorsLeft;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_miscAnchorsLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miscAnchorsLeft;
}
constexpr void GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_set_miscAnchorsLeft(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___miscAnchorsLeft = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_miscAnchorsRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miscAnchorsRight;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_get_miscAnchorsRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___miscAnchorsRight;
}
constexpr void GlobalNamespace::HoseSimulatorAnchors::__cordl_internal_set_miscAnchorsRight(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___miscAnchorsRight = value;
}
inline void GlobalNamespace::HoseSimulatorAnchors::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HoseSimulatorAnchors*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HoseSimulatorAnchors* GlobalNamespace::HoseSimulatorAnchors::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HoseSimulatorAnchors*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HoseSimulatorAnchors::HoseSimulatorAnchors()   {
}
