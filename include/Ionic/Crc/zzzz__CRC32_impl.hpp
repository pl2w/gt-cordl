#pragma once
// IWYU pragma private; include "Ionic/Crc/CRC32.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Crc/zzzz__CRC32_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Ionic::Crc::CRC32.get_TotalBytesRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Ionic::Crc::CRC32::*)()>(&::Ionic::Crc::CRC32::get_TotalBytesRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79fb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"get_TotalBytesRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.get_Crc32Result
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CRC32::*)()>(&::Ionic::Crc::CRC32::get_Crc32Result)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa79b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"get_Crc32Result", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.GetCrc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CRC32::*)(::System::IO::Stream*)>(&::Ionic::Crc::CRC32::GetCrc32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79fba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"GetCrc32", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.GetCrc32AndCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CRC32::*)(::System::IO::Stream*, ::System::IO::Stream*)>(&::Ionic::Crc::CRC32::GetCrc32AndCopy)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa79fba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"GetCrc32AndCopy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.ComputeCrc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CRC32::*)(int32_t, uint8_t)>(&::Ionic::Crc::CRC32::ComputeCrc32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa79fd2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"ComputeCrc32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32._InternalComputeCrc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Crc::CRC32::*)(uint32_t, uint8_t)>(&::Ionic::Crc::CRC32::_InternalComputeCrc32)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa79fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"_InternalComputeCrc32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.SlurpBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Ionic::Crc::CRC32::SlurpBlock)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa79bd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"SlurpBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.UpdateCRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(uint8_t)>(&::Ionic::Crc::CRC32::UpdateCRC)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa79fd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"UpdateCRC", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.UpdateCRC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(uint8_t, int32_t)>(&::Ionic::Crc::CRC32::UpdateCRC)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa79fddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"UpdateCRC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.ReverseBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Ionic::Crc::CRC32::ReverseBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa79fe64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"ReverseBits", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.ReverseBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint8_t)>(&::Ionic::Crc::CRC32::ReverseBits)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa79fe6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"ReverseBits", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.GenerateLookupTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)()>(&::Ionic::Crc::CRC32::GenerateLookupTable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa79feb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"GenerateLookupTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.gf2_matrix_times
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Ionic::Crc::CRC32::*)(::ArrayW<uint32_t>, uint32_t)>(&::Ionic::Crc::CRC32::gf2_matrix_times)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa79ffdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"gf2_matrix_times", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.gf2_matrix_square
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(::ArrayW<uint32_t>, ::ArrayW<uint32_t>)>(&::Ionic::Crc::CRC32::gf2_matrix_square)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7a0038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"gf2_matrix_square", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.Combine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(int32_t, int32_t)>(&::Ionic::Crc::CRC32::Combine)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa7a00ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"Combine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)()>(&::Ionic::Crc::CRC32::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa79b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(bool)>(&::Ionic::Crc::CRC32::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa7a01f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)(int32_t, bool)>(&::Ionic::Crc::CRC32::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa7a0238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Crc::CRC32.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Crc::CRC32::*)()>(&::Ionic::Crc::CRC32::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa7a0274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Ionic::Crc::CRC32::__cordl_internal_get_dwPolynomial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwPolynomial;
}
constexpr uint32_t const& Ionic::Crc::CRC32::__cordl_internal_get_dwPolynomial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dwPolynomial;
}
constexpr void Ionic::Crc::CRC32::__cordl_internal_set_dwPolynomial(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dwPolynomial = value;
}
constexpr int64_t& Ionic::Crc::CRC32::__cordl_internal_get__TotalBytesRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesRead;
}
constexpr int64_t const& Ionic::Crc::CRC32::__cordl_internal_get__TotalBytesRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytesRead;
}
constexpr void Ionic::Crc::CRC32::__cordl_internal_set__TotalBytesRead(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalBytesRead = value;
}
constexpr bool& Ionic::Crc::CRC32::__cordl_internal_get_reverseBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseBits;
}
constexpr bool const& Ionic::Crc::CRC32::__cordl_internal_get_reverseBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseBits;
}
constexpr void Ionic::Crc::CRC32::__cordl_internal_set_reverseBits(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseBits = value;
}
constexpr ::ArrayW<uint32_t>& Ionic::Crc::CRC32::__cordl_internal_get_crc32Table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc32Table;
}
constexpr ::ArrayW<uint32_t> const& Ionic::Crc::CRC32::__cordl_internal_get_crc32Table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crc32Table;
}
constexpr void Ionic::Crc::CRC32::__cordl_internal_set_crc32Table(::ArrayW<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crc32Table = value;
}
constexpr uint32_t& Ionic::Crc::CRC32::__cordl_internal_get__register()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____register;
}
constexpr uint32_t const& Ionic::Crc::CRC32::__cordl_internal_get__register() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____register;
}
constexpr void Ionic::Crc::CRC32::__cordl_internal_set__register(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____register = value;
}
inline int64_t Ionic::Crc::CRC32::get_TotalBytesRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"get_TotalBytesRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Ionic::Crc::CRC32::get_Crc32Result()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"get_Crc32Result", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Crc::CRC32::GetCrc32(::System::IO::Stream*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"GetCrc32", {}, {::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input);
}
inline int32_t Ionic::Crc::CRC32::GetCrc32AndCopy(::System::IO::Stream*  input, ::System::IO::Stream*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"GetCrc32AndCopy", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input, output);
}
inline int32_t Ionic::Crc::CRC32::ComputeCrc32(int32_t  W, uint8_t  B)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"ComputeCrc32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, W, B);
}
inline int32_t Ionic::Crc::CRC32::_InternalComputeCrc32(uint32_t  W, uint8_t  B)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"_InternalComputeCrc32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, W, B);
}
inline void Ionic::Crc::CRC32::SlurpBlock(::ArrayW<uint8_t>  block, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"SlurpBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, block, offset, count);
}
inline void Ionic::Crc::CRC32::UpdateCRC(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"UpdateCRC", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Ionic::Crc::CRC32::UpdateCRC(uint8_t  b, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"UpdateCRC", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, n);
}
inline uint32_t Ionic::Crc::CRC32::ReverseBits(uint32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"ReverseBits", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, data);
}
inline uint8_t Ionic::Crc::CRC32::ReverseBits(uint8_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"ReverseBits", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, data);
}
inline void Ionic::Crc::CRC32::GenerateLookupTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"GenerateLookupTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t Ionic::Crc::CRC32::gf2_matrix_times(::ArrayW<uint32_t>  matrix, uint32_t  vec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"gf2_matrix_times", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, matrix, vec);
}
inline void Ionic::Crc::CRC32::gf2_matrix_square(::ArrayW<uint32_t>  square, ::ArrayW<uint32_t>  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"gf2_matrix_square", {}, {::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, square, mat);
}
inline void Ionic::Crc::CRC32::Combine(int32_t  crc, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"Combine", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crc, length);
}
inline void Ionic::Crc::CRC32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Crc::CRC32::_ctor(bool  reverseBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reverseBits);
}
inline void Ionic::Crc::CRC32::_ctor(int32_t  polynomial, bool  reverseBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, polynomial, reverseBits);
}
inline void Ionic::Crc::CRC32::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Crc::CRC32*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Ionic::Crc::CRC32* Ionic::Crc::CRC32::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CRC32*>());
}
inline ::Ionic::Crc::CRC32* Ionic::Crc::CRC32::New_ctor(bool  reverseBits)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CRC32*>(reverseBits));
}
inline ::Ionic::Crc::CRC32* Ionic::Crc::CRC32::New_ctor(int32_t  polynomial, bool  reverseBits)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Crc::CRC32*>(polynomial, reverseBits));
}
// Ctor Parameters []
constexpr ::Ionic::Crc::CRC32::CRC32()   {
}
