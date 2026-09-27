#pragma once
// IWYU pragma private; include "CSCore/WaveFormatExtensible.hpp"
#include "CSCore/zzzz__ChannelMask_impl.hpp"
#include "CSCore/zzzz__WaveFormat_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "CSCore/zzzz__WaveFormatExtensible_def.hpp"
#include "CSCore/zzzz__AudioEncoding_def.hpp"
#include "CSCore/zzzz__ChannelMask_def.hpp"
#include "CSCore/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.SubTypeFromWaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::CSCore::WaveFormat*)>(&::CSCore::WaveFormatExtensible::SubTypeFromWaveFormat)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa763f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"SubTypeFromWaveFormat", {}, {::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.get_ValidBitsPerSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::get_ValidBitsPerSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa764078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_ValidBitsPerSample", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.set_ValidBitsPerSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(int32_t)>(&::CSCore::WaveFormatExtensible::set_ValidBitsPerSample)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa764080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_ValidBitsPerSample", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.get_SamplesPerBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::get_SamplesPerBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa764088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_SamplesPerBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.set_SamplesPerBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(int32_t)>(&::CSCore::WaveFormatExtensible::set_SamplesPerBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa764090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_SamplesPerBlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.get_ChannelMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CSCore::ChannelMask (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::get_ChannelMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa764098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_ChannelMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.set_ChannelMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(::CSCore::ChannelMask)>(&::CSCore::WaveFormatExtensible::set_ChannelMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7640a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_ChannelMask", {}, {::i2c::type_of<::CSCore::ChannelMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.get_SubFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::get_SubFormat)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa7640a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_SubFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.set_SubFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(::System::Guid)>(&::CSCore::WaveFormatExtensible::set_SubFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7640b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_SubFormat", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa7640bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(int32_t, int32_t, int32_t, ::System::Guid)>(&::CSCore::WaveFormatExtensible::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa7640fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(int32_t, int32_t, int32_t, ::System::Guid, ::CSCore::ChannelMask)>(&::CSCore::WaveFormatExtensible::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa7641c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::CSCore::ChannelMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.ToWaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::CSCore::WaveFormat* (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::ToWaveFormat)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa7643d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"ToWaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::Clone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7644d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                    {::i2c::class_of<::CSCore::WaveFormatExtensible*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.SetWaveFormatTagInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CSCore::WaveFormatExtensible::*)(::CSCore::AudioEncoding)>(&::CSCore::WaveFormatExtensible::SetWaveFormatTagInternal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa7644d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                    {::i2c::class_of<::CSCore::WaveFormatExtensible*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::WaveFormatExtensible.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::CSCore::WaveFormatExtensible::*)()>(&::CSCore::WaveFormatExtensible::ToString)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa764540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                    {::i2c::class_of<::CSCore::WaveFormatExtensible*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int16_t& CSCore::WaveFormatExtensible::__cordl_internal_get__samplesUnion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplesUnion;
}
constexpr int16_t const& CSCore::WaveFormatExtensible::__cordl_internal_get__samplesUnion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____samplesUnion;
}
constexpr void CSCore::WaveFormatExtensible::__cordl_internal_set__samplesUnion(int16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____samplesUnion = value;
}
constexpr ::CSCore::ChannelMask& CSCore::WaveFormatExtensible::__cordl_internal_get__channelMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelMask;
}
constexpr ::CSCore::ChannelMask const& CSCore::WaveFormatExtensible::__cordl_internal_get__channelMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____channelMask;
}
constexpr void CSCore::WaveFormatExtensible::__cordl_internal_set__channelMask(::CSCore::ChannelMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____channelMask = value;
}
constexpr ::System::Guid& CSCore::WaveFormatExtensible::__cordl_internal_get__subFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subFormat;
}
constexpr ::System::Guid const& CSCore::WaveFormatExtensible::__cordl_internal_get__subFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subFormat;
}
constexpr void CSCore::WaveFormatExtensible::__cordl_internal_set__subFormat(::System::Guid  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subFormat = value;
}
inline ::System::Guid CSCore::WaveFormatExtensible::SubTypeFromWaveFormat(::CSCore::WaveFormat*  waveFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"SubTypeFromWaveFormat", {}, {::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, waveFormat);
}
inline int32_t CSCore::WaveFormatExtensible::get_ValidBitsPerSample()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_ValidBitsPerSample", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormatExtensible::set_ValidBitsPerSample(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_ValidBitsPerSample", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t CSCore::WaveFormatExtensible::get_SamplesPerBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_SamplesPerBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void CSCore::WaveFormatExtensible::set_SamplesPerBlock(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_SamplesPerBlock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::CSCore::ChannelMask CSCore::WaveFormatExtensible::get_ChannelMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_ChannelMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::CSCore::ChannelMask>(this, ___internal_method);
}
inline void CSCore::WaveFormatExtensible::set_ChannelMask(::CSCore::ChannelMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_ChannelMask", {}, {::i2c::type_of<::CSCore::ChannelMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Guid CSCore::WaveFormatExtensible::get_SubFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"get_SubFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void CSCore::WaveFormatExtensible::set_SubFormat(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"set_SubFormat", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void CSCore::WaveFormatExtensible::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CSCore::WaveFormatExtensible::_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, bits, channels, subFormat);
}
inline void CSCore::WaveFormatExtensible::_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat, ::CSCore::ChannelMask  channelMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::CSCore::ChannelMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleRate, bits, channels, subFormat, channelMask);
}
inline ::CSCore::WaveFormat* CSCore::WaveFormatExtensible::ToWaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::WaveFormatExtensible*>(),
                        {"ToWaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::CSCore::WaveFormat*>(this, ___internal_method);
}
inline ::System::Object* CSCore::WaveFormatExtensible::Clone()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormatExtensible*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void CSCore::WaveFormatExtensible::SetWaveFormatTagInternal(::CSCore::AudioEncoding  waveFormatTag)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormatExtensible*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, waveFormatTag);
}
inline ::StringW CSCore::WaveFormatExtensible::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::CSCore::WaveFormatExtensible*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::CSCore::WaveFormatExtensible* CSCore::WaveFormatExtensible::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormatExtensible*>());
}
inline ::CSCore::WaveFormatExtensible* CSCore::WaveFormatExtensible::New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormatExtensible*>(sampleRate, bits, channels, subFormat));
}
inline ::CSCore::WaveFormatExtensible* CSCore::WaveFormatExtensible::New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat, ::CSCore::ChannelMask  channelMask)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CSCore::WaveFormatExtensible*>(sampleRate, bits, channels, subFormat, channelMask));
}
// Ctor Parameters []
constexpr ::CSCore::WaveFormatExtensible::WaveFormatExtensible()   {
}
