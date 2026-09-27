#pragma once
// IWYU pragma private; include "Photon/Realtime/FindFriendsOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__FindFriendsOptions_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::FindFriendsOptions.ToIntFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::FindFriendsOptions::*)()>(&::Photon::Realtime::FindFriendsOptions::ToIntFlags)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa708448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FindFriendsOptions*>(),
                        {"ToIntFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FindFriendsOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::FindFriendsOptions::*)()>(&::Photon::Realtime::FindFriendsOptions::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa708438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FindFriendsOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Photon::Realtime::FindFriendsOptions::__cordl_internal_get_CreatedOnGs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreatedOnGs;
}
constexpr bool const& Photon::Realtime::FindFriendsOptions::__cordl_internal_get_CreatedOnGs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CreatedOnGs;
}
constexpr void Photon::Realtime::FindFriendsOptions::__cordl_internal_set_CreatedOnGs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CreatedOnGs = value;
}
constexpr bool& Photon::Realtime::FindFriendsOptions::__cordl_internal_get_Visible()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Visible;
}
constexpr bool const& Photon::Realtime::FindFriendsOptions::__cordl_internal_get_Visible() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Visible;
}
constexpr void Photon::Realtime::FindFriendsOptions::__cordl_internal_set_Visible(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Visible = value;
}
constexpr bool& Photon::Realtime::FindFriendsOptions::__cordl_internal_get_Open()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Open;
}
constexpr bool const& Photon::Realtime::FindFriendsOptions::__cordl_internal_get_Open() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Open;
}
constexpr void Photon::Realtime::FindFriendsOptions::__cordl_internal_set_Open(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Open = value;
}
inline int32_t Photon::Realtime::FindFriendsOptions::ToIntFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FindFriendsOptions*>(),
                        {"ToIntFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Realtime::FindFriendsOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FindFriendsOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::FindFriendsOptions* Photon::Realtime::FindFriendsOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::FindFriendsOptions*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::FindFriendsOptions::FindFriendsOptions()   {
}
