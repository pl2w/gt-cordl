#pragma once
// IWYU pragma private; include "GlobalNamespace/move.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__move_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::move.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::move::*)()>(&::GlobalNamespace::move::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b23fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::move*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::move.BounceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::move::*)(::StringW)>(&::GlobalNamespace::move::BounceState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b24080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::move*>(),
                        {"BounceState", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::move._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::move::*)()>(&::GlobalNamespace::move::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b240e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::move*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::move::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr int32_t const& GlobalNamespace::move::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::move::__cordl_internal_set_direction(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr int32_t& GlobalNamespace::move::__cordl_internal_get_cnt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cnt;
}
constexpr int32_t const& GlobalNamespace::move::__cordl_internal_get_cnt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cnt;
}
constexpr void GlobalNamespace::move::__cordl_internal_set_cnt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cnt = value;
}
constexpr bool& GlobalNamespace::move::__cordl_internal_get_bounce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounce;
}
constexpr bool const& GlobalNamespace::move::__cordl_internal_get_bounce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bounce;
}
constexpr void GlobalNamespace::move::__cordl_internal_set_bounce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bounce = value;
}
inline void GlobalNamespace::move::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::move*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::move::BounceState(::StringW  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::move*>(),
                        {"BounceState", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::move::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::move*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::move* GlobalNamespace::move::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::move*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::move::move()   {
}
