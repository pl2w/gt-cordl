#pragma once
// IWYU pragma private; include "System/Net/ScatterGatherBuffers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ScatterGatherBuffers_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__ScatterGatherBuffers_def.hpp"
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ScatterGatherBuffers::*)()>(&::System::Net::ScatterGatherBuffers::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac73c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ScatterGatherBuffers::*)(int64_t)>(&::System::Net::ScatterGatherBuffers::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac73c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers.GetBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::BufferOffsetSize*> (::System::Net::ScatterGatherBuffers::*)()>(&::System::Net::ScatterGatherBuffers::GetBuffers)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xac73d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"GetBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::ScatterGatherBuffers::*)()>(&::System::Net::ScatterGatherBuffers::get_Empty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac73e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::ScatterGatherBuffers::*)()>(&::System::Net::ScatterGatherBuffers::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac73e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ScatterGatherBuffers::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::ScatterGatherBuffers::Write)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xac73e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers.AllocateMemoryChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ScatterGatherBuffers_MemoryChunk* (::System::Net::ScatterGatherBuffers::*)(int32_t)>(&::System::Net::ScatterGatherBuffers::AllocateMemoryChunk)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xac73c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"AllocateMemoryChunk", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk*& System::Net::ScatterGatherBuffers::__cordl_internal_get_headChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headChunk;
}
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk* const& System::Net::ScatterGatherBuffers::__cordl_internal_get_headChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headChunk;
}
constexpr void System::Net::ScatterGatherBuffers::__cordl_internal_set_headChunk(::System::Net::ScatterGatherBuffers_MemoryChunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headChunk = value;
}
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk*& System::Net::ScatterGatherBuffers::__cordl_internal_get_currentChunk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChunk;
}
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk* const& System::Net::ScatterGatherBuffers::__cordl_internal_get_currentChunk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentChunk;
}
constexpr void System::Net::ScatterGatherBuffers::__cordl_internal_set_currentChunk(::System::Net::ScatterGatherBuffers_MemoryChunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentChunk = value;
}
constexpr int32_t& System::Net::ScatterGatherBuffers::__cordl_internal_get_nextChunkLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextChunkLength;
}
constexpr int32_t const& System::Net::ScatterGatherBuffers::__cordl_internal_get_nextChunkLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextChunkLength;
}
constexpr void System::Net::ScatterGatherBuffers::__cordl_internal_set_nextChunkLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextChunkLength = value;
}
constexpr int32_t& System::Net::ScatterGatherBuffers::__cordl_internal_get_totalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr int32_t const& System::Net::ScatterGatherBuffers::__cordl_internal_get_totalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr void System::Net::ScatterGatherBuffers::__cordl_internal_set_totalLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalLength = value;
}
constexpr int32_t& System::Net::ScatterGatherBuffers::__cordl_internal_get_chunkCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkCount;
}
constexpr int32_t const& System::Net::ScatterGatherBuffers::__cordl_internal_get_chunkCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkCount;
}
constexpr void System::Net::ScatterGatherBuffers::__cordl_internal_set_chunkCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkCount = value;
}
inline void System::Net::ScatterGatherBuffers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::ScatterGatherBuffers::_ctor(int64_t  totalSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalSize);
}
inline ::ArrayW<::System::Net::BufferOffsetSize*> System::Net::ScatterGatherBuffers::GetBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"GetBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::BufferOffsetSize*>>(this, ___internal_method);
}
inline bool System::Net::ScatterGatherBuffers::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::ScatterGatherBuffers::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::ScatterGatherBuffers::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline ::System::Net::ScatterGatherBuffers_MemoryChunk* System::Net::ScatterGatherBuffers::AllocateMemoryChunk(int32_t  newSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers*>(),
                        {"AllocateMemoryChunk", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ScatterGatherBuffers_MemoryChunk*>(this, ___internal_method, newSize);
}
inline ::System::Net::ScatterGatherBuffers* System::Net::ScatterGatherBuffers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ScatterGatherBuffers*>());
}
inline ::System::Net::ScatterGatherBuffers* System::Net::ScatterGatherBuffers::New_ctor(int64_t  totalSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ScatterGatherBuffers*>(totalSize));
}
// Ctor Parameters []
constexpr ::System::Net::ScatterGatherBuffers::ScatterGatherBuffers()   {
}
//  Writing Method size for method: ::System::Net::ScatterGatherBuffers_MemoryChunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ScatterGatherBuffers_MemoryChunk::*)(int32_t)>(&::System::Net::ScatterGatherBuffers_MemoryChunk::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac73f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers_MemoryChunk*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_get_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr ::ArrayW<uint8_t> const& System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_get_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Buffer;
}
constexpr void System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_set_Buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Buffer = value;
}
constexpr int32_t& System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_get_FreeOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FreeOffset;
}
constexpr int32_t const& System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_get_FreeOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FreeOffset;
}
constexpr void System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_set_FreeOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FreeOffset = value;
}
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk*& System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk* const& System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void System::Net::ScatterGatherBuffers_MemoryChunk::__cordl_internal_set_Next(::System::Net::ScatterGatherBuffers_MemoryChunk*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
inline void System::Net::ScatterGatherBuffers_MemoryChunk::_ctor(int32_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::ScatterGatherBuffers_MemoryChunk*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline ::System::Net::ScatterGatherBuffers_MemoryChunk* System::Net::ScatterGatherBuffers_MemoryChunk::New_ctor(int32_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ScatterGatherBuffers_MemoryChunk*>(bufferSize));
}
// Ctor Parameters []
constexpr ::System::Net::ScatterGatherBuffers_MemoryChunk::ScatterGatherBuffers_MemoryChunk()   {
}
