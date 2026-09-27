#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop_NetSecurityNative_GssBuffer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_NetSecurityNative_GssBuffer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetSecurityNative_Interop_GssBuffer.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::*)(::ArrayW<uint8_t>, int32_t)>(&::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::Copy)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa8cc8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetSecurityNative_Interop_GssBuffer>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetSecurityNative_Interop_GssBuffer.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::*)()>(&::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::ToByteArray)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa8cca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetSecurityNative_Interop_GssBuffer>(),
                        {"ToByteArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetSecurityNative_Interop_GssBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::*)()>(&::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa8ccb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetSecurityNative_Interop_GssBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NetSecurityNative_Interop_GssBuffer::Copy(::ArrayW<uint8_t>  destination, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetSecurityNative_Interop_GssBuffer>(),
                        {"Copy", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, destination, offset);
}
inline ::ArrayW<uint8_t> GlobalNamespace::NetSecurityNative_Interop_GssBuffer::ToByteArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetSecurityNative_Interop_GssBuffer>(),
                        {"ToByteArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline void GlobalNamespace::NetSecurityNative_Interop_GssBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetSecurityNative_Interop_GssBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::NetSecurityNative_Interop_GssBuffer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::NetSecurityNative_Interop_GssBuffer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_length", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::NetSecurityNative_Interop_GssBuffer(uint64_t  _length, ::System::IntPtr  _data) noexcept  {
this->_length = _length;
this->_data = _data;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetSecurityNative_Interop_GssBuffer::NetSecurityNative_Interop_GssBuffer()   {
}
