#pragma once
// IWYU pragma private; include "Ionic/Zlib/InflateManager.hpp"
#include "Ionic/Zlib/zzzz__InflateManager_InflateManagerMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Ionic/Zlib/zzzz__InflateManager_def.hpp"
#include "Ionic/Zlib/zzzz__FlushType_def.hpp"
#include "Ionic/Zlib/zzzz__InflateBlocks_def.hpp"
#include "Ionic/Zlib/zzzz__InflateManager_InflateManagerMode_def.hpp"
#include "Ionic/Zlib/zzzz__ZlibCodec_def.hpp"
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.get_HandleRfc1950HeaderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Ionic::Zlib::InflateManager::*)()>(&::Ionic::Zlib::InflateManager::get_HandleRfc1950HeaderBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa797b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"get_HandleRfc1950HeaderBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.set_HandleRfc1950HeaderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::InflateManager::*)(bool)>(&::Ionic::Zlib::InflateManager::set_HandleRfc1950HeaderBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa797b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"set_HandleRfc1950HeaderBytes", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::InflateManager::*)()>(&::Ionic::Zlib::InflateManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa797b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Ionic::Zlib::InflateManager::*)(bool)>(&::Ionic::Zlib::InflateManager::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa797b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)()>(&::Ionic::Zlib::InflateManager::Reset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa797b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.End
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)()>(&::Ionic::Zlib::InflateManager::End)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa797ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"End", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)(::Ionic::Zlib::ZlibCodec*, int32_t)>(&::Ionic::Zlib::InflateManager::Initialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa797bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)(::Ionic::Zlib::FlushType)>(&::Ionic::Zlib::InflateManager::Inflate)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xa797d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Inflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)(::ArrayW<uint8_t>)>(&::Ionic::Zlib::InflateManager::SetDictionary)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa798418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)()>(&::Ionic::Zlib::InflateManager::Sync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa79858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Sync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Ionic::Zlib::InflateManager.SyncPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Ionic::Zlib::InflateManager::*)(::Ionic::Zlib::ZlibCodec*)>(&::Ionic::Zlib::InflateManager::SyncPoint)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa79873c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"SyncPoint", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::InflateManager_InflateManagerMode& Ionic::Zlib::InflateManager::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::InflateManager_InflateManagerMode const& Ionic::Zlib::InflateManager::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_mode(::GlobalNamespace::InflateManager_InflateManagerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::Ionic::Zlib::ZlibCodec*& Ionic::Zlib::InflateManager::__cordl_internal_get__codec()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr ::Ionic::Zlib::ZlibCodec* const& Ionic::Zlib::InflateManager::__cordl_internal_get__codec() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____codec;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set__codec(::Ionic::Zlib::ZlibCodec*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____codec = value;
}
constexpr int32_t& Ionic::Zlib::InflateManager::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr int32_t const& Ionic::Zlib::InflateManager::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_method(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
constexpr uint32_t& Ionic::Zlib::InflateManager::__cordl_internal_get_computedCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedCheck;
}
constexpr uint32_t const& Ionic::Zlib::InflateManager::__cordl_internal_get_computedCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computedCheck;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_computedCheck(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computedCheck = value;
}
constexpr uint32_t& Ionic::Zlib::InflateManager::__cordl_internal_get_expectedCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedCheck;
}
constexpr uint32_t const& Ionic::Zlib::InflateManager::__cordl_internal_get_expectedCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expectedCheck;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_expectedCheck(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expectedCheck = value;
}
constexpr int32_t& Ionic::Zlib::InflateManager::__cordl_internal_get_marker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marker;
}
constexpr int32_t const& Ionic::Zlib::InflateManager::__cordl_internal_get_marker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___marker;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_marker(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___marker = value;
}
constexpr bool& Ionic::Zlib::InflateManager::__cordl_internal_get__handleRfc1950HeaderBytes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleRfc1950HeaderBytes;
}
constexpr bool const& Ionic::Zlib::InflateManager::__cordl_internal_get__handleRfc1950HeaderBytes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleRfc1950HeaderBytes;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set__handleRfc1950HeaderBytes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handleRfc1950HeaderBytes = value;
}
constexpr int32_t& Ionic::Zlib::InflateManager::__cordl_internal_get_wbits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wbits;
}
constexpr int32_t const& Ionic::Zlib::InflateManager::__cordl_internal_get_wbits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wbits;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_wbits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wbits = value;
}
constexpr ::Ionic::Zlib::InflateBlocks*& Ionic::Zlib::InflateManager::__cordl_internal_get_blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr ::Ionic::Zlib::InflateBlocks* const& Ionic::Zlib::InflateManager::__cordl_internal_get_blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blocks;
}
constexpr void Ionic::Zlib::InflateManager::__cordl_internal_set_blocks(::Ionic::Zlib::InflateBlocks*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blocks = value;
}
inline void Ionic::Zlib::InflateManager::setStaticF_mark(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "mark", ::Ionic::Zlib::InflateManager*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Ionic::Zlib::InflateManager::getStaticF_mark()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "mark", ::Ionic::Zlib::InflateManager*>();
}
inline bool Ionic::Zlib::InflateManager::get_HandleRfc1950HeaderBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"get_HandleRfc1950HeaderBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Ionic::Zlib::InflateManager::set_HandleRfc1950HeaderBytes(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"set_HandleRfc1950HeaderBytes", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Ionic::Zlib::InflateManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Ionic::Zlib::InflateManager::_ctor(bool  expectRfc1950HeaderBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expectRfc1950HeaderBytes);
}
inline int32_t Ionic::Zlib::InflateManager::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::InflateManager::End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::InflateManager::Initialize(::Ionic::Zlib::ZlibCodec*  codec, int32_t  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Initialize", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, codec, w);
}
inline int32_t Ionic::Zlib::InflateManager::Inflate(::Ionic::Zlib::FlushType  flush)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Inflate", {}, {::i2c::type_of<::Ionic::Zlib::FlushType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, flush);
}
inline int32_t Ionic::Zlib::InflateManager::SetDictionary(::ArrayW<uint8_t>  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dictionary);
}
inline int32_t Ionic::Zlib::InflateManager::Sync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"Sync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Ionic::Zlib::InflateManager::SyncPoint(::Ionic::Zlib::ZlibCodec*  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Ionic::Zlib::InflateManager*>(),
                        {"SyncPoint", {}, {::i2c::type_of<::Ionic::Zlib::ZlibCodec*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, z);
}
inline ::Ionic::Zlib::InflateManager* Ionic::Zlib::InflateManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::InflateManager*>());
}
inline ::Ionic::Zlib::InflateManager* Ionic::Zlib::InflateManager::New_ctor(bool  expectRfc1950HeaderBytes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Ionic::Zlib::InflateManager*>(expectRfc1950HeaderBytes));
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::InflateManager::InflateManager()   {
}
