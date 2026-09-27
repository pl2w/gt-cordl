#pragma once
// IWYU pragma private; include "Fusion/IBeforeUpdateRemotePrefabs.hpp"
#include "Fusion/zzzz__IBeforeUpdateRemotePrefabs_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
//  Writing Method size for method: ::Fusion::IBeforeUpdateRemotePrefabs.BeforeUpdateRemotePrefabs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::IBeforeUpdateRemotePrefabs::*)()>(&::Fusion::IBeforeUpdateRemotePrefabs::BeforeUpdateRemotePrefabs)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::IBeforeUpdateRemotePrefabs*>(),
                    {::i2c::class_of<::Fusion::IBeforeUpdateRemotePrefabs*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::IBeforeUpdateRemotePrefabs::BeforeUpdateRemotePrefabs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::IBeforeUpdateRemotePrefabs*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::IBeforeUpdateRemotePrefabs::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::IBeforeUpdateRemotePrefabs::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
