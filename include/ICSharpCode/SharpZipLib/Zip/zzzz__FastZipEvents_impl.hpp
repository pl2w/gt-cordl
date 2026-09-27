#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/FastZipEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__FastZipEvents_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__CompletedFileHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__DirectoryEventArgs_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__DirectoryFailureHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__FileFailureHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProcessFileHandler_def.hpp"
#include "ICSharpCode/SharpZipLib/Core/zzzz__ProgressHandler_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.add_ProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::add_ProcessDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f7b5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"add_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.remove_ProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::remove_ProcessDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9f7b698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"remove_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.OnDirectoryFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::StringW, ::System::Exception*)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnDirectoryFailure)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f7b748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnDirectoryFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.OnFileFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::StringW, ::System::Exception*)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnFileFailure)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f7b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnFileFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.OnProcessFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnProcessFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f7b898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnProcessFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.OnCompletedFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::StringW)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnCompletedFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9f7b938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnCompletedFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.OnProcessDirectory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::StringW, bool)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnProcessDirectory)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f7b9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnProcessDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.get_ProgressInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::get_ProgressInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7ba80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"get_ProgressInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents.set_ProgressInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)(::System::TimeSpan)>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::set_ProgressInterval)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f7ba88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"set_ProgressInterval", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::FastZipEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::FastZipEvents::*)()>(&::ICSharpCode::SharpZipLib::Zip::FastZipEvents::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9f7ba90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_ProcessDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessDirectory;
}
constexpr ::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>* const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_ProcessDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessDirectory;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessDirectory = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_ProcessFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessFile;
}
constexpr ::ICSharpCode::SharpZipLib::Core::ProcessFileHandler* const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_ProcessFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProcessFile;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_ProcessFile(::ICSharpCode::SharpZipLib::Core::ProcessFileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProcessFile = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::ProgressHandler*& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_Progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr ::ICSharpCode::SharpZipLib::Core::ProgressHandler* const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_Progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Progress;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_Progress(::ICSharpCode::SharpZipLib::Core::ProgressHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Progress = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_CompletedFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompletedFile;
}
constexpr ::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_CompletedFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompletedFile;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_CompletedFile(::ICSharpCode::SharpZipLib::Core::CompletedFileHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompletedFile = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_DirectoryFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectoryFailure;
}
constexpr ::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler* const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_DirectoryFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectoryFailure;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_DirectoryFailure(::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectoryFailure = value;
}
constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler*& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_FileFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileFailure;
}
constexpr ::ICSharpCode::SharpZipLib::Core::FileFailureHandler* const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_FileFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FileFailure;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_FileFailure(::ICSharpCode::SharpZipLib::Core::FileFailureHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FileFailure = value;
}
constexpr ::System::TimeSpan& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_progressInterval_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInterval_;
}
constexpr ::System::TimeSpan const& ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_get_progressInterval_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressInterval_;
}
constexpr void ICSharpCode::SharpZipLib::Zip::FastZipEvents::__cordl_internal_set_progressInterval_(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressInterval_ = value;
}
inline void ICSharpCode::SharpZipLib::Zip::FastZipEvents::add_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"add_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZipEvents::remove_ProcessDirectory(::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"remove_ProcessDirectory", {}, {::i2c::type_of<::System::EventHandler_1<::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnDirectoryFailure(::StringW  directory, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnDirectoryFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, directory, e);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnFileFailure(::StringW  file, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnFileFailure", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, file, e);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnProcessFile(::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnProcessFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, file);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnCompletedFile(::StringW  file)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnCompletedFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, file);
}
inline bool ICSharpCode::SharpZipLib::Zip::FastZipEvents::OnProcessDirectory(::StringW  directory, bool  hasMatchingFiles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"OnProcessDirectory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, directory, hasMatchingFiles);
}
inline ::System::TimeSpan ICSharpCode::SharpZipLib::Zip::FastZipEvents::get_ProgressInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"get_ProgressInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZipEvents::set_ProgressInterval(::System::TimeSpan  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {"set_ProgressInterval", {}, {::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ICSharpCode::SharpZipLib::Zip::FastZipEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ICSharpCode::SharpZipLib::Zip::FastZipEvents* ICSharpCode::SharpZipLib::Zip::FastZipEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::FastZipEvents*>());
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::FastZipEvents::FastZipEvents()   {
}
