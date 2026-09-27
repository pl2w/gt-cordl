#pragma once
// IWYU pragma private; include "Fusion/IInterestExit.hpp"
#include "Fusion/zzzz__IInterestExit_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
//  Writing Method size for method: ::Fusion::IInterestExit.InterestExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::IInterestExit::*)(::Fusion::PlayerRef)>(&::Fusion::IInterestExit::InterestExit)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IInterestExit*>(),
                    {::i2c::class_of<::Fusion::IInterestExit*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::IInterestExit::InterestExit(::Fusion::PlayerRef  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IInterestExit*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::IInterestExit::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::IInterestExit::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
