#pragma once
// IWYU pragma private; include "CSCore/WaveFormat.hpp"
#include "CSCore/zzzz__AudioEncoding_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CSCore/zzzz__WaveFormat_def.hpp"
#include "CSCore/zzzz__AudioEncoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::CSCore::WaveFormat.get_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_Channels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7636dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_Channels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::set_Channels)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7636e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_SampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_SampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::set_SampleRate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa763708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_BytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_BytesPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_BytesPerSecond
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::set_BytesPerSecond)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76372c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_BlockAlign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_BlockAlign)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_BlockAlign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::set_BlockAlign)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa76373c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_BitsPerSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_BitsPerSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_BitsPerSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::set_BitsPerSample)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa76374c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_ExtraSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_ExtraSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_ExtraSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::set_ExtraSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_BytesPerSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_BytesPerSample)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa763778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_BytesPerBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_BytesPerBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa7637a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.get_WaveFormatTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CSCore::AudioEncoding (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::get_WaveFormatTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7637e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.set_WaveFormatTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(::CSCore::AudioEncoding)>(&::CSCore::WaveFormat::set_WaveFormatTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7637ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa7637f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t, int32_t, int32_t)>(&::CSCore::WaveFormat::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa763834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t, int32_t, int32_t, ::CSCore::AudioEncoding)>(&::CSCore::WaveFormat::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::CSCore::AudioEncoding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t, int32_t, int32_t, ::CSCore::AudioEncoding, int32_t)>(&::CSCore::WaveFormat::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa763848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::CSCore::AudioEncoding>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.MillisecondsToBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::CSCore::WaveFormat::*)(double_t)>(&::CSCore::WaveFormat::MillisecondsToBytes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa763974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {"MillisecondsToBytes", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.BytesToMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::CSCore::WaveFormat::*)(int64_t)>(&::CSCore::WaveFormat::BytesToMilliseconds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7639ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {"BytesToMilliseconds", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::CSCore::WaveFormat::*)(::CSCore::WaveFormat*)>(&::CSCore::WaveFormat::Equals)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa763a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa763bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa763e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.SetWaveFormatTagInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(::CSCore::AudioEncoding)>(&::CSCore::WaveFormat::SetWaveFormatTagInternal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa763e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.SetBitsPerSampleAndFormatProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)(int32_t)>(&::CSCore::WaveFormat::SetBitsPerSampleAndFormatProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa763ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.UpdateProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::UpdateProperties)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa763ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormat*>(),
                    {::i2c::class_of<::CSCore::WaveFormat*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormat.GetInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (::CSCore::WaveFormat::*)()>(&::CSCore::WaveFormat::GetInformation)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xa763be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {"GetInformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::CSCore::AudioEncoding& CSCore::WaveFormat::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::CSCore::AudioEncoding const& CSCore::WaveFormat::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__encoding(::CSCore::AudioEncoding  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoding = value;
}
constexpr int16_t& CSCore::WaveFormat::__cordl_internal_get__channels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr int16_t const& CSCore::WaveFormat::__cordl_internal_get__channels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channels;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__channels(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channels = value;
}
constexpr int32_t& CSCore::WaveFormat::__cordl_internal_get__sampleRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr int32_t const& CSCore::WaveFormat::__cordl_internal_get__sampleRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleRate;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__sampleRate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleRate = value;
}
constexpr int32_t& CSCore::WaveFormat::__cordl_internal_get__bytesPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPerSecond;
}
constexpr int32_t const& CSCore::WaveFormat::__cordl_internal_get__bytesPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bytesPerSecond;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__bytesPerSecond(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bytesPerSecond = value;
}
constexpr int16_t& CSCore::WaveFormat::__cordl_internal_get__blockAlign()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockAlign;
}
constexpr int16_t const& CSCore::WaveFormat::__cordl_internal_get__blockAlign() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blockAlign;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__blockAlign(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blockAlign = value;
}
constexpr int16_t& CSCore::WaveFormat::__cordl_internal_get__bitsPerSample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsPerSample;
}
constexpr int16_t const& CSCore::WaveFormat::__cordl_internal_get__bitsPerSample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsPerSample;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__bitsPerSample(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitsPerSample = value;
}
constexpr int16_t& CSCore::WaveFormat::__cordl_internal_get__extraSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraSize;
}
constexpr int16_t const& CSCore::WaveFormat::__cordl_internal_get__extraSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extraSize;
}
constexpr void CSCore::WaveFormat::__cordl_internal_set__extraSize(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extraSize = value;
}
inline int32_t CSCore::WaveFormat::get_Channels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_Channels(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormat::get_SampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_SampleRate(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormat::get_BytesPerSecond()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_BytesPerSecond(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormat::get_BlockAlign()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_BlockAlign(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormat::get_BitsPerSample()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_BitsPerSample(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormat::get_ExtraSize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_ExtraSize(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormat::get_BytesPerSample()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t CSCore::WaveFormat::get_BytesPerBlock()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::CSCore::AudioEncoding CSCore::WaveFormat::get_WaveFormatTag()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::CSCore::AudioEncoding>(this, ___internal_method);
}
inline void CSCore::WaveFormat::set_WaveFormatTag(::CSCore::AudioEncoding  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CSCore::WaveFormat::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::WaveFormat::_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, bits, channels);
}
inline void CSCore::WaveFormat::_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::CSCore::AudioEncoding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, bits, channels, encoding);
}
inline void CSCore::WaveFormat::_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding, int32_t  extraSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::CSCore::AudioEncoding>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, bits, channels, encoding, extraSize);
}
inline int64_t CSCore::WaveFormat::MillisecondsToBytes(double_t  milliseconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {"MillisecondsToBytes", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, milliseconds);
}
inline double_t CSCore::WaveFormat::BytesToMilliseconds(int64_t  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {"BytesToMilliseconds", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, bytes);
}
inline bool CSCore::WaveFormat::Equals(::CSCore::WaveFormat*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::StringW CSCore::WaveFormat::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* CSCore::WaveFormat::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void CSCore::WaveFormat::SetWaveFormatTagInternal(::CSCore::AudioEncoding  waveFormatTag)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waveFormatTag);
}
inline void CSCore::WaveFormat::SetBitsPerSampleAndFormatProperties(int32_t  bitsPerSample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitsPerSample);
}
inline void CSCore::WaveFormat::UpdateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormat*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::StringBuilder* CSCore::WaveFormat::GetInformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormat*>(),
                        {"GetInformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(this, ___internal_method);
}
inline ::CSCore::WaveFormat* CSCore::WaveFormat::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormat*>());
}
inline ::CSCore::WaveFormat* CSCore::WaveFormat::New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormat*>(sampleRate, bits, channels));
}
inline ::CSCore::WaveFormat* CSCore::WaveFormat::New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormat*>(sampleRate, bits, channels, encoding));
}
inline ::CSCore::WaveFormat* CSCore::WaveFormat::New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding, int32_t  extraSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormat*>(sampleRate, bits, channels, encoding, extraSize));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  CSCore::WaveFormat::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* CSCore::WaveFormat::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::CSCore::WaveFormat*>"
constexpr  CSCore::WaveFormat::operator ::System::IEquatable_1<::CSCore::WaveFormat*>*() noexcept {
return static_cast<::System::IEquatable_1<::CSCore::WaveFormat*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::CSCore::WaveFormat*>"
constexpr ::System::IEquatable_1<::CSCore::WaveFormat*>* CSCore::WaveFormat::i___System__IEquatable_1___CSCore__WaveFormat__() noexcept {
return static_cast<::System::IEquatable_1<::CSCore::WaveFormat*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::CSCore::WaveFormat::WaveFormat()   {
}
