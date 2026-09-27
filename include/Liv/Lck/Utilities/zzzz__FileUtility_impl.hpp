#pragma once
// IWYU pragma private; include "Liv/Lck/Utilities/FileUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility_def.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility_<>c__DisplayClass1_0___CopyToGallery_g__WrappedMediaSaveCallback|0_d_def.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility__CopyToGallery_d__1_def.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility__DeleteMatchingFilesAsync_d__6_def.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility.IsFileLocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Liv::Lck::Utilities::FileUtility::IsFileLocked)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9d62b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"IsFileLocked", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility.CopyToGallery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::StringW, ::StringW, ::System::Action_2<bool,::StringW>*)>(&::Liv::Lck::Utilities::FileUtility::CopyToGallery)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9d62cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"CopyToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility.GenerateFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Liv::Lck::Utilities::FileUtility::GenerateFilename)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9d6c2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"GenerateFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility.GenerateEchoFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Liv::Lck::Utilities::FileUtility::GenerateEchoFilename)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9d6c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"GenerateEchoFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility.IsEchoFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Liv::Lck::Utilities::FileUtility::IsEchoFile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d6c5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"IsEchoFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility.DeleteMatchingFilesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::StringW)>(&::Liv::Lck::Utilities::FileUtility::DeleteMatchingFilesAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d6c674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"DeleteMatchingFilesAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Liv::Lck::Utilities::FileUtility::IsFileLocked(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"IsFileLocked", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Utilities::FileUtility::CopyToGallery(::StringW  sourceFilePath, ::StringW  albumName, ::System::Action_2<bool,::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"CopyToGallery", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_2<bool,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, sourceFilePath, albumName, callback);
}
inline ::StringW Liv::Lck::Utilities::FileUtility::GenerateFilename(::StringW  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"GenerateFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, extension);
}
inline ::StringW Liv::Lck::Utilities::FileUtility::GenerateEchoFilename(::StringW  extension)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"GenerateEchoFilename", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, extension);
}
inline bool Liv::Lck::Utilities::FileUtility::IsEchoFile(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"IsEchoFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Utilities::FileUtility::DeleteMatchingFilesAsync(::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility*>(),
                        {"DeleteMatchingFilesAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, filePath);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Utilities::FileUtility::FileUtility()   {
}
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::*)()>(&::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0._DeleteMatchingFilesAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::*)()>(&::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::_DeleteMatchingFilesAsync_b__0)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x9d6ca48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*>(),
                        {"<DeleteMatchingFilesAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_get_folderPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___folderPath;
}
constexpr ::StringW const& Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_get_folderPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___folderPath;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_set_folderPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___folderPath = value;
}
constexpr ::StringW& Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_get_fileExtension()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileExtension;
}
constexpr ::StringW const& Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_get_fileExtension() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileExtension;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_set_fileExtension(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileExtension = value;
}
constexpr bool& Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_get_sourceIsEcho()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceIsEcho;
}
constexpr bool const& Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_get_sourceIsEcho() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceIsEcho;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::__cordl_internal_set_sourceIsEcho(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceIsEcho = value;
}
inline void Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::_DeleteMatchingFilesAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*>(),
                        {"<DeleteMatchingFilesAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0* Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass6_0::FileUtility___c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::*)()>(&::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6ca10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1._CopyToGallery_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::*)()>(&::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::_CopyToGallery_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d6ca18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*>(),
                        {"<CopyToGallery>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::__cordl_internal_get_destinationFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFilePath;
}
constexpr ::StringW const& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::__cordl_internal_get_destinationFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationFilePath;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::__cordl_internal_set_destinationFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationFilePath = value;
}
constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0* const& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::__cordl_internal_set_CS$__8__locals1(::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::_CopyToGallery_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*>(),
                        {"<CopyToGallery>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1* Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1::FileUtility___c__DisplayClass1_1()   {
}
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::*)()>(&::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6c74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0._CopyToGallery_g__WrappedMediaSaveCallback_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::*)(bool, ::StringW)>(&::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::_CopyToGallery_g__WrappedMediaSaveCallback_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d6c754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*>(),
                        {"<CopyToGallery>g__WrappedMediaSaveCallback|0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<bool,::StringW>*& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_2<bool,::StringW>* const& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::__cordl_internal_set_callback(::System::Action_2<bool,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::StringW& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::__cordl_internal_get_sourceFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFilePath;
}
constexpr ::StringW const& Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::__cordl_internal_get_sourceFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceFilePath;
}
constexpr void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::__cordl_internal_set_sourceFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceFilePath = value;
}
inline void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::_CopyToGallery_g__WrappedMediaSaveCallback_0(bool  success, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*>(),
                        {"<CopyToGallery>g__WrappedMediaSaveCallback|0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, path);
}
inline ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0* Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0::FileUtility___c__DisplayClass1_0()   {
}
