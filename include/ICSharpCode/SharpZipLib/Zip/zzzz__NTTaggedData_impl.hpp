#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/NTTaggedData.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__NTTaggedData_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.get_TagID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_TagID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_TagID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::SetData)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x9f82208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::GetData)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x9f826bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"GetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.IsValidValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::IsValidValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9f82aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"IsValidValue", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.get_LastModificationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_LastModificationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_LastModificationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.set_LastModificationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::set_LastModificationTime)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f82bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"set_LastModificationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.get_CreateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_CreateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_CreateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.set_CreateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::set_CreateTime)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f82c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"set_CreateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.get_LastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_LastAccessTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_LastAccessTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData.set_LastAccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::set_LastAccessTime)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9f82ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"set_LastAccessTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::NTTaggedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::NTTaggedData::*)()>(&::ICSharpCode::SharpZipLib::Zip::NTTaggedData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9f82d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_get__lastAccessTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAccessTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_get__lastAccessTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAccessTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_set__lastAccessTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastAccessTime = value;
}
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_get__lastModificationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastModificationTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_get__lastModificationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastModificationTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_set__lastModificationTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastModificationTime = value;
}
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_get__createTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_get__createTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::NTTaggedData::__cordl_internal_set__createTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createTime = value;
}
inline int16_t ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_TagID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_TagID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::NTTaggedData::SetData(::ArrayW<uint8_t>  data, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, index, count);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::NTTaggedData::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::NTTaggedData::IsValidValue(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"IsValidValue", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_LastModificationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_LastModificationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::NTTaggedData::set_LastModificationTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"set_LastModificationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_CreateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_CreateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::NTTaggedData::set_CreateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"set_CreateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::NTTaggedData::get_LastAccessTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"get_LastAccessTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::NTTaggedData::set_LastAccessTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {"set_LastAccessTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::NTTaggedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::NTTaggedData* ICSharpCode::SharpZipLib::Zip::NTTaggedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::NTTaggedData*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr  ICSharpCode::SharpZipLib::Zip::NTTaggedData::operator ::ICSharpCode::SharpZipLib::Zip::ITaggedData*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr ::ICSharpCode::SharpZipLib::Zip::ITaggedData* ICSharpCode::SharpZipLib::Zip::NTTaggedData::i___ICSharpCode__SharpZipLib__Zip__ITaggedData() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::NTTaggedData::NTTaggedData()   {
}
