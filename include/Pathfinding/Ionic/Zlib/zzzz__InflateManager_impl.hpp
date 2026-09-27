#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateManager.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateManager_InflateManagerMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateManager_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateBlocks_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__InflateManager_InflateManagerMode_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zlib::InflateManager::*)(bool)>(&::Pathfinding::Ionic::Zlib::InflateManager::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa6a9ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateManager.get_HandleRfc1950HeaderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Ionic::Zlib::InflateManager::*)()>(&::Pathfinding::Ionic::Zlib::InflateManager::get_HandleRfc1950HeaderBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6a9fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"get_HandleRfc1950HeaderBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateManager.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateManager::*)()>(&::Pathfinding::Ionic::Zlib::InflateManager::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6a9fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateManager.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateManager::*)()>(&::Pathfinding::Ionic::Zlib::InflateManager::End)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa6aa024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateManager::*)(::Pathfinding::Ionic::Zlib::ZlibCodec*, int32_t)>(&::Pathfinding::Ionic::Zlib::InflateManager::Initialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa6aa058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zlib::InflateManager.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zlib::InflateManager::*)(::Pathfinding::Ionic::Zlib::FlushType)>(&::Pathfinding::Ionic::Zlib::InflateManager::Inflate)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xa6aa1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"Inflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::InflateManager_InflateManagerMode& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::InflateManager_InflateManagerMode const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_mode(::GlobalNamespace::InflateManager_InflateManagerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec*& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get__codec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr ::Pathfinding::Ionic::Zlib::ZlibCodec* const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get__codec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set__codec(::Pathfinding::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codec = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_method(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_computedCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedCheck;
}
constexpr uint32_t const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_computedCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedCheck;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_computedCheck(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computedCheck = value;
}
constexpr uint32_t& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_expectedCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedCheck;
}
constexpr uint32_t const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_expectedCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedCheck;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_expectedCheck(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expectedCheck = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_marker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marker;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_marker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marker;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_marker(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___marker = value;
}
constexpr bool& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get__handleRfc1950HeaderBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleRfc1950HeaderBytes;
}
constexpr bool const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get__handleRfc1950HeaderBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleRfc1950HeaderBytes;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set__handleRfc1950HeaderBytes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handleRfc1950HeaderBytes = value;
}
constexpr int32_t& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_wbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wbits;
}
constexpr int32_t const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_wbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wbits;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_wbits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wbits = value;
}
constexpr ::Pathfinding::Ionic::Zlib::InflateBlocks*& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr ::Pathfinding::Ionic::Zlib::InflateBlocks* const& Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_get_blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr void Pathfinding::Ionic::Zlib::InflateManager::__cordl_internal_set_blocks(::Pathfinding::Ionic::Zlib::InflateBlocks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocks = value;
}
inline void Pathfinding::Ionic::Zlib::InflateManager::setStaticF_mark(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "mark", ::Pathfinding::Ionic::Zlib::InflateManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Pathfinding::Ionic::Zlib::InflateManager::getStaticF_mark()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "mark", ::Pathfinding::Ionic::Zlib::InflateManager*>();
}
inline void Pathfinding::Ionic::Zlib::InflateManager::_ctor(bool  expectRfc1950HeaderBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expectRfc1950HeaderBytes);
}
inline bool Pathfinding::Ionic::Zlib::InflateManager::get_HandleRfc1950HeaderBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"get_HandleRfc1950HeaderBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateManager::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateManager::End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateManager::Initialize(::Pathfinding::Ionic::Zlib::ZlibCodec*  codec, int32_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, codec, w);
}
inline int32_t Pathfinding::Ionic::Zlib::InflateManager::Inflate(::Pathfinding::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zlib::InflateManager*>(),
                        {"Inflate", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline ::Pathfinding::Ionic::Zlib::InflateManager* Pathfinding::Ionic::Zlib::InflateManager::New_ctor(bool  expectRfc1950HeaderBytes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zlib::InflateManager*>(expectRfc1950HeaderBytes));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zlib::InflateManager::InflateManager()   {
}
