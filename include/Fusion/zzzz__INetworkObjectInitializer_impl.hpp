#pragma once
// IWYU pragma private; include "Fusion/INetworkObjectInitializer.hpp"
#include "Fusion/zzzz__INetworkObjectInitializer_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkObjectInitializer.InitializeNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkObjectInitializer::*)(::Fusion::NetworkObject*)>(&::Fusion::INetworkObjectInitializer::InitializeNetworkState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkObjectInitializer*>(),
                    {::i2c::class_of<::Fusion::INetworkObjectInitializer*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Fusion::INetworkObjectInitializer::InitializeNetworkState(::Fusion::NetworkObject*  networkObject)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkObjectInitializer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject);
}
