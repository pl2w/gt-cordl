#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetBitBuffer_Offset.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_Offset_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetBitBuffer_Offset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetBitBuffer_Offset::*)(::Fusion::Sockets::NetBitBuffer*)>(&::GlobalNamespace::NetBitBuffer_Offset::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60273f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetBitBuffer_Offset>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetBitBuffer_Offset.GetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NetBitBuffer_Offset::*)(::Fusion::Sockets::NetBitBuffer*)>(&::GlobalNamespace::NetBitBuffer_Offset::GetLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6028f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetBitBuffer_Offset>(),
                        {"GetLength", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NetBitBuffer_Offset::_ctor(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetBitBuffer_Offset>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline int32_t GlobalNamespace::NetBitBuffer_Offset::GetLength(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NetBitBuffer_Offset>(),
                        {"GetLength", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "_offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetBitBuffer_Offset::NetBitBuffer_Offset(int32_t  _offset) noexcept  {
this->_offset = _offset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetBitBuffer_Offset::NetBitBuffer_Offset()   {
}
