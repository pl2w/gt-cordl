#pragma once
// IWYU pragma private; include "Oculus/Platform/CAPI_ovrKeyValuePair.hpp"
#include "Oculus/Platform/zzzz__KeyValuePairType_impl.hpp"
#include "Oculus/Platform/zzzz__CAPI_ovrKeyValuePair_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CAPI_ovrKeyValuePair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CAPI_ovrKeyValuePair::*)(::StringW, ::StringW)>(&::GlobalNamespace::CAPI_ovrKeyValuePair::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa51c0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CAPI_ovrKeyValuePair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CAPI_ovrKeyValuePair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CAPI_ovrKeyValuePair::*)(::StringW, int32_t)>(&::GlobalNamespace::CAPI_ovrKeyValuePair::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa51bb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CAPI_ovrKeyValuePair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CAPI_ovrKeyValuePair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CAPI_ovrKeyValuePair::*)(::StringW, double_t)>(&::GlobalNamespace::CAPI_ovrKeyValuePair::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa51c0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CAPI_ovrKeyValuePair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CAPI_ovrKeyValuePair::_ctor(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CAPI_ovrKeyValuePair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
inline void GlobalNamespace::CAPI_ovrKeyValuePair::_ctor(::StringW  key, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CAPI_ovrKeyValuePair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
inline void GlobalNamespace::CAPI_ovrKeyValuePair::_ctor(::StringW  key, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CAPI_ovrKeyValuePair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "valueType_", ty: "::Oculus::Platform::KeyValuePairType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CAPI_ovrKeyValuePair::CAPI_ovrKeyValuePair(::StringW  key_, ::Oculus::Platform::KeyValuePairType  valueType_, ::StringW  stringValue_, int32_t  intValue_, double_t  doubleValue_) noexcept  {
this->key_ = key_;
this->valueType_ = valueType_;
this->stringValue_ = stringValue_;
this->intValue_ = intValue_;
this->doubleValue_ = doubleValue_;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CAPI_ovrKeyValuePair::CAPI_ovrKeyValuePair()   {
}
