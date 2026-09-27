#pragma once
// IWYU pragma private; include "Oculus/Interaction/RigidbodyKinematicLocker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__RigidbodyKinematicLocker_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLocker.get_IsLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::RigidbodyKinematicLocker::*)()>(&::Oculus::Interaction::RigidbodyKinematicLocker::get_IsLocked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa489bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"get_IsLocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLocker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RigidbodyKinematicLocker::*)()>(&::Oculus::Interaction::RigidbodyKinematicLocker::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa489bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLocker.LockKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RigidbodyKinematicLocker::*)()>(&::Oculus::Interaction::RigidbodyKinematicLocker::LockKinematic)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa489c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"LockKinematic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLocker.UnlockKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RigidbodyKinematicLocker::*)()>(&::Oculus::Interaction::RigidbodyKinematicLocker::UnlockKinematic)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa489c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"UnlockKinematic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLocker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::RigidbodyKinematicLocker::*)()>(&::Oculus::Interaction::RigidbodyKinematicLocker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa489d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr int32_t& Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_get__counter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counter;
}
constexpr int32_t const& Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_get__counter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counter;
}
constexpr void Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_set__counter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____counter = value;
}
constexpr bool& Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_get__savedIsKinematicState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedIsKinematicState;
}
constexpr bool const& Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_get__savedIsKinematicState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____savedIsKinematicState;
}
constexpr void Oculus::Interaction::RigidbodyKinematicLocker::__cordl_internal_set__savedIsKinematicState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____savedIsKinematicState = value;
}
inline bool Oculus::Interaction::RigidbodyKinematicLocker::get_IsLocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"get_IsLocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::RigidbodyKinematicLocker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RigidbodyKinematicLocker::LockKinematic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"LockKinematic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RigidbodyKinematicLocker::UnlockKinematic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {"UnlockKinematic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::RigidbodyKinematicLocker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLocker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::RigidbodyKinematicLocker* Oculus::Interaction::RigidbodyKinematicLocker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RigidbodyKinematicLocker*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RigidbodyKinematicLocker::RigidbodyKinematicLocker()   {
}
