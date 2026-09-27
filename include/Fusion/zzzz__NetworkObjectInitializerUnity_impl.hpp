#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectInitializerUnity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectInitializerUnity_def.hpp"
#include "Fusion/zzzz__INetworkObjectInitializer_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectInitializerUnity.InitializeNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectInitializerUnity::*)(::Fusion::NetworkObject*)>(&::Fusion::NetworkObjectInitializerUnity::InitializeNetworkState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fc9628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInitializerUnity*>(),
                        {"InitializeNetworkState", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectInitializerUnity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectInitializerUnity::*)()>(&::Fusion::NetworkObjectInitializerUnity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fc9698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInitializerUnity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkObjectInitializerUnity::InitializeNetworkState(::Fusion::NetworkObject*  networkObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInitializerUnity*>(),
                        {"InitializeNetworkState", {}, {::i2c::type_of<::Fusion::NetworkObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, networkObject);
}
inline void Fusion::NetworkObjectInitializerUnity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectInitializerUnity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectInitializerUnity* Fusion::NetworkObjectInitializerUnity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectInitializerUnity*>());
}
/// @brief Convert operator to "::Fusion::INetworkObjectInitializer"
constexpr  Fusion::NetworkObjectInitializerUnity::operator ::Fusion::INetworkObjectInitializer*() noexcept {
return static_cast<::Fusion::INetworkObjectInitializer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkObjectInitializer"
constexpr ::Fusion::INetworkObjectInitializer* Fusion::NetworkObjectInitializerUnity::i___Fusion__INetworkObjectInitializer() noexcept {
return static_cast<::Fusion::INetworkObjectInitializer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectInitializerUnity::NetworkObjectInitializerUnity()   {
}
