#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/WebRpcResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebRpcResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcResponse::*)(::StringW)>(&::Fusion::Photon::Realtime::WebRpcResponse::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f68464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.get_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::get_ResultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_ResultCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.set_ResultCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcResponse::*)(int32_t)>(&::Fusion::Photon::Realtime::WebRpcResponse::set_ResultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f68474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_ResultCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.get_ReturnCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::get_ReturnCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_ReturnCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f68484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcResponse::*)(::StringW)>(&::Fusion::Photon::Realtime::WebRpcResponse::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.get_DebugMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::get_DebugMessage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f68494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_DebugMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_Parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.set_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcResponse::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*)>(&::Fusion::Photon::Realtime::WebRpcResponse::set_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f684a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_Parameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::WebRpcResponse::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::Fusion::Photon::Realtime::WebRpcResponse::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5f684ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::WebRpcResponse.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::WebRpcResponse::*)()>(&::Fusion::Photon::Realtime::WebRpcResponse::ToStringFull)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5f68670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr int32_t& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__ResultCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultCode_k__BackingField;
}
constexpr int32_t const& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__ResultCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultCode_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_set__ResultCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultCode_k__BackingField = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__Message_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr ::StringW const& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__Message_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Message_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_set__Message_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Message_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__Parameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_get__Parameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::WebRpcResponse::__cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parameters_k__BackingField = value;
}
inline ::StringW Fusion::Photon::Realtime::WebRpcResponse::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::WebRpcResponse::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::WebRpcResponse::get_ResultCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_ResultCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::WebRpcResponse::set_ResultCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_ResultCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::WebRpcResponse::get_ReturnCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_ReturnCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::WebRpcResponse::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::WebRpcResponse::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::WebRpcResponse::get_DebugMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_DebugMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* Fusion::Photon::Realtime::WebRpcResponse::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"get_Parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::WebRpcResponse::set_Parameters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"set_Parameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::WebRpcResponse::_ctor(::ExitGames::Client::Photon::OperationResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::OperationResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline ::StringW Fusion::Photon::Realtime::WebRpcResponse::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::WebRpcResponse*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::WebRpcResponse* Fusion::Photon::Realtime::WebRpcResponse::New_ctor(::ExitGames::Client::Photon::OperationResponse*  response)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::WebRpcResponse*>(response));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::WebRpcResponse::WebRpcResponse()   {
}
