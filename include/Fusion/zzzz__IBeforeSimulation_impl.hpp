#pragma once
// IWYU pragma private; include "Fusion/IBeforeSimulation.hpp"
#include "Fusion/zzzz__IBeforeSimulation_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
//  Writing Method size for method: ::Fusion::IBeforeSimulation.BeforeSimulation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::IBeforeSimulation::*)(int32_t)>(&::Fusion::IBeforeSimulation::BeforeSimulation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IBeforeSimulation*>(),
                    {::i2c::class_of<::Fusion::IBeforeSimulation*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::IBeforeSimulation::BeforeSimulation(int32_t  forwardTickCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IBeforeSimulation*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forwardTickCount);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::IBeforeSimulation::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::IBeforeSimulation::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
