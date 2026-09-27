#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/BitReservoir.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__BitReservoir_def.hpp"
#include "Meta/Voice/NLayer/zzzz__IMpegFrame_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.GetSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Meta::Voice::NLayer::IMpegFrame*)>(&::Meta::Voice::NLayer::Decoder::BitReservoir::GetSlots)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x9e05f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"GetSlots", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.AddBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::NLayer::Decoder::BitReservoir::*)(::Meta::Voice::NLayer::IMpegFrame*, int32_t)>(&::Meta::Voice::NLayer::Decoder::BitReservoir::AddBits)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9e0620c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"AddBits", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.GetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::BitReservoir::*)(int32_t)>(&::Meta::Voice::NLayer::Decoder::BitReservoir::GetBits)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e063f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"GetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.Get1Bit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::BitReservoir::*)()>(&::Meta::Voice::NLayer::Decoder::BitReservoir::Get1Bit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e0673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"Get1Bit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.TryPeekBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::BitReservoir::*)(int32_t, ::by_ref<int32_t>)>(&::Meta::Voice::NLayer::Decoder::BitReservoir::TryPeekBits)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x9e06490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"TryPeekBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.get_BitsAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::BitReservoir::*)()>(&::Meta::Voice::NLayer::Decoder::BitReservoir::get_BitsAvailable)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e06814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"get_BitsAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.get_BitsRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Meta::Voice::NLayer::Decoder::BitReservoir::*)()>(&::Meta::Voice::NLayer::Decoder::BitReservoir::get_BitsRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e06858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"get_BitsRead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.SkipBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::BitReservoir::*)(int32_t)>(&::Meta::Voice::NLayer::Decoder::BitReservoir::SkipBits)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e0666c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"SkipBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir.RewindBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::BitReservoir::*)(int32_t)>(&::Meta::Voice::NLayer::Decoder::BitReservoir::RewindBits)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e06860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"RewindBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::BitReservoir._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::BitReservoir::*)()>(&::Meta::Voice::NLayer::Decoder::BitReservoir::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e068e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buf;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buf;
}
constexpr void Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_set__buf(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buf = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____start;
}
constexpr void Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_set__start(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____start = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____end;
}
constexpr void Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_set__end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____end = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__bitsLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsLeft;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__bitsLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsLeft;
}
constexpr void Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_set__bitsLeft(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitsLeft = value;
}
constexpr int64_t& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__bitsRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsRead;
}
constexpr int64_t const& Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_get__bitsRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bitsRead;
}
constexpr void Meta::Voice::NLayer::Decoder::BitReservoir::__cordl_internal_set__bitsRead(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bitsRead = value;
}
inline int32_t Meta::Voice::NLayer::Decoder::BitReservoir::GetSlots(::Meta::Voice::NLayer::IMpegFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"GetSlots", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, frame);
}
inline bool Meta::Voice::NLayer::Decoder::BitReservoir::AddBits(::Meta::Voice::NLayer::IMpegFrame*  frame, int32_t  overlap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"AddBits", {}, {::i2c::type_of<::Meta::Voice::NLayer::IMpegFrame*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame, overlap);
}
inline int32_t Meta::Voice::NLayer::Decoder::BitReservoir::GetBits(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"GetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, count);
}
inline int32_t Meta::Voice::NLayer::Decoder::BitReservoir::Get1Bit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"Get1Bit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Meta::Voice::NLayer::Decoder::BitReservoir::TryPeekBits(int32_t  count, ::by_ref<int32_t>  readCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"TryPeekBits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, count, readCount);
}
inline int32_t Meta::Voice::NLayer::Decoder::BitReservoir::get_BitsAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"get_BitsAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t Meta::Voice::NLayer::Decoder::BitReservoir::get_BitsRead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"get_BitsRead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Meta::Voice::NLayer::Decoder::BitReservoir::SkipBits(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"SkipBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void Meta::Voice::NLayer::Decoder::BitReservoir::RewindBits(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {"RewindBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline void Meta::Voice::NLayer::Decoder::BitReservoir::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::NLayer::Decoder::BitReservoir* Meta::Voice::NLayer::Decoder::BitReservoir::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::BitReservoir*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::BitReservoir::BitReservoir()   {
}
