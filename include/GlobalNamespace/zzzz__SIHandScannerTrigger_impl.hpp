#pragma once
// IWYU pragma private; include "GlobalNamespace/SIHandScannerTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIHandScannerTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "GlobalNamespace/zzzz__SIHandScanner_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIHandScannerTrigger.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScannerTrigger::*)()>(&::GlobalNamespace::SIHandScannerTrigger::Awake)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59debbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIHandScannerTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScannerTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SIHandScannerTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59dec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIHandScannerTrigger.OnPlayerScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScannerTrigger::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIHandScannerTrigger::OnPlayerScanned)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59ded10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"OnPlayerScanned", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIHandScannerTrigger.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScannerTrigger::*)(bool)>(&::GlobalNamespace::SIHandScannerTrigger::Click)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59ded3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIHandScannerTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIHandScannerTrigger::*)()>(&::GlobalNamespace::SIHandScannerTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59dedf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIHandScanner>& GlobalNamespace::SIHandScannerTrigger::__cordl_internal_get_parentScanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentScanner;
}
constexpr ::UnityW<::GlobalNamespace::SIHandScanner> const& GlobalNamespace::SIHandScannerTrigger::__cordl_internal_get_parentScanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentScanner;
}
constexpr void GlobalNamespace::SIHandScannerTrigger::__cordl_internal_set_parentScanner(::UnityW<::GlobalNamespace::SIHandScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentScanner = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SIHandScannerTrigger::__cordl_internal_get_onHandScanned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHandScanned;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SIHandScannerTrigger::__cordl_internal_get_onHandScanned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onHandScanned;
}
constexpr void GlobalNamespace::SIHandScannerTrigger::__cordl_internal_set_onHandScanned(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onHandScanned = value;
}
inline void GlobalNamespace::SIHandScannerTrigger::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIHandScannerTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::SIHandScannerTrigger::OnPlayerScanned(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"OnPlayerScanned", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SIHandScannerTrigger::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::SIHandScannerTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIHandScannerTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIHandScannerTrigger* GlobalNamespace::SIHandScannerTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIHandScannerTrigger*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::SIHandScannerTrigger::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::SIHandScannerTrigger::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIHandScannerTrigger::SIHandScannerTrigger()   {
}
