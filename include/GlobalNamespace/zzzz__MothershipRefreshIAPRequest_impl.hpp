#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipRefreshIAPRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipRefreshIAPRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipRefreshIAPRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipRefreshIAPRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipRefreshIAPRequest::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x52b4d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipRefreshIAPRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipRefreshIAPRequest*)>(&::GlobalNamespace::MothershipRefreshIAPRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52b4e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipRefreshIAPRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipRefreshIAPRequest*)>(&::GlobalNamespace::MothershipRefreshIAPRequest::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x52b4e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipRefreshIAPRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipRefreshIAPRequest::*)(bool)>(&::GlobalNamespace::MothershipRefreshIAPRequest::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x52b4ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipRefreshIAPRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::MothershipRefreshIAPRequest::*)()>(&::GlobalNamespace::MothershipRefreshIAPRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52b5040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipRefreshIAPRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipRefreshIAPRequest::*)()>(&::GlobalNamespace::MothershipRefreshIAPRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x52b514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipRefreshIAPRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipRefreshIAPRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipRefreshIAPRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::MothershipRefreshIAPRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipRefreshIAPRequest::getCPtr(::GlobalNamespace::MothershipRefreshIAPRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipRefreshIAPRequest::swigRelease(::GlobalNamespace::MothershipRefreshIAPRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipRefreshIAPRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::MothershipRefreshIAPRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::MothershipRefreshIAPRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipRefreshIAPRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MothershipRefreshIAPRequest* GlobalNamespace::MothershipRefreshIAPRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipRefreshIAPRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipRefreshIAPRequest* GlobalNamespace::MothershipRefreshIAPRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipRefreshIAPRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipRefreshIAPRequest::MothershipRefreshIAPRequest()   {
}
