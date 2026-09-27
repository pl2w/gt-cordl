#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TitleNewsItem.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/ClientModels/zzzz__TitleNewsItem_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::TitleNewsItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::TitleNewsItem::*)()>(&::PlayFab::ClientModels::TitleNewsItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TitleNewsItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr ::StringW const& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Body;
}
constexpr void PlayFab::ClientModels::TitleNewsItem::__cordl_internal_set_Body(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Body = value;
}
constexpr ::StringW& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_NewsId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewsId;
}
constexpr ::StringW const& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_NewsId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewsId;
}
constexpr void PlayFab::ClientModels::TitleNewsItem::__cordl_internal_set_NewsId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewsId = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_Timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_Timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Timestamp;
}
constexpr void PlayFab::ClientModels::TitleNewsItem::__cordl_internal_set_Timestamp(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Timestamp = value;
}
constexpr ::StringW& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_Title()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr ::StringW const& PlayFab::ClientModels::TitleNewsItem::__cordl_internal_get_Title() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Title;
}
constexpr void PlayFab::ClientModels::TitleNewsItem::__cordl_internal_set_Title(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Title = value;
}
inline void PlayFab::ClientModels::TitleNewsItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::TitleNewsItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::TitleNewsItem* PlayFab::ClientModels::TitleNewsItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::TitleNewsItem*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::TitleNewsItem::TitleNewsItem()   {
}
