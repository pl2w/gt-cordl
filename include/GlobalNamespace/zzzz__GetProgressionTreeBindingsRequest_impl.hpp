#pragma once
// IWYU pragma private; include "GlobalNamespace/GetProgressionTreeBindingsRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequest_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreeBindingsRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x541c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetProgressionTreeBindingsRequest*)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x541c288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetProgressionTreeBindingsRequest*)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x541c2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)(bool)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x541c364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)()>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x541c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.set_titleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::set_titleId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541c5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_titleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.get_titleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)()>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::get_titleId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541c6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_titleId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.set_envId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::set_envId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_envId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.get_envId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)()>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::get_envId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_envId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.set_deploymentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::set_deploymentId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541c934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_deploymentId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.get_deploymentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)()>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::get_deploymentId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541ca0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_deploymentId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.set_treeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::set_treeId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_treeId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest.get_treeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)()>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::get_treeId)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541cbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_treeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreeBindingsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreeBindingsRequest::*)()>(&::GlobalNamespace::GetProgressionTreeBindingsRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x541cc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GetProgressionTreeBindingsRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GetProgressionTreeBindingsRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GetProgressionTreeBindingsRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetProgressionTreeBindingsRequest::getCPtr(::GlobalNamespace::GetProgressionTreeBindingsRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetProgressionTreeBindingsRequest::swigRelease(::GlobalNamespace::GetProgressionTreeBindingsRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::GetProgressionTreeBindingsRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::set_titleId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_titleId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreeBindingsRequest::get_titleId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_titleId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::set_envId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_envId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreeBindingsRequest::get_envId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_envId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::set_deploymentId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_deploymentId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreeBindingsRequest::get_deploymentId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_deploymentId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::set_treeId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"set_treeId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreeBindingsRequest::get_treeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {"get_treeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreeBindingsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetProgressionTreeBindingsRequest* GlobalNamespace::GetProgressionTreeBindingsRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetProgressionTreeBindingsRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GetProgressionTreeBindingsRequest* GlobalNamespace::GetProgressionTreeBindingsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetProgressionTreeBindingsRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetProgressionTreeBindingsRequest::GetProgressionTreeBindingsRequest()   {
}
