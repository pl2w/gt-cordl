#pragma once
// IWYU pragma private; include "GlobalNamespace/AndroidInitResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AndroidInitResponse_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AndroidInitResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AndroidInitResponse::*)()>(&::GlobalNamespace::AndroidInitResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b240f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AndroidInitResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AndroidInitResponse::__cordl_internal_get_status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr int32_t const& GlobalNamespace::AndroidInitResponse::__cordl_internal_get_status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___status;
}
constexpr void GlobalNamespace::AndroidInitResponse::__cordl_internal_set_status(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___status = value;
}
constexpr ::StringW& GlobalNamespace::AndroidInitResponse::__cordl_internal_get_msg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___msg;
}
constexpr ::StringW const& GlobalNamespace::AndroidInitResponse::__cordl_internal_get_msg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___msg;
}
constexpr void GlobalNamespace::AndroidInitResponse::__cordl_internal_set_msg(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___msg = value;
}
inline void GlobalNamespace::AndroidInitResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AndroidInitResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AndroidInitResponse* GlobalNamespace::AndroidInitResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AndroidInitResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AndroidInitResponse::AndroidInitResponse()   {
}
