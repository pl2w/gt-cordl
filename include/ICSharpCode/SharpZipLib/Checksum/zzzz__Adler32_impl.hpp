#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/Adler32.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Adler32_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__IChecksum_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Adler32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Adler32::*)()>(&::ICSharpCode::SharpZipLib::Checksum::Adler32::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ffcd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Adler32.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Adler32::*)()>(&::ICSharpCode::SharpZipLib::Checksum::Adler32::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ffcd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Adler32.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Checksum::Adler32::*)()>(&::ICSharpCode::SharpZipLib::Checksum::Adler32::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ffcd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Adler32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Adler32::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Checksum::Adler32::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ffcd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Adler32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Adler32::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::Adler32::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ffce18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Checksum::Adler32.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Checksum::Adler32::*)(::System::ArraySegment_1<uint8_t>)>(&::ICSharpCode::SharpZipLib::Checksum::Adler32::Update)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9ffced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& ICSharpCode::SharpZipLib::Checksum::Adler32::__cordl_internal_get_checkValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkValue;
}
constexpr uint32_t const& ICSharpCode::SharpZipLib::Checksum::Adler32::__cordl_internal_get_checkValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkValue;
}
constexpr void ICSharpCode::SharpZipLib::Checksum::Adler32::__cordl_internal_set_checkValue(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkValue = value;
}
inline void ICSharpCode::SharpZipLib::Checksum::Adler32::setStaticF_BASE(uint32_t  value)  {
::cordl_internals::setStaticField<uint32_t, "BASE", ::ICSharpCode::SharpZipLib::Checksum::Adler32*>(std::forward<uint32_t>(value));
}
inline uint32_t ICSharpCode::SharpZipLib::Checksum::Adler32::getStaticF_BASE()  {
return ::cordl_internals::getStaticField<uint32_t, "BASE", ::ICSharpCode::SharpZipLib::Checksum::Adler32*>();
}
inline void ICSharpCode::SharpZipLib::Checksum::Adler32::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::Adler32::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Checksum::Adler32::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Checksum::Adler32::Update(int32_t  bval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Update", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bval);
}
inline void ICSharpCode::SharpZipLib::Checksum::Adler32::Update(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Update", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void ICSharpCode::SharpZipLib::Checksum::Adler32::Update(::System::ArraySegment_1<uint8_t>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Checksum::Adler32*>(),
                        {"Update", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline ::ICSharpCode::SharpZipLib::Checksum::Adler32* ICSharpCode::SharpZipLib::Checksum::Adler32::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Checksum::Adler32*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr  ICSharpCode::SharpZipLib::Checksum::Adler32::operator ::ICSharpCode::SharpZipLib::Checksum::IChecksum*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Checksum::IChecksum"
constexpr ::ICSharpCode::SharpZipLib::Checksum::IChecksum* ICSharpCode::SharpZipLib::Checksum::Adler32::i___ICSharpCode__SharpZipLib__Checksum__IChecksum() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Checksum::IChecksum*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32::Adler32()   {
}
