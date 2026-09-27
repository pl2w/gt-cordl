#pragma once
// IWYU pragma private; include "GlobalNamespace/GetUserDataRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequestShared_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__GetUserDataRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GetUserDataRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x542fc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetUserDataRequest*)>(&::GlobalNamespace::GetUserDataRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x542fcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetUserDataRequest*)>(&::GlobalNamespace::GetUserDataRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x542fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(bool)>(&::GlobalNamespace::GetUserDataRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x542fdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x542ff40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.set_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(::StringW)>(&::GlobalNamespace::GetUserDataRequest::set_title_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x543004c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.get_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::get_title_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5430124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_title_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.set_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(::StringW)>(&::GlobalNamespace::GetUserDataRequest::set_env_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x54301f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.get_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::get_env_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54302d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_env_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.set_key_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(::StringW)>(&::GlobalNamespace::GetUserDataRequest::set_key_name)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x54303a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_key_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.get_key_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::get_key_name)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x543047c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_key_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.set_metadata_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(::StringW)>(&::GlobalNamespace::GetUserDataRequest::set_metadata_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5430550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_metadata_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.get_metadata_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::get_metadata_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5430628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_metadata_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.set_user_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)(::StringW)>(&::GlobalNamespace::GetUserDataRequest::set_user_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x54306fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_user_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest.get_user_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::get_user_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x54307d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_user_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetUserDataRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetUserDataRequest::*)()>(&::GlobalNamespace::GetUserDataRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x54308a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GetUserDataRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GetUserDataRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GetUserDataRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::GetUserDataRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetUserDataRequest::getCPtr(::GlobalNamespace::GetUserDataRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetUserDataRequest::swigRelease(::GlobalNamespace::GetUserDataRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GetUserDataRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::GetUserDataRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::GetUserDataRequest::set_title_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetUserDataRequest::get_title_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_title_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetUserDataRequest::set_env_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetUserDataRequest::get_env_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_env_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetUserDataRequest::set_key_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_key_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetUserDataRequest::get_key_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_key_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetUserDataRequest::set_metadata_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_metadata_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetUserDataRequest::get_metadata_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_metadata_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetUserDataRequest::set_user_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"set_user_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetUserDataRequest::get_user_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {"get_user_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetUserDataRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetUserDataRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetUserDataRequest* GlobalNamespace::GetUserDataRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetUserDataRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GetUserDataRequest* GlobalNamespace::GetUserDataRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetUserDataRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetUserDataRequest::GetUserDataRequest()   {
}
