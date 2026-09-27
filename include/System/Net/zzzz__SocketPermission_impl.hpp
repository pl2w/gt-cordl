#pragma once
// IWYU pragma private; include "System/Net/SocketPermission.hpp"
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Net/zzzz__SocketPermission_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__NetworkAccess_def.hpp"
#include "System/Net/zzzz__TransportType_def.hpp"
#include "System/Security/Permissions/zzzz__IUnrestrictedPermission_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
//  Writing Method size for method: ::System::Net::SocketPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Security::Permissions::PermissionState)>(&::System::Net::SocketPermission::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xacb5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::PermissionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Net::NetworkAccess, ::System::Net::TransportType, ::StringW, int32_t)>(&::System::Net::SocketPermission::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xacb552c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Net::TransportType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.get_AcceptList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::SocketPermission::*)()>(&::System::Net::SocketPermission::get_AcceptList)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xacb56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"get_AcceptList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.get_ConnectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::SocketPermission::*)()>(&::System::Net::SocketPermission::get_ConnectList)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xacb56e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"get_ConnectList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.AddPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Net::NetworkAccess, ::System::Net::TransportType, ::StringW, int32_t)>(&::System::Net::SocketPermission::AddPermission)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xacb55f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Net::TransportType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::SocketPermission::*)()>(&::System::Net::SocketPermission::Copy)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xacb5700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketPermission*>(),
                    {::i2c::class_of<::System::Net::SocketPermission*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::SocketPermission::*)(::System::Security::IPermission*)>(&::System::Net::SocketPermission::Intersect)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xacb5894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketPermission*>(),
                    {::i2c::class_of<::System::Net::SocketPermission*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.IntersectEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::SocketPermission::*)(::System::Net::SocketPermission*)>(&::System::Net::SocketPermission::IntersectEmpty)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xacb59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"IntersectEmpty", {}, {::i2c::type_of<::System::Net::SocketPermission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*)>(&::System::Net::SocketPermission::Intersect)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0xacb5a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.IsSubsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::SocketPermission::*)(::System::Security::IPermission*)>(&::System::Net::SocketPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xacb603c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketPermission*>(),
                    {::i2c::class_of<::System::Net::SocketPermission*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.IsSubsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::SocketPermission::*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*)>(&::System::Net::SocketPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xacb61d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.IsUnrestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::SocketPermission::*)()>(&::System::Net::SocketPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacb671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"IsUnrestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.ToXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Net::SocketPermission::*)()>(&::System::Net::SocketPermission::ToXml)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xacb6724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketPermission*>(),
                    {::i2c::class_of<::System::Net::SocketPermission*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.ToXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Security::SecurityElement*, ::StringW, ::System::Collections::IEnumerator*)>(&::System::Net::SocketPermission::ToXml)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xacb6928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"ToXml", {}, {::i2c::type_of<::System::Security::SecurityElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.FromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Security::SecurityElement*)>(&::System::Net::SocketPermission::FromXml)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xacb6c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketPermission*>(),
                    {::i2c::class_of<::System::Net::SocketPermission*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.FromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::SocketPermission::*)(::System::Collections::ArrayList*, ::System::Net::NetworkAccess)>(&::System::Net::SocketPermission::FromXml)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xacb70a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"FromXml", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Net::NetworkAccess>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::SocketPermission.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::SocketPermission::*)(::System::Security::IPermission*)>(&::System::Net::SocketPermission::Union)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xacb7504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::SocketPermission*>(),
                    {::i2c::class_of<::System::Net::SocketPermission*>(), 13}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Net::SocketPermission::__cordl_internal_get_m_acceptList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_acceptList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::SocketPermission::__cordl_internal_get_m_acceptList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_acceptList;
}
constexpr void System::Net::SocketPermission::__cordl_internal_set_m_acceptList(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_acceptList = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::SocketPermission::__cordl_internal_get_m_connectList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_connectList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::SocketPermission::__cordl_internal_get_m_connectList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_connectList;
}
constexpr void System::Net::SocketPermission::__cordl_internal_set_m_connectList(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_connectList = value;
}
constexpr bool& System::Net::SocketPermission::__cordl_internal_get_m_noRestriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_noRestriction;
}
constexpr bool const& System::Net::SocketPermission::__cordl_internal_get_m_noRestriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_noRestriction;
}
constexpr void System::Net::SocketPermission::__cordl_internal_set_m_noRestriction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_noRestriction = value;
}
inline void System::Net::SocketPermission::_ctor(::System::Security::Permissions::PermissionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::PermissionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Net::SocketPermission::_ctor(::System::Net::NetworkAccess  access, ::System::Net::TransportType  transport, ::StringW  hostName, int32_t  portNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Net::TransportType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, transport, hostName, portNumber);
}
inline ::System::Collections::IEnumerator* System::Net::SocketPermission::get_AcceptList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"get_AcceptList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::SocketPermission::get_ConnectList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"get_ConnectList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Net::SocketPermission::AddPermission(::System::Net::NetworkAccess  access, ::System::Net::TransportType  transport, ::StringW  hostName, int32_t  portNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Net::TransportType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, transport, hostName, portNumber);
}
inline ::System::Security::IPermission* System::Net::SocketPermission::Copy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketPermission*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method);
}
inline ::System::Security::IPermission* System::Net::SocketPermission::Intersect(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketPermission*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method, target);
}
inline bool System::Net::SocketPermission::IntersectEmpty(::System::Net::SocketPermission*  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"IntersectEmpty", {}, {::i2c::type_of<::System::Net::SocketPermission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, permission);
}
inline void System::Net::SocketPermission::Intersect(::System::Collections::ArrayList*  list1, ::System::Collections::ArrayList*  list2, ::System::Collections::ArrayList*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"Intersect", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list1, list2, result);
}
inline bool System::Net::SocketPermission::IsSubsetOf(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketPermission*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline bool System::Net::SocketPermission::IsSubsetOf(::System::Collections::ArrayList*  list1, ::System::Collections::ArrayList*  list2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"IsSubsetOf", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, list1, list2);
}
inline bool System::Net::SocketPermission::IsUnrestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"IsUnrestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::SecurityElement* System::Net::SocketPermission::ToXml()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketPermission*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline void System::Net::SocketPermission::ToXml(::System::Security::SecurityElement*  root, ::StringW  childName, ::System::Collections::IEnumerator*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"ToXml", {}, {::i2c::type_of<::System::Security::SecurityElement*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::IEnumerator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, root, childName, enumerator);
}
inline void System::Net::SocketPermission::FromXml(::System::Security::SecurityElement*  securityElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketPermission*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, securityElement);
}
inline void System::Net::SocketPermission::FromXml(::System::Collections::ArrayList*  endpoints, ::System::Net::NetworkAccess  access)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::SocketPermission*>(),
                        {"FromXml", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Net::NetworkAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endpoints, access);
}
inline ::System::Security::IPermission* System::Net::SocketPermission::Union(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::SocketPermission*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method, target);
}
inline ::System::Net::SocketPermission* System::Net::SocketPermission::New_ctor(::System::Security::Permissions::PermissionState  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SocketPermission*>(state));
}
inline ::System::Net::SocketPermission* System::Net::SocketPermission::New_ctor(::System::Net::NetworkAccess  access, ::System::Net::TransportType  transport, ::StringW  hostName, int32_t  portNumber)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::SocketPermission*>(access, transport, hostName, portNumber));
}
/// @brief Convert operator to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr  System::Net::SocketPermission::operator ::System::Security::Permissions::IUnrestrictedPermission*() noexcept {
return static_cast<::System::Security::Permissions::IUnrestrictedPermission*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr ::System::Security::Permissions::IUnrestrictedPermission* System::Net::SocketPermission::i___System__Security__Permissions__IUnrestrictedPermission() noexcept {
return static_cast<::System::Security::Permissions::IUnrestrictedPermission*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::SocketPermission::SocketPermission()   {
}
