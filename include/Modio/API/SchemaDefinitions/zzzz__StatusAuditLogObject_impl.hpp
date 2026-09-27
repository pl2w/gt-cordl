#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/StatusAuditLogObject.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_impl.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__StatusAuditLogObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
//  Writing Method size for method: ::Modio::API::SchemaDefinitions::StatusAuditLogObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SchemaDefinitions::StatusAuditLogObject::*)(int64_t, int64_t, ::Modio::API::SchemaDefinitions::UserObject, int64_t, ::StringW)>(&::Modio::API::SchemaDefinitions::StatusAuditLogObject::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fee27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::StatusAuditLogObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::SchemaDefinitions::StatusAuditLogObject::_ctor(int64_t  status_new, int64_t  status_old, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SchemaDefinitions::StatusAuditLogObject>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Modio::API::SchemaDefinitions::UserObject>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, status_new, status_old, user, date_added, reason);
}
// Ctor Parameters [CppParam { name: "StatusNew", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StatusOld", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reason", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::API::SchemaDefinitions::StatusAuditLogObject::StatusAuditLogObject(int64_t  StatusNew, int64_t  StatusOld, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, ::StringW  Reason) noexcept  {
this->StatusNew = StatusNew;
this->StatusOld = StatusOld;
this->User = User;
this->DateAdded = DateAdded;
this->Reason = Reason;
}
// Ctor Parameters []
constexpr ::Modio::API::SchemaDefinitions::StatusAuditLogObject::StatusAuditLogObject()   {
}
