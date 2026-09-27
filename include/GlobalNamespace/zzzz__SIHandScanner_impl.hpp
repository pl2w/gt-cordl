#pragma once
// IWYU pragma private; include "GlobalNamespace/SIHandScanner.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIHandScanner_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIHandScanner.HandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScanner::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIHandScanner::HandScanned)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59deaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScanner*>(),
                        {"HandScanned", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIHandScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScanner::*)()>(&::GlobalNamespace::SIHandScanner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59debb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScanner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::SIHandScanner::__cordl_internal_get_onHandScanned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHandScanned;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::SIHandScanner::__cordl_internal_get_onHandScanned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHandScanned;
}
constexpr void GlobalNamespace::SIHandScanner::__cordl_internal_set_onHandScanned(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHandScanned = value;
}
inline void GlobalNamespace::SIHandScanner::HandScanned(::GlobalNamespace::SIPlayer*  scannedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScanner*>(),
                        {"HandScanned", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scannedPlayer);
}
inline void GlobalNamespace::SIHandScanner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScanner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIHandScanner* GlobalNamespace::SIHandScanner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIHandScanner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIHandScanner::SIHandScanner()   {
}
