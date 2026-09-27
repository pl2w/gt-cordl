#pragma once
// IWYU pragma private; include "System/Net/CookieContainer.hpp"
#include "System/Net/zzzz__HeaderVariantInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/Net/zzzz__PathList_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::CookieContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xac7d0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(int32_t)>(&::System::Net::CookieContainer::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac7d1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(int32_t, int32_t, int32_t)>(&::System::Net::CookieContainer::_ctor)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xac7d28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::get_Capacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac7d458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.set_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(int32_t)>(&::System::Net::CookieContainer::set_Capacity)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xac7d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac7e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.get_MaxCookieSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::get_MaxCookieSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac7e994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_MaxCookieSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.set_MaxCookieSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(int32_t)>(&::System::Net::CookieContainer::set_MaxCookieSize)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xac7e99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"set_MaxCookieSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.get_PerDomainCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::get_PerDomainCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac7e9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_PerDomainCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.set_PerDomainCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(int32_t)>(&::System::Net::CookieContainer::set_PerDomainCapacity)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xac7ea00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"set_PerDomainCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::Cookie*)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xac7eaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.AddRemoveDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::StringW, ::System::Net::PathList*)>(&::System::Net::CookieContainer::AddRemoveDomain)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xac7f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"AddRemoveDomain", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::PathList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::Cookie*, bool)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x81c;
  constexpr static std::size_t addrs = 0xac7f134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.AgeCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieContainer::*)(::StringW)>(&::System::Net::CookieContainer::AgeCookies)> {
  constexpr static std::size_t size = 0x13a4;
  constexpr static std::size_t addrs = 0xac7d5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"AgeCookies", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.ExpireCollection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*)>(&::System::Net::CookieContainer::ExpireCollection)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xac800a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"ExpireCollection", {}, {::i2c::type_of<::System::Net::CookieCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xac80248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::CookieCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.IsLocalDomain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieContainer::*)(::StringW)>(&::System::Net::CookieContainer::IsLocalDomain)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xac7ee94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"IsLocalDomain", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Uri*, ::System::Net::Cookie*)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xac8050c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::Cookie*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Uri*, ::System::Net::CookieCollection*)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xac80654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::CookieCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.CookieCutter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*, ::StringW, ::StringW, bool)>(&::System::Net::CookieContainer::CookieCutter)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0xac809e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"CookieCutter", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*)>(&::System::Net::CookieContainer::GetCookies)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xac8108c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"GetCookies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.InternalGetCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*)>(&::System::Net::CookieContainer::InternalGetCookies)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0xac8114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"InternalGetCookies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.BuildCookieCollectionFromDomainMatches
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Uri*, bool, int32_t, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::StringW>*, bool)>(&::System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0xac815f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"BuildCookieCollectionFromDomainMatches", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.MergeUpdateCollections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*, ::System::Net::CookieCollection*, int32_t, bool, bool)>(&::System::Net::CookieContainer::MergeUpdateCollections)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xac81db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"MergeUpdateCollections", {}, {::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookieHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieContainer::*)(::System::Uri*)>(&::System::Net::CookieContainer::GetCookieHeader)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xac81fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"GetCookieHeader", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookieHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieContainer::*)(::System::Uri*, ::by_ref<::StringW>)>(&::System::Net::CookieContainer::GetCookieHeader)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xac82084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"GetCookieHeader", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.SetCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Uri*, ::StringW)>(&::System::Net::CookieContainer::SetCookies)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xac82408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"SetCookies", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Net::CookieContainer::__cordl_internal_get_m_domainTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_domainTable;
}
constexpr ::System::Collections::Hashtable* const& System::Net::CookieContainer::__cordl_internal_get_m_domainTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_domainTable;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_domainTable(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_domainTable = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_maxCookieSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCookieSize;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_maxCookieSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCookieSize;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_maxCookieSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxCookieSize = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_maxCookies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCookies;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_maxCookies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCookies;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_maxCookies(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxCookies = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_maxCookiesPerDomain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCookiesPerDomain;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_maxCookiesPerDomain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_maxCookiesPerDomain;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_maxCookiesPerDomain(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_maxCookiesPerDomain = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_count;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_count;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_count = value;
}
constexpr ::StringW& System::Net::CookieContainer::__cordl_internal_get_m_fqdnMyDomain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fqdnMyDomain;
}
constexpr ::StringW const& System::Net::CookieContainer::__cordl_internal_get_m_fqdnMyDomain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fqdnMyDomain;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_fqdnMyDomain(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fqdnMyDomain = value;
}
inline void System::Net::CookieContainer::setStaticF_HeaderInfo(::ArrayW<::System::Net::HeaderVariantInfo>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Net::HeaderVariantInfo>, "HeaderInfo", ::System::Net::CookieContainer*>(std::forward<::ArrayW<::System::Net::HeaderVariantInfo>>(value));
}
inline ::ArrayW<::System::Net::HeaderVariantInfo> System::Net::CookieContainer::getStaticF_HeaderInfo()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Net::HeaderVariantInfo>, "HeaderInfo", ::System::Net::CookieContainer*>();
}
inline void System::Net::CookieContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::CookieContainer::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::Net::CookieContainer::_ctor(int32_t  capacity, int32_t  perDomainCapacity, int32_t  maxCookieSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, perDomainCapacity, maxCookieSize);
}
inline int32_t System::Net::CookieContainer::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::CookieContainer::set_Capacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"set_Capacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::CookieContainer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Net::CookieContainer::get_MaxCookieSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_MaxCookieSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::CookieContainer::set_MaxCookieSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"set_MaxCookieSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::CookieContainer::get_PerDomainCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"get_PerDomainCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::CookieContainer::set_PerDomainCapacity(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"set_PerDomainCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::CookieContainer::Add(::System::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie);
}
inline void System::Net::CookieContainer::AddRemoveDomain(::StringW  key, ::System::Net::PathList*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"AddRemoveDomain", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::PathList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Net::CookieContainer::Add(::System::Net::Cookie*  cookie, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie, throwOnError);
}
inline bool System::Net::CookieContainer::AgeCookies(::StringW  domain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"AgeCookies", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, domain);
}
inline int32_t System::Net::CookieContainer::ExpireCollection(::System::Net::CookieCollection*  cc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"ExpireCollection", {}, {::i2c::type_of<::System::Net::CookieCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cc);
}
inline void System::Net::CookieContainer::Add(::System::Net::CookieCollection*  cookies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Net::CookieCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookies);
}
inline bool System::Net::CookieContainer::IsLocalDomain(::StringW  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"IsLocalDomain", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline void System::Net::CookieContainer::Add(::System::Uri*  uri, ::System::Net::Cookie*  cookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::Cookie*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, cookie);
}
inline void System::Net::CookieContainer::Add(::System::Uri*  uri, ::System::Net::CookieCollection*  cookies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"Add", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Net::CookieCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, cookies);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::CookieCutter(::System::Uri*  uri, ::StringW  headerName, ::StringW  setCookieHeader, bool  isThrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"CookieCutter", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method, uri, headerName, setCookieHeader, isThrow);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::GetCookies(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"GetCookies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method, uri);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::InternalGetCookies(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"InternalGetCookies", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method, uri);
}
inline void System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches(::System::Uri*  uri, bool  isSecure, int32_t  port, ::System::Net::CookieCollection*  cookies, ::System::Collections::Generic::List_1<::StringW>*  domainAttribute, bool  matchOnlyPlainCookie)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"BuildCookieCollectionFromDomainMatches", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, isSecure, port, cookies, domainAttribute, matchOnlyPlainCookie);
}
inline void System::Net::CookieContainer::MergeUpdateCollections(::System::Net::CookieCollection*  destination, ::System::Net::CookieCollection*  source, int32_t  port, bool  isSecure, bool  isPlainOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"MergeUpdateCollections", {}, {::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, source, port, isSecure, isPlainOnly);
}
inline ::StringW System::Net::CookieContainer::GetCookieHeader(::System::Uri*  uri)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"GetCookieHeader", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri);
}
inline ::StringW System::Net::CookieContainer::GetCookieHeader(::System::Uri*  uri, ::by_ref<::StringW>  optCookie2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"GetCookieHeader", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri, optCookie2);
}
inline void System::Net::CookieContainer::SetCookies(::System::Uri*  uri, ::StringW  cookieHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::CookieContainer*>(),
                        {"SetCookies", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, cookieHeader);
}
inline ::System::Net::CookieContainer* System::Net::CookieContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieContainer*>());
}
inline ::System::Net::CookieContainer* System::Net::CookieContainer::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieContainer*>(capacity));
}
inline ::System::Net::CookieContainer* System::Net::CookieContainer::New_ctor(int32_t  capacity, int32_t  perDomainCapacity, int32_t  maxCookieSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieContainer*>(capacity, perDomainCapacity, maxCookieSize));
}
// Ctor Parameters []
constexpr ::System::Net::CookieContainer::CookieContainer()   {
}
