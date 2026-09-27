#pragma once
// IWYU pragma private; include "System/Net/Authorization.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__Authorization_def.hpp"
//  Writing Method size for method: ::System::Net::Authorization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::StringW)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xac54c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::StringW, bool)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac54d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::StringW, bool, ::StringW)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::StringW, bool, ::StringW, bool)>(&::System::Net::Authorization::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xac54dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_ConnectionGroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_ConnectionGroupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_ConnectionGroupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_Complete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_Complete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_Complete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.SetComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(bool)>(&::System::Net::Authorization::SetComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"SetComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_ProtectionRealm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_ProtectionRealm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_ProtectionRealm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.set_ProtectionRealm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(::ArrayW<::StringW>)>(&::System::Net::Authorization::set_ProtectionRealm)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xac54ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"set_ProtectionRealm", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.get_MutuallyAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Authorization::*)()>(&::System::Net::Authorization::get_MutuallyAuthenticated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac54f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_MutuallyAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Authorization.set_MutuallyAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Authorization::*)(bool)>(&::System::Net::Authorization::set_MutuallyAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"set_MutuallyAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::Authorization::__cordl_internal_get_m_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Message;
}
constexpr ::StringW const& System::Net::Authorization::__cordl_internal_get_m_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Message;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Message = value;
}
constexpr bool& System::Net::Authorization::__cordl_internal_get_m_Complete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Complete;
}
constexpr bool const& System::Net::Authorization::__cordl_internal_get_m_Complete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Complete;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_Complete(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Complete = value;
}
constexpr ::ArrayW<::StringW>& System::Net::Authorization::__cordl_internal_get_m_ProtectionRealm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProtectionRealm;
}
constexpr ::ArrayW<::StringW> const& System::Net::Authorization::__cordl_internal_get_m_ProtectionRealm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProtectionRealm;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_ProtectionRealm(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProtectionRealm = value;
}
constexpr ::StringW& System::Net::Authorization::__cordl_internal_get_m_ConnectionGroupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConnectionGroupId;
}
constexpr ::StringW const& System::Net::Authorization::__cordl_internal_get_m_ConnectionGroupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConnectionGroupId;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_ConnectionGroupId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConnectionGroupId = value;
}
constexpr bool& System::Net::Authorization::__cordl_internal_get_m_MutualAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MutualAuth;
}
constexpr bool const& System::Net::Authorization::__cordl_internal_get_m_MutualAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MutualAuth;
}
constexpr void System::Net::Authorization::__cordl_internal_set_m_MutualAuth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MutualAuth = value;
}
constexpr ::StringW& System::Net::Authorization::__cordl_internal_get_ModuleAuthenticationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModuleAuthenticationType;
}
constexpr ::StringW const& System::Net::Authorization::__cordl_internal_get_ModuleAuthenticationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModuleAuthenticationType;
}
constexpr void System::Net::Authorization::__cordl_internal_set_ModuleAuthenticationType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModuleAuthenticationType = value;
}
inline void System::Net::Authorization::_ctor(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void System::Net::Authorization::_ctor(::StringW  token, bool  finished)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, finished);
}
inline void System::Net::Authorization::_ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, finished, connectionGroupId);
}
inline void System::Net::Authorization::_ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId, bool  mutualAuth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token, finished, connectionGroupId, mutualAuth);
}
inline ::StringW System::Net::Authorization::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::Authorization::get_ConnectionGroupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_ConnectionGroupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::Authorization::get_Complete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_Complete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Authorization::SetComplete(bool  complete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"SetComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, complete);
}
inline ::ArrayW<::StringW> System::Net::Authorization::get_ProtectionRealm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_ProtectionRealm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void System::Net::Authorization::set_ProtectionRealm(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"set_ProtectionRealm", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Authorization::get_MutuallyAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"get_MutuallyAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Authorization::set_MutuallyAuthenticated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Authorization*>(),
                        {"set_MutuallyAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW  token)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Authorization*>(token));
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW  token, bool  finished)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Authorization*>(token, finished));
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Authorization*>(token, finished, connectionGroupId));
}
inline ::System::Net::Authorization* System::Net::Authorization::New_ctor(::StringW  token, bool  finished, ::StringW  connectionGroupId, bool  mutualAuth)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Authorization*>(token, finished, connectionGroupId, mutualAuth));
}
// Ctor Parameters []
constexpr ::System::Net::Authorization::Authorization()   {
}
