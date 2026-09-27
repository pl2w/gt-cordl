#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityPermissionStatement.hpp"
#include "PlayFab/ProfilesModels/zzzz__EffectType_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ProfilesModels/zzzz__EntityPermissionStatement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ProfilesModels::EntityPermissionStatement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ProfilesModels::EntityPermissionStatement::*)()>(&::PlayFab::ProfilesModels::EntityPermissionStatement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityPermissionStatement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Action;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Action;
}
constexpr void PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_set_Action(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Action = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Comment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comment;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Comment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Comment;
}
constexpr void PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_set_Comment(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Comment = value;
}
constexpr ::System::Object*& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Condition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Condition;
}
constexpr ::System::Object* const& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Condition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Condition;
}
constexpr void PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_set_Condition(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Condition = value;
}
constexpr ::PlayFab::ProfilesModels::EffectType& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Effect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effect;
}
constexpr ::PlayFab::ProfilesModels::EffectType const& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Effect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effect;
}
constexpr void PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_set_Effect(::PlayFab::ProfilesModels::EffectType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Effect = value;
}
constexpr ::System::Object*& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Principal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Principal;
}
constexpr ::System::Object* const& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Principal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Principal;
}
constexpr void PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_set_Principal(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Principal = value;
}
constexpr ::StringW& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Resource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Resource;
}
constexpr ::StringW const& PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_get_Resource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Resource;
}
constexpr void PlayFab::ProfilesModels::EntityPermissionStatement::__cordl_internal_set_Resource(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Resource = value;
}
inline void PlayFab::ProfilesModels::EntityPermissionStatement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ProfilesModels::EntityPermissionStatement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ProfilesModels::EntityPermissionStatement* PlayFab::ProfilesModels::EntityPermissionStatement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ProfilesModels::EntityPermissionStatement*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::EntityPermissionStatement::EntityPermissionStatement()   {
}
