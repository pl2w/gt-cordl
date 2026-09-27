#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LogStatement.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LogStatement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LogStatement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LogStatement::*)()>(&::PlayFab::ClientModels::LogStatement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LogStatement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& PlayFab::ClientModels::LogStatement::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::System::Object* const& PlayFab::ClientModels::LogStatement::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void PlayFab::ClientModels::LogStatement::__cordl_internal_set_Data(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
constexpr ::StringW& PlayFab::ClientModels::LogStatement::__cordl_internal_get_Level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr ::StringW const& PlayFab::ClientModels::LogStatement::__cordl_internal_get_Level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Level;
}
constexpr void PlayFab::ClientModels::LogStatement::__cordl_internal_set_Level(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Level = value;
}
constexpr ::StringW& PlayFab::ClientModels::LogStatement::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& PlayFab::ClientModels::LogStatement::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void PlayFab::ClientModels::LogStatement::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
inline void PlayFab::ClientModels::LogStatement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LogStatement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LogStatement* PlayFab::ClientModels::LogStatement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LogStatement*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LogStatement::LogStatement()   {
}
