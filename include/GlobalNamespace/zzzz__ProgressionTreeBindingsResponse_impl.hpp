#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionTreeBindingsResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__ProgressionTreeBindingsResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__ProgressionTreeBindingVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionTreeBindingsResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5303a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ProgressionTreeBindingsResponse*)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5303ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ProgressionTreeBindingsResponse*)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5303af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionTreeBindingsResponse::*)(bool)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5303b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProgressionTreeBindingsResponse::*)(::StringW)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5303cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTreeBindingsResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5303de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionTreeBindingsResponse::*)(::GlobalNamespace::ProgressionTreeBindingVector*)>(&::GlobalNamespace::ProgressionTreeBindingsResponse::set_Results)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5303ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTreeBindingVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProgressionTreeBindingVector* (::GlobalNamespace::ProgressionTreeBindingsResponse::*)()>(&::GlobalNamespace::ProgressionTreeBindingsResponse::get_Results)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5304024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProgressionTreeBindingsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProgressionTreeBindingsResponse::*)()>(&::GlobalNamespace::ProgressionTreeBindingsResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x530418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::ProgressionTreeBindingsResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::ProgressionTreeBindingsResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::ProgressionTreeBindingsResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::ProgressionTreeBindingsResponse::setStaticF_Results_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Results_name", ::GlobalNamespace::ProgressionTreeBindingsResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::ProgressionTreeBindingsResponse::getStaticF_Results_name()  {
return ::cordl_internals::getStaticField<::StringW, "Results_name", ::GlobalNamespace::ProgressionTreeBindingsResponse*>();
}
inline void GlobalNamespace::ProgressionTreeBindingsResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ProgressionTreeBindingsResponse::getCPtr(::GlobalNamespace::ProgressionTreeBindingsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ProgressionTreeBindingsResponse::swigRelease(::GlobalNamespace::ProgressionTreeBindingsResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ProgressionTreeBindingsResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::ProgressionTreeBindingsResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::ProgressionTreeBindingsResponse* GlobalNamespace::ProgressionTreeBindingsResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTreeBindingsResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::ProgressionTreeBindingsResponse::set_Results(::GlobalNamespace::ProgressionTreeBindingVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::ProgressionTreeBindingVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ProgressionTreeBindingVector* GlobalNamespace::ProgressionTreeBindingsResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProgressionTreeBindingVector*>(this, ___internal_method);
}
inline void GlobalNamespace::ProgressionTreeBindingsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProgressionTreeBindingsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ProgressionTreeBindingsResponse* GlobalNamespace::ProgressionTreeBindingsResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionTreeBindingsResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::ProgressionTreeBindingsResponse* GlobalNamespace::ProgressionTreeBindingsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProgressionTreeBindingsResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProgressionTreeBindingsResponse::ProgressionTreeBindingsResponse()   {
}
