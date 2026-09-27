#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/LineItemsObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__LineItemsObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::LineItemsObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::LineItemsObject::*)(int64_t, int64_t, ::StringW, ::StringW, ::StringW, int64_t, ::StringW)>(&::Modio::API::SchemaDefinitions::LineItemsObject::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9fed108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::LineItemsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::LineItemsObject::_ctor(int64_t  game_id, int64_t  buyer_id, ::StringW  game_name, ::StringW  buyer_name, ::StringW  token_name, int64_t  token_pack_id, ::StringW  token_pack_name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::LineItemsObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, game_id, buyer_id, game_name, buyer_name, token_name, token_pack_id, token_pack_name);
}
// Ctor Parameters [CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BuyerId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BuyerName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenPackId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TokenPackName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::LineItemsObject::LineItemsObject(int64_t  GameId, int64_t  BuyerId, ::StringW  GameName, ::StringW  BuyerName, ::StringW  TokenName, int64_t  TokenPackId, ::StringW  TokenPackName) noexcept  {
this->GameId = GameId;
this->BuyerId = BuyerId;
this->GameName = GameName;
this->BuyerName = BuyerName;
this->TokenName = TokenName;
this->TokenPackId = TokenPackId;
this->TokenPackName = TokenPackName;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::LineItemsObject::LineItemsObject()   {
}
