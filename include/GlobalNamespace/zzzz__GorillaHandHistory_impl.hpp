#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHandHistory.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHandHistory_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHandHistory.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandHistory::*)()>(&::GlobalNamespace::GorillaHandHistory::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x579d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandHistory*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandHistory.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandHistory::*)()>(&::GlobalNamespace::GorillaHandHistory::FixedUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x579d90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandHistory*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHandHistory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHandHistory::*)()>(&::GlobalNamespace::GorillaHandHistory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandHistory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaHandHistory::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaHandHistory::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void GlobalNamespace::GorillaHandHistory::__cordl_internal_set_direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaHandHistory::__cordl_internal_get_lastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaHandHistory::__cordl_internal_get_lastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosition;
}
constexpr void GlobalNamespace::GorillaHandHistory::__cordl_internal_set_lastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaHandHistory::__cordl_internal_get_lastLastPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLastPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaHandHistory::__cordl_internal_get_lastLastPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLastPosition;
}
constexpr void GlobalNamespace::GorillaHandHistory::__cordl_internal_set_lastLastPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLastPosition = value;
}
inline void GlobalNamespace::GorillaHandHistory::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandHistory*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandHistory::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandHistory*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHandHistory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHandHistory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHandHistory* GlobalNamespace::GorillaHandHistory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHandHistory*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHandHistory::GorillaHandHistory()   {
}
