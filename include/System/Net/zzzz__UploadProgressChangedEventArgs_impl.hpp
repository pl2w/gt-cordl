#pragma once
// IWYU pragma private; include "System/Net/UploadProgressChangedEventArgs.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_impl.hpp"
#include "System/Net/zzzz__UploadProgressChangedEventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::UploadProgressChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadProgressChangedEventArgs::*)(int32_t, ::System::Object*, int64_t, int64_t, int64_t, int64_t)>(&::System::Net::UploadProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xac4f904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadProgressChangedEventArgs.get_BytesReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::UploadProgressChangedEventArgs::*)()>(&::System::Net::UploadProgressChangedEventArgs::get_BytesReceived)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_BytesReceived", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadProgressChangedEventArgs.get_TotalBytesToReceive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::UploadProgressChangedEventArgs::*)()>(&::System::Net::UploadProgressChangedEventArgs::get_TotalBytesToReceive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_TotalBytesToReceive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadProgressChangedEventArgs.get_BytesSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::UploadProgressChangedEventArgs::*)()>(&::System::Net::UploadProgressChangedEventArgs::get_BytesSent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_BytesSent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadProgressChangedEventArgs.get_TotalBytesToSend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::UploadProgressChangedEventArgs::*)()>(&::System::Net::UploadProgressChangedEventArgs::get_TotalBytesToSend)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac54ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_TotalBytesToSend", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UploadProgressChangedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::UploadProgressChangedEventArgs::*)()>(&::System::Net::UploadProgressChangedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xac54ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__BytesReceived_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesReceived_k__BackingField;
}
constexpr int64_t const& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__BytesReceived_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesReceived_k__BackingField;
}
constexpr void System::Net::UploadProgressChangedEventArgs::__cordl_internal_set__BytesReceived_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BytesReceived_k__BackingField = value;
}
constexpr int64_t& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__TotalBytesToReceive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesToReceive_k__BackingField;
}
constexpr int64_t const& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__TotalBytesToReceive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesToReceive_k__BackingField;
}
constexpr void System::Net::UploadProgressChangedEventArgs::__cordl_internal_set__TotalBytesToReceive_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalBytesToReceive_k__BackingField = value;
}
constexpr int64_t& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__BytesSent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesSent_k__BackingField;
}
constexpr int64_t const& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__BytesSent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesSent_k__BackingField;
}
constexpr void System::Net::UploadProgressChangedEventArgs::__cordl_internal_set__BytesSent_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BytesSent_k__BackingField = value;
}
constexpr int64_t& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__TotalBytesToSend_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesToSend_k__BackingField;
}
constexpr int64_t const& System::Net::UploadProgressChangedEventArgs::__cordl_internal_get__TotalBytesToSend_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesToSend_k__BackingField;
}
constexpr void System::Net::UploadProgressChangedEventArgs::__cordl_internal_set__TotalBytesToSend_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalBytesToSend_k__BackingField = value;
}
inline void System::Net::UploadProgressChangedEventArgs::_ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesSent, int64_t  totalBytesToSend, int64_t  bytesReceived, int64_t  totalBytesToReceive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progressPercentage, userToken, bytesSent, totalBytesToSend, bytesReceived, totalBytesToReceive);
}
inline int64_t System::Net::UploadProgressChangedEventArgs::get_BytesReceived()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_BytesReceived", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::UploadProgressChangedEventArgs::get_TotalBytesToReceive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_TotalBytesToReceive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::UploadProgressChangedEventArgs::get_BytesSent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_BytesSent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::UploadProgressChangedEventArgs::get_TotalBytesToSend()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {"get_TotalBytesToSend", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::UploadProgressChangedEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::UploadProgressChangedEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::UploadProgressChangedEventArgs* System::Net::UploadProgressChangedEventArgs::New_ctor(int32_t  progressPercentage, ::System::Object*  userToken, int64_t  bytesSent, int64_t  totalBytesToSend, int64_t  bytesReceived, int64_t  totalBytesToReceive)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::UploadProgressChangedEventArgs*>(progressPercentage, userToken, bytesSent, totalBytesToSend, bytesReceived, totalBytesToReceive));
}
inline ::System::Net::UploadProgressChangedEventArgs* System::Net::UploadProgressChangedEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::UploadProgressChangedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::UploadProgressChangedEventArgs::UploadProgressChangedEventArgs()   {
}
