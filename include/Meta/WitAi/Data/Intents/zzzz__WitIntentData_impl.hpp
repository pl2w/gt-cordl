#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/Intents/WitIntentData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Data/Intents/zzzz__WitIntentData_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Data::Intents::WitIntentData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Data::Intents::WitIntentData::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::Intents::WitIntentData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e9ac40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Intents::WitIntentData*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Data::Intents::WitIntentData.FromIntentWitResponseNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Data::Intents::WitIntentData* (::Meta::WitAi::Data::Intents::WitIntentData::*)(::Meta::WitAi::Json::WitResponseNode*)>(&::Meta::WitAi::Data::Intents::WitIntentData::FromIntentWitResponseNode)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e9ac6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Intents::WitIntentData*>(),
                        {"FromIntentWitResponseNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr ::StringW& Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr float_t& Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_get_confidence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidence;
}
constexpr float_t const& Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_get_confidence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___confidence;
}
constexpr void Meta::WitAi::Data::Intents::WitIntentData::__cordl_internal_set_confidence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___confidence = value;
}
inline void Meta::WitAi::Data::Intents::WitIntentData::_ctor(::Meta::WitAi::Json::WitResponseNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Intents::WitIntentData*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::Meta::WitAi::Data::Intents::WitIntentData* Meta::WitAi::Data::Intents::WitIntentData::FromIntentWitResponseNode(::Meta::WitAi::Json::WitResponseNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Data::Intents::WitIntentData*>(),
                        {"FromIntentWitResponseNode", {}, {::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Data::Intents::WitIntentData*>(this, ___internal_method, node);
}
inline ::Meta::WitAi::Data::Intents::WitIntentData* Meta::WitAi::Data::Intents::WitIntentData::New_ctor(::Meta::WitAi::Json::WitResponseNode*  node)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Data::Intents::WitIntentData*>(node));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Data::Intents::WitIntentData::WitIntentData()   {
}
