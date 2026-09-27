#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Inflater.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__Inflater_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Adler32_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__OutputWindow_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__StreamManipulator_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__InflaterDynHeader_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__InflaterHuffmanTree_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd645c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9fcb46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Reset)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fcc534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.DecodeHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeHeader)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fd64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.DecodeDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeDict)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9fd66a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeDict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.DecodeHuffman
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeHuffman)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x9fd671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeHuffman", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.DecodeChksum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeChksum)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x9fd6f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeChksum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Decode)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x9fd7148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Decode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetDictionary)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetDictionary)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9fd79d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.SetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetInput)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fd7ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.SetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetInput)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fd7ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(::ArrayW<uint8_t>)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Inflate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fd7ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Inflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.Inflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Inflate)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x9fd7f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Inflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_IsNeedingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_IsNeedingInput)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fd8268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_IsNeedingInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_IsNeedingDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_IsNeedingDictionary)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fd7bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_IsNeedingDictionary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_IsFinished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_IsFinished)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fcd84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_IsFinished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_Adler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_Adler)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9fd8288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_Adler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_TotalOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_TotalOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd82c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_TotalOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_TotalIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_TotalIn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fcc5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_TotalIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater.get_RemainingInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_RemainingInput)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fcc5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_RemainingInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_mode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_readAdler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readAdler;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_readAdler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readAdler;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_readAdler(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readAdler = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_neededBits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neededBits;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_neededBits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neededBits;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_neededBits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neededBits = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_repLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_repLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repLength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_repLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repLength = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_repDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repDist;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_repDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repDist;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_repDist(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repDist = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_uncomprLen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uncomprLen;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_uncomprLen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uncomprLen;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_uncomprLen(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uncomprLen = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_isLastBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastBlock;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_isLastBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLastBlock;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_isLastBlock(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLastBlock = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_totalOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalOut;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_totalOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalOut;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_totalOut(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalOut = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_totalIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalIn;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_totalIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalIn;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_totalIn(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalIn = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_noHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHeader;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_noHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noHeader;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_noHeader(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noHeader = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator* const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___input;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_input(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___input = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_outputWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputWindow;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow* const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_outputWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputWindow;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_outputWindow(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputWindow = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_dynHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynHeader;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader* const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_dynHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynHeader;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_dynHeader(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterDynHeader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynHeader = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_litlenTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litlenTree;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_litlenTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___litlenTree;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_litlenTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___litlenTree = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_distTree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distTree;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_distTree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distTree;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_distTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distTree = value;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32*& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_adler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adler;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32* const& ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_get_adler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adler;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::__cordl_internal_set_adler(::ICSharpCode::SharpZipLib::Checksum::Adler32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adler = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::setStaticF_CPLENS(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "CPLENS", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> ICSharpCode::SharpZipLib::Zip::Compression::Inflater::getStaticF_CPLENS()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "CPLENS", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>();
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::setStaticF_CPLEXT(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "CPLEXT", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> ICSharpCode::SharpZipLib::Zip::Compression::Inflater::getStaticF_CPLEXT()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "CPLEXT", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>();
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::setStaticF_CPDIST(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "CPDIST", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> ICSharpCode::SharpZipLib::Zip::Compression::Inflater::getStaticF_CPDIST()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "CPDIST", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>();
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::setStaticF_CPDEXT(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "CPDEXT", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> ICSharpCode::SharpZipLib::Zip::Compression::Inflater::getStaticF_CPDEXT()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "CPDEXT", ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>();
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::_ctor(bool  noHeader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noHeader);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeDict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeDict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeHuffman()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeHuffman", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::DecodeChksum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"DecodeChksum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Decode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Decode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetDictionary(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetDictionary(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetInput(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::Inflater::SetInput(::ArrayW<uint8_t>  buffer, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Inflate(::ArrayW<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Inflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Inflate(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"Inflate", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_IsNeedingInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_IsNeedingInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_IsNeedingDictionary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_IsNeedingDictionary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_IsFinished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_IsFinished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_Adler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_Adler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_TotalOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_TotalOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_TotalIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_TotalIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::Inflater::get_RemainingInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(),
                        {"get_RemainingInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* ICSharpCode::SharpZipLib::Zip::Compression::Inflater::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>());
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* ICSharpCode::SharpZipLib::Zip::Compression::Inflater::New_ctor(bool  noHeader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*>(noHeader));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater::Inflater()   {
}
