#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveRelativeToTargetProvider.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MoveRelativeToTargetProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTargetProvider.CreateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::GlobalNamespace::MoveRelativeToTargetProvider::*)()>(&::GlobalNamespace::MoveRelativeToTargetProvider::CreateMovement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa42768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTargetProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveRelativeToTargetProvider::*)()>(&::GlobalNamespace::MoveRelativeToTargetProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa427778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Interaction::IMovement* GlobalNamespace::MoveRelativeToTargetProvider::CreateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void GlobalNamespace::MoveRelativeToTargetProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MoveRelativeToTargetProvider* GlobalNamespace::MoveRelativeToTargetProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MoveRelativeToTargetProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr  GlobalNamespace::MoveRelativeToTargetProvider::operator ::Oculus::Interaction::IMovementProvider*() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* GlobalNamespace::MoveRelativeToTargetProvider::i___Oculus__Interaction__IMovementProvider() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveRelativeToTargetProvider::MoveRelativeToTargetProvider()   {
}
