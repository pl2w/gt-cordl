#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Deflater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflateStrategy_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflaterEngine_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflaterPending_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Deflater_CompressionLevel_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fd1c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd1c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(int32_t, bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x9fce50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9fcff6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.get_Adler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_Adler)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9fd1ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_Adler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.get_TotalIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_TotalIn)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd1f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_TotalIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.get_TotalOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_TotalOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd1f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_TotalOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Flush)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fd1f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Finish)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fd1f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Finish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.get_IsFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_IsFinished)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fd1f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_IsFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.get_IsNeedingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_IsNeedingInput)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fd1f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_IsNeedingInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.SetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetInput)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd1fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.SetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetInput)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fd1fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.SetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9fceaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.GetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::GetLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd23e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"GetLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.SetStrategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetStrategy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd1df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetStrategy", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Deflate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Deflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Deflate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x9fd2408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Deflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetDictionary)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd29f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetDictionary)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fd2a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___level;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_set_level(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___level = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_noZlibHeaderOrFooter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noZlibHeaderOrFooter;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_noZlibHeaderOrFooter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noZlibHeaderOrFooter;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_set_noZlibHeaderOrFooter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noZlibHeaderOrFooter = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_totalOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalOut;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_totalOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalOut;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_set_totalOut(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalOut = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_pending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pending;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* const& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_pending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pending;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_set_pending(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pending = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_engine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___engine;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* const& ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_get_engine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___engine;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::__cordl_internal_set_engine(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___engine = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::_ctor(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::_ctor(int32_t  level, bool  noZlibHeaderOrFooter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, noZlibHeaderOrFooter);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_Adler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_Adler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_TotalIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_TotalIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_TotalOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_TotalOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Finish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Finish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_IsFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_IsFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Deflater::get_IsNeedingInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"get_IsNeedingInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetInput(::ArrayW<uint8_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetInput(::ArrayW<uint8_t>  input, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input, offset, count);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Deflater::GetLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"GetLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetStrategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  strategy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetStrategy", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strategy);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Deflate(::ArrayW<uint8_t>  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Deflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Deflate(::ArrayW<uint8_t>  output, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"Deflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, output, offset, length);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetDictionary(::ArrayW<uint8_t>  dictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Deflater::SetDictionary(::ArrayW<uint8_t>  dictionary, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary, index, count);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* ICSharpCode::SharpZipLib::Zip::Compression::Deflater::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>());
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* ICSharpCode::SharpZipLib::Zip::Compression::Deflater::New_ctor(int32_t  level)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(level));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* ICSharpCode::SharpZipLib::Zip::Compression::Deflater::New_ctor(int32_t  level, bool  noZlibHeaderOrFooter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*>(level, noZlibHeaderOrFooter));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater::Deflater()   {
}
