#pragma once
// IWYU pragma private; include "GlobalNamespace/SWIGTYPE_p_std__string.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SWIGTYPE_p_std__string_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SWIGTYPE_p_std__string._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SWIGTYPE_p_std__string::*)(::System::IntPtr, bool)>(&::GlobalNamespace::SWIGTYPE_p_std__string::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x535aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SWIGTYPE_p_std__string._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SWIGTYPE_p_std__string::*)()>(&::GlobalNamespace::SWIGTYPE_p_std__string::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x535ab18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SWIGTYPE_p_std__string.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SWIGTYPE_p_std__string*)>(&::GlobalNamespace::SWIGTYPE_p_std__string::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x535ab64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__string*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SWIGTYPE_p_std__string.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::SWIGTYPE_p_std__string*)>(&::GlobalNamespace::SWIGTYPE_p_std__string::swigRelease)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x535aba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__string*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::SWIGTYPE_p_std__string::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::SWIGTYPE_p_std__string::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::SWIGTYPE_p_std__string::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::SWIGTYPE_p_std__string::_ctor(::System::IntPtr  cPtr, bool  futureUse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, futureUse);
}
inline void GlobalNamespace::SWIGTYPE_p_std__string::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SWIGTYPE_p_std__string::getCPtr(::GlobalNamespace::SWIGTYPE_p_std__string*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__string*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::SWIGTYPE_p_std__string::swigRelease(::GlobalNamespace::SWIGTYPE_p_std__string*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SWIGTYPE_p_std__string*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::SWIGTYPE_p_std__string*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::GlobalNamespace::SWIGTYPE_p_std__string* GlobalNamespace::SWIGTYPE_p_std__string::New_ctor(::System::IntPtr  cPtr, bool  futureUse)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SWIGTYPE_p_std__string*>(cPtr, futureUse));
}
inline ::GlobalNamespace::SWIGTYPE_p_std__string* GlobalNamespace::SWIGTYPE_p_std__string::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SWIGTYPE_p_std__string*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SWIGTYPE_p_std__string::SWIGTYPE_p_std__string()   {
}
