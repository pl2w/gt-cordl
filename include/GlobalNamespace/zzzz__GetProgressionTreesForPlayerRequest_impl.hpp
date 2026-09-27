#pragma once
// IWYU pragma private; include "GlobalNamespace/GetProgressionTreesForPlayerRequest.hpp"
#include "GlobalNamespace/zzzz__MothershipRequestShared_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerRequest_def.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)(::System::IntPtr, bool)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x541e5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetProgressionTreesForPlayerRequest*)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x541e65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::GetProgressionTreesForPlayerRequest*)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x541e69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)(bool)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x541e738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.set_player_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::set_player_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541e8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_player_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.get_player_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)()>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::get_player_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541e97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_player_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.set_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::set_title_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541ea50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.get_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)()>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::get_title_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541eb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_title_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.set_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::set_env_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.get_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)()>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::get_env_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541ecd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_env_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.set_deployment_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)(::StringW)>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::set_deployment_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x541eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_deployment_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.get_deployment_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)()>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::get_deployment_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x541ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_deployment_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest.ToHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)()>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::ToHttpRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x541ef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                    {::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GetProgressionTreesForPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GetProgressionTreesForPlayerRequest::*)()>(&::GlobalNamespace::GetProgressionTreesForPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x541f060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::GetProgressionTreesForPlayerRequest::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::GetProgressionTreesForPlayerRequest::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::GetProgressionTreesForPlayerRequest::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetProgressionTreesForPlayerRequest::getCPtr(::GlobalNamespace::GetProgressionTreesForPlayerRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::GetProgressionTreesForPlayerRequest::swigRelease(::GlobalNamespace::GetProgressionTreesForPlayerRequest*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::set_player_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_player_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreesForPlayerRequest::get_player_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_player_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::set_title_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreesForPlayerRequest::get_title_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_title_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::set_env_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreesForPlayerRequest::get_env_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_env_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::set_deployment_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"set_deployment_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GetProgressionTreesForPlayerRequest::get_deployment_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {"get_deployment_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t* GlobalNamespace::GetProgressionTreesForPlayerRequest::ToHttpRequest()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SWIGTYPE_p_std__shared_ptrT_MothershipApi__MothershipHTTPRequest_t*>(this, ___internal_method);
}
inline void GlobalNamespace::GetProgressionTreesForPlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GetProgressionTreesForPlayerRequest* GlobalNamespace::GetProgressionTreesForPlayerRequest::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::GetProgressionTreesForPlayerRequest* GlobalNamespace::GetProgressionTreesForPlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GetProgressionTreesForPlayerRequest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GetProgressionTreesForPlayerRequest::GetProgressionTreesForPlayerRequest()   {
}
