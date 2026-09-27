#pragma once
// IWYU pragma private; include "PlayFab/PlayFabDataAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabDataAPI_def.hpp"
#include "PlayFab/DataModels/zzzz__AbortFileUploadsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__AbortFileUploadsResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__DeleteFilesRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__DeleteFilesResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__FinalizeFileUploadsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__FinalizeFileUploadsResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__GetFilesRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__GetFilesResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__GetObjectsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__GetObjectsResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__InitiateFileUploadsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__InitiateFileUploadsResponse_def.hpp"
#include "PlayFab/DataModels/zzzz__SetObjectsRequest_def.hpp"
#include "PlayFab/DataModels/zzzz__SetObjectsResponse_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabDataAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7c4168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabDataAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7c41dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.AbortFileUploads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::AbortFileUploadsRequest*, ::System::Action_1<::PlayFab::DataModels::AbortFileUploadsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::AbortFileUploads)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"AbortFileUploads", {}, {::i2c::type_of<::PlayFab::DataModels::AbortFileUploadsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::AbortFileUploadsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.DeleteFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::DeleteFilesRequest*, ::System::Action_1<::PlayFab::DataModels::DeleteFilesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::DeleteFiles)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"DeleteFiles", {}, {::i2c::type_of<::PlayFab::DataModels::DeleteFilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::DeleteFilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.FinalizeFileUploads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::FinalizeFileUploadsRequest*, ::System::Action_1<::PlayFab::DataModels::FinalizeFileUploadsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::FinalizeFileUploads)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c4564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"FinalizeFileUploads", {}, {::i2c::type_of<::PlayFab::DataModels::FinalizeFileUploadsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::FinalizeFileUploadsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.GetFiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::GetFilesRequest*, ::System::Action_1<::PlayFab::DataModels::GetFilesResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::GetFiles)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c46f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"GetFiles", {}, {::i2c::type_of<::PlayFab::DataModels::GetFilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::GetFilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.GetObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::GetObjectsRequest*, ::System::Action_1<::PlayFab::DataModels::GetObjectsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::GetObjects)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"GetObjects", {}, {::i2c::type_of<::PlayFab::DataModels::GetObjectsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::GetObjectsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.InitiateFileUploads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::InitiateFileUploadsRequest*, ::System::Action_1<::PlayFab::DataModels::InitiateFileUploadsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::InitiateFileUploads)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c4a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"InitiateFileUploads", {}, {::i2c::type_of<::PlayFab::DataModels::InitiateFileUploadsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::InitiateFileUploadsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabDataAPI.SetObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::DataModels::SetObjectsRequest*, ::System::Action_1<::PlayFab::DataModels::SetObjectsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabDataAPI::SetObjects)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c4bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"SetObjects", {}, {::i2c::type_of<::PlayFab::DataModels::SetObjectsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::SetObjectsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabDataAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabDataAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabDataAPI::AbortFileUploads(::PlayFab::DataModels::AbortFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::AbortFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"AbortFileUploads", {}, {::i2c::type_of<::PlayFab::DataModels::AbortFileUploadsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::AbortFileUploadsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabDataAPI::DeleteFiles(::PlayFab::DataModels::DeleteFilesRequest*  request, ::System::Action_1<::PlayFab::DataModels::DeleteFilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"DeleteFiles", {}, {::i2c::type_of<::PlayFab::DataModels::DeleteFilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::DeleteFilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabDataAPI::FinalizeFileUploads(::PlayFab::DataModels::FinalizeFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::FinalizeFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"FinalizeFileUploads", {}, {::i2c::type_of<::PlayFab::DataModels::FinalizeFileUploadsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::FinalizeFileUploadsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabDataAPI::GetFiles(::PlayFab::DataModels::GetFilesRequest*  request, ::System::Action_1<::PlayFab::DataModels::GetFilesResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"GetFiles", {}, {::i2c::type_of<::PlayFab::DataModels::GetFilesRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::GetFilesResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabDataAPI::GetObjects(::PlayFab::DataModels::GetObjectsRequest*  request, ::System::Action_1<::PlayFab::DataModels::GetObjectsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"GetObjects", {}, {::i2c::type_of<::PlayFab::DataModels::GetObjectsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::GetObjectsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabDataAPI::InitiateFileUploads(::PlayFab::DataModels::InitiateFileUploadsRequest*  request, ::System::Action_1<::PlayFab::DataModels::InitiateFileUploadsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"InitiateFileUploads", {}, {::i2c::type_of<::PlayFab::DataModels::InitiateFileUploadsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::InitiateFileUploadsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabDataAPI::SetObjects(::PlayFab::DataModels::SetObjectsRequest*  request, ::System::Action_1<::PlayFab::DataModels::SetObjectsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabDataAPI*>(),
                        {"SetObjects", {}, {::i2c::type_of<::PlayFab::DataModels::SetObjectsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::DataModels::SetObjectsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabDataAPI::PlayFabDataAPI()   {
}
