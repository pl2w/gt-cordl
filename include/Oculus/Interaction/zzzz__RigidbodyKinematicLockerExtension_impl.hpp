#pragma once
// IWYU pragma private; include "Oculus/Interaction/RigidbodyKinematicLockerExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__RigidbodyKinematicLockerExtension_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLockerExtension.IsLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::RigidbodyKinematicLockerExtension::IsLocked)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa489d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLockerExtension*>(),
                        {"IsLocked", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLockerExtension.LockKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::RigidbodyKinematicLockerExtension::LockKinematic)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa484a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLockerExtension*>(),
                        {"LockKinematic", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::RigidbodyKinematicLockerExtension.UnlockKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::RigidbodyKinematicLockerExtension::UnlockKinematic)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa484aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLockerExtension*>(),
                        {"UnlockKinematic", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::RigidbodyKinematicLockerExtension::IsLocked(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLockerExtension*>(),
                        {"IsLocked", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::RigidbodyKinematicLockerExtension::LockKinematic(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLockerExtension*>(),
                        {"LockKinematic", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::RigidbodyKinematicLockerExtension::UnlockKinematic(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RigidbodyKinematicLockerExtension*>(),
                        {"UnlockKinematic", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigidbody);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::RigidbodyKinematicLockerExtension::RigidbodyKinematicLockerExtension()   {
}
