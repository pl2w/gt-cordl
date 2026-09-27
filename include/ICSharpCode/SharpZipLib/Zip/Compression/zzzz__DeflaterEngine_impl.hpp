#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterEngine.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflateStrategy_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflaterEngine_def.hpp"
#include "ICSharpCode/SharpZipLib/Checksum/zzzz__Adler32_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflateStrategy_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflaterHuffman_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__DeflaterPending_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd2d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*, bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fd1c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.Deflate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(bool, bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::Deflate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9fd27dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"Deflate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.SetInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SetInput)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9fd203c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.NeedsInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::NeedsInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fd1fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"NeedsInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.SetDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SetDictionary)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9fd2a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9fd1e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.ResetAdler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::ResetAdler)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fd2700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"ResetAdler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.get_Adler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::get_Adler)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9fd1eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"get_Adler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.get_TotalIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::get_TotalIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd3738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"get_TotalIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.get_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::get_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd3740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"get_Strategy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.set_Strategy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::set_Strategy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fd3748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.SetLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SetLevel)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x9fd2168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.FillWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::FillWindow)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9fd2ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"FillWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.UpdateHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::UpdateHash)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9fd3628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"UpdateHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.InsertString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::InsertString)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9fd3674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"InsertString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.SlideWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)()>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SlideWindow)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9fd3c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SlideWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.FindLongestMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(int32_t)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::FindLongestMatch)> {
  constexpr static std::size_t size = 0x96c;
  constexpr static std::size_t addrs = 0x9fd3cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"FindLongestMatch", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.DeflateStored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(bool, bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflateStored)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9fd2fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"DeflateStored", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.DeflateFast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(bool, bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflateFast)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x9fd3134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"DeflateFast", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine.DeflateSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::*)(bool, bool)>(&::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflateSlow)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9fd3374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"DeflateSlow", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_ins_h()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ins_h;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_ins_h() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ins_h;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_ins_h(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ins_h = value;
}
constexpr ::ArrayW<int16_t>& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr ::ArrayW<int16_t> const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___head;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_head(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___head = value;
}
constexpr ::ArrayW<int16_t>& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::ArrayW<int16_t> const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_prev(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_matchStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchStart;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_matchStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchStart;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_matchStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchStart = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_matchLen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchLen;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_matchLen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matchLen;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_matchLen(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matchLen = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_prevAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevAvailable;
}
constexpr bool const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_prevAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevAvailable;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_prevAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevAvailable = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_blockStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockStart;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_blockStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockStart;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_blockStart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockStart = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_strstart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strstart;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_strstart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strstart;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_strstart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strstart = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_lookahead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookahead;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_lookahead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookahead;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_lookahead(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookahead = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_window()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_window() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___window;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_window(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___window = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_strategy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strategy;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_strategy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strategy;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_strategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strategy = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_max_chain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_chain;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_max_chain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_chain;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_max_chain(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max_chain = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_max_lazy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_lazy;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_max_lazy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max_lazy;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_max_lazy(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max_lazy = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_niceLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___niceLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_niceLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___niceLength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_niceLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___niceLength = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_goodLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodLength;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_goodLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goodLength;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_goodLength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goodLength = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_compressionFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionFunction;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_compressionFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___compressionFunction;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_compressionFunction(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___compressionFunction = value;
}
constexpr ::ArrayW<uint8_t>& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_inputBuf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBuf;
}
constexpr ::ArrayW<uint8_t> const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_inputBuf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputBuf;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_inputBuf(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputBuf = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_totalIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalIn;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_totalIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalIn;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_totalIn(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalIn = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_inputOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputOff;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_inputOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputOff;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_inputOff(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputOff = value;
}
constexpr int32_t& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_inputEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputEnd;
}
constexpr int32_t const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_inputEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputEnd;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_inputEnd(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputEnd = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_pending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pending;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_pending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pending;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_pending(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pending = value;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_huffman()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huffman;
}
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman* const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_huffman() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huffman;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_huffman(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterHuffman*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huffman = value;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32*& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_adler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adler;
}
constexpr ::ICSharpCode::SharpZipLib::Checksum::Adler32* const& ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_get_adler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adler;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::__cordl_internal_set_adler(::ICSharpCode::SharpZipLib::Checksum::Adler32*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adler = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pending);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending, bool  noAdlerCalculation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pending, noAdlerCalculation);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::Deflate(bool  flush, bool  finish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"Deflate", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flush, finish);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SetInput(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SetInput", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::NeedsInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"NeedsInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SetDictionary(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SetDictionary", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, length);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::ResetAdler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"ResetAdler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::get_Adler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"get_Adler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::get_TotalIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"get_TotalIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::get_Strategy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"get_Strategy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::set_Strategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"set_Strategy", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SetLevel(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SetLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::FillWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"FillWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::UpdateHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"UpdateHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::InsertString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"InsertString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::SlideWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"SlideWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::FindLongestMatch(int32_t  curMatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"FindLongestMatch", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, curMatch);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflateStored(bool  flush, bool  finish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"DeflateStored", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flush, finish);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflateFast(bool  flush, bool  finish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"DeflateFast", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flush, finish);
}
inline bool ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflateSlow(bool  flush, bool  finish)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(),
                        {"DeflateSlow", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flush, finish);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(pending));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::New_ctor(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending, bool  noAdlerCalculation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*>(pending, noAdlerCalculation));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine::DeflaterEngine()   {
}
