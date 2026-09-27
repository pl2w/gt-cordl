#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/ILckCosmeticsManager.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticsManager_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticDependant_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::ILckCosmeticsManager.RegisterDependant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::ILckCosmeticsManager::*)(::Liv::Lck::Cosmetics::ILckCosmeticDependant*)>(&::Liv::Lck::Cosmetics::ILckCosmeticsManager::RegisterDependant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::ILckCosmeticsManager.UnregisterDependant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::ILckCosmeticsManager::*)(::Liv::Lck::Cosmetics::ILckCosmeticDependant*)>(&::Liv::Lck::Cosmetics::ILckCosmeticsManager::UnregisterDependant)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Cosmetics::ILckCosmeticsManager::RegisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependant);
}
inline void Liv::Lck::Cosmetics::ILckCosmeticsManager::UnregisterDependant(::Liv::Lck::Cosmetics::ILckCosmeticDependant*  dependant)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticsManager*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dependant);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Cosmetics::ILckCosmeticsManager::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Cosmetics::ILckCosmeticsManager::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
