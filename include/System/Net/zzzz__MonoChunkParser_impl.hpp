#pragma once
// IWYU pragma private; include "System/Net/MonoChunkParser.hpp"
#include "System/Net/zzzz__MonoChunkParser_State_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_State_def.hpp"
#include "System/Net/zzzz__MonoChunkParser_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Net::MonoChunkParser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoChunkParser::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::MonoChunkParser::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xacaa89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.WriteAndReadBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Net::MonoChunkParser::WriteAndReadBack)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xacaa96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"WriteAndReadBack", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacaaa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadFromChunks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser::ReadFromChunks)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xacaaa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadFromChunks", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xacaa9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.InternalWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::InternalWrite)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xacaad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"InternalWrite", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_WantMore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_WantMore)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xacab6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_WantMore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_DataAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_DataAvailable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xacab6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_DataAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_TotalDataSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_TotalDataSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacab7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_TotalDataSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.get_ChunkLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::MonoChunkParser::*)()>(&::System::Net::MonoChunkParser::get_ChunkLeft)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xacab7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_ChunkLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonoChunkParser_State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadBody)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xacab1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadBody", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.GetChunkSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonoChunkParser_State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::GetChunkSize)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xacaaebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"GetChunkSize", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.RemoveChunkExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::MonoChunkParser::RemoveChunkExtension)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xacab874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"RemoveChunkExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadCRLF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonoChunkParser_State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadCRLF)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xacab2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadCRLF", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ReadTrailer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonoChunkParser_State (::System::Net::MonoChunkParser::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>, int32_t)>(&::System::Net::MonoChunkParser::ReadTrailer)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xacab3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadTrailer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser.ThrowProtocolViolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::System::Net::MonoChunkParser::ThrowProtocolViolation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xacab824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ThrowProtocolViolation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebHeaderCollection*& System::Net::MonoChunkParser::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::MonoChunkParser::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_headers(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__cordl_internal_get_chunkSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr int32_t const& System::Net::MonoChunkParser::__cordl_internal_get_chunkSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkSize;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_chunkSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkSize = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__cordl_internal_get_chunkRead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkRead;
}
constexpr int32_t const& System::Net::MonoChunkParser::__cordl_internal_get_chunkRead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunkRead;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_chunkRead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunkRead = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__cordl_internal_get_totalWritten()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalWritten;
}
constexpr int32_t const& System::Net::MonoChunkParser::__cordl_internal_get_totalWritten() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalWritten;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_totalWritten(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalWritten = value;
}
constexpr ::GlobalNamespace::MonoChunkParser_State& System::Net::MonoChunkParser::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::MonoChunkParser_State const& System::Net::MonoChunkParser::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_state(::GlobalNamespace::MonoChunkParser_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::MonoChunkParser::__cordl_internal_get_saved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saved;
}
constexpr ::System::Text::StringBuilder* const& System::Net::MonoChunkParser::__cordl_internal_get_saved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saved;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_saved(::System::Text::StringBuilder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saved = value;
}
constexpr bool& System::Net::MonoChunkParser::__cordl_internal_get_sawCR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sawCR;
}
constexpr bool const& System::Net::MonoChunkParser::__cordl_internal_get_sawCR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sawCR;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_sawCR(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sawCR = value;
}
constexpr bool& System::Net::MonoChunkParser::__cordl_internal_get_gotit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gotit;
}
constexpr bool const& System::Net::MonoChunkParser::__cordl_internal_get_gotit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gotit;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_gotit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gotit = value;
}
constexpr int32_t& System::Net::MonoChunkParser::__cordl_internal_get_trailerState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailerState;
}
constexpr int32_t const& System::Net::MonoChunkParser::__cordl_internal_get_trailerState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trailerState;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_trailerState(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trailerState = value;
}
constexpr ::System::Collections::ArrayList*& System::Net::MonoChunkParser::__cordl_internal_get_chunks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunks;
}
constexpr ::System::Collections::ArrayList* const& System::Net::MonoChunkParser::__cordl_internal_get_chunks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chunks;
}
constexpr void System::Net::MonoChunkParser::__cordl_internal_set_chunks(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chunks = value;
}
inline void System::Net::MonoChunkParser::_ctor(::System::Net::WebHeaderCollection*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers);
}
inline void System::Net::MonoChunkParser::WriteAndReadBack(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<int32_t>  read)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"WriteAndReadBack", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size, read);
}
inline int32_t System::Net::MonoChunkParser::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline int32_t System::Net::MonoChunkParser::ReadFromChunks(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadFromChunks", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::MonoChunkParser::Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"Write", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::MonoChunkParser::InternalWrite(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"InternalWrite", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline bool System::Net::MonoChunkParser::get_WantMore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_WantMore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::MonoChunkParser::get_DataAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_DataAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::MonoChunkParser::get_TotalDataSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_TotalDataSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Net::MonoChunkParser::get_ChunkLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"get_ChunkLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::MonoChunkParser_State System::Net::MonoChunkParser::ReadBody(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadBody", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonoChunkParser_State>(this, ___internal_method, buffer, offset, size);
}
inline ::GlobalNamespace::MonoChunkParser_State System::Net::MonoChunkParser::GetChunkSize(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"GetChunkSize", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonoChunkParser_State>(this, ___internal_method, buffer, offset, size);
}
inline ::StringW System::Net::MonoChunkParser::RemoveChunkExtension(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"RemoveChunkExtension", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input);
}
inline ::GlobalNamespace::MonoChunkParser_State System::Net::MonoChunkParser::ReadCRLF(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadCRLF", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonoChunkParser_State>(this, ___internal_method, buffer, offset, size);
}
inline ::GlobalNamespace::MonoChunkParser_State System::Net::MonoChunkParser::ReadTrailer(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ReadTrailer", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonoChunkParser_State>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::MonoChunkParser::ThrowProtocolViolation(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser*>(),
                        {"ThrowProtocolViolation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline ::System::Net::MonoChunkParser* System::Net::MonoChunkParser::New_ctor(::System::Net::WebHeaderCollection*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::MonoChunkParser*>(headers));
}
// Ctor Parameters []
constexpr ::System::Net::MonoChunkParser::MonoChunkParser()   {
}
//  Writing Method size for method: ::System::Net::MonoChunkParser_Chunk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::MonoChunkParser_Chunk::*)(::ArrayW<uint8_t>)>(&::System::Net::MonoChunkParser_Chunk::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xacab7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser_Chunk*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::MonoChunkParser_Chunk.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::MonoChunkParser_Chunk::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::MonoChunkParser_Chunk::Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacaad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser_Chunk*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Net::MonoChunkParser_Chunk::__cordl_internal_get_Bytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bytes;
}
constexpr ::ArrayW<uint8_t> const& System::Net::MonoChunkParser_Chunk::__cordl_internal_get_Bytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bytes;
}
constexpr void System::Net::MonoChunkParser_Chunk::__cordl_internal_set_Bytes(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bytes = value;
}
constexpr int32_t& System::Net::MonoChunkParser_Chunk::__cordl_internal_get_Offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr int32_t const& System::Net::MonoChunkParser_Chunk::__cordl_internal_get_Offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Offset;
}
constexpr void System::Net::MonoChunkParser_Chunk::__cordl_internal_set_Offset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Offset = value;
}
inline void System::Net::MonoChunkParser_Chunk::_ctor(::ArrayW<uint8_t>  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser_Chunk*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline int32_t System::Net::MonoChunkParser_Chunk::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::MonoChunkParser_Chunk*>(),
                        {"Read", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline ::System::Net::MonoChunkParser_Chunk* System::Net::MonoChunkParser_Chunk::New_ctor(::ArrayW<uint8_t>  chunk)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::MonoChunkParser_Chunk*>(chunk));
}
// Ctor Parameters []
constexpr ::System::Net::MonoChunkParser_Chunk::MonoChunkParser_Chunk()   {
}
