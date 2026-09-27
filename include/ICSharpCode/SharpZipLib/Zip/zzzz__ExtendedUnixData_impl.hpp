#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/ExtendedUnixData.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ExtendedUnixData_Flags_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ExtendedUnixData_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ExtendedUnixData_Flags_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ITaggedData_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.get_TagID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_TagID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f813e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_TagID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.SetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::SetData)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x9f813ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::GetData)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x9f81960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"GetData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.IsValidValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::IsValidValue)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9f81ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"IsValidValue", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.get_ModificationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_ModificationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f81fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_ModificationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.set_ModificationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_ModificationTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f81fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_ModificationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.get_AccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_AccessTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_AccessTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.set_AccessTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_AccessTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f82058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_AccessTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.get_CreateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_CreateTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f820d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_CreateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.set_CreateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)(::System::DateTime)>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_CreateTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9f820e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_CreateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.get_Include
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ExtendedUnixData_Flags (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_Include)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_Include", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData.set_Include
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)(::GlobalNamespace::ExtendedUnixData_Flags)>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_Include)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f82168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_Include", {}, {::i2c::type_of<::GlobalNamespace::ExtendedUnixData_Flags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::*)()>(&::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9f82170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ExtendedUnixData_Flags& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr ::GlobalNamespace::ExtendedUnixData_Flags const& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____flags;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_set__flags(::GlobalNamespace::ExtendedUnixData_Flags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____flags = value;
}
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__modificationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modificationTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__modificationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modificationTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_set__modificationTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modificationTime = value;
}
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__lastAccessTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAccessTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__lastAccessTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastAccessTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_set__lastAccessTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastAccessTime = value;
}
constexpr ::System::DateTime& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__createTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createTime;
}
constexpr ::System::DateTime const& ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_get__createTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createTime;
}
constexpr void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::__cordl_internal_set__createTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createTime = value;
}
inline int16_t ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_TagID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_TagID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::SetData(::ArrayW<uint8_t>  data, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"SetData", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, index, count);
}
inline ::ArrayW<uint8_t> ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::GetData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"GetData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline bool ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::IsValidValue(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"IsValidValue", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_ModificationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_ModificationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_ModificationTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_ModificationTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_AccessTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_AccessTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_AccessTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_AccessTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::DateTime ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_CreateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_CreateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_CreateTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_CreateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ExtendedUnixData_Flags ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::get_Include()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"get_Include", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ExtendedUnixData_Flags>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::set_Include(::GlobalNamespace::ExtendedUnixData_Flags  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {"set_Include", {}, {::i2c::type_of<::GlobalNamespace::ExtendedUnixData_Flags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData* ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData*>());
}
/// @brief Convert operator to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr  ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::operator ::ICSharpCode::SharpZipLib::Zip::ITaggedData*() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(static_cast<void*>(this));
}
/// @brief Convert to "::ICSharpCode::SharpZipLib::Zip::ITaggedData"
constexpr ::ICSharpCode::SharpZipLib::Zip::ITaggedData* ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::i___ICSharpCode__SharpZipLib__Zip__ITaggedData() noexcept {
return static_cast<::ICSharpCode::SharpZipLib::Zip::ITaggedData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::ExtendedUnixData::ExtendedUnixData()   {
}
