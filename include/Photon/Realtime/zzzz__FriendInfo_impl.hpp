#pragma once
// IWYU pragma private; include "Photon/Realtime/FriendInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::get_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::FriendInfo::*)(::StringW)>(&::Photon::Realtime::FriendInfo::set_UserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.get_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::get_IsOnline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_IsOnline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.set_IsOnline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::FriendInfo::*)(bool)>(&::Photon::Realtime::FriendInfo::set_IsOnline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"set_IsOnline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.get_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::get_Room)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_Room", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.set_Room
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::FriendInfo::*)(::StringW)>(&::Photon::Realtime::FriendInfo::set_Room)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f95e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"set_Room", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.get_IsInRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::get_IsInRoom)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa6f95f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_IsInRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa6f9618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                    {::i2c::class_of<::Photon::Realtime::FriendInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::FriendInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::FriendInfo::*)()>(&::Photon::Realtime::FriendInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6f96d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::FriendInfo::__cordl_internal_get__UserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::FriendInfo::__cordl_internal_get__UserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserId_k__BackingField;
}
constexpr void Photon::Realtime::FriendInfo::__cordl_internal_set__UserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserId_k__BackingField = value;
}
constexpr bool& Photon::Realtime::FriendInfo::__cordl_internal_get__IsOnline_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOnline_k__BackingField;
}
constexpr bool const& Photon::Realtime::FriendInfo::__cordl_internal_get__IsOnline_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsOnline_k__BackingField;
}
constexpr void Photon::Realtime::FriendInfo::__cordl_internal_set__IsOnline_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsOnline_k__BackingField = value;
}
constexpr ::StringW& Photon::Realtime::FriendInfo::__cordl_internal_get__Room_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Room_k__BackingField;
}
constexpr ::StringW const& Photon::Realtime::FriendInfo::__cordl_internal_get__Room_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Room_k__BackingField;
}
constexpr void Photon::Realtime::FriendInfo::__cordl_internal_set__Room_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Room_k__BackingField = value;
}
inline ::StringW Photon::Realtime::FriendInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::FriendInfo::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::FriendInfo::set_UserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"set_UserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::FriendInfo::get_IsOnline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_IsOnline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::FriendInfo::set_IsOnline(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"set_IsOnline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::FriendInfo::get_Room()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_Room", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::FriendInfo::set_Room(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"set_Room", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::FriendInfo::get_IsInRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {"get_IsInRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::FriendInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::FriendInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::FriendInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::FriendInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::FriendInfo* Photon::Realtime::FriendInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::FriendInfo*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::FriendInfo::FriendInfo()   {
}
