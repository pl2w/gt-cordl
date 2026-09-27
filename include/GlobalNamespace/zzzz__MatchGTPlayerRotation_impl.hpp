#pragma once
// IWYU pragma private; include "GlobalNamespace/MatchGTPlayerRotation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MatchGTPlayerRotation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MatchGTPlayerRotation.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchGTPlayerRotation::*)()>(&::GlobalNamespace::MatchGTPlayerRotation::LateUpdate)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x567bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchGTPlayerRotation*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MatchGTPlayerRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MatchGTPlayerRotation::*)()>(&::GlobalNamespace::MatchGTPlayerRotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x567c0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchGTPlayerRotation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MatchGTPlayerRotation::__cordl_internal_get_matchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchPosition;
}
constexpr bool const& GlobalNamespace::MatchGTPlayerRotation::__cordl_internal_get_matchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchPosition;
}
constexpr void GlobalNamespace::MatchGTPlayerRotation::__cordl_internal_set_matchPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchPosition = value;
}
constexpr bool& GlobalNamespace::MatchGTPlayerRotation::__cordl_internal_get_matchRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchRotation;
}
constexpr bool const& GlobalNamespace::MatchGTPlayerRotation::__cordl_internal_get_matchRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchRotation;
}
constexpr void GlobalNamespace::MatchGTPlayerRotation::__cordl_internal_set_matchRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchRotation = value;
}
inline void GlobalNamespace::MatchGTPlayerRotation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchGTPlayerRotation*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MatchGTPlayerRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MatchGTPlayerRotation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MatchGTPlayerRotation* GlobalNamespace::MatchGTPlayerRotation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MatchGTPlayerRotation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MatchGTPlayerRotation::MatchGTPlayerRotation()   {
}
