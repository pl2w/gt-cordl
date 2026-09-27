#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateSessionData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CreateSessionData_def.hpp"
#include "GlobalNamespace/zzzz__TMPSession_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateSessionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateSessionData::*)()>(&::GlobalNamespace::CreateSessionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a257cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateSessionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TMPSession*& GlobalNamespace::CreateSessionData::__cordl_internal_get_NewSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSession;
}
constexpr ::GlobalNamespace::TMPSession* const& GlobalNamespace::CreateSessionData::__cordl_internal_get_NewSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewSession;
}
constexpr void GlobalNamespace::CreateSessionData::__cordl_internal_set_NewSession(::GlobalNamespace::TMPSession*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewSession = value;
}
inline void GlobalNamespace::CreateSessionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateSessionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreateSessionData* GlobalNamespace::CreateSessionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateSessionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateSessionData::CreateSessionData()   {
}
