#pragma once
// IWYU pragma private; include "Fusion/ILocalPrefabCreated.hpp"
#include "Fusion/zzzz__ILocalPrefabCreated_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
//  Writing Method size for method: ::Fusion::ILocalPrefabCreated.LocalPrefabCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ILocalPrefabCreated::*)()>(&::Fusion::ILocalPrefabCreated::LocalPrefabCreated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ILocalPrefabCreated*>(),
                    {::i2c::class_of<::Fusion::ILocalPrefabCreated*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::ILocalPrefabCreated::LocalPrefabCreated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ILocalPrefabCreated*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::ILocalPrefabCreated::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::ILocalPrefabCreated::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
