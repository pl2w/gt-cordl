#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Breadcrumbs/InMemory/InMemoryBreadcrumb.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/InMemory/zzzz__InMemoryBreadcrumb_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__BreadcrumbLevel_def.hpp"
#include "Backtrace/Unity/Model/Breadcrumbs/zzzz__UnityEngineLogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f20534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)(::StringW)>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.get_Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Timestamp)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f20544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Timestamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.set_Timestamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)(double_t)>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Timestamp)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f20210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Timestamp", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Type)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f205a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Type)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f20398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Type", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.get_Level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Level)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f20678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Level", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb.set_Level
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel)>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Level)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f202ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Level", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::*)()>(&::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f20208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_timestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timestamp;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_timestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timestamp;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_set_timestamp(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timestamp = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_set_type(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::StringW& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr ::StringW const& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_set_level(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___level = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_Attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_get_Attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attributes;
}
constexpr void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::__cordl_internal_set_Attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attributes = value;
}
inline ::StringW Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Timestamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Timestamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Timestamp(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Timestamp", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Type(::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Type", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::BreadcrumbLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::get_Level()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"get_Level", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>(this, ___internal_method);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::set_Level(::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {"set_Level", {}, {::i2c::type_of<::Backtrace::Unity::Model::Breadcrumbs::UnityEngineLogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb* Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb*>());
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Model::Breadcrumbs::InMemory::InMemoryBreadcrumb::InMemoryBreadcrumb()   {
}
