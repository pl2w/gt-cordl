#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CollectionFilter.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CollectionFilter_def.hpp"
#include "PlayFab/ClientModels/zzzz__Container_Dictionary_String_String_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CollectionFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CollectionFilter::*)()>(&::PlayFab::ClientModels::CollectionFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CollectionFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*& PlayFab::ClientModels::CollectionFilter::__cordl_internal_get_Excludes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Excludes;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>* const& PlayFab::ClientModels::CollectionFilter::__cordl_internal_get_Excludes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Excludes;
}
constexpr void PlayFab::ClientModels::CollectionFilter::__cordl_internal_set_Excludes(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Excludes = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*& PlayFab::ClientModels::CollectionFilter::__cordl_internal_get_Includes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Includes;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>* const& PlayFab::ClientModels::CollectionFilter::__cordl_internal_get_Includes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Includes;
}
constexpr void PlayFab::ClientModels::CollectionFilter::__cordl_internal_set_Includes(::System::Collections::Generic::List_1<::PlayFab::ClientModels::Container_Dictionary_String_String*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Includes = value;
}
inline void PlayFab::ClientModels::CollectionFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CollectionFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CollectionFilter* PlayFab::ClientModels::CollectionFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CollectionFilter*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CollectionFilter::CollectionFilter()   {
}
