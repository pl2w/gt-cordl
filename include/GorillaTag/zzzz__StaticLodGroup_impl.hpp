#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/zzzz__StaticLodGroup_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSimpleBackgroundWorker_def.hpp"
//  Writing Method size for method: ::GorillaTag::StaticLodGroup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodGroup::*)()>(&::GorillaTag::StaticLodGroup::OnEnable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d2404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodGroup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodGroup::*)()>(&::GorillaTag::StaticLodGroup::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d242d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodGroup.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodGroup::*)()>(&::GorillaTag::StaticLodGroup::OnDestroy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d24344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodGroup.SimpleWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodGroup::*)()>(&::GorillaTag::StaticLodGroup::SimpleWork)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d24594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"SimpleWork", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::StaticLodGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::StaticLodGroup::*)()>(&::GorillaTag::StaticLodGroup::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d24cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::StaticLodGroup::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GorillaTag::StaticLodGroup::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GorillaTag::StaticLodGroup::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr float_t& GorillaTag::StaticLodGroup::__cordl_internal_get_collisionEnableDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnableDistance;
}
constexpr float_t const& GorillaTag::StaticLodGroup::__cordl_internal_get_collisionEnableDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnableDistance;
}
constexpr void GorillaTag::StaticLodGroup::__cordl_internal_set_collisionEnableDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionEnableDistance = value;
}
constexpr float_t& GorillaTag::StaticLodGroup::__cordl_internal_get_uiFadeDistanceMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiFadeDistanceMax;
}
constexpr float_t const& GorillaTag::StaticLodGroup::__cordl_internal_get_uiFadeDistanceMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uiFadeDistanceMax;
}
constexpr void GorillaTag::StaticLodGroup::__cordl_internal_set_uiFadeDistanceMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uiFadeDistanceMax = value;
}
constexpr bool& GorillaTag::StaticLodGroup::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GorillaTag::StaticLodGroup::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GorillaTag::StaticLodGroup::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
inline void GorillaTag::StaticLodGroup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::StaticLodGroup::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::StaticLodGroup::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::StaticLodGroup::SimpleWork()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {"SimpleWork", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::StaticLodGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::StaticLodGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::StaticLodGroup* GorillaTag::StaticLodGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::StaticLodGroup*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr  GorillaTag::StaticLodGroup::operator ::GlobalNamespace::IGorillaSimpleBackgroundWorker*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSimpleBackgroundWorker"
constexpr ::GlobalNamespace::IGorillaSimpleBackgroundWorker* GorillaTag::StaticLodGroup::i___GlobalNamespace__IGorillaSimpleBackgroundWorker() noexcept {
return static_cast<::GlobalNamespace::IGorillaSimpleBackgroundWorker*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::StaticLodGroup::StaticLodGroup()   {
}
