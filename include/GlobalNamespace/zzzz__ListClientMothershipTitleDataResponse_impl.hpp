#pragma once
// IWYU pragma private; include "GlobalNamespace/ListClientMothershipTitleDataResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__ListClientMothershipTitleDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__TitleDataShortVector_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListClientMothershipTitleDataResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5450a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ListClientMothershipTitleDataResponse*)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5450abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::ListClientMothershipTitleDataResponse*)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5450afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListClientMothershipTitleDataResponse::*)(bool)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5450b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.set_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListClientMothershipTitleDataResponse::*)(::GlobalNamespace::TitleDataShortVector*)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::set_Results)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5450d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::TitleDataShortVector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.get_Results
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TitleDataShortVector* (::GlobalNamespace::ListClientMothershipTitleDataResponse::*)()>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::get_Results)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5450df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"get_Results", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ListClientMothershipTitleDataResponse::*)(::StringW)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5450f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ListClientMothershipTitleDataResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5450fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListClientMothershipTitleDataResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListClientMothershipTitleDataResponse::*)()>(&::GlobalNamespace::ListClientMothershipTitleDataResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x54510fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::ListClientMothershipTitleDataResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::ListClientMothershipTitleDataResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::ListClientMothershipTitleDataResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::ListClientMothershipTitleDataResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ListClientMothershipTitleDataResponse::getCPtr(::GlobalNamespace::ListClientMothershipTitleDataResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::ListClientMothershipTitleDataResponse::swigRelease(::GlobalNamespace::ListClientMothershipTitleDataResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::ListClientMothershipTitleDataResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::ListClientMothershipTitleDataResponse::set_Results(::GlobalNamespace::TitleDataShortVector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"set_Results", {}, {::i2c::type_of<::GlobalNamespace::TitleDataShortVector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TitleDataShortVector* GlobalNamespace::ListClientMothershipTitleDataResponse::get_Results()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"get_Results", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TitleDataShortVector*>(this, ___internal_method);
}
inline bool GlobalNamespace::ListClientMothershipTitleDataResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::ListClientMothershipTitleDataResponse* GlobalNamespace::ListClientMothershipTitleDataResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::ListClientMothershipTitleDataResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ListClientMothershipTitleDataResponse* GlobalNamespace::ListClientMothershipTitleDataResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ListClientMothershipTitleDataResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::ListClientMothershipTitleDataResponse* GlobalNamespace::ListClientMothershipTitleDataResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ListClientMothershipTitleDataResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListClientMothershipTitleDataResponse::ListClientMothershipTitleDataResponse()   {
}
