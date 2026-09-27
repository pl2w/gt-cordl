#pragma once
// IWYU pragma private; include "GlobalNamespace/VerifyTokenResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__VerifyTokenResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::VerifyTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53b6440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::VerifyTokenResponse*)>(&::GlobalNamespace::VerifyTokenResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53b64f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::VerifyTokenResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::VerifyTokenResponse*)>(&::GlobalNamespace::VerifyTokenResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53b6534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::VerifyTokenResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(bool)>(&::GlobalNamespace::VerifyTokenResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53b65d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VerifyTokenResponse::*)(::StringW)>(&::GlobalNamespace::VerifyTokenResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53b673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::VerifyTokenResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::VerifyTokenResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x53b6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.set_MothershipPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::StringW)>(&::GlobalNamespace::VerifyTokenResponse::set_MothershipPlayerId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53b6938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_MothershipPlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.get_MothershipPlayerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::get_MothershipPlayerId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53b6a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_MothershipPlayerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.set_ExternalAccountNickname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::StringW)>(&::GlobalNamespace::VerifyTokenResponse::set_ExternalAccountNickname)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53b6ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountNickname", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.get_ExternalAccountNickname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::get_ExternalAccountNickname)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53b6bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountNickname", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.set_ExternalAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::StringW)>(&::GlobalNamespace::VerifyTokenResponse::set_ExternalAccountId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53b6c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.get_ExternalAccountId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::get_ExternalAccountId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53b6d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.set_ExternalAccountOrgScopedId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::StringW)>(&::GlobalNamespace::VerifyTokenResponse::set_ExternalAccountOrgScopedId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53b6e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountOrgScopedId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.get_ExternalAccountOrgScopedId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::get_ExternalAccountOrgScopedId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53b6f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountOrgScopedId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.set_ExternalAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::StringW)>(&::GlobalNamespace::VerifyTokenResponse::set_ExternalAccountType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53b6fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.get_ExternalAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::get_ExternalAccountType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53b70c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.set_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)(::GlobalNamespace::StringVector*)>(&::GlobalNamespace::VerifyTokenResponse::set_Tags)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x53b7194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_Tags", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse.get_Tags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringVector* (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::get_Tags)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53b7284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_Tags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VerifyTokenResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VerifyTokenResponse::*)()>(&::GlobalNamespace::VerifyTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53b7390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::VerifyTokenResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::VerifyTokenResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::VerifyTokenResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::VerifyTokenResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::VerifyTokenResponse::getCPtr(::GlobalNamespace::VerifyTokenResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::VerifyTokenResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::VerifyTokenResponse::swigRelease(::GlobalNamespace::VerifyTokenResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::VerifyTokenResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::VerifyTokenResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::VerifyTokenResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::VerifyTokenResponse* GlobalNamespace::VerifyTokenResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::VerifyTokenResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::VerifyTokenResponse::set_MothershipPlayerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_MothershipPlayerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VerifyTokenResponse::get_MothershipPlayerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_MothershipPlayerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyTokenResponse::set_ExternalAccountNickname(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountNickname", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VerifyTokenResponse::get_ExternalAccountNickname()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountNickname", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyTokenResponse::set_ExternalAccountId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VerifyTokenResponse::get_ExternalAccountId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyTokenResponse::set_ExternalAccountOrgScopedId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountOrgScopedId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VerifyTokenResponse::get_ExternalAccountOrgScopedId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountOrgScopedId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyTokenResponse::set_ExternalAccountType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_ExternalAccountType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::VerifyTokenResponse::get_ExternalAccountType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_ExternalAccountType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyTokenResponse::set_Tags(::GlobalNamespace::StringVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"set_Tags", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringVector* GlobalNamespace::VerifyTokenResponse::get_Tags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {"get_Tags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringVector*>(this, ___internal_method);
}
inline void GlobalNamespace::VerifyTokenResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VerifyTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VerifyTokenResponse* GlobalNamespace::VerifyTokenResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerifyTokenResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::VerifyTokenResponse* GlobalNamespace::VerifyTokenResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VerifyTokenResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VerifyTokenResponse::VerifyTokenResponse()   {
}
