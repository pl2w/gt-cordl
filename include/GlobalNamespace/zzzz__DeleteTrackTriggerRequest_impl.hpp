#pragma once
// IWYU pragma private; include "GlobalNamespace/DeleteTrackTriggerRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__DeleteTrackTriggerRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::DeleteTrackTriggerRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53ede7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::DeleteTrackTriggerRequest*)>(&::GlobalNamespace::DeleteTrackTriggerRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x53edf30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::DeleteTrackTriggerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::DeleteTrackTriggerRequest*)>(&::GlobalNamespace::DeleteTrackTriggerRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53edf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::DeleteTrackTriggerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)(bool)>(&::GlobalNamespace::DeleteTrackTriggerRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53ee00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::DeleteTrackTriggerRequest::*)()>(&::GlobalNamespace::DeleteTrackTriggerRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x53ee178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.set_titleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)(::StringW)>(&::GlobalNamespace::DeleteTrackTriggerRequest::set_titleId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ee284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_titleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.get_titleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeleteTrackTriggerRequest::*)()>(&::GlobalNamespace::DeleteTrackTriggerRequest::get_titleId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ee35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_titleId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.set_envId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)(::StringW)>(&::GlobalNamespace::DeleteTrackTriggerRequest::set_envId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ee430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_envId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.get_envId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeleteTrackTriggerRequest::*)()>(&::GlobalNamespace::DeleteTrackTriggerRequest::get_envId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ee508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_envId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.set_trackId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)(::StringW)>(&::GlobalNamespace::DeleteTrackTriggerRequest::set_trackId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ee5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_trackId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.get_trackId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeleteTrackTriggerRequest::*)()>(&::GlobalNamespace::DeleteTrackTriggerRequest::get_trackId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ee6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_trackId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.set_triggerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)(::StringW)>(&::GlobalNamespace::DeleteTrackTriggerRequest::set_triggerId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53ee788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_triggerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest.get_triggerId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DeleteTrackTriggerRequest::*)()>(&::GlobalNamespace::DeleteTrackTriggerRequest::get_triggerId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x53ee860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_triggerId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeleteTrackTriggerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeleteTrackTriggerRequest::*)()>(&::GlobalNamespace::DeleteTrackTriggerRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x53ee934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::DeleteTrackTriggerRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::DeleteTrackTriggerRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::DeleteTrackTriggerRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::DeleteTrackTriggerRequest::getCPtr(::GlobalNamespace::DeleteTrackTriggerRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::DeleteTrackTriggerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::DeleteTrackTriggerRequest::swigRelease(::GlobalNamespace::DeleteTrackTriggerRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::DeleteTrackTriggerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::DeleteTrackTriggerRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::set_titleId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_titleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DeleteTrackTriggerRequest::get_titleId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_titleId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::set_envId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_envId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DeleteTrackTriggerRequest::get_envId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_envId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::set_trackId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_trackId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DeleteTrackTriggerRequest::get_trackId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_trackId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::set_triggerId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"set_triggerId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DeleteTrackTriggerRequest::get_triggerId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {"get_triggerId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DeleteTrackTriggerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DeleteTrackTriggerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeleteTrackTriggerRequest* GlobalNamespace::DeleteTrackTriggerRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeleteTrackTriggerRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::DeleteTrackTriggerRequest* GlobalNamespace::DeleteTrackTriggerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeleteTrackTriggerRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeleteTrackTriggerRequest::DeleteTrackTriggerRequest()   {
}
