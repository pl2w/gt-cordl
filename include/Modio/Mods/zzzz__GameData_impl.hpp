#pragma once
// IWYU pragma private; include "Modio/Mods/GameData.hpp"
#include "Modio/Mods/zzzz__GameTagCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__GameData_def.hpp"
//  Writing Method size for method: ::Modio::Mods::GameData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::GameData::*)()>(&::Modio::Mods::GameData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa026914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Modio::Mods::GameTagCategory*>& Modio::Mods::GameData::__cordl_internal_get_Categories()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Categories;
}
constexpr ::ArrayW<::Modio::Mods::GameTagCategory*> const& Modio::Mods::GameData::__cordl_internal_get_Categories() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Categories;
}
constexpr void Modio::Mods::GameData::__cordl_internal_set_Categories(::ArrayW<::Modio::Mods::GameTagCategory*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Categories = value;
}
inline void Modio::Mods::GameData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::GameData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Mods::GameData* Modio::Mods::GameData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::GameData*>());
}
// Ctor Parameters []
constexpr ::Modio::Mods::GameData::GameData()   {
}
