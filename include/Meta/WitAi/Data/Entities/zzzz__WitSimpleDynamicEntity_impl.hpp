#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitSimpleDynamicEntity.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitSimpleDynamicEntity_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity.GetDynamicEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::*)()>(&::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::GetDynamicEntities)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e9c280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::*)()>(&::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9c380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::__cordl_internal_get_entityName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityName;
}
constexpr ::StringW const& Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::__cordl_internal_get_entityName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityName;
}
constexpr void Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::__cordl_internal_set_entityName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityName = value;
}
constexpr ::ArrayW<::StringW>& Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::__cordl_internal_get_keywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr ::ArrayW<::StringW> const& Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::__cordl_internal_get_keywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr void Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::__cordl_internal_set_keywords(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keywords = value;
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::GetDynamicEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity* Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity*>());
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr  Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitSimpleDynamicEntity::WitSimpleDynamicEntity()   {
}
