#pragma once
// IWYU pragma private; include "GlobalNamespace/RemoveSharedGroupMembersRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequestShared_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__RemoveSharedGroupMembersRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53156b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RemoveSharedGroupMembersRequest*)>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5315764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::RemoveSharedGroupMembersRequest*)>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x53157a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)(bool)>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5315840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.set_sharedGroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)(::StringW)>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::set_sharedGroupId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x53159ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"set_sharedGroupId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.get_sharedGroupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)()>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::get_sharedGroupId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5315a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"get_sharedGroupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.set_mothershipIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)(::GlobalNamespace::StringVector*)>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::set_mothershipIds)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5315b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"set_mothershipIds", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.get_mothershipIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringVector* (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)()>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::get_mothershipIds)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5315c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"get_mothershipIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)()>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5315d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RemoveSharedGroupMembersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RemoveSharedGroupMembersRequest::*)()>(&::GlobalNamespace::RemoveSharedGroupMembersRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5315e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::RemoveSharedGroupMembersRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::RemoveSharedGroupMembersRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::RemoveSharedGroupMembersRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::RemoveSharedGroupMembersRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RemoveSharedGroupMembersRequest::getCPtr(::GlobalNamespace::RemoveSharedGroupMembersRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::RemoveSharedGroupMembersRequest::swigRelease(::GlobalNamespace::RemoveSharedGroupMembersRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::RemoveSharedGroupMembersRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::RemoveSharedGroupMembersRequest::set_sharedGroupId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"set_sharedGroupId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RemoveSharedGroupMembersRequest::get_sharedGroupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"get_sharedGroupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RemoveSharedGroupMembersRequest::set_mothershipIds(::GlobalNamespace::StringVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"set_mothershipIds", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringVector* GlobalNamespace::RemoveSharedGroupMembersRequest::get_mothershipIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {"get_mothershipIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringVector*>(this, ___internal_method);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::RemoveSharedGroupMembersRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::RemoveSharedGroupMembersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RemoveSharedGroupMembersRequest* GlobalNamespace::RemoveSharedGroupMembersRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoveSharedGroupMembersRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::RemoveSharedGroupMembersRequest* GlobalNamespace::RemoveSharedGroupMembersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RemoveSharedGroupMembersRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest()   {
}
