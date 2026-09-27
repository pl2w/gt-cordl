#pragma once
// IWYU pragma private; include "System/Net/DownloadProgressChangedEventArgs.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_impl.hpp"
#include "System/Net/zzzz__DownloadProgressChangedEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::DownloadProgressChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DownloadProgressChangedEventArgs::*)(int32_t, ::System::Object*, int64_t, int64_t)>(&::System::Net::DownloadProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac4f944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DownloadProgressChangedEventArgs.get_BytesReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::DownloadProgressChangedEventArgs::*)()>(&::System::Net::DownloadProgressChangedEventArgs::get_BytesReceived)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {"get_BytesReceived", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DownloadProgressChangedEventArgs.get_TotalBytesToReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::DownloadProgressChangedEventArgs::*)()>(&::System::Net::DownloadProgressChangedEventArgs::get_TotalBytesToReceive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {"get_TotalBytesToReceive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::DownloadProgressChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::DownloadProgressChangedEventArgs::*)()>(&::System::Net::DownloadProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac54a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& System::Net::DownloadProgressChangedEventArgs::__cordl_internal_get__BytesReceived_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesReceived_k__BackingField;
}
constexpr int64_t const& System::Net::DownloadProgressChangedEventArgs::__cordl_internal_get__BytesReceived_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesReceived_k__BackingField;
}
constexpr void System::Net::DownloadProgressChangedEventArgs::__cordl_internal_set__BytesReceived_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BytesReceived_k__BackingField = value;
}
constexpr int64_t& System::Net::DownloadProgressChangedEventArgs::__cordl_internal_get__TotalBytesToReceive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesToReceive_k__BackingField;
}
constexpr int64_t const& System::Net::DownloadProgressChangedEventArgs::__cordl_internal_get__TotalBytesToReceive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesToReceive_k__BackingField;
}
constexpr void System::Net::DownloadProgressChangedEventArgs::__cordl_internal_set__TotalBytesToReceive_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalBytesToReceive_k__BackingField = value;
}
inline void System::Net::DownloadProgressChangedEventArgs::_ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesReceived, int64_t  totalBytesToReceive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progressPercentage, userToken, bytesReceived, totalBytesToReceive);
}
inline int64_t System::Net::DownloadProgressChangedEventArgs::get_BytesReceived()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {"get_BytesReceived", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::DownloadProgressChangedEventArgs::get_TotalBytesToReceive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {"get_TotalBytesToReceive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::DownloadProgressChangedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::DownloadProgressChangedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::DownloadProgressChangedEventArgs* System::Net::DownloadProgressChangedEventArgs::New_ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesReceived, int64_t  totalBytesToReceive)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DownloadProgressChangedEventArgs*>(progressPercentage, userToken, bytesReceived, totalBytesToReceive));
}
inline ::System::Net::DownloadProgressChangedEventArgs* System::Net::DownloadProgressChangedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::DownloadProgressChangedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::DownloadProgressChangedEventArgs::DownloadProgressChangedEventArgs()   {
}
