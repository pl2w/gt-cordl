#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/WitDynamicEntity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntity_def.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__WitDynamicEntities_def.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseArray_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntity::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntity::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e9bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::WitDynamicEntity::*)(::StringW, ::ArrayW<::StringW>)>(&::Meta::WitAi::Data::Entities::WitDynamicEntity::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x9e9bb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntity.get_AsJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Json::WitResponseArray* (::Meta::WitAi::Data::Entities::WitDynamicEntity::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntity::get_AsJson)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9e9bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {"get_AsJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::WitDynamicEntity.GetDynamicEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (::Meta::WitAi::Data::Entities::WitDynamicEntity::*)()>(&::Meta::WitAi::Data::Entities::WitDynamicEntity::GetDynamicEntities)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e9be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Entities::WitDynamicEntity::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::StringW const& Meta::WitAi::Data::Entities::WitDynamicEntity::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void Meta::WitAi::Data::Entities::WitDynamicEntity::__cordl_internal_set_entity(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*& Meta::WitAi::Data::Entities::WitDynamicEntity::__cordl_internal_get_keywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>* const& Meta::WitAi::Data::Entities::WitDynamicEntity::__cordl_internal_get_keywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keywords;
}
constexpr void Meta::WitAi::Data::Entities::WitDynamicEntity::__cordl_internal_set_keywords(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Info::WitEntityKeywordInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keywords = value;
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::WitDynamicEntity::_ctor(::StringW  entity, /* [ParamArray] */ ::ArrayW<::StringW>  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, keywords);
}
inline ::Meta::WitAi::Json::WitResponseArray* Meta::WitAi::Data::Entities::WitDynamicEntity::get_AsJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {"get_AsJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Json::WitResponseArray*>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntities* Meta::WitAi::Data::Entities::WitDynamicEntity::GetDynamicEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(),
                        {"GetDynamicEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitDynamicEntities*>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntity* Meta::WitAi::Data::Entities::WitDynamicEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntity*>());
}
inline ::Meta::WitAi::Data::Entities::WitDynamicEntity* Meta::WitAi::Data::Entities::WitDynamicEntity::New_ctor(::StringW  entity, /* [ParamArray] */ ::ArrayW<::StringW>  keywords)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::WitDynamicEntity*>(entity, keywords));
}
/// @brief Convert operator to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr  Meta::WitAi::Data::Entities::WitDynamicEntity::operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::WitAi::Interfaces::IDynamicEntitiesProvider"
constexpr ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* Meta::WitAi::Data::Entities::WitDynamicEntity::i___Meta__WitAi__Interfaces__IDynamicEntitiesProvider() noexcept {
return static_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::WitDynamicEntity::WitDynamicEntity()   {
}
