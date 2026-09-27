#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Core/FileSystemScanner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__FileSystemScanner_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__CompletedFileHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__DirectoryEventArgs_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__DirectoryFailureHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__FileFailureHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__IScanFilter_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProcessFileHandler_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9ffa3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW, ::StringW)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ffa4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::ICSharpCode::SharpZipLib::Core::IScanFilter*)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9ffa564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::ICSharpCode::SharpZipLib::Core::IScanFilter*, ::ICSharpCode::SharpZipLib::Core::IScanFilter*)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9ffa594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.add_ProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::add_ProcessDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9ffa5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"add_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.remove_ProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::remove_ProcessDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9ffa688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"remove_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.OnDirectoryFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW, ::System::Exception*)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnDirectoryFailure)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9ffa738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnDirectoryFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.OnFileFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW, ::System::Exception*)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnFileFailure)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9ffa7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnFileFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.OnProcessFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnProcessFile)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ffa880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnProcessFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.OnCompleteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnCompleteFile)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9ffa910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnCompleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.OnProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnProcessDirectory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9ffa9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnProcessDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.Scan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::Scan)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ffaa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"Scan", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Core::FileSystemScanner.ScanDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Core::FileSystemScanner::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Core::FileSystemScanner::ScanDir)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x9ffaa40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"ScanDir", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_ProcessDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessDirectory;
}
constexpr ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_ProcessDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessDirectory;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessDirectory = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_ProcessFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessFile;
}
constexpr ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_ProcessFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessFile;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_ProcessFile(::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessFile = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_CompletedFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompletedFile;
}
constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_CompletedFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompletedFile;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_CompletedFile(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompletedFile = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_DirectoryFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectoryFailure;
}
constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_DirectoryFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectoryFailure;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_DirectoryFailure(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectoryFailure = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_FileFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileFailure;
}
constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_FileFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileFailure;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_FileFailure(::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileFailure = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_fileFilter_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFilter_;
}
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_fileFilter_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFilter_;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_fileFilter_(::ICSharpCode::SharpZipLib::Core::IScanFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileFilter_ = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter*& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_directoryFilter_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryFilter_;
}
constexpr ::ICSharpCode::SharpZipLib::Core::IScanFilter* const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_directoryFilter_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directoryFilter_;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_directoryFilter_(::ICSharpCode::SharpZipLib::Core::IScanFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directoryFilter_ = value;
}
constexpr bool& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_alive_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alive_;
}
constexpr bool const& ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_get_alive_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alive_;
}
constexpr void ICSharpCode::SharpZipLib::Core::FileSystemScanner::__cordl_internal_set_alive_(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alive_ = value;
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor(::StringW  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor(::StringW  fileFilter, ::StringW  directoryFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileFilter, directoryFilter);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileFilter);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::_ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {".ctor", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>(), ::i2c::type_of<::ICSharpCode::SharpZipLib::Core::IScanFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fileFilter, directoryFilter);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::add_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"add_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::remove_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"remove_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnDirectoryFailure(::StringW  directory, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnDirectoryFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, directory, e);
}
inline bool ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnFileFailure(::StringW  file, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnFileFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, file, e);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnProcessFile(::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnProcessFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnCompleteFile(::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnCompleteFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, file);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::OnProcessDirectory(::StringW  directory, bool  hasMatchingFiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"OnProcessDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directory, hasMatchingFiles);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::Scan(::StringW  directory, bool  recurse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"Scan", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directory, recurse);
}
inline void ICSharpCode::SharpZipLib::Core::FileSystemScanner::ScanDir(::StringW  directory, bool  recurse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(),
                        {"ScanDir", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, directory, recurse);
}
inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* ICSharpCode::SharpZipLib::Core::FileSystemScanner::New_ctor(::StringW  filter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(filter));
}
inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* ICSharpCode::SharpZipLib::Core::FileSystemScanner::New_ctor(::StringW  fileFilter, ::StringW  directoryFilter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(fileFilter, directoryFilter));
}
inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* ICSharpCode::SharpZipLib::Core::FileSystemScanner::New_ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(fileFilter));
}
inline ::ICSharpCode::SharpZipLib::Core::FileSystemScanner* ICSharpCode::SharpZipLib::Core::FileSystemScanner::New_ctor(::ICSharpCode::SharpZipLib::Core::IScanFilter*  fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter*  directoryFilter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Core::FileSystemScanner*>(fileFilter, directoryFilter));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Core::FileSystemScanner::FileSystemScanner()   {
}
