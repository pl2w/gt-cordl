#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/ILckCosmeticDependantPlayerIdSupplier.hpp"
#include "Liv/Lck/Cosmetics/zzzz__ILckCosmeticDependantPlayerIdSupplier_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__PlayerIdUpdatedEvent_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier.add_PlayerIdUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::*)(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*)>(&::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::add_PlayerIdUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier.remove_PlayerIdUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::*)(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*)>(&::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::remove_PlayerIdUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier.GetPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::*)()>(&::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::GetPlayerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier.UpdatePlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::*)()>(&::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::UpdatePlayerId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(),
                    {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::add_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::remove_PlayerIdUpdated(::Liv::Lck::Cosmetics::PlayerIdUpdatedEvent*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::GetPlayerId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier::UpdatePlayerId()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Cosmetics::ILckCosmeticDependantPlayerIdSupplier*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
