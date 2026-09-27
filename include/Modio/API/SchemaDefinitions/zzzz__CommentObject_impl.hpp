#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/CommentObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__CommentObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::CommentObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::CommentObject::*)(int64_t, int64_t, int64_t, int64_t, ::Modio::API::SchemaDefinitions::UserObject, int64_t, int64_t, ::StringW, int64_t, int64_t, ::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::CommentObject::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fec528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::CommentObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::CommentObject::_ctor(int64_t  id, int64_t  game_id, int64_t  mod_id, int64_t  resource_id, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, int64_t  reply_id, ::StringW  thread_position, int64_t  karma, int64_t  karma_guest, ::StringW  content, int64_t  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::CommentObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, game_id, mod_id, resource_id, user, date_added, reply_id, thread_position, karma, karma_guest, content, options);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ResourceId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReplyId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ThreadPosition", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Karma", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "KarmaGuest", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Content", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Options", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::CommentObject::CommentObject(int64_t  Id, int64_t  GameId, int64_t  ModId, int64_t  ResourceId, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, int64_t  ReplyId, ::StringW  ThreadPosition, int64_t  Karma, int64_t  KarmaGuest, ::StringW  Content, int64_t  Options) noexcept  {
this->Id = Id;
this->GameId = GameId;
this->ModId = ModId;
this->ResourceId = ResourceId;
this->User = User;
this->DateAdded = DateAdded;
this->ReplyId = ReplyId;
this->ThreadPosition = ThreadPosition;
this->Karma = Karma;
this->KarmaGuest = KarmaGuest;
this->Content = Content;
this->Options = Options;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::CommentObject::CommentObject()   {
}
