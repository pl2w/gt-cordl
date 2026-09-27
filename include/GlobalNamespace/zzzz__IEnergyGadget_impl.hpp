#pragma once
// IWYU pragma private; include "GlobalNamespace/IEnergyGadget.hpp"
#include "GlobalNamespace/zzzz__IEnergyGadget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IEnergyGadget.get_UsesEnergy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IEnergyGadget::*)()>(&::GlobalNamespace::IEnergyGadget::get_UsesEnergy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IEnergyGadget.get_IsFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IEnergyGadget::*)()>(&::GlobalNamespace::IEnergyGadget::get_IsFull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IEnergyGadget.UpdateRecharge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IEnergyGadget::*)(float_t)>(&::GlobalNamespace::IEnergyGadget::UpdateRecharge)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(),
                    {::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(), 2}
                ));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IEnergyGadget::get_UsesEnergy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::IEnergyGadget::get_IsFull()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IEnergyGadget::UpdateRecharge(float_t  dt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IEnergyGadget*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
