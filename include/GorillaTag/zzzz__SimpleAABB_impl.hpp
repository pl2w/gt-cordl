#pragma once
// IWYU pragma private; include "GorillaTag/SimpleAABB.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__SimpleAABB_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::SimpleAABB.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::SimpleAABB::*)()>(&::GorillaTag::SimpleAABB::Awake)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d367b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SimpleAABB*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::SimpleAABB.IsInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::SimpleAABB::*)(::UnityEngine::Vector3)>(&::GorillaTag::SimpleAABB::IsInBounds)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d367ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SimpleAABB*>(),
                        {"IsInBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::SimpleAABB._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::SimpleAABB::*)()>(&::GorillaTag::SimpleAABB::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d36844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SimpleAABB*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GorillaTag::SimpleAABB::__cordl_internal_get_m_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_center;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::SimpleAABB::__cordl_internal_get_m_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_center;
}
constexpr void GorillaTag::SimpleAABB::__cordl_internal_set_m_center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_center = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::SimpleAABB::__cordl_internal_get_m_size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_size;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::SimpleAABB::__cordl_internal_get_m_size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_size;
}
constexpr void GorillaTag::SimpleAABB::__cordl_internal_set_m_size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_size = value;
}
constexpr ::UnityEngine::Bounds& GorillaTag::SimpleAABB::__cordl_internal_get_m_bounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bounds;
}
constexpr ::UnityEngine::Bounds const& GorillaTag::SimpleAABB::__cordl_internal_get_m_bounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_bounds;
}
constexpr void GorillaTag::SimpleAABB::__cordl_internal_set_m_bounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_bounds = value;
}
inline void GorillaTag::SimpleAABB::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SimpleAABB*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::SimpleAABB::IsInBounds(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SimpleAABB*>(),
                        {"IsInBounds", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline void GorillaTag::SimpleAABB::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::SimpleAABB*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::SimpleAABB* GorillaTag::SimpleAABB::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::SimpleAABB*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::SimpleAABB::SimpleAABB()   {
}
