#pragma once
// IWYU pragma private; include "GlobalNamespace/ResettableUseCounter.hpp"
#include "GlobalNamespace/zzzz__ResettableUseCounter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResettableUseCounter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResettableUseCounter::*)(int32_t, int32_t, ::System::Action_1<bool>*)>(&::GlobalNamespace::ResettableUseCounter::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59d99d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResettableUseCounter.get_IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ResettableUseCounter::*)()>(&::GlobalNamespace::ResettableUseCounter::get_IsReady)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59d99e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {"get_IsReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResettableUseCounter.TryUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ResettableUseCounter::*)()>(&::GlobalNamespace::ResettableUseCounter::TryUse)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59d99f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {"TryUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResettableUseCounter.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ResettableUseCounter::*)()>(&::GlobalNamespace::ResettableUseCounter::Reset)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59d9ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ResettableUseCounter::_ctor(int32_t  maxRegularUses, int32_t  maxSuperchargeUses, ::System::Action_1<bool>*  onReadyChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxRegularUses, maxSuperchargeUses, onReadyChanged);
}
inline bool GlobalNamespace::ResettableUseCounter::get_IsReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {"get_IsReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::ResettableUseCounter::TryUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {"TryUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::ResettableUseCounter::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ResettableUseCounter>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "usesRemaining", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxRegularUses", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxSuperchargeUses", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onReadyChanged", ty: "::System::Action_1<bool>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ResettableUseCounter::ResettableUseCounter(int32_t  usesRemaining, int32_t  maxRegularUses, int32_t  maxSuperchargeUses, ::System::Action_1<bool>*  onReadyChanged) noexcept  {
this->usesRemaining = usesRemaining;
this->maxRegularUses = maxRegularUses;
this->maxSuperchargeUses = maxSuperchargeUses;
this->onReadyChanged = onReadyChanged;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResettableUseCounter::ResettableUseCounter()   {
}
