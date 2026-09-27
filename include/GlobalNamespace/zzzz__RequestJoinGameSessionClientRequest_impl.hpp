#pragma once
// IWYU pragma private; include "GlobalNamespace/RequestJoinGameSessionClientRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__RequestJoinGameSessionClientRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestJoinGameSessionClientRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53164f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RequestJoinGameSessionClientRequest*)>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53165a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RequestJoinGameSessionClientRequest*)>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53165e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestJoinGameSessionClientRequest::*)(bool)>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5316680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestJoinGameSessionClientRequest::*)(::StringW)>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::set_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53167ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RequestJoinGameSessionClientRequest::*)()>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::get_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53168c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::RequestJoinGameSessionClientRequest::*)()>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5316998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RequestJoinGameSessionClientRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RequestJoinGameSessionClientRequest::*)()>(&::GlobalNamespace::RequestJoinGameSessionClientRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5316aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::RequestJoinGameSessionClientRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::RequestJoinGameSessionClientRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::RequestJoinGameSessionClientRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::RequestJoinGameSessionClientRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RequestJoinGameSessionClientRequest::getCPtr(::GlobalNamespace::RequestJoinGameSessionClientRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RequestJoinGameSessionClientRequest::swigRelease(::GlobalNamespace::RequestJoinGameSessionClientRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::RequestJoinGameSessionClientRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::RequestJoinGameSessionClientRequest::set_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"set_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RequestJoinGameSessionClientRequest::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::RequestJoinGameSessionClientRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::RequestJoinGameSessionClientRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RequestJoinGameSessionClientRequest* GlobalNamespace::RequestJoinGameSessionClientRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestJoinGameSessionClientRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::RequestJoinGameSessionClientRequest* GlobalNamespace::RequestJoinGameSessionClientRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RequestJoinGameSessionClientRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RequestJoinGameSessionClientRequest::RequestJoinGameSessionClientRequest()   {
}
