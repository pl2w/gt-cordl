#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/Crc32.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Crc32_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__IChecksum_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.ComputeCrc32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint8_t)>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::ComputeCrc32)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ffd550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"ComputeCrc32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)()>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ff7474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)()>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9ffd5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)()>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::get_Value)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9ff7490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::Update)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9ffd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ffd6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)(::System::ArraySegment_1<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ff7134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ffd744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Crc32.SlowUpdateLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Crc32::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::Crc32::SlowUpdateLoop)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9ffd83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"SlowUpdateLoop", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& ICSharpCode::SharpZipLib::Checksum::Crc32::__cordl_internal_get_checkValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkValue;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::Checksum::Crc32::__cordl_internal_get_checkValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkValue;
}
constexpr void ICSharpCode::SharpZipLib::Checksum::Crc32::__cordl_internal_set_checkValue(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkValue = value;
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::setStaticF_crcInit(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "crcInit", ::ICSharpCode::SharpZipLib::Checksum::Crc32*>(std::forward<uint32_t>(value));
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::Crc32::getStaticF_crcInit()  {
return ::cordl_internals::getStaticField<uint32_t, "crcInit", ::ICSharpCode::SharpZipLib::Checksum::Crc32*>();
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::setStaticF_crcXor(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "crcXor", ::ICSharpCode::SharpZipLib::Checksum::Crc32*>(std::forward<uint32_t>(value));
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::Crc32::getStaticF_crcXor()  {
return ::cordl_internals::getStaticField<uint32_t, "crcXor", ::ICSharpCode::SharpZipLib::Checksum::Crc32*>();
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::setStaticF_crcTable(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "crcTable", ::ICSharpCode::SharpZipLib::Checksum::Crc32*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> ICSharpCode::SharpZipLib::Checksum::Crc32::getStaticF_crcTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "crcTable", ::ICSharpCode::SharpZipLib::Checksum::Crc32*>();
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::Crc32::ComputeCrc32(uint32_t  oldCrc, uint8_t  bval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"ComputeCrc32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, oldCrc, bval);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Checksum::Crc32::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::Update(int32_t  bval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bval);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::Update(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::Update(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::Update(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, count);
}
inline void ICSharpCode::SharpZipLib::Checksum::Crc32::SlowUpdateLoop(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Crc32*>(),
                        {"SlowUpdateLoop", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, end);
}
inline ::ICSharpCode::SharpZipLib::Checksum::Crc32* ICSharpCode::SharpZipLib::Checksum::Crc32::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Checksum::Crc32*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr  ICSharpCode::SharpZipLib::Checksum::Crc32::operator ::ICSharpCode::SharpZipLib::Checksum::IChecksum*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* ICSharpCode::SharpZipLib::Checksum::Crc32::i___ICSharpCode__SharpZipLib__Checksum__IChecksum() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Checksum::Crc32::Crc32()   {
}
