#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Entities/RegisteredDynamicEntityKeyword.hpp"
#include "Meta/WitAi/Data/Info/zzzz__WitEntityKeywordInfo_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/WitAi/Data/Entities/zzzz__RegisteredDynamicEntityKeyword_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::*)()>(&::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e9b614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::*)()>(&::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::OnDisable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e9b720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::*)()>(&::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e9b77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::StringW const& Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::__cordl_internal_set_entity(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::Meta::WitAi::Data::Info::WitEntityKeywordInfo& Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::__cordl_internal_get_keyword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyword;
}
constexpr ::Meta::WitAi::Data::Info::WitEntityKeywordInfo const& Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::__cordl_internal_get_keyword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyword;
}
constexpr void Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::__cordl_internal_set_keyword(::Meta::WitAi::Data::Info::WitEntityKeywordInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyword = value;
}
inline void Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword* Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Entities::RegisteredDynamicEntityKeyword::RegisteredDynamicEntityKeyword()   {
}
