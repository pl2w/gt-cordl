#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_ErrorInfo.hpp"
#include "GlobalNamespace/zzzz__Interop_Error_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_ErrorInfo_def.hpp"
#include "GlobalNamespace/zzzz__Interop_Error_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Interop_ErrorInfo::*)(int32_t)>(&::GlobalNamespace::Interop_ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa10cc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Interop_ErrorInfo::*)(::GlobalNamespace::Interop_Error)>(&::GlobalNamespace::Interop_ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa10cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Interop_Error>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Interop_Error (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa10cc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.get_RawErrno
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::get_RawErrno)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa10cacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {"get_RawErrno", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.GetErrorMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::GetErrorMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa10cb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {"GetErrorMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::ToString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa10cd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                    {::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop_ErrorInfo::_ctor(int32_t  _cordl_errno)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, _cordl_errno);
}
inline void GlobalNamespace::Interop_ErrorInfo::_ctor(::GlobalNamespace::Interop_Error  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Interop_Error>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, error);
}
inline ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_ErrorInfo::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_Error>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_ErrorInfo::get_RawErrno()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {"get_RawErrno", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Interop_ErrorInfo::GetErrorMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(),
                        {"GetErrorMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::Interop_ErrorInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Interop_ErrorInfo>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_error", ty: "::GlobalNamespace::Interop_Error", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Interop_ErrorInfo::Interop_ErrorInfo(::GlobalNamespace::Interop_Error  _error, int32_t  _rawErrno) noexcept  {
this->_error = _error;
this->_rawErrno = _rawErrno;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_ErrorInfo::Interop_ErrorInfo()   {
}
