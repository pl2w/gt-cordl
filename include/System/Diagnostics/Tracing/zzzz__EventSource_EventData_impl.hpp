#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventSource_EventData.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Diagnostics/Tracing/zzzz__EventSource_EventData_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EventSource_EventData.set_DataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventSource_EventData::*)(::System::IntPtr)>(&::GlobalNamespace::EventSource_EventData::set_DataPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa260998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventSource_EventData>(),
                        {"set_DataPointer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventSource_EventData.set_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventSource_EventData::*)(int32_t)>(&::GlobalNamespace::EventSource_EventData::set_Size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2609a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventSource_EventData>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EventSource_EventData.set_Reserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EventSource_EventData::*)(int32_t)>(&::GlobalNamespace::EventSource_EventData::set_Reserved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2609a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventSource_EventData>(),
                        {"set_Reserved", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::EventSource_EventData::set_DataPointer(::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventSource_EventData>(),
                        {"set_DataPointer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::EventSource_EventData::set_Size(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventSource_EventData>(),
                        {"set_Size", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::EventSource_EventData::set_Reserved(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::EventSource_EventData>(),
                        {"set_Reserved", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_DataPointer_k__BackingField", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Size_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Reserved_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventSource_EventData::EventSource_EventData(::System::IntPtr  _DataPointer_k__BackingField, int32_t  _Size_k__BackingField, int32_t  _Reserved_k__BackingField) noexcept  {
this->_DataPointer_k__BackingField = _DataPointer_k__BackingField;
this->_Size_k__BackingField = _Size_k__BackingField;
this->_Reserved_k__BackingField = _Reserved_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventSource_EventData::EventSource_EventData()   {
}
