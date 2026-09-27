#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/SeasonSO.hpp"
#include "GlobalNamespace/zzzz__GTDateTimeSerializable_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__SeasonSO_def.hpp"
//  Writing Method size for method: ::GorillaTag::CosmeticSystem::SeasonSO._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::CosmeticSystem::SeasonSO::*)()>(&::GorillaTag::CosmeticSystem::SeasonSO::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5d4caec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::SeasonSO*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTDateTimeSerializable& GorillaTag::CosmeticSystem::SeasonSO::__cordl_internal_get_releaseDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDate;
}
constexpr ::GlobalNamespace::GTDateTimeSerializable const& GorillaTag::CosmeticSystem::SeasonSO::__cordl_internal_get_releaseDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseDate;
}
constexpr void GorillaTag::CosmeticSystem::SeasonSO::__cordl_internal_set_releaseDate(::GlobalNamespace::GTDateTimeSerializable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseDate = value;
}
constexpr ::StringW& GorillaTag::CosmeticSystem::SeasonSO::__cordl_internal_get_seasonName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonName;
}
constexpr ::StringW const& GorillaTag::CosmeticSystem::SeasonSO::__cordl_internal_get_seasonName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seasonName;
}
constexpr void GorillaTag::CosmeticSystem::SeasonSO::__cordl_internal_set_seasonName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seasonName = value;
}
inline void GorillaTag::CosmeticSystem::SeasonSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::CosmeticSystem::SeasonSO*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::CosmeticSystem::SeasonSO* GorillaTag::CosmeticSystem::SeasonSO::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::CosmeticSystem::SeasonSO*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::CosmeticSystem::SeasonSO::SeasonSO()   {
}
