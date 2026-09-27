#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitDynamicEntitiesData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntitiesData_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntitiesData.GetDynamicEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (::Meta::WitAi::Data::Entities::WitDynamicEntitiesData::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntitiesData::GetDynamicEntities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9bad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntitiesData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntitiesData::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntitiesData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9bad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities*& Meta::WitAi::Data::Entities::WitDynamicEntitiesData::__cordl_internal_get_entities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntities* const& Meta::WitAi::Data::Entities::WitDynamicEntitiesData::__cordl_internal_get_entities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entities;
}
constexpr void Meta::WitAi::Data::Entities::WitDynamicEntitiesData::__cordl_internal_set_entities(::Meta::WitAi::Data::Entities::WitDynamicEntities*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entities = value;
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::WitDynamicEntitiesData::GetDynamicEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntitiesData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntitiesData* Meta::WitAi::Data::Entities::WitDynamicEntitiesData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntitiesData*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr  Meta::WitAi::Data::Entities::WitDynamicEntitiesData::operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* Meta::WitAi::Data::Entities::WitDynamicEntitiesData::i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntitiesData::WitDynamicEntitiesData()   {
}
