#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocketReceiveResult.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketReceiveResult::*)(int32_t, ::System::Net::WebSockets::WebSocketMessageType, bool)>(&::System::Net::WebSockets::WebSocketReceiveResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xace86a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocketReceiveResult::*)(int32_t, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>, ::StringW)>(&::System::Net::WebSockets::WebSocketReceiveResult::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xace873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(&::System::Net::WebSockets::WebSocketReceiveResult::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf2ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_EndOfMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(&::System::Net::WebSockets::WebSocketReceiveResult::get_EndOfMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf2acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_EndOfMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_MessageType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketMessageType (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(&::System::Net::WebSockets::WebSocketReceiveResult::get_MessageType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf2ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_MessageType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_CloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(&::System::Net::WebSockets::WebSocketReceiveResult::get_CloseStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf2adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_CloseStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocketReceiveResult.get_CloseStatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebSockets::WebSocketReceiveResult::*)()>(&::System::Net::WebSockets::WebSocketReceiveResult::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacf2ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_CloseStatusDescription", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__Count_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr int32_t const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__Count_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Count_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__Count_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Count_k__BackingField = value;
}
constexpr bool& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__EndOfMessage_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndOfMessage_k__BackingField;
}
constexpr bool const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__EndOfMessage_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndOfMessage_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__EndOfMessage_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndOfMessage_k__BackingField = value;
}
constexpr ::System::Net::WebSockets::WebSocketMessageType& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__MessageType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MessageType_k__BackingField;
}
constexpr ::System::Net::WebSockets::WebSocketMessageType const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__MessageType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MessageType_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__MessageType_k__BackingField(::System::Net::WebSockets::WebSocketMessageType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MessageType_k__BackingField = value;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatus_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseStatus_k__BackingField;
}
constexpr ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatus_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseStatus_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__CloseStatus_k__BackingField(::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloseStatus_k__BackingField = value;
}
constexpr ::StringW& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatusDescription_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseStatusDescription_k__BackingField;
}
constexpr ::StringW const& System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_get__CloseStatusDescription_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CloseStatusDescription_k__BackingField;
}
constexpr void System::Net::WebSockets::WebSocketReceiveResult::__cordl_internal_set__CloseStatusDescription_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CloseStatusDescription_k__BackingField = value;
}
inline void System::Net::WebSockets::WebSocketReceiveResult::_ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, messageType, endOfMessage);
}
inline void System::Net::WebSockets::WebSocketReceiveResult::_ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeStatusDescription)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count, messageType, endOfMessage, closeStatus, closeStatusDescription);
}
inline int32_t System::Net::WebSockets::WebSocketReceiveResult::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Net::WebSockets::WebSocketReceiveResult::get_EndOfMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_EndOfMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketMessageType System::Net::WebSockets::WebSocketReceiveResult::get_MessageType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_MessageType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketMessageType>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> System::Net::WebSockets::WebSocketReceiveResult::get_CloseStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_CloseStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::WebSocketReceiveResult::get_CloseStatusDescription()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocketReceiveResult*>(),
                        {"get_CloseStatusDescription", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketReceiveResult* System::Net::WebSockets::WebSocketReceiveResult::New_ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::WebSocketReceiveResult*>(count, messageType, endOfMessage));
}
inline ::System::Net::WebSockets::WebSocketReceiveResult* System::Net::WebSockets::WebSocketReceiveResult::New_ctor(int32_t  count, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>  closeStatus, ::StringW  closeStatusDescription)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::WebSocketReceiveResult*>(count, messageType, endOfMessage, closeStatus, closeStatusDescription));
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocketReceiveResult::WebSocketReceiveResult()   {
}
