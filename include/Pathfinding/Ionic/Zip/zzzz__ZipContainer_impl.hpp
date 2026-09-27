#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipContainer_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipFile_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipInputStream_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOutputStream_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__ParallelDeflateOutputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipContainer::*)(::System::Object*)>(&::Pathfinding::Ionic::Zip::ZipContainer::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa69f75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_ZipFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipFile* (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_ZipFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ZipFile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_ZipOutputStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipOutputStream* (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_ZipOutputStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa69f94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ZipOutputStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_Password
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_Password)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa69f954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_Password", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_Zip64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::Zip64Option (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_Zip64)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa69f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_Zip64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_BufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_BufferSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa69f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_BufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_ParallelDeflater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_ParallelDeflater)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa69fa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ParallelDeflater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.set_ParallelDeflater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Ionic::Zip::ZipContainer::*)(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*)>(&::Pathfinding::Ionic::Zip::ZipContainer::set_ParallelDeflater)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa69fa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"set_ParallelDeflater", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_ParallelDeflateThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_ParallelDeflateThreshold)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69fab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ParallelDeflateThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_ParallelDeflateMaxBufferPairs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_ParallelDeflateMaxBufferPairs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69fae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ParallelDeflateMaxBufferPairs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_CodecBufferSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_CodecBufferSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa69fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zlib::CompressionStrategy (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_Strategy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69fb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_UseZip64WhenSaving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::Zip64Option (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_UseZip64WhenSaving)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69fb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_UseZip64WhenSaving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_AlternateEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_AlternateEncoding)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_DefaultEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_DefaultEncoding)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa69ef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_DefaultEncoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_AlternateEncodingUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Ionic::Zip::ZipOption (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_AlternateEncodingUsage)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa69eeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Ionic::Zip::ZipContainer.get_ReadStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::Pathfinding::Ionic::Zip::ZipContainer::*)()>(&::Pathfinding::Ionic::Zip::ZipContainer::get_ReadStream)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa69fba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ReadStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::Ionic::Zip::ZipFile*& Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_get__zf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zf;
}
constexpr ::Pathfinding::Ionic::Zip::ZipFile* const& Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_get__zf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zf;
}
constexpr void Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_set__zf(::Pathfinding::Ionic::Zip::ZipFile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zf = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOutputStream*& Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_get__zos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zos;
}
constexpr ::Pathfinding::Ionic::Zip::ZipOutputStream* const& Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_get__zos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zos;
}
constexpr void Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_set__zos(::Pathfinding::Ionic::Zip::ZipOutputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zos = value;
}
constexpr ::Pathfinding::Ionic::Zip::ZipInputStream*& Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_get__zis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zis;
}
constexpr ::Pathfinding::Ionic::Zip::ZipInputStream* const& Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_get__zis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zis;
}
constexpr void Pathfinding::Ionic::Zip::ZipContainer::__cordl_internal_set__zis(::Pathfinding::Ionic::Zip::ZipInputStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zis = value;
}
inline void Pathfinding::Ionic::Zip::ZipContainer::_ctor(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Pathfinding::Ionic::Zip::ZipFile* Pathfinding::Ionic::Zip::ZipContainer::get_ZipFile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ZipFile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipFile*>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipOutputStream* Pathfinding::Ionic::Zip::ZipContainer::get_ZipOutputStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ZipOutputStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipOutputStream*>(this, ___internal_method);
}
inline ::StringW Pathfinding::Ionic::Zip::ZipContainer::get_Password()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_Password", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::Zip64Option Pathfinding::Ionic::Zip::ZipContainer::get_Zip64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_Zip64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::Zip64Option>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipContainer::get_BufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_BufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* Pathfinding::Ionic::Zip::ZipContainer::get_ParallelDeflater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ParallelDeflater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>(this, ___internal_method);
}
inline void Pathfinding::Ionic::Zip::ZipContainer::set_ParallelDeflater(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"set_ParallelDeflater", {}, {::i2c::type_of<::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Pathfinding::Ionic::Zip::ZipContainer::get_ParallelDeflateThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ParallelDeflateThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipContainer::get_ParallelDeflateMaxBufferPairs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ParallelDeflateMaxBufferPairs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Pathfinding::Ionic::Zip::ZipContainer::get_CodecBufferSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_CodecBufferSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy Pathfinding::Ionic::Zip::ZipContainer::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zlib::CompressionStrategy>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::Zip64Option Pathfinding::Ionic::Zip::ZipContainer::get_UseZip64WhenSaving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_UseZip64WhenSaving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::Zip64Option>(this, ___internal_method);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipContainer::get_AlternateEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_AlternateEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::System::Text::Encoding* Pathfinding::Ionic::Zip::ZipContainer::get_DefaultEncoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_DefaultEncoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipOption Pathfinding::Ionic::Zip::ZipContainer::get_AlternateEncodingUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_AlternateEncodingUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Ionic::Zip::ZipOption>(this, ___internal_method);
}
inline ::System::IO::Stream* Pathfinding::Ionic::Zip::ZipContainer::get_ReadStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Ionic::Zip::ZipContainer*>(),
                        {"get_ReadStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method);
}
inline ::Pathfinding::Ionic::Zip::ZipContainer* Pathfinding::Ionic::Zip::ZipContainer::New_ctor(::System::Object*  o)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Ionic::Zip::ZipContainer*>(o));
}
// Ctor Parameters []
constexpr ::Pathfinding::Ionic::Zip::ZipContainer::ZipContainer()   {
}
