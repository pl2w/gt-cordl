#pragma once
// IWYU pragma private; include "GlobalNamespace/NotificationsMessageResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketMessage_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__NotificationsMessageResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketMessage_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotificationsMessageResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::NotificationsMessageResponse::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x52db848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::NotificationsMessageResponse*)>(&::GlobalNamespace::NotificationsMessageResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52db8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::NotificationsMessageResponse*)>(&::GlobalNamespace::NotificationsMessageResponse::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52db938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotificationsMessageResponse::*)(bool)>(&::GlobalNamespace::NotificationsMessageResponse::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x52db9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.set_Title
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotificationsMessageResponse::*)(::StringW)>(&::GlobalNamespace::NotificationsMessageResponse::set_Title)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52dbb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"set_Title", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.get_Title
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NotificationsMessageResponse::*)()>(&::GlobalNamespace::NotificationsMessageResponse::get_Title)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52dbc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"get_Title", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.set_Body
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotificationsMessageResponse::*)(::StringW)>(&::GlobalNamespace::NotificationsMessageResponse::set_Body)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52dbcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"set_Body", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.get_Body
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NotificationsMessageResponse::*)()>(&::GlobalNamespace::NotificationsMessageResponse::get_Body)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52dbdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"get_Body", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.set_RecipientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotificationsMessageResponse::*)(::StringW)>(&::GlobalNamespace::NotificationsMessageResponse::set_RecipientId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52dbe84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"set_RecipientId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.get_RecipientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NotificationsMessageResponse::*)()>(&::GlobalNamespace::NotificationsMessageResponse::get_RecipientId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52dbf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"get_RecipientId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.ParseFromMessageString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NotificationsMessageResponse::*)(::StringW)>(&::GlobalNamespace::NotificationsMessageResponse::ParseFromMessageString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x52dc030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse.FromWebSocketMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NotificationsMessageResponse* (*)(::GlobalNamespace::MothershipWebSocketMessage*)>(&::GlobalNamespace::NotificationsMessageResponse::FromWebSocketMessage)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52dc114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"FromWebSocketMessage", {}, {::i2c::type_of<::GlobalNamespace::MothershipWebSocketMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NotificationsMessageResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NotificationsMessageResponse::*)()>(&::GlobalNamespace::NotificationsMessageResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52dc228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::NotificationsMessageResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::NotificationsMessageResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::NotificationsMessageResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::NotificationsMessageResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::NotificationsMessageResponse::getCPtr(::GlobalNamespace::NotificationsMessageResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::NotificationsMessageResponse::swigRelease(::GlobalNamespace::NotificationsMessageResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::NotificationsMessageResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::NotificationsMessageResponse::set_Title(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"set_Title", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::NotificationsMessageResponse::get_Title()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"get_Title", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NotificationsMessageResponse::set_Body(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"set_Body", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::NotificationsMessageResponse::get_Body()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"get_Body", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NotificationsMessageResponse::set_RecipientId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"set_RecipientId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::NotificationsMessageResponse::get_RecipientId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"get_RecipientId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::NotificationsMessageResponse::ParseFromMessageString(::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline ::GlobalNamespace::NotificationsMessageResponse* GlobalNamespace::NotificationsMessageResponse::FromWebSocketMessage(::GlobalNamespace::MothershipWebSocketMessage*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {"FromWebSocketMessage", {}, {::i2c::type_of<::GlobalNamespace::MothershipWebSocketMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NotificationsMessageResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::NotificationsMessageResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NotificationsMessageResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NotificationsMessageResponse* GlobalNamespace::NotificationsMessageResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NotificationsMessageResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::NotificationsMessageResponse* GlobalNamespace::NotificationsMessageResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NotificationsMessageResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NotificationsMessageResponse::NotificationsMessageResponse()   {
}
