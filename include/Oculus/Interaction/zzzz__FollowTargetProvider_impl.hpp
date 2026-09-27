#pragma once
// IWYU pragma private; include "Oculus/Interaction/FollowTargetProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__FollowTargetProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FollowTargetProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTargetProvider::*)()>(&::Oculus::Interaction::FollowTargetProvider::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa473948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTargetProvider*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTargetProvider.CreateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::FollowTargetProvider::*)()>(&::Oculus::Interaction::FollowTargetProvider::CreateMovement)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa47396c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTargetProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTargetProvider::*)()>(&::Oculus::Interaction::FollowTargetProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa473a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::FollowTargetProvider::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr float_t const& Oculus::Interaction::FollowTargetProvider::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void Oculus::Interaction::FollowTargetProvider::__cordl_internal_set__speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::FollowTargetProvider::__cordl_internal_get__space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::FollowTargetProvider::__cordl_internal_get__space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr void Oculus::Interaction::FollowTargetProvider::__cordl_internal_set__space(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____space = value;
}
inline void Oculus::Interaction::FollowTargetProvider::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTargetProvider*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::FollowTargetProvider::CreateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void Oculus::Interaction::FollowTargetProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FollowTargetProvider* Oculus::Interaction::FollowTargetProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FollowTargetProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr  Oculus::Interaction::FollowTargetProvider::operator ::Oculus::Interaction::IMovementProvider*() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::FollowTargetProvider::i___Oculus__Interaction__IMovementProvider() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FollowTargetProvider::FollowTargetProvider()   {
}
