#pragma once
// IWYU pragma private; include "Liv/Lck/Collections/AudioBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::Collections::AudioBuffer::*)()>(&::Liv::Lck::Collections::AudioBuffer::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3679c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.get_Capacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::Collections::AudioBuffer::*)()>(&::Liv::Lck::Collections::AudioBuffer::get_Capacity)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d367a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Capacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Collections::AudioBuffer::*)(int32_t)>(&::Liv::Lck::Collections::AudioBuffer::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d367bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Collections::AudioBuffer::*)(int32_t)>(&::Liv::Lck::Collections::AudioBuffer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9d367ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.get_Buffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::Liv::Lck::Collections::AudioBuffer::*)()>(&::Liv::Lck::Collections::AudioBuffer::get_Buffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d36864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Buffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Collections::AudioBuffer::*)()>(&::Liv::Lck::Collections::AudioBuffer::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3686c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(float_t)>(&::Liv::Lck::Collections::AudioBuffer::TryAdd)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9d36874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryAdd", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryCopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Liv::Lck::Collections::AudioBuffer::TryCopyFrom)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d368c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryCopyFrom", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryCopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(::System::IntPtr, int32_t)>(&::Liv::Lck::Collections::AudioBuffer::TryCopyFrom)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d3691c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryCopyFrom", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryCopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::Collections::AudioBuffer::TryCopyFrom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d369b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryCopyFrom", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryExtendFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::Liv::Lck::Collections::AudioBuffer::TryExtendFrom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d36a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryExtendFrom", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryExtendFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(::ArrayW<float_t>)>(&::Liv::Lck::Collections::AudioBuffer::TryExtendFrom)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d36a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryExtendFrom", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.TryExtendFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Collections::AudioBuffer::*)(::Liv::Lck::Collections::AudioBuffer*)>(&::Liv::Lck::Collections::AudioBuffer::TryExtendFrom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d36aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryExtendFrom", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.OverrideCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Collections::AudioBuffer::*)(int32_t)>(&::Liv::Lck::Collections::AudioBuffer::OverrideCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d36b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"OverrideCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.PadAudioBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Collections::AudioBuffer::*)(int32_t)>(&::Liv::Lck::Collections::AudioBuffer::PadAudioBuffer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d36b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"PadAudioBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Collections::AudioBuffer.SkipAudioSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Collections::AudioBuffer::*)(int32_t)>(&::Liv::Lck::Collections::AudioBuffer::SkipAudioSamples)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d36b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"SkipAudioSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t>& Liv::Lck::Collections::AudioBuffer::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr ::ArrayW<float_t> const& Liv::Lck::Collections::AudioBuffer::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
constexpr void Liv::Lck::Collections::AudioBuffer::__cordl_internal_set__buffer(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
constexpr int32_t& Liv::Lck::Collections::AudioBuffer::__cordl_internal_get__logicalCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalCount;
}
constexpr int32_t const& Liv::Lck::Collections::AudioBuffer::__cordl_internal_get__logicalCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logicalCount;
}
constexpr void Liv::Lck::Collections::AudioBuffer::__cordl_internal_set__logicalCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logicalCount = value;
}
inline int32_t Liv::Lck::Collections::AudioBuffer::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Liv::Lck::Collections::AudioBuffer::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t Liv::Lck::Collections::AudioBuffer::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, index);
}
inline void Liv::Lck::Collections::AudioBuffer::_ctor(int32_t  maxCapacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxCapacity);
}
inline ::ArrayW<float_t> Liv::Lck::Collections::AudioBuffer::get_Buffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"get_Buffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void Liv::Lck::Collections::AudioBuffer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryAdd(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryAdd", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryCopyFrom(::ArrayW<float_t>  source, int32_t  sourceIndex, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryCopyFrom", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, sourceIndex, count);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryCopyFrom(::System::IntPtr  source, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryCopyFrom", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source, count);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryCopyFrom(::Liv::Lck::Collections::AudioBuffer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryCopyFrom", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryExtendFrom(::ArrayW<float_t>  sourceArray, int32_t  sourceIndex, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryExtendFrom", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sourceArray, sourceIndex, length);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryExtendFrom(::ArrayW<float_t>  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryExtendFrom", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source);
}
inline bool Liv::Lck::Collections::AudioBuffer::TryExtendFrom(::Liv::Lck::Collections::AudioBuffer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"TryExtendFrom", {}, {::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, source);
}
inline void Liv::Lck::Collections::AudioBuffer::OverrideCount(int32_t  newCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"OverrideCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCount);
}
inline void Liv::Lck::Collections::AudioBuffer::PadAudioBuffer(int32_t  samplesToPad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"PadAudioBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplesToPad);
}
inline void Liv::Lck::Collections::AudioBuffer::SkipAudioSamples(int32_t  samplesToSkip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Collections::AudioBuffer*>(),
                        {"SkipAudioSamples", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samplesToSkip);
}
inline ::Liv::Lck::Collections::AudioBuffer* Liv::Lck::Collections::AudioBuffer::New_ctor(int32_t  maxCapacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Collections::AudioBuffer*>(maxCapacity));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Collections::AudioBuffer::AudioBuffer()   {
}
