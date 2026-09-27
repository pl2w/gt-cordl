#pragma once
// IWYU pragma private; include "Modio/API/SearchFilter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/zzzz__SearchFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::SearchFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::SearchFilter::*)(int32_t, int32_t)>(&::Modio::API::SearchFilter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9fdecc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SearchFilter*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::API::SearchFilter::__cordl_internal_get_PageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageIndex;
}
constexpr int32_t const& Modio::API::SearchFilter::__cordl_internal_get_PageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageIndex;
}
constexpr void Modio::API::SearchFilter::__cordl_internal_set_PageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageIndex = value;
}
constexpr int32_t& Modio::API::SearchFilter::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& Modio::API::SearchFilter::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void Modio::API::SearchFilter::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Modio::API::SearchFilter::__cordl_internal_get_Parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Modio::API::SearchFilter::__cordl_internal_get_Parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Parameters;
}
constexpr void Modio::API::SearchFilter::__cordl_internal_set_Parameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Parameters = value;
}
inline void Modio::API::SearchFilter::_ctor(int32_t  pageIndex, int32_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::SearchFilter*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pageIndex, pageSize);
}
inline ::Modio::API::SearchFilter* Modio::API::SearchFilter::New_ctor(int32_t  pageIndex, int32_t  pageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::SearchFilter*>(pageIndex, pageSize));
}
// Ctor Parameters []
constexpr ::Modio::API::SearchFilter::SearchFilter()   {
}
