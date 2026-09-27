#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionNetworkObjectStatistics.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionNetworkObjectStatistics_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatistics.ToggleMonitoring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatistics::*)(bool)>(&::Fusion::Statistics::FusionNetworkObjectStatistics::ToggleMonitoring)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x60f7e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {"ToggleMonitoring", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatistics.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatistics::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatistics::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatistics.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatistics::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatistics::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f8154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionNetworkObjectStatistics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionNetworkObjectStatistics::*)()>(&::Fusion::Statistics::FusionNetworkObjectStatistics::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f815c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Fusion::NetworkObject>& Fusion::Statistics::FusionNetworkObjectStatistics::__cordl_internal_get_NetworkObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkObject;
}
constexpr ::UnityW<::Fusion::NetworkObject> const& Fusion::Statistics::FusionNetworkObjectStatistics::__cordl_internal_get_NetworkObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkObject;
}
constexpr void Fusion::Statistics::FusionNetworkObjectStatistics::__cordl_internal_set_NetworkObject(::UnityW<::Fusion::NetworkObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkObject = value;
}
inline void Fusion::Statistics::FusionNetworkObjectStatistics::ToggleMonitoring(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {"ToggleMonitoring", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionNetworkObjectStatistics::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatistics::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionNetworkObjectStatistics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionNetworkObjectStatistics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionNetworkObjectStatistics* Fusion::Statistics::FusionNetworkObjectStatistics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionNetworkObjectStatistics*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionNetworkObjectStatistics::FusionNetworkObjectStatistics()   {
}
