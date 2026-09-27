#pragma once
// IWYU pragma private; include "System/Net/ServiceNameStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ServiceNameCollection_def.hpp"
//  Writing Method size for method: ::System::Net::ServiceNameStore.get_ServiceNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* (::System::Net::ServiceNameStore::*)()>(&::System::Net::ServiceNameStore::get_ServiceNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xac7417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"get_ServiceNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServiceNameStore::*)()>(&::System::Net::ServiceNameStore::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xac74200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.AddSingleServiceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServiceNameStore::*)(::StringW)>(&::System::Net::ServiceNameStore::AddSingleServiceName)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xac74298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"AddSingleServiceName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServiceNameStore::*)(::StringW)>(&::System::Net::ServiceNameStore::Add)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac74398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServiceNameStore::*)(::StringW)>(&::System::Net::ServiceNameStore::Remove)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xac748c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ServiceNameStore::*)(::StringW)>(&::System::Net::ServiceNameStore::Contains)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac74378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServiceNameStore::*)()>(&::System::Net::ServiceNameStore::Clear)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xac749dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.ExtractHostname
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::ServiceNameStore::*)(::StringW, bool)>(&::System::Net::ServiceNameStore::ExtractHostname)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac74a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"ExtractHostname", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.BuildSimpleServiceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::ServiceNameStore::*)(::StringW)>(&::System::Net::ServiceNameStore::BuildSimpleServiceName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xac74974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"BuildSimpleServiceName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ServiceNameStore.BuildServiceNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Net::ServiceNameStore::*)(::StringW)>(&::System::Net::ServiceNameStore::BuildServiceNames)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0xac74448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"BuildServiceNames", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::ServiceNameStore::__cordl_internal_get_serviceNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::ServiceNameStore::__cordl_internal_get_serviceNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceNames;
}
constexpr void System::Net::ServiceNameStore::__cordl_internal_set_serviceNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serviceNames = value;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*& System::Net::ServiceNameStore::__cordl_internal_get_serviceNameCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceNameCollection;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* const& System::Net::ServiceNameStore::__cordl_internal_get_serviceNameCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serviceNameCollection;
}
constexpr void System::Net::ServiceNameStore::__cordl_internal_set_serviceNameCollection(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serviceNameCollection = value;
}
inline ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* System::Net::ServiceNameStore::get_ServiceNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"get_ServiceNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(this, ___internal_method);
}
inline void System::Net::ServiceNameStore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::ServiceNameStore::AddSingleServiceName(::StringW  spn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"AddSingleServiceName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spn);
}
inline bool System::Net::ServiceNameStore::Add(::StringW  uriPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uriPrefix);
}
inline bool System::Net::ServiceNameStore::Remove(::StringW  uriPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Remove", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uriPrefix);
}
inline bool System::Net::ServiceNameStore::Contains(::StringW  newServiceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newServiceName);
}
inline void System::Net::ServiceNameStore::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::ServiceNameStore::ExtractHostname(::StringW  uriPrefix, bool  allowInvalidUriStrings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"ExtractHostname", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriPrefix, allowInvalidUriStrings);
}
inline ::StringW System::Net::ServiceNameStore::BuildSimpleServiceName(::StringW  uriPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"BuildSimpleServiceName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uriPrefix);
}
inline ::ArrayW<::StringW> System::Net::ServiceNameStore::BuildServiceNames(::StringW  uriPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ServiceNameStore*>(),
                        {"BuildServiceNames", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, uriPrefix);
}
inline ::System::Net::ServiceNameStore* System::Net::ServiceNameStore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServiceNameStore*>());
}
// Ctor Parameters []
constexpr ::System::Net::ServiceNameStore::ServiceNameStore()   {
}
