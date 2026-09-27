#pragma once
// IWYU pragma private; include "UnityEngine/Localization/PropertyVariants/TrackedObjects/JsonSerializerTrackedObject_ArrayResult.hpp"
#include "UnityEngine/Localization/PropertyVariants/TrackedObjects/zzzz__JsonSerializerTrackedObject_ArrayResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult.get_IsArraySize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::*)()>(&::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::get_IsArraySize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb0562b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {"get_IsArraySize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult.get_IsArrayElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::*)()>(&::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::get_IsArrayElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb05649c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {"get_IsArrayElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult.GetDataIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::*)()>(&::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::GetDataIndex)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb0562d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {"GetDataIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::*)(::StringW, int32_t, int32_t, int32_t)>(&::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb056278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::get_IsArraySize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {"get_IsArraySize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::get_IsArrayElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {"get_IsArrayElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::GetDataIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {"GetDataIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::_ctor(::StringW  p, int32_t  start, int32_t  bracketStart, int32_t  bracketEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p, start, bracketStart, bracketEnd);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "arrayStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "arrayDataIndexStart", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "arrayDataIndexEnd", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::JsonSerializerTrackedObject_ArrayResult(::StringW  path, int32_t  arrayStartIndex, int32_t  arrayDataIndexStart, int32_t  arrayDataIndexEnd) noexcept  {
this->path = path;
this->arrayStartIndex = arrayStartIndex;
this->arrayDataIndexStart = arrayDataIndexStart;
this->arrayDataIndexEnd = arrayDataIndexEnd;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JsonSerializerTrackedObject_ArrayResult::JsonSerializerTrackedObject_ArrayResult()   {
}
