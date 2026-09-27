#pragma once
// IWYU pragma private; include "GlobalNamespace/ClientGetPermissionsResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__ClientGetPermissionsResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientGetPermissionsResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::ClientGetPermissionsResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x527bccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ClientGetPermissionsResponse*)>(&::GlobalNamespace::ClientGetPermissionsResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x527bd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ClientGetPermissionsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ClientGetPermissionsResponse*)>(&::GlobalNamespace::ClientGetPermissionsResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x527bdc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ClientGetPermissionsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientGetPermissionsResponse::*)(bool)>(&::GlobalNamespace::ClientGetPermissionsResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x527be5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ClientGetPermissionsResponse::*)(::StringW)>(&::GlobalNamespace::ClientGetPermissionsResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x527bfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ClientGetPermissionsResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::ClientGetPermissionsResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x527c0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientGetPermissionsResponse::*)(::GlobalNamespace::StringVector*)>(&::GlobalNamespace::ClientGetPermissionsResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x527c1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StringVector* (::GlobalNamespace::ClientGetPermissionsResponse::*)()>(&::GlobalNamespace::ClientGetPermissionsResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x527c2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.set_Warnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientGetPermissionsResponse::*)(::StringW)>(&::GlobalNamespace::ClientGetPermissionsResponse::set_Warnings)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x527c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"set_Warnings", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse.get_Warnings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ClientGetPermissionsResponse::*)()>(&::GlobalNamespace::ClientGetPermissionsResponse::get_Warnings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x527c498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"get_Warnings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClientGetPermissionsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClientGetPermissionsResponse::*)()>(&::GlobalNamespace::ClientGetPermissionsResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x527c56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::ClientGetPermissionsResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::ClientGetPermissionsResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::ClientGetPermissionsResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::ClientGetPermissionsResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ClientGetPermissionsResponse::getCPtr(::GlobalNamespace::ClientGetPermissionsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ClientGetPermissionsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ClientGetPermissionsResponse::swigRelease(::GlobalNamespace::ClientGetPermissionsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ClientGetPermissionsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ClientGetPermissionsResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::ClientGetPermissionsResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::ClientGetPermissionsResponse* GlobalNamespace::ClientGetPermissionsResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ClientGetPermissionsResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::ClientGetPermissionsResponse::set_Results(::GlobalNamespace::StringVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StringVector* GlobalNamespace::ClientGetPermissionsResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StringVector*>(this, ___internal_method);
}
inline void GlobalNamespace::ClientGetPermissionsResponse::set_Warnings(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"set_Warnings", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::ClientGetPermissionsResponse::get_Warnings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {"get_Warnings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::ClientGetPermissionsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClientGetPermissionsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ClientGetPermissionsResponse* GlobalNamespace::ClientGetPermissionsResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClientGetPermissionsResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::ClientGetPermissionsResponse* GlobalNamespace::ClientGetPermissionsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClientGetPermissionsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClientGetPermissionsResponse::ClientGetPermissionsResponse()   {
}
