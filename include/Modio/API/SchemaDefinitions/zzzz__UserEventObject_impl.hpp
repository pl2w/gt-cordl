#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserEventObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserEventObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::UserEventObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::UserEventObject::*)(int64_t, int64_t, int64_t, int64_t, int64_t, ::StringW)>(&::Modio::API::SchemaDefinitions::UserEventObject::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fee82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserEventObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::UserEventObject::_ctor(int64_t  id, int64_t  game_id, int64_t  mod_id, int64_t  user_id, int64_t  date_added, ::StringW  event_type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::UserEventObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, game_id, mod_id, user_id, date_added, event_type);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UserId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EventType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::UserEventObject::UserEventObject(int64_t  Id, int64_t  GameId, int64_t  ModId, int64_t  UserId, int64_t  DateAdded, ::StringW  EventType) noexcept  {
this->Id = Id;
this->GameId = GameId;
this->ModId = ModId;
this->UserId = UserId;
this->DateAdded = DateAdded;
this->EventType = EventType;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::UserEventObject::UserEventObject()   {
}
