#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ServiceNameCollection.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_impl.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ServiceNameCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::*)(::System::Collections::ICollection*)>(&::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::_ctor)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xad305a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection.AddIfNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::ArrayList*, ::StringW)>(&::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::AddIfNew)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xad308d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"AddIfNew", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Collections::ICollection*)>(&::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::Contains)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xad30d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection.NormalizeServiceName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::NormalizeServiceName)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xad30994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"NormalizeServiceName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection.Match
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::Match)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xad31094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"Match", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Authentication::ExtendedProtection::ServiceNameCollection::_ctor(::System::Collections::ICollection*  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
inline void System::Security::Authentication::ExtendedProtection::ServiceNameCollection::AddIfNew(::System::Collections::ArrayList*  newServiceNames, ::StringW  serviceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"AddIfNew", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newServiceNames, serviceName);
}
inline bool System::Security::Authentication::ExtendedProtection::ServiceNameCollection::Contains(::StringW  searchServiceName, ::System::Collections::ICollection*  serviceNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"Contains", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::ICollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, searchServiceName, serviceNames);
}
inline ::StringW System::Security::Authentication::ExtendedProtection::ServiceNameCollection::NormalizeServiceName(::StringW  inputServiceName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"NormalizeServiceName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inputServiceName);
}
inline bool System::Security::Authentication::ExtendedProtection::ServiceNameCollection::Match(::StringW  serviceName1, ::StringW  serviceName2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(),
                        {"Match", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, serviceName1, serviceName2);
}
inline ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* System::Security::Authentication::ExtendedProtection::ServiceNameCollection::New_ctor(::System::Collections::ICollection*  items)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*>(items));
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection::ServiceNameCollection()   {
}
