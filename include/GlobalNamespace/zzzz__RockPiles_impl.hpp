#pragma once
// IWYU pragma private; include "GlobalNamespace/RockPiles.hpp"
#include "GlobalNamespace/zzzz__RockPiles_RockPile_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RockPiles_def.hpp"
#include "GlobalNamespace/zzzz__RockPiles_RockPile_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RockPiles.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RockPiles::*)(int32_t)>(&::GlobalNamespace::RockPiles::Show)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5623c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RockPiles*>(),
                        {"Show", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RockPiles.ShowRock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RockPiles::*)(int32_t)>(&::GlobalNamespace::RockPiles::ShowRock)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5623d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RockPiles*>(),
                        {"ShowRock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RockPiles._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RockPiles::*)()>(&::GlobalNamespace::RockPiles::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5623e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RockPiles*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::RockPiles_RockPile>& GlobalNamespace::RockPiles::__cordl_internal_get__rocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rocks;
}
constexpr ::ArrayW<::GlobalNamespace::RockPiles_RockPile> const& GlobalNamespace::RockPiles::__cordl_internal_get__rocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rocks;
}
constexpr void GlobalNamespace::RockPiles::__cordl_internal_set__rocks(::ArrayW<::GlobalNamespace::RockPiles_RockPile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rocks = value;
}
inline void GlobalNamespace::RockPiles::Show(int32_t  visiblePercentage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RockPiles*>(),
                        {"Show", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visiblePercentage);
}
inline void GlobalNamespace::RockPiles::ShowRock(int32_t  rockToShow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RockPiles*>(),
                        {"ShowRock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rockToShow);
}
inline void GlobalNamespace::RockPiles::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RockPiles*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RockPiles* GlobalNamespace::RockPiles::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RockPiles*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RockPiles::RockPiles()   {
}
