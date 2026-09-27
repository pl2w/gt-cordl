#pragma once
// IWYU pragma private; include "System/Net/WebPermission.hpp"
#include "System/Security/zzzz__CodeAccessPermission_impl.hpp"
#include "System/Net/zzzz__WebPermission_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/zzzz__DelayedRegex_def.hpp"
#include "System/Net/zzzz__NetworkAccess_def.hpp"
#include "System/Security/Permissions/zzzz__IUnrestrictedPermission_def.hpp"
#include "System/Security/Permissions/zzzz__PermissionState_def.hpp"
#include "System/Security/zzzz__IPermission_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebPermission.get_MatchAllRegex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::Regex* (*)()>(&::System::Net::WebPermission::get_MatchAllRegex)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac64d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"get_MatchAllRegex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.get_ConnectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::WebPermission::*)()>(&::System::Net::WebPermission::get_ConnectList)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xac64e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"get_ConnectList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.get_AcceptList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::System::Net::WebPermission::*)()>(&::System::Net::WebPermission::get_AcceptList)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xac6513c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"get_AcceptList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Security::Permissions::PermissionState)>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xac63e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::PermissionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(bool)>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xac65448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)()>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac654f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess)>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac63f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Text::RegularExpressions::Regex*)>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac65580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::StringW)>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac657a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Uri*)>(&::System::Net::WebPermission::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac65850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.AddPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::StringW)>(&::System::Net::WebPermission::AddPermission)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0xac645b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.AddPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Uri*)>(&::System::Net::WebPermission::AddPermission)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0xac65900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.AddPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Text::RegularExpressions::Regex*)>(&::System::Net::WebPermission::AddPermission)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xac65630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.AddAsPattern
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Net::DelayedRegex*)>(&::System::Net::WebPermission::AddAsPattern)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0xac63fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddAsPattern", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Net::DelayedRegex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.IsUnrestricted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebPermission::*)()>(&::System::Net::WebPermission::IsUnrestricted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac65f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"IsUnrestricted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::WebPermission::*)()>(&::System::Net::WebPermission::Copy)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac65f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebPermission*>(),
                    {::i2c::class_of<::System::Net::WebPermission*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.IsSubsetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebPermission::*)(::System::Security::IPermission*)>(&::System::Net::WebPermission::IsSubsetOf)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0xac66118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebPermission*>(),
                    {::i2c::class_of<::System::Net::WebPermission*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.isSpecialSubsetCase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Collections::ArrayList*)>(&::System::Net::WebPermission::isSpecialSubsetCase)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xac6675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"isSpecialSubsetCase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.Union
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::WebPermission::*)(::System::Security::IPermission*)>(&::System::Net::WebPermission::Union)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0xac670a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebPermission*>(),
                    {::i2c::class_of<::System::Net::WebPermission*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.Intersect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::IPermission* (::System::Net::WebPermission::*)(::System::Security::IPermission*)>(&::System::Net::WebPermission::Intersect)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xac675c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebPermission*>(),
                    {::i2c::class_of<::System::Net::WebPermission*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.FromXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebPermission::*)(::System::Security::SecurityElement*)>(&::System::Net::WebPermission::FromXml)> {
  constexpr static std::size_t size = 0xb3c;
  constexpr static std::size_t addrs = 0xac687b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebPermission*>(),
                    {::i2c::class_of<::System::Net::WebPermission*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.ToXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecurityElement* (::System::Net::WebPermission::*)()>(&::System::Net::WebPermission::ToXml)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0xac692f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebPermission*>(),
                    {::i2c::class_of<::System::Net::WebPermission*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.isMatchedURI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Collections::ArrayList*)>(&::System::Net::WebPermission::isMatchedURI)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0xac66b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"isMatchedURI", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.intersectList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*)>(&::System::Net::WebPermission::intersectList)> {
  constexpr static std::size_t size = 0xeec;
  constexpr static std::size_t addrs = 0xac678cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"intersectList", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebPermission.intersectPair
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Object*, ::by_ref<bool>)>(&::System::Net::WebPermission::intersectPair)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0xac69e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"intersectPair", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::Net::WebPermission::__cordl_internal_get_m_noRestriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_noRestriction;
}
constexpr bool const& System::Net::WebPermission::__cordl_internal_get_m_noRestriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_noRestriction;
}
constexpr void System::Net::WebPermission::__cordl_internal_set_m_noRestriction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_noRestriction = value;
}
constexpr bool& System::Net::WebPermission::__cordl_internal_get_m_UnrestrictedConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnrestrictedConnect;
}
constexpr bool const& System::Net::WebPermission::__cordl_internal_get_m_UnrestrictedConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnrestrictedConnect;
}
constexpr void System::Net::WebPermission::__cordl_internal_set_m_UnrestrictedConnect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnrestrictedConnect = value;
}
constexpr bool& System::Net::WebPermission::__cordl_internal_get_m_UnrestrictedAccept()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnrestrictedAccept;
}
constexpr bool const& System::Net::WebPermission::__cordl_internal_get_m_UnrestrictedAccept() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnrestrictedAccept;
}
constexpr void System::Net::WebPermission::__cordl_internal_set_m_UnrestrictedAccept(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnrestrictedAccept = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::WebPermission::__cordl_internal_get_m_connectList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_connectList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::WebPermission::__cordl_internal_get_m_connectList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_connectList;
}
constexpr void System::Net::WebPermission::__cordl_internal_set_m_connectList(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_connectList = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::WebPermission::__cordl_internal_get_m_acceptList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_acceptList;
}
constexpr ::System::Collections::ArrayList* const& System::Net::WebPermission::__cordl_internal_get_m_acceptList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_acceptList;
}
constexpr void System::Net::WebPermission::__cordl_internal_set_m_acceptList(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_acceptList = value;
}
inline void System::Net::WebPermission::setStaticF_s_MatchAllRegex(::System::Text::RegularExpressions::Regex*  value)  {
::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "s_MatchAllRegex", ::System::Net::WebPermission*>(std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* System::Net::WebPermission::getStaticF_s_MatchAllRegex()  {
return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "s_MatchAllRegex", ::System::Net::WebPermission*>();
}
inline ::System::Text::RegularExpressions::Regex* System::Net::WebPermission::get_MatchAllRegex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"get_MatchAllRegex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::Regex*>(nullptr, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::WebPermission::get_ConnectList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"get_ConnectList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Net::WebPermission::get_AcceptList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"get_AcceptList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void System::Net::WebPermission::_ctor(::System::Security::Permissions::PermissionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Permissions::PermissionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Net::WebPermission::_ctor(bool  unrestricted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unrestricted);
}
inline void System::Net::WebPermission::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebPermission::_ctor(::System::Net::NetworkAccess  access)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access);
}
inline void System::Net::WebPermission::_ctor(::System::Net::NetworkAccess  access, ::System::Text::RegularExpressions::Regex*  uriRegex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uriRegex);
}
inline void System::Net::WebPermission::_ctor(::System::Net::NetworkAccess  access, ::StringW  uriString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uriString);
}
inline void System::Net::WebPermission::_ctor(::System::Net::NetworkAccess  access, ::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uri);
}
inline void System::Net::WebPermission::AddPermission(::System::Net::NetworkAccess  access, ::StringW  uriString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uriString);
}
inline void System::Net::WebPermission::AddPermission(::System::Net::NetworkAccess  access, ::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uri);
}
inline void System::Net::WebPermission::AddPermission(::System::Net::NetworkAccess  access, ::System::Text::RegularExpressions::Regex*  uriRegex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddPermission", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Text::RegularExpressions::Regex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uriRegex);
}
inline void System::Net::WebPermission::AddAsPattern(::System::Net::NetworkAccess  access, ::System::Net::DelayedRegex*  uriRegexPattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"AddAsPattern", {}, {::i2c::type_of<::System::Net::NetworkAccess>(), ::i2c::type_of<::System::Net::DelayedRegex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, access, uriRegexPattern);
}
inline bool System::Net::WebPermission::IsUnrestricted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"IsUnrestricted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::IPermission* System::Net::WebPermission::Copy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebPermission*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method);
}
inline bool System::Net::WebPermission::IsSubsetOf(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebPermission*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline bool System::Net::WebPermission::isSpecialSubsetCase(::StringW  regexToCheck, ::System::Collections::ArrayList*  permList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"isSpecialSubsetCase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, regexToCheck, permList);
}
inline ::System::Security::IPermission* System::Net::WebPermission::Union(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebPermission*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method, target);
}
inline ::System::Security::IPermission* System::Net::WebPermission::Intersect(::System::Security::IPermission*  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebPermission*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::IPermission*>(this, ___internal_method, target);
}
inline void System::Net::WebPermission::FromXml(::System::Security::SecurityElement*  securityElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebPermission*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, securityElement);
}
inline ::System::Security::SecurityElement* System::Net::WebPermission::ToXml()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebPermission*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*>(this, ___internal_method);
}
inline bool System::Net::WebPermission::isMatchedURI(::System::Object*  uriToCheck, ::System::Collections::ArrayList*  uriPatternList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"isMatchedURI", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uriToCheck, uriPatternList);
}
inline void System::Net::WebPermission::intersectList(::System::Collections::ArrayList*  A, ::System::Collections::ArrayList*  B, ::System::Collections::ArrayList*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"intersectList", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, A, B, result);
}
inline ::System::Object* System::Net::WebPermission::intersectPair(::System::Object*  L, ::System::Object*  R, ::by_ref<bool>  isUri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebPermission*>(),
                        {"intersectPair", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, L, R, isUri);
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor(::System::Security::Permissions::PermissionState  state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>(state));
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor(bool  unrestricted)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>(unrestricted));
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>());
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor(::System::Net::NetworkAccess  access)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>(access));
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor(::System::Net::NetworkAccess  access, ::System::Text::RegularExpressions::Regex*  uriRegex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>(access, uriRegex));
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor(::System::Net::NetworkAccess  access, ::StringW  uriString)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>(access, uriString));
}
inline ::System::Net::WebPermission* System::Net::WebPermission::New_ctor(::System::Net::NetworkAccess  access, ::System::Uri*  uri)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebPermission*>(access, uri));
}
/// @brief Convert operator to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr  System::Net::WebPermission::operator ::System::Security::Permissions::IUnrestrictedPermission*() noexcept {
return static_cast<::System::Security::Permissions::IUnrestrictedPermission*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Permissions::IUnrestrictedPermission"
constexpr ::System::Security::Permissions::IUnrestrictedPermission* System::Net::WebPermission::i___System__Security__Permissions__IUnrestrictedPermission() noexcept {
return static_cast<::System::Security::Permissions::IUnrestrictedPermission*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebPermission::WebPermission()   {
}
