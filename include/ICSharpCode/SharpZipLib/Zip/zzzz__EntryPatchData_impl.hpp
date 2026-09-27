#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/EntryPatchData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__EntryPatchData_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::EntryPatchData.get_SizePatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::EntryPatchData::*)()>(&::ICSharpCode::SharpZipLib::Zip::EntryPatchData::get_SizePatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"get_SizePatchOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::EntryPatchData.set_SizePatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::EntryPatchData::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::EntryPatchData::set_SizePatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"set_SizePatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::EntryPatchData.get_CrcPatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::ICSharpCode::SharpZipLib::Zip::EntryPatchData::*)()>(&::ICSharpCode::SharpZipLib::Zip::EntryPatchData::get_CrcPatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"get_CrcPatchOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::EntryPatchData.set_CrcPatchOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::EntryPatchData::*)(int64_t)>(&::ICSharpCode::SharpZipLib::Zip::EntryPatchData::set_CrcPatchOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"set_CrcPatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::EntryPatchData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::EntryPatchData::*)()>(&::ICSharpCode::SharpZipLib::Zip::EntryPatchData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::EntryPatchData::__cordl_internal_get_sizePatchOffset_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePatchOffset_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::EntryPatchData::__cordl_internal_get_sizePatchOffset_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizePatchOffset_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::EntryPatchData::__cordl_internal_set_sizePatchOffset_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizePatchOffset_ = value;
}
constexpr int64_t& ICSharpCode::SharpZipLib::Zip::EntryPatchData::__cordl_internal_get_crcPatchOffset_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcPatchOffset_;
}
constexpr int64_t const& ICSharpCode::SharpZipLib::Zip::EntryPatchData::__cordl_internal_get_crcPatchOffset_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___crcPatchOffset_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::EntryPatchData::__cordl_internal_set_crcPatchOffset_(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___crcPatchOffset_ = value;
}
inline int64_t ICSharpCode::SharpZipLib::Zip::EntryPatchData::get_SizePatchOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"get_SizePatchOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::EntryPatchData::set_SizePatchOffset(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"set_SizePatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t ICSharpCode::SharpZipLib::Zip::EntryPatchData::get_CrcPatchOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"get_CrcPatchOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::EntryPatchData::set_CrcPatchOffset(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {"set_CrcPatchOffset", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::EntryPatchData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::EntryPatchData* ICSharpCode::SharpZipLib::Zip::EntryPatchData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::EntryPatchData*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::EntryPatchData::EntryPatchData()   {
}
