#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/PickleHeader.hpp"
#include "K4os/Compression/LZ4/zzzz__PickleHeader_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::PickleHeader.get_DataOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::K4os::Compression::LZ4::PickleHeader::*)()>(&::K4os::Compression::LZ4::PickleHeader::get_DataOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_DataOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::PickleHeader.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::K4os::Compression::LZ4::PickleHeader::*)()>(&::K4os::Compression::LZ4::PickleHeader::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::PickleHeader.get_ResultLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::K4os::Compression::LZ4::PickleHeader::*)()>(&::K4os::Compression::LZ4::PickleHeader::get_ResultLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_ResultLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::PickleHeader.get_IsCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::K4os::Compression::LZ4::PickleHeader::*)()>(&::K4os::Compression::LZ4::PickleHeader::get_IsCompressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cba420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_IsCompressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::PickleHeader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::K4os::Compression::LZ4::PickleHeader::*)(uint16_t, int32_t, bool)>(&::K4os::Compression::LZ4::PickleHeader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cba638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline uint16_t K4os::Compression::LZ4::PickleHeader::get_DataOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_DataOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint16_t K4os::Compression::LZ4::PickleHeader::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline int32_t K4os::Compression::LZ4::PickleHeader::get_ResultLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_ResultLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool K4os::Compression::LZ4::PickleHeader::get_IsCompressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {"get_IsCompressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void K4os::Compression::LZ4::PickleHeader::_ctor(uint16_t  dataOffset, int32_t  resultLength, bool  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::PickleHeader>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dataOffset, resultLength, compressed);
}
// Ctor Parameters [CppParam { name: "_DataOffset_k__BackingField", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Flags_k__BackingField", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ResultLength_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::K4os::Compression::LZ4::PickleHeader::PickleHeader(uint16_t  _DataOffset_k__BackingField, uint16_t  _Flags_k__BackingField, int32_t  _ResultLength_k__BackingField) noexcept  {
this->_DataOffset_k__BackingField = _DataOffset_k__BackingField;
this->_Flags_k__BackingField = _Flags_k__BackingField;
this->_ResultLength_k__BackingField = _ResultLength_k__BackingField;
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::PickleHeader::PickleHeader()   {
}
