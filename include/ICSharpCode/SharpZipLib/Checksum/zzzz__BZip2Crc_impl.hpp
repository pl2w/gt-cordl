#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/BZip2Crc.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__BZip2Crc_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__IChecksum_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)()>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ffd088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)()>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ffd0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)()>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::get_Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ffd0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ffd0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ffd15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)(::System::ArraySegment_1<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ffd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ffd1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc.SlowUpdateLoop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::SlowUpdateLoop)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9ffd344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"SlowUpdateLoop", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& ICSharpCode::SharpZipLib::Checksum::BZip2Crc::__cordl_internal_get_checkValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkValue;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::Checksum::BZip2Crc::__cordl_internal_get_checkValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkValue;
}
constexpr void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::__cordl_internal_set_checkValue(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkValue = value;
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::setStaticF_crcTable(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "crcTable", ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> ICSharpCode::SharpZipLib::Checksum::BZip2Crc::getStaticF_crcTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "crcTable", ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>();
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Checksum::BZip2Crc::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update(int32_t  bval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bval);
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::Update(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, count);
}
inline void ICSharpCode::SharpZipLib::Checksum::BZip2Crc::SlowUpdateLoop(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>(),
                        {"SlowUpdateLoop", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, end);
}
inline ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc* ICSharpCode::SharpZipLib::Checksum::BZip2Crc::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Checksum::BZip2Crc*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr  ICSharpCode::SharpZipLib::Checksum::BZip2Crc::operator ::ICSharpCode::SharpZipLib::Checksum::IChecksum*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* ICSharpCode::SharpZipLib::Checksum::BZip2Crc::i___ICSharpCode__SharpZipLib__Checksum__IChecksum() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Checksum::BZip2Crc::BZip2Crc()   {
}
