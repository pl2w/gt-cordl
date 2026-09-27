#pragma once
// IWYU pragma private; include "Fusion/ISpawned.hpp"
#include "Fusion/zzzz__ISpawned_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
//  Writing Method size for method: ::Fusion::ISpawned.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ISpawned::*)()>(&::Fusion::ISpawned::Spawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ISpawned*>(),
                    {::i2c::class_of<::Fusion::ISpawned*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::ISpawned::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ISpawned*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::ISpawned::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::ISpawned::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
