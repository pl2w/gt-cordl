#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TeamMemberObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TeamMemberObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::TeamMemberObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::TeamMemberObject::*)(int64_t, ::Modio::API::SchemaDefinitions::UserObject, int64_t, int64_t, ::StringW, int64_t)>(&::Modio::API::SchemaDefinitions::TeamMemberObject::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9fee2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::TeamMemberObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::TeamMemberObject::_ctor(int64_t  id, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  level, int64_t  date_added, ::StringW  position, int64_t  invite_pending)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::TeamMemberObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, user, level, date_added, position, invite_pending);
}
// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Level", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Position", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InvitePending", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::TeamMemberObject::TeamMemberObject(int64_t  Id, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  Level, int64_t  DateAdded, ::StringW  Position, int64_t  InvitePending) noexcept  {
this->Id = Id;
this->User = User;
this->Level = Level;
this->DateAdded = DateAdded;
this->Position = Position;
this->InvitePending = InvitePending;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::TeamMemberObject::TeamMemberObject()   {
}
