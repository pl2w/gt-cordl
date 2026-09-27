#pragma once
// IWYU pragma private; include "System/Net/WebClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include "System/Net/Http/zzzz__DelegatingStream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebClient)
namespace GlobalNamespace {
struct WebClient__DownloadBitsAsync_d__150;
}
namespace GlobalNamespace {
struct WebClient__GetWebResponseTaskAsync_d__112;
}
namespace GlobalNamespace {
struct WebClient__UploadBitsAsync_d__152;
}
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::ComponentModel {
class AsyncCompletedEventArgs;
}
namespace System::ComponentModel {
class AsyncCompletedEventHandler;
}
namespace System::ComponentModel {
class AsyncOperation;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class DownloadDataCompletedEventArgs;
}
namespace System::Net {
class DownloadDataCompletedEventHandler;
}
namespace System::Net {
class DownloadProgressChangedEventArgs;
}
namespace System::Net {
class DownloadProgressChangedEventHandler;
}
namespace System::Net {
class DownloadStringCompletedEventArgs;
}
namespace System::Net {
class DownloadStringCompletedEventHandler;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class OpenReadCompletedEventArgs;
}
namespace System::Net {
class OpenReadCompletedEventHandler;
}
namespace System::Net {
class OpenWriteCompletedEventArgs;
}
namespace System::Net {
class OpenWriteCompletedEventHandler;
}
namespace System::Net {
class UploadDataCompletedEventArgs;
}
namespace System::Net {
class UploadDataCompletedEventHandler;
}
namespace System::Net {
class UploadFileCompletedEventArgs;
}
namespace System::Net {
class UploadFileCompletedEventHandler;
}
namespace System::Net {
class UploadProgressChangedEventArgs;
}
namespace System::Net {
class UploadProgressChangedEventHandler;
}
namespace System::Net {
class UploadStringCompletedEventArgs;
}
namespace System::Net {
class UploadStringCompletedEventHandler;
}
namespace System::Net {
class UploadValuesCompletedEventArgs;
}
namespace System::Net {
class UploadValuesCompletedEventHandler;
}
namespace System::Net {
class WebClient_ProgressData;
}
namespace System::Net {
class WebClient_WebClientWriteStream;
}
namespace System::Net {
class WebClient___c;
}
namespace System::Net {
class WebClient___c__DisplayClass164_0;
}
namespace System::Net {
class WebClient___c__DisplayClass167_0;
}
namespace System::Net {
class WebClient___c__DisplayClass182_0;
}
namespace System::Net {
class WebClient___c__DisplayClass185_0;
}
namespace System::Net {
class WebClient___c__DisplayClass188_0;
}
namespace System::Net {
class WebClient___c__DisplayClass192_0;
}
namespace System::Net {
class WebClient___c__DisplayClass194_0;
}
namespace System::Net {
class WebClient___c__DisplayClass198_0;
}
namespace System::Net {
class WebClient___c__DisplayClass202_0;
}
namespace System::Net {
class WebClient___c__DisplayClass204_0;
}
namespace System::Net {
class WebClient___c__DisplayClass206_0;
}
namespace System::Net {
class WebClient___c__DisplayClass210_0;
}
namespace System::Net {
class WebClient___c__DisplayClass214_0;
}
namespace System::Net {
class WebClient___c__DisplayClass218_0;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
class WriteStreamClosedEventArgs;
}
namespace System::Net {
class WriteStreamClosedEventHandler;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebClient;
}
namespace System::Net {
class WebClient_ProgressData;
}
namespace System::Net {
class WebClient_WebClientWriteStream;
}
namespace System::Net {
class WebClient___c;
}
namespace System::Net {
class WebClient___c__DisplayClass164_0;
}
namespace System::Net {
class WebClient___c__DisplayClass167_0;
}
namespace System::Net {
class WebClient___c__DisplayClass182_0;
}
namespace System::Net {
class WebClient___c__DisplayClass185_0;
}
namespace System::Net {
class WebClient___c__DisplayClass188_0;
}
namespace System::Net {
class WebClient___c__DisplayClass192_0;
}
namespace System::Net {
class WebClient___c__DisplayClass194_0;
}
namespace System::Net {
class WebClient___c__DisplayClass198_0;
}
namespace System::Net {
class WebClient___c__DisplayClass202_0;
}
namespace System::Net {
class WebClient___c__DisplayClass204_0;
}
namespace System::Net {
class WebClient___c__DisplayClass206_0;
}
namespace System::Net {
class WebClient___c__DisplayClass210_0;
}
namespace System::Net {
class WebClient___c__DisplayClass214_0;
}
namespace System::Net {
class WebClient___c__DisplayClass218_0;
}
// Write type traits
MARK_REF_T(::System::Net::WebClient*);
MARK_REF_T(::System::Net::WebClient_ProgressData*);
MARK_REF_T(::System::Net::WebClient_WebClientWriteStream*);
MARK_REF_T(::System::Net::WebClient___c*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass164_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass167_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass182_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass185_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass188_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass192_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass194_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass198_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass202_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass204_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass206_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass210_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass214_0*);
MARK_REF_T(::System::Net::WebClient___c__DisplayClass218_0*);
DEFINE_IL2CPP_CLASS(::System::Net::WebClient*, "System.Net", "WebClient");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient_ProgressData*, "System.Net", "WebClient/ProgressData");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient_WebClientWriteStream*, "System.Net", "WebClient/WebClientWriteStream");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c*, "System.Net", "WebClient/<>c");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass164_0*, "System.Net", "WebClient/<>c__DisplayClass164_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass167_0*, "System.Net", "WebClient/<>c__DisplayClass167_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass182_0*, "System.Net", "WebClient/<>c__DisplayClass182_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass185_0*, "System.Net", "WebClient/<>c__DisplayClass185_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass188_0*, "System.Net", "WebClient/<>c__DisplayClass188_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass192_0*, "System.Net", "WebClient/<>c__DisplayClass192_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass194_0*, "System.Net", "WebClient/<>c__DisplayClass194_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass198_0*, "System.Net", "WebClient/<>c__DisplayClass198_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass202_0*, "System.Net", "WebClient/<>c__DisplayClass202_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass204_0*, "System.Net", "WebClient/<>c__DisplayClass204_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass206_0*, "System.Net", "WebClient/<>c__DisplayClass206_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass210_0*, "System.Net", "WebClient/<>c__DisplayClass210_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass214_0*, "System.Net", "WebClient/<>c__DisplayClass214_0");
DEFINE_IL2CPP_CLASS(::System::Net::WebClient___c__DisplayClass218_0*, "System.Net", "WebClient/<>c__DisplayClass218_0");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs, System.ComponentModel.Component, System.Text.Encoding
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient
class CORDL_TYPE WebClient : public ::System::ComponentModel::Component {
public:
// Declarations
using _DownloadBitsAsync_d__150 = ::GlobalNamespace::WebClient__DownloadBitsAsync_d__150;

using _GetWebResponseTaskAsync_d__112 = ::GlobalNamespace::WebClient__GetWebResponseTaskAsync_d__112;

using _UploadBitsAsync_d__152 = ::GlobalNamespace::WebClient__UploadBitsAsync_d__152;

using ProgressData = ::System::Net::WebClient_ProgressData;

using WebClientWriteStream = ::System::Net::WebClient_WebClientWriteStream;

using __c = ::System::Net::WebClient___c;

using __c__DisplayClass164_0 = ::System::Net::WebClient___c__DisplayClass164_0;

using __c__DisplayClass167_0 = ::System::Net::WebClient___c__DisplayClass167_0;

using __c__DisplayClass182_0 = ::System::Net::WebClient___c__DisplayClass182_0;

using __c__DisplayClass185_0 = ::System::Net::WebClient___c__DisplayClass185_0;

using __c__DisplayClass188_0 = ::System::Net::WebClient___c__DisplayClass188_0;

using __c__DisplayClass192_0 = ::System::Net::WebClient___c__DisplayClass192_0;

using __c__DisplayClass194_0 = ::System::Net::WebClient___c__DisplayClass194_0;

using __c__DisplayClass198_0 = ::System::Net::WebClient___c__DisplayClass198_0;

using __c__DisplayClass202_0 = ::System::Net::WebClient___c__DisplayClass202_0;

using __c__DisplayClass204_0 = ::System::Net::WebClient___c__DisplayClass204_0;

using __c__DisplayClass206_0 = ::System::Net::WebClient___c__DisplayClass206_0;

using __c__DisplayClass210_0 = ::System::Net::WebClient___c__DisplayClass210_0;

using __c__DisplayClass214_0 = ::System::Net::WebClient___c__DisplayClass214_0;

using __c__DisplayClass218_0 = ::System::Net::WebClient___c__DisplayClass218_0;

/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_AllowReadStreamBuffering, put=set_AllowReadStreamBuffering)) bool  AllowReadStreamBuffering;

/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_AllowWriteStreamBuffering, put=set_AllowWriteStreamBuffering)) bool  AllowWriteStreamBuffering;

 __declspec(property(get=get_BaseAddress, put=set_BaseAddress)) ::StringW  BaseAddress;

 __declspec(property(get=get_CachePolicy, put=set_CachePolicy)) ::System::Net::Cache::RequestCachePolicy*  CachePolicy;

 __declspec(property(get=get_Credentials, put=set_Credentials)) ::System::Net::ICredentials*  Credentials;

/// @brief Field DownloadDataCompleted, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_DownloadDataCompleted, put=__cordl_internal_set_DownloadDataCompleted)) ::System::Net::DownloadDataCompletedEventHandler*  DownloadDataCompleted;

/// @brief Field DownloadFileCompleted, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_DownloadFileCompleted, put=__cordl_internal_set_DownloadFileCompleted)) ::System::ComponentModel::AsyncCompletedEventHandler*  DownloadFileCompleted;

/// @brief Field DownloadProgressChanged, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_DownloadProgressChanged, put=__cordl_internal_set_DownloadProgressChanged)) ::System::Net::DownloadProgressChangedEventHandler*  DownloadProgressChanged;

/// @brief Field DownloadStringCompleted, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_DownloadStringCompleted, put=__cordl_internal_set_DownloadStringCompleted)) ::System::Net::DownloadStringCompletedEventHandler*  DownloadStringCompleted;

 __declspec(property(get=get_Encoding, put=set_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_IsBusy)) bool  IsBusy;

/// @brief Field OpenReadCompleted, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenReadCompleted, put=__cordl_internal_set_OpenReadCompleted)) ::System::Net::OpenReadCompletedEventHandler*  OpenReadCompleted;

/// @brief Field OpenWriteCompleted, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_OpenWriteCompleted, put=__cordl_internal_set_OpenWriteCompleted)) ::System::Net::OpenWriteCompletedEventHandler*  OpenWriteCompleted;

 __declspec(property(get=get_Proxy, put=set_Proxy)) ::System::Net::IWebProxy*  Proxy;

 __declspec(property(get=get_QueryString, put=set_QueryString)) ::System::Collections::Specialized::NameValueCollection*  QueryString;

 __declspec(property(get=get_ResponseHeaders)) ::System::Net::WebHeaderCollection*  ResponseHeaders;

/// @brief Field UploadDataCompleted, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadDataCompleted, put=__cordl_internal_set_UploadDataCompleted)) ::System::Net::UploadDataCompletedEventHandler*  UploadDataCompleted;

/// @brief Field UploadFileCompleted, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadFileCompleted, put=__cordl_internal_set_UploadFileCompleted)) ::System::Net::UploadFileCompletedEventHandler*  UploadFileCompleted;

/// @brief Field UploadProgressChanged, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadProgressChanged, put=__cordl_internal_set_UploadProgressChanged)) ::System::Net::UploadProgressChangedEventHandler*  UploadProgressChanged;

/// @brief Field UploadStringCompleted, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadStringCompleted, put=__cordl_internal_set_UploadStringCompleted)) ::System::Net::UploadStringCompletedEventHandler*  UploadStringCompleted;

/// @brief Field UploadValuesCompleted, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadValuesCompleted, put=__cordl_internal_set_UploadValuesCompleted)) ::System::Net::UploadValuesCompletedEventHandler*  UploadValuesCompleted;

 __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials)) bool  UseDefaultCredentials;

/// @brief Field <AllowReadStreamBuffering>k__BackingField, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowReadStreamBuffering_k__BackingField, put=__cordl_internal_set__AllowReadStreamBuffering_k__BackingField)) bool  _AllowReadStreamBuffering_k__BackingField;

/// @brief Field <AllowWriteStreamBuffering>k__BackingField, offset 0x151, size 0x1 
 __declspec(property(get=__cordl_internal_get__AllowWriteStreamBuffering_k__BackingField, put=__cordl_internal_set__AllowWriteStreamBuffering_k__BackingField)) bool  _AllowWriteStreamBuffering_k__BackingField;

/// @brief Field <CachePolicy>k__BackingField, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__CachePolicy_k__BackingField, put=__cordl_internal_set__CachePolicy_k__BackingField)) ::System::Net::Cache::RequestCachePolicy*  _CachePolicy_k__BackingField;

/// @brief Field _asyncOp, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncOp, put=__cordl_internal_set__asyncOp)) ::System::ComponentModel::AsyncOperation*  _asyncOp;

/// @brief Field _baseAddress, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseAddress, put=__cordl_internal_set__baseAddress)) ::System::Uri*  _baseAddress;

/// @brief Field _callNesting, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__callNesting, put=__cordl_internal_set__callNesting)) int32_t  _callNesting;

/// @brief Field _canceled, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__canceled, put=__cordl_internal_set__canceled)) bool  _canceled;

/// @brief Field _contentLength, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentLength, put=__cordl_internal_set__contentLength)) int64_t  _contentLength;

/// @brief Field _credentials, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentials, put=__cordl_internal_set__credentials)) ::System::Net::ICredentials*  _credentials;

/// @brief Field _downloadDataOperationCompleted, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__downloadDataOperationCompleted, put=__cordl_internal_set__downloadDataOperationCompleted)) ::System::Threading::SendOrPostCallback*  _downloadDataOperationCompleted;

/// @brief Field _downloadFileOperationCompleted, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__downloadFileOperationCompleted, put=__cordl_internal_set__downloadFileOperationCompleted)) ::System::Threading::SendOrPostCallback*  _downloadFileOperationCompleted;

/// @brief Field _downloadStringOperationCompleted, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__downloadStringOperationCompleted, put=__cordl_internal_set__downloadStringOperationCompleted)) ::System::Threading::SendOrPostCallback*  _downloadStringOperationCompleted;

/// @brief Field _encoding, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _headers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__headers, put=__cordl_internal_set__headers)) ::System::Net::WebHeaderCollection*  _headers;

/// @brief Field _initWebClientAsync, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__initWebClientAsync, put=__cordl_internal_set__initWebClientAsync)) bool  _initWebClientAsync;

/// @brief Field _method, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__method, put=__cordl_internal_set__method)) ::StringW  _method;

/// @brief Field _openReadOperationCompleted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__openReadOperationCompleted, put=__cordl_internal_set__openReadOperationCompleted)) ::System::Threading::SendOrPostCallback*  _openReadOperationCompleted;

/// @brief Field _openWriteOperationCompleted, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__openWriteOperationCompleted, put=__cordl_internal_set__openWriteOperationCompleted)) ::System::Threading::SendOrPostCallback*  _openWriteOperationCompleted;

/// @brief Field _progress, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) ::System::Net::WebClient_ProgressData*  _progress;

/// @brief Field _proxy, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__proxy, put=__cordl_internal_set__proxy)) ::System::Net::IWebProxy*  _proxy;

/// @brief Field _proxySet, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__proxySet, put=__cordl_internal_set__proxySet)) bool  _proxySet;

/// @brief Field _reportDownloadProgressChanged, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__reportDownloadProgressChanged, put=__cordl_internal_set__reportDownloadProgressChanged)) ::System::Threading::SendOrPostCallback*  _reportDownloadProgressChanged;

/// @brief Field _reportUploadProgressChanged, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__reportUploadProgressChanged, put=__cordl_internal_set__reportUploadProgressChanged)) ::System::Threading::SendOrPostCallback*  _reportUploadProgressChanged;

/// @brief Field _requestParameters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__requestParameters, put=__cordl_internal_set__requestParameters)) ::System::Collections::Specialized::NameValueCollection*  _requestParameters;

/// @brief Field _uploadDataOperationCompleted, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadDataOperationCompleted, put=__cordl_internal_set__uploadDataOperationCompleted)) ::System::Threading::SendOrPostCallback*  _uploadDataOperationCompleted;

/// @brief Field _uploadFileOperationCompleted, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadFileOperationCompleted, put=__cordl_internal_set__uploadFileOperationCompleted)) ::System::Threading::SendOrPostCallback*  _uploadFileOperationCompleted;

/// @brief Field _uploadStringOperationCompleted, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadStringOperationCompleted, put=__cordl_internal_set__uploadStringOperationCompleted)) ::System::Threading::SendOrPostCallback*  _uploadStringOperationCompleted;

/// @brief Field _uploadValuesOperationCompleted, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__uploadValuesOperationCompleted, put=__cordl_internal_set__uploadValuesOperationCompleted)) ::System::Threading::SendOrPostCallback*  _uploadValuesOperationCompleted;

/// @brief Field _webRequest, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__webRequest, put=__cordl_internal_set__webRequest)) ::System::Net::WebRequest*  _webRequest;

/// @brief Field _webResponse, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__webResponse, put=__cordl_internal_set__webResponse)) ::System::Net::WebResponse*  _webResponse;

/// @brief Field s_knownEncodings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_knownEncodings, put=setStaticF_s_knownEncodings)) ::ArrayW<::System::Text::Encoding*>  s_knownEncodings;

/// @brief Field s_parseContentTypeSeparators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_parseContentTypeSeparators, put=setStaticF_s_parseContentTypeSeparators)) ::ArrayW<char16_t>  s_parseContentTypeSeparators;

/// @brief Method AbortRequest, addr 0xac47794, size 0x118, virtual false, abstract: false, final false
static inline void AbortRequest(::System::Net::WebRequest*  request) ;

/// @brief Method ByteArrayHasPrefix, addr 0xac4af7c, size 0x78, virtual false, abstract: false, final false
static inline bool ByteArrayHasPrefix(::ArrayW<uint8_t>  prefix, ::ArrayW<uint8_t>  byteArray) ;

/// @brief Method CancelAsync, addr 0xac4d954, size 0x60, virtual false, abstract: false, final false
inline void CancelAsync() ;

/// @brief Method CopyHeadersTo, addr 0xac4646c, size 0x3e4, virtual false, abstract: false, final false
inline void CopyHeadersTo(::System::Net::WebRequest*  request) ;

/// @brief Method DownloadBits, addr 0xac47250, size 0x544, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DownloadBits(::System::Net::WebRequest*  request, ::System::IO::Stream*  writeStream) ;

/// [AsyncStateMachine(typeof(System.Net.WebClient::<DownloadBitsAsync>d__150))]
/// @brief Method DownloadBitsAsync, addr 0xac4ad10, size 0x110, virtual false, abstract: false, final false
inline void DownloadBitsAsync(::System::Net::WebRequest*  request, ::System::IO::Stream*  writeStream, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate) ;

/// @brief Method DownloadData, addr 0xac46a20, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DownloadData(::StringW  address) ;

/// @brief Method DownloadData, addr 0xac46bb4, size 0x120, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DownloadData(::System::Uri*  address) ;

/// @brief Method DownloadDataAsync, addr 0xac4c208, size 0x8, virtual false, abstract: false, final false
inline void DownloadDataAsync(::System::Uri*  address) ;

/// @brief Method DownloadDataAsync, addr 0xac4c210, size 0x28c, virtual false, abstract: false, final false
inline void DownloadDataAsync(::System::Uri*  address, ::System::Object*  userToken) ;

/// @brief Method DownloadDataAsyncCallback, addr 0xac4c0f4, size 0xd8, virtual false, abstract: false, final false
inline void DownloadDataAsyncCallback(::ArrayW<uint8_t>  returnBytes, ::System::Exception*  exception, ::System::Object*  state) ;

/// @brief Method DownloadDataInternal, addr 0xac46cd4, size 0x2b4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DownloadDataInternal(::System::Uri*  address, ::by_ref<::System::Net::WebRequest*>  request) ;

/// @brief Method DownloadDataTaskAsync, addr 0xac4e708, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* DownloadDataTaskAsync(::StringW  address) ;

/// @brief Method DownloadDataTaskAsync, addr 0xac4e724, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* DownloadDataTaskAsync(::System::Uri*  address) ;

/// @brief Method DownloadFile, addr 0xac478bc, size 0x2c, virtual false, abstract: false, final false
inline void DownloadFile(::StringW  address, ::StringW  fileName) ;

/// @brief Method DownloadFile, addr 0xac478e8, size 0x450, virtual false, abstract: false, final false
inline void DownloadFile(::System::Uri*  address, ::StringW  fileName) ;

/// @brief Method DownloadFileAsync, addr 0xac4c560, size 0x8, virtual false, abstract: false, final false
inline void DownloadFileAsync(::System::Uri*  address, ::StringW  fileName) ;

/// @brief Method DownloadFileAsync, addr 0xac4c568, size 0x2e8, virtual false, abstract: false, final false
inline void DownloadFileAsync(::System::Uri*  address, ::StringW  fileName, ::System::Object*  userToken) ;

/// @brief Method DownloadFileAsyncCallback, addr 0xac4c49c, size 0xc4, virtual false, abstract: false, final false
inline void DownloadFileAsyncCallback(::ArrayW<uint8_t>  returnBytes, ::System::Exception*  exception, ::System::Object*  state) ;

/// @brief Method DownloadFileTaskAsync, addr 0xac4ea30, size 0x2c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DownloadFileTaskAsync(::StringW  address, ::StringW  fileName) ;

/// @brief Method DownloadFileTaskAsync, addr 0xac4ea5c, size 0x20c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DownloadFileTaskAsync(::System::Uri*  address, ::StringW  fileName) ;

/// @brief Method DownloadString, addr 0xac4abac, size 0x1c, virtual false, abstract: false, final false
inline ::StringW DownloadString(::StringW  address) ;

/// @brief Method DownloadString, addr 0xac4abc8, size 0x134, virtual false, abstract: false, final false
inline ::StringW DownloadString(::System::Uri*  address) ;

/// @brief Method DownloadStringAsync, addr 0xac4be60, size 0x8, virtual false, abstract: false, final false
inline void DownloadStringAsync(::System::Uri*  address) ;

/// @brief Method DownloadStringAsync, addr 0xac4be68, size 0x28c, virtual false, abstract: false, final false
inline void DownloadStringAsync(::System::Uri*  address, ::System::Object*  userToken) ;

/// @brief Method DownloadStringAsyncCallback, addr 0xac4bc1c, size 0x208, virtual false, abstract: false, final false
inline void DownloadStringAsyncCallback(::ArrayW<uint8_t>  returnBytes, ::System::Exception*  exception, ::System::Object*  state) ;

/// @brief Method DownloadStringTaskAsync, addr 0xac4d9b4, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* DownloadStringTaskAsync(::StringW  address) ;

/// @brief Method DownloadStringTaskAsync, addr 0xac4d9d0, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* DownloadStringTaskAsync(::System::Uri*  address) ;

/// @brief Method EndOperation, addr 0xac4599c, size 0xc, virtual false, abstract: false, final false
inline void EndOperation() ;

/// @brief Method GetExceptionToPropagate, addr 0xac4b744, size 0xe4, virtual false, abstract: false, final false
static inline ::System::Exception* GetExceptionToPropagate(::System::Exception*  e) ;

/// @brief Method GetStringUsingEncoding, addr 0xac4a74c, size 0x460, virtual false, abstract: false, final false
inline ::StringW GetStringUsingEncoding(::System::Net::WebRequest*  request, ::ArrayW<uint8_t>  data) ;

/// @brief Method GetUri, addr 0xac46a3c, size 0x178, virtual false, abstract: false, final false
inline ::System::Uri* GetUri(::StringW  address) ;

/// @brief Method GetUri, addr 0xac46f88, size 0x2c8, virtual false, abstract: false, final false
inline ::System::Uri* GetUri(::System::Uri*  address) ;

/// @brief Method GetValuesToUpload, addr 0xac49d74, size 0x280, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetValuesToUpload(::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method GetWebRequest, addr 0xac4634c, size 0x120, virtual true, abstract: false, final false
inline ::System::Net::WebRequest* GetWebRequest(::System::Uri*  address) ;

/// @brief Method GetWebResponse, addr 0xac46850, size 0x50, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetWebResponse(::System::Net::WebRequest*  request) ;

/// @brief Method GetWebResponse, addr 0xac468a0, size 0x54, virtual true, abstract: false, final false
inline ::System::Net::WebResponse* GetWebResponse(::System::Net::WebRequest*  request, ::System::IAsyncResult*  result) ;

/// [AsyncStateMachine(typeof(System.Net.WebClient::<GetWebResponseTaskAsync>d__112))]
/// @brief Method GetWebResponseTaskAsync, addr 0xac468f4, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* GetWebResponseTaskAsync(::System::Net::WebRequest*  request) ;

/// @brief Method HandleCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAsyncCompletedEventArgs,typename TCompletionDelegate,typename T>
requires(::cordl_internals::type_constraint<TAsyncCompletedEventArgs, ::System::ComponentModel::AsyncCompletedEventArgs*>)
inline void HandleCompletion(::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, TAsyncCompletedEventArgs  e, ::System::Func_2<TAsyncCompletedEventArgs,T>*  getResult, TCompletionDelegate  handler, ::System::Action_2<::System::Net::WebClient*,TCompletionDelegate>*  unregisterHandler) ;

/// @brief Method IntToHex, addr 0xac4b368, size 0x18, virtual false, abstract: false, final false
static inline char16_t IntToHex(int32_t  n) ;

/// @brief Method InvokeOperationCompleted, addr 0xac4b380, size 0x78, virtual false, abstract: false, final false
inline void InvokeOperationCompleted(::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Threading::SendOrPostCallback*  callback, ::System::ComponentModel::AsyncCompletedEventArgs*  eventArgs) ;

/// @brief Method IsSafe, addr 0xac4b2fc, size 0x6c, virtual false, abstract: false, final false
static inline bool IsSafe(char16_t  ch) ;

/// @brief Method MapToDefaultMethod, addr 0xac4857c, size 0x128, virtual false, abstract: false, final false
inline ::StringW MapToDefaultMethod(::System::Uri*  address) ;

static inline ::System::Net::WebClient* New_ctor() ;

/// @brief Method OnDownloadDataCompleted, addr 0xac45744, size 0x28, virtual true, abstract: false, final false
inline void OnDownloadDataCompleted(::System::Net::DownloadDataCompletedEventArgs*  e) ;

/// @brief Method OnDownloadFileCompleted, addr 0xac4576c, size 0x28, virtual true, abstract: false, final false
inline void OnDownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventArgs*  e) ;

/// @brief Method OnDownloadProgressChanged, addr 0xac45794, size 0x28, virtual true, abstract: false, final false
inline void OnDownloadProgressChanged(::System::Net::DownloadProgressChangedEventArgs*  e) ;

/// @brief Method OnDownloadStringCompleted, addr 0xac4571c, size 0x28, virtual true, abstract: false, final false
inline void OnDownloadStringCompleted(::System::Net::DownloadStringCompletedEventArgs*  e) ;

/// @brief Method OnOpenReadCompleted, addr 0xac45884, size 0x28, virtual true, abstract: false, final false
inline void OnOpenReadCompleted(::System::Net::OpenReadCompletedEventArgs*  e) ;

/// @brief Method OnOpenWriteCompleted, addr 0xac458ac, size 0x28, virtual true, abstract: false, final false
inline void OnOpenWriteCompleted(::System::Net::OpenWriteCompletedEventArgs*  e) ;

/// @brief Method OnUploadDataCompleted, addr 0xac457e4, size 0x28, virtual true, abstract: false, final false
inline void OnUploadDataCompleted(::System::Net::UploadDataCompletedEventArgs*  e) ;

/// @brief Method OnUploadFileCompleted, addr 0xac4580c, size 0x28, virtual true, abstract: false, final false
inline void OnUploadFileCompleted(::System::Net::UploadFileCompletedEventArgs*  e) ;

/// @brief Method OnUploadProgressChanged, addr 0xac4585c, size 0x28, virtual true, abstract: false, final false
inline void OnUploadProgressChanged(::System::Net::UploadProgressChangedEventArgs*  e) ;

/// @brief Method OnUploadStringCompleted, addr 0xac457bc, size 0x28, virtual true, abstract: false, final false
inline void OnUploadStringCompleted(::System::Net::UploadStringCompletedEventArgs*  e) ;

/// @brief Method OnUploadValuesCompleted, addr 0xac45834, size 0x28, virtual true, abstract: false, final false
inline void OnUploadValuesCompleted(::System::Net::UploadValuesCompletedEventArgs*  e) ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief Method OnWriteStreamClosed, addr 0xac4f998, size 0x4, virtual true, abstract: false, final false
inline void OnWriteStreamClosed(::System::Net::WriteStreamClosedEventArgs*  e) ;

/// @brief Method OpenFileInternal, addr 0xac49184, size 0x70c, virtual false, abstract: false, final false
inline void OpenFileInternal(bool  needsHeaderAndBoundary, ::StringW  fileName, ::by_ref<::System::IO::FileStream*>  fs, ::by_ref<::ArrayW<uint8_t>>  buffer, ::by_ref<::ArrayW<uint8_t>>  formHeaderBytes, ::by_ref<::ArrayW<uint8_t>>  boundaryBytes) ;

/// @brief Method OpenRead, addr 0xac47d38, size 0x1c, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenRead(::StringW  address) ;

/// @brief Method OpenRead, addr 0xac47d54, size 0x3d4, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenRead(::System::Uri*  address) ;

/// @brief Method OpenReadAsync, addr 0xac4b3f8, size 0x8, virtual false, abstract: false, final false
inline void OpenReadAsync(::System::Uri*  address) ;

/// @brief Method OpenReadAsync, addr 0xac4b400, size 0x33c, virtual false, abstract: false, final false
inline void OpenReadAsync(::System::Uri*  address, ::System::Object*  userToken) ;

/// @brief Method OpenReadTaskAsync, addr 0xac4dcdc, size 0x1c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenReadTaskAsync(::StringW  address) ;

/// @brief Method OpenReadTaskAsync, addr 0xac4dcf8, size 0x1f8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenReadTaskAsync(::System::Uri*  address) ;

/// @brief Method OpenWrite, addr 0xac48128, size 0x20, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenWrite(::StringW  address) ;

/// @brief Method OpenWrite, addr 0xac48550, size 0x2c, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenWrite(::StringW  address, ::StringW  method) ;

/// @brief Method OpenWrite, addr 0xac48548, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenWrite(::System::Uri*  address) ;

/// @brief Method OpenWrite, addr 0xac48148, size 0x400, virtual false, abstract: false, final false
inline ::System::IO::Stream* OpenWrite(::System::Uri*  address, ::StringW  method) ;

/// @brief Method OpenWriteAsync, addr 0xac4b864, size 0xc, virtual false, abstract: false, final false
inline void OpenWriteAsync(::System::Uri*  address) ;

/// @brief Method OpenWriteAsync, addr 0xac4bbd0, size 0x8, virtual false, abstract: false, final false
inline void OpenWriteAsync(::System::Uri*  address, ::StringW  method) ;

/// @brief Method OpenWriteAsync, addr 0xac4b870, size 0x360, virtual false, abstract: false, final false
inline void OpenWriteAsync(::System::Uri*  address, ::StringW  method, ::System::Object*  userToken) ;

/// @brief Method OpenWriteTaskAsync, addr 0xac4e004, size 0x20, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync(::StringW  address) ;

/// @brief Method OpenWriteTaskAsync, addr 0xac4e234, size 0x2c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync(::StringW  address, ::StringW  method) ;

/// @brief Method OpenWriteTaskAsync, addr 0xac4e22c, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync(::System::Uri*  address) ;

/// @brief Method OpenWriteTaskAsync, addr 0xac4e024, size 0x208, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* OpenWriteTaskAsync(::System::Uri*  address, ::StringW  method) ;

/// @brief Method PostProgressChanged, addr 0xac4f72c, size 0x1d8, virtual false, abstract: false, final false
inline void PostProgressChanged(::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Net::WebClient_ProgressData*  progress) ;

/// @brief Method StartAsyncOperation, addr 0xac459bc, size 0x390, virtual false, abstract: false, final false
inline ::System::ComponentModel::AsyncOperation* StartAsyncOperation(::System::Object*  userToken) ;

/// @brief Method StartOperation, addr 0xac458d4, size 0xc8, virtual false, abstract: false, final false
inline void StartOperation() ;

/// @brief Method ThrowIfNull, addr 0xac45df0, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowIfNull(::System::Object*  argument, ::StringW  parameterName) ;

/// @brief Method UploadBits, addr 0xac48b74, size 0x610, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadBits(::System::Net::WebRequest*  request, ::System::IO::Stream*  readStream, ::ArrayW<uint8_t>  buffer, int32_t  chunkSize, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  footer) ;

/// [AsyncStateMachine(typeof(System.Net.WebClient::<UploadBitsAsync>d__152))]
/// @brief Method UploadBitsAsync, addr 0xac4ae20, size 0x15c, virtual false, abstract: false, final false
inline void UploadBitsAsync(::System::Net::WebRequest*  request, ::System::IO::Stream*  readStream, ::ArrayW<uint8_t>  buffer, int32_t  chunkSize, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  footer, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate) ;

/// @brief Method UploadData, addr 0xac486e8, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadData(::StringW  address, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadData, addr 0xac48890, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadData(::StringW  address, ::StringW  method, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadData, addr 0xac48884, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadData(::System::Uri*  address, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadData, addr 0xac48718, size 0x16c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadData(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadDataAsync, addr 0xac4cc0c, size 0x10, virtual false, abstract: false, final false
inline void UploadDataAsync(::System::Uri*  address, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadDataAsync, addr 0xac4d004, size 0x8, virtual false, abstract: false, final false
inline void UploadDataAsync(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadDataAsync, addr 0xac4cc1c, size 0x3e8, virtual false, abstract: false, final false
inline void UploadDataAsync(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data, ::System::Object*  userToken) ;

/// @brief Method UploadDataInternal, addr 0xac488c4, size 0x2b0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadDataInternal(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data, ::by_ref<::System::Net::WebRequest*>  request) ;

/// @brief Method UploadDataTaskAsync, addr 0xac4ec70, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadDataTaskAsync(::StringW  address, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadDataTaskAsync, addr 0xac4eebc, size 0x34, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadDataTaskAsync(::StringW  address, ::StringW  method, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadDataTaskAsync, addr 0xac4eeb0, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadDataTaskAsync(::System::Uri*  address, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadDataTaskAsync, addr 0xac4eca0, size 0x210, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadDataTaskAsync(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data) ;

/// @brief Method UploadFile, addr 0xac498a4, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadFile(::StringW  address, ::StringW  fileName) ;

/// @brief Method UploadFile, addr 0xac49d40, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadFile(::StringW  address, ::StringW  method, ::StringW  fileName) ;

/// @brief Method UploadFile, addr 0xac498d4, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadFile(::System::Uri*  address, ::StringW  fileName) ;

/// @brief Method UploadFile, addr 0xac498e0, size 0x460, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadFile(::System::Uri*  address, ::StringW  method, ::StringW  fileName) ;

/// @brief Method UploadFileAsync, addr 0xac4d050, size 0x10, virtual false, abstract: false, final false
inline void UploadFileAsync(::System::Uri*  address, ::StringW  fileName) ;

/// @brief Method UploadFileAsync, addr 0xac4d4bc, size 0x8, virtual false, abstract: false, final false
inline void UploadFileAsync(::System::Uri*  address, ::StringW  method, ::StringW  fileName) ;

/// @brief Method UploadFileAsync, addr 0xac4d060, size 0x45c, virtual false, abstract: false, final false
inline void UploadFileAsync(::System::Uri*  address, ::StringW  method, ::StringW  fileName, ::System::Object*  userToken) ;

/// @brief Method UploadFileTaskAsync, addr 0xac4f004, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadFileTaskAsync(::StringW  address, ::StringW  fileName) ;

/// @brief Method UploadFileTaskAsync, addr 0xac4f250, size 0x34, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadFileTaskAsync(::StringW  address, ::StringW  method, ::StringW  fileName) ;

/// @brief Method UploadFileTaskAsync, addr 0xac4f244, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadFileTaskAsync(::System::Uri*  address, ::StringW  fileName) ;

/// @brief Method UploadFileTaskAsync, addr 0xac4f034, size 0x210, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadFileTaskAsync(::System::Uri*  address, ::StringW  method, ::StringW  fileName) ;

/// @brief Method UploadString, addr 0xac4a534, size 0x30, virtual false, abstract: false, final false
inline ::StringW UploadString(::StringW  address, ::StringW  data) ;

/// @brief Method UploadString, addr 0xac4a718, size 0x34, virtual false, abstract: false, final false
inline ::StringW UploadString(::StringW  address, ::StringW  method, ::StringW  data) ;

/// @brief Method UploadString, addr 0xac4a70c, size 0xc, virtual false, abstract: false, final false
inline ::StringW UploadString(::System::Uri*  address, ::StringW  data) ;

/// @brief Method UploadString, addr 0xac4a564, size 0x1a8, virtual false, abstract: false, final false
inline ::StringW UploadString(::System::Uri*  address, ::StringW  method, ::StringW  data) ;

/// @brief Method UploadStringAsync, addr 0xac4c850, size 0x10, virtual false, abstract: false, final false
inline void UploadStringAsync(::System::Uri*  address, ::StringW  data) ;

/// @brief Method UploadStringAsync, addr 0xac4cbc8, size 0x8, virtual false, abstract: false, final false
inline void UploadStringAsync(::System::Uri*  address, ::StringW  method, ::StringW  data) ;

/// @brief Method UploadStringAsync, addr 0xac4c860, size 0x368, virtual false, abstract: false, final false
inline void UploadStringAsync(::System::Uri*  address, ::StringW  method, ::StringW  data, ::System::Object*  userToken) ;

/// @brief Method UploadStringTaskAsync, addr 0xac4e374, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* UploadStringTaskAsync(::StringW  address, ::StringW  data) ;

/// @brief Method UploadStringTaskAsync, addr 0xac4e3a4, size 0x34, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* UploadStringTaskAsync(::StringW  address, ::StringW  method, ::StringW  data) ;

/// @brief Method UploadStringTaskAsync, addr 0xac4e3d8, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* UploadStringTaskAsync(::System::Uri*  address, ::StringW  data) ;

/// @brief Method UploadStringTaskAsync, addr 0xac4e3e4, size 0x210, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* UploadStringTaskAsync(::System::Uri*  address, ::StringW  method, ::StringW  data) ;

/// @brief Method UploadValues, addr 0xac4a0b8, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadValues(::StringW  address, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValues, addr 0xac4a500, size 0x34, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadValues(::StringW  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValues, addr 0xac4a4f4, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadValues(::System::Uri*  address, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValues, addr 0xac4a0e8, size 0x40c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UploadValues(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValuesAsync, addr 0xac4d508, size 0x10, virtual false, abstract: false, final false
inline void UploadValuesAsync(::System::Uri*  address, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValuesAsync, addr 0xac4d908, size 0x8, virtual false, abstract: false, final false
inline void UploadValuesAsync(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValuesAsync, addr 0xac4d518, size 0x3f0, virtual false, abstract: false, final false
inline void UploadValuesAsync(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data, ::System::Object*  userToken) ;

/// @brief Method UploadValuesTaskAsync, addr 0xac4f398, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadValuesTaskAsync(::StringW  address, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValuesTaskAsync, addr 0xac4f5d8, size 0x34, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadValuesTaskAsync(::StringW  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValuesTaskAsync, addr 0xac4f60c, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadValuesTaskAsync(::System::Uri*  address, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UploadValuesTaskAsync, addr 0xac4f3c8, size 0x210, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* UploadValuesTaskAsync(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data) ;

/// @brief Method UrlEncode, addr 0xac49ff4, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW UrlEncode(::StringW  str) ;

/// @brief Method UrlEncodeBytesToBytesInternal, addr 0xac4aff4, size 0x308, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> UrlEncodeBytesToBytesInternal(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count, bool  alwaysCreateReturnValue) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_0, addr 0xac4fb88, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_0(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_1, addr 0xac4fc18, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_1(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_10, addr 0xac50128, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_10(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_2, addr 0xac4fca8, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_2(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_3, addr 0xac4fd38, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_3(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_4, addr 0xac4fdc8, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_4(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_5, addr 0xac4fe58, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_5(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_6, addr 0xac4fee8, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_6(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_7, addr 0xac4ff78, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_7(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_8, addr 0xac50008, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_8(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <StartAsyncOperation>b__78_9, addr 0xac50098, size 0x90, virtual false, abstract: false, final false
inline void _StartAsyncOperation_b__78_9(::System::Object*  arg) ;

/// [CompilerGenerated]
/// @brief Method <UploadStringAsync>b__179_0, addr 0xac501b8, size 0x1f0, virtual false, abstract: false, final false
inline void _UploadStringAsync_b__179_0(::ArrayW<uint8_t>  bytesResult, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp) ;

constexpr ::System::Net::DownloadDataCompletedEventHandler* const& __cordl_internal_get_DownloadDataCompleted() const;

constexpr ::System::Net::DownloadDataCompletedEventHandler*& __cordl_internal_get_DownloadDataCompleted() ;

constexpr ::System::ComponentModel::AsyncCompletedEventHandler* const& __cordl_internal_get_DownloadFileCompleted() const;

constexpr ::System::ComponentModel::AsyncCompletedEventHandler*& __cordl_internal_get_DownloadFileCompleted() ;

constexpr ::System::Net::DownloadProgressChangedEventHandler* const& __cordl_internal_get_DownloadProgressChanged() const;

constexpr ::System::Net::DownloadProgressChangedEventHandler*& __cordl_internal_get_DownloadProgressChanged() ;

constexpr ::System::Net::DownloadStringCompletedEventHandler* const& __cordl_internal_get_DownloadStringCompleted() const;

constexpr ::System::Net::DownloadStringCompletedEventHandler*& __cordl_internal_get_DownloadStringCompleted() ;

constexpr ::System::Net::OpenReadCompletedEventHandler* const& __cordl_internal_get_OpenReadCompleted() const;

constexpr ::System::Net::OpenReadCompletedEventHandler*& __cordl_internal_get_OpenReadCompleted() ;

constexpr ::System::Net::OpenWriteCompletedEventHandler* const& __cordl_internal_get_OpenWriteCompleted() const;

constexpr ::System::Net::OpenWriteCompletedEventHandler*& __cordl_internal_get_OpenWriteCompleted() ;

constexpr ::System::Net::UploadDataCompletedEventHandler* const& __cordl_internal_get_UploadDataCompleted() const;

constexpr ::System::Net::UploadDataCompletedEventHandler*& __cordl_internal_get_UploadDataCompleted() ;

constexpr ::System::Net::UploadFileCompletedEventHandler* const& __cordl_internal_get_UploadFileCompleted() const;

constexpr ::System::Net::UploadFileCompletedEventHandler*& __cordl_internal_get_UploadFileCompleted() ;

constexpr ::System::Net::UploadProgressChangedEventHandler* const& __cordl_internal_get_UploadProgressChanged() const;

constexpr ::System::Net::UploadProgressChangedEventHandler*& __cordl_internal_get_UploadProgressChanged() ;

constexpr ::System::Net::UploadStringCompletedEventHandler* const& __cordl_internal_get_UploadStringCompleted() const;

constexpr ::System::Net::UploadStringCompletedEventHandler*& __cordl_internal_get_UploadStringCompleted() ;

constexpr ::System::Net::UploadValuesCompletedEventHandler* const& __cordl_internal_get_UploadValuesCompleted() const;

constexpr ::System::Net::UploadValuesCompletedEventHandler*& __cordl_internal_get_UploadValuesCompleted() ;

constexpr bool const& __cordl_internal_get__AllowReadStreamBuffering_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowReadStreamBuffering_k__BackingField() ;

constexpr bool const& __cordl_internal_get__AllowWriteStreamBuffering_k__BackingField() const;

constexpr bool& __cordl_internal_get__AllowWriteStreamBuffering_k__BackingField() ;

constexpr ::System::Net::Cache::RequestCachePolicy* const& __cordl_internal_get__CachePolicy_k__BackingField() const;

constexpr ::System::Net::Cache::RequestCachePolicy*& __cordl_internal_get__CachePolicy_k__BackingField() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get__asyncOp() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get__asyncOp() ;

constexpr ::System::Uri* const& __cordl_internal_get__baseAddress() const;

constexpr ::System::Uri*& __cordl_internal_get__baseAddress() ;

constexpr int32_t const& __cordl_internal_get__callNesting() const;

constexpr int32_t& __cordl_internal_get__callNesting() ;

constexpr bool const& __cordl_internal_get__canceled() const;

constexpr bool& __cordl_internal_get__canceled() ;

constexpr int64_t const& __cordl_internal_get__contentLength() const;

constexpr int64_t& __cordl_internal_get__contentLength() ;

constexpr ::System::Net::ICredentials* const& __cordl_internal_get__credentials() const;

constexpr ::System::Net::ICredentials*& __cordl_internal_get__credentials() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__downloadDataOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__downloadDataOperationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__downloadFileOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__downloadFileOperationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__downloadStringOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__downloadStringOperationCompleted() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__headers() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__headers() ;

constexpr bool const& __cordl_internal_get__initWebClientAsync() const;

constexpr bool& __cordl_internal_get__initWebClientAsync() ;

constexpr ::StringW const& __cordl_internal_get__method() const;

constexpr ::StringW& __cordl_internal_get__method() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__openReadOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__openReadOperationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__openWriteOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__openWriteOperationCompleted() ;

constexpr ::System::Net::WebClient_ProgressData* const& __cordl_internal_get__progress() const;

constexpr ::System::Net::WebClient_ProgressData*& __cordl_internal_get__progress() ;

constexpr ::System::Net::IWebProxy* const& __cordl_internal_get__proxy() const;

constexpr ::System::Net::IWebProxy*& __cordl_internal_get__proxy() ;

constexpr bool const& __cordl_internal_get__proxySet() const;

constexpr bool& __cordl_internal_get__proxySet() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__reportDownloadProgressChanged() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__reportDownloadProgressChanged() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__reportUploadProgressChanged() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__reportUploadProgressChanged() ;

constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get__requestParameters() const;

constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get__requestParameters() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__uploadDataOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__uploadDataOperationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__uploadFileOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__uploadFileOperationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__uploadStringOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__uploadStringOperationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__uploadValuesOperationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__uploadValuesOperationCompleted() ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get__webRequest() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get__webRequest() ;

constexpr ::System::Net::WebResponse* const& __cordl_internal_get__webResponse() const;

constexpr ::System::Net::WebResponse*& __cordl_internal_get__webResponse() ;

constexpr void __cordl_internal_set_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler*  value) ;

constexpr void __cordl_internal_set_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler*  value) ;

constexpr void __cordl_internal_set_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set__AllowReadStreamBuffering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__AllowWriteStreamBuffering_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CachePolicy_k__BackingField(::System::Net::Cache::RequestCachePolicy*  value) ;

constexpr void __cordl_internal_set__asyncOp(::System::ComponentModel::AsyncOperation*  value) ;

constexpr void __cordl_internal_set__baseAddress(::System::Uri*  value) ;

constexpr void __cordl_internal_set__callNesting(int32_t  value) ;

constexpr void __cordl_internal_set__canceled(bool  value) ;

constexpr void __cordl_internal_set__contentLength(int64_t  value) ;

constexpr void __cordl_internal_set__credentials(::System::Net::ICredentials*  value) ;

constexpr void __cordl_internal_set__downloadDataOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__downloadFileOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__downloadStringOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__headers(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set__initWebClientAsync(bool  value) ;

constexpr void __cordl_internal_set__method(::StringW  value) ;

constexpr void __cordl_internal_set__openReadOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__openWriteOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__progress(::System::Net::WebClient_ProgressData*  value) ;

constexpr void __cordl_internal_set__proxy(::System::Net::IWebProxy*  value) ;

constexpr void __cordl_internal_set__proxySet(bool  value) ;

constexpr void __cordl_internal_set__reportDownloadProgressChanged(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__reportUploadProgressChanged(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__requestParameters(::System::Collections::Specialized::NameValueCollection*  value) ;

constexpr void __cordl_internal_set__uploadDataOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__uploadFileOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__uploadStringOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__uploadValuesOperationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__webRequest(::System::Net::WebRequest*  value) ;

constexpr void __cordl_internal_set__webResponse(::System::Net::WebResponse*  value) ;

/// @brief Method .ctor, addr 0xac4488c, size 0x128, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_DownloadDataCompleted, addr 0xac44aec, size 0x9c, virtual false, abstract: false, final false
inline void add_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_DownloadFileCompleted, addr 0xac44c24, size 0x9c, virtual false, abstract: false, final false
inline void add_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_DownloadProgressChanged, addr 0xac454ac, size 0x9c, virtual false, abstract: false, final false
inline void add_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_DownloadStringCompleted, addr 0xac449b4, size 0x9c, virtual false, abstract: false, final false
inline void add_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OpenReadCompleted, addr 0xac4523c, size 0x9c, virtual false, abstract: false, final false
inline void add_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OpenWriteCompleted, addr 0xac45374, size 0x9c, virtual false, abstract: false, final false
inline void add_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_UploadDataCompleted, addr 0xac44e94, size 0x9c, virtual false, abstract: false, final false
inline void add_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_UploadFileCompleted, addr 0xac44fcc, size 0x9c, virtual false, abstract: false, final false
inline void add_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_UploadProgressChanged, addr 0xac455e4, size 0x9c, virtual false, abstract: false, final false
inline void add_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_UploadStringCompleted, addr 0xac44d5c, size 0x9c, virtual false, abstract: false, final false
inline void add_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_UploadValuesCompleted, addr 0xac45104, size 0x9c, virtual false, abstract: false, final false
inline void add_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler*  value) ;

/// @brief Method add_WriteStreamClosed, addr 0xac4f990, size 0x4, virtual false, abstract: false, final false
inline void add_WriteStreamClosed(::System::Net::WriteStreamClosedEventHandler*  value) ;

static inline ::ArrayW<::System::Text::Encoding*> getStaticF_s_knownEncodings() ;

static inline ::ArrayW<char16_t> getStaticF_s_parseContentTypeSeparators() ;

/// [CompilerGenerated]
/// @brief Method get_AllowReadStreamBuffering, addr 0xac4f970, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowReadStreamBuffering() ;

/// [CompilerGenerated]
/// @brief Method get_AllowWriteStreamBuffering, addr 0xac4f980, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowWriteStreamBuffering() ;

/// @brief Method get_BaseAddress, addr 0xac45e3c, size 0x9c, virtual false, abstract: false, final false
inline ::StringW get_BaseAddress() ;

/// [CompilerGenerated]
/// @brief Method get_CachePolicy, addr 0xac46324, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Cache::RequestCachePolicy* get_CachePolicy() ;

/// @brief Method get_Credentials, addr 0xac4603c, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::ICredentials* get_Credentials() ;

/// @brief Method get_Encoding, addr 0xac45d60, size 0x8, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_Headers, addr 0xac46128, size 0x6c, virtual false, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// @brief Method get_IsBusy, addr 0xac4633c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsBusy() ;

/// @brief Method get_Proxy, addr 0xac46294, size 0x6c, virtual false, abstract: false, final false
inline ::System::Net::IWebProxy* get_Proxy() ;

/// @brief Method get_QueryString, addr 0xac46200, size 0x70, virtual false, abstract: false, final false
inline ::System::Collections::Specialized::NameValueCollection* get_QueryString() ;

/// @brief Method get_ResponseHeaders, addr 0xac46278, size 0x1c, virtual false, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_ResponseHeaders() ;

/// @brief Method get_UseDefaultCredentials, addr 0xac4604c, size 0x64, virtual false, abstract: false, final false
inline bool get_UseDefaultCredentials() ;

/// [CompilerGenerated]
/// @brief Method remove_DownloadDataCompleted, addr 0xac44b88, size 0x9c, virtual false, abstract: false, final false
inline void remove_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_DownloadFileCompleted, addr 0xac44cc0, size 0x9c, virtual false, abstract: false, final false
inline void remove_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_DownloadProgressChanged, addr 0xac45548, size 0x9c, virtual false, abstract: false, final false
inline void remove_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_DownloadStringCompleted, addr 0xac44a50, size 0x9c, virtual false, abstract: false, final false
inline void remove_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OpenReadCompleted, addr 0xac452d8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OpenWriteCompleted, addr 0xac45410, size 0x9c, virtual false, abstract: false, final false
inline void remove_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_UploadDataCompleted, addr 0xac44f30, size 0x9c, virtual false, abstract: false, final false
inline void remove_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_UploadFileCompleted, addr 0xac45068, size 0x9c, virtual false, abstract: false, final false
inline void remove_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_UploadProgressChanged, addr 0xac45680, size 0x9c, virtual false, abstract: false, final false
inline void remove_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_UploadStringCompleted, addr 0xac44df8, size 0x9c, virtual false, abstract: false, final false
inline void remove_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_UploadValuesCompleted, addr 0xac451a0, size 0x9c, virtual false, abstract: false, final false
inline void remove_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler*  value) ;

/// @brief Method remove_WriteStreamClosed, addr 0xac4f994, size 0x4, virtual false, abstract: false, final false
inline void remove_WriteStreamClosed(::System::Net::WriteStreamClosedEventHandler*  value) ;

static inline void setStaticF_s_knownEncodings(::ArrayW<::System::Text::Encoding*>  value) ;

static inline void setStaticF_s_parseContentTypeSeparators(::ArrayW<char16_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_AllowReadStreamBuffering, addr 0xac4f978, size 0x8, virtual false, abstract: false, final false
inline void set_AllowReadStreamBuffering(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_AllowWriteStreamBuffering, addr 0xac4f988, size 0x8, virtual false, abstract: false, final false
inline void set_AllowWriteStreamBuffering(bool  value) ;

/// @brief Method set_BaseAddress, addr 0xac45ed8, size 0x164, virtual false, abstract: false, final false
inline void set_BaseAddress(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CachePolicy, addr 0xac4632c, size 0x10, virtual false, abstract: false, final false
inline void set_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value) ;

/// @brief Method set_Credentials, addr 0xac46044, size 0x8, virtual false, abstract: false, final false
inline void set_Credentials(::System::Net::ICredentials*  value) ;

/// @brief Method set_Encoding, addr 0xac45d68, size 0x88, virtual false, abstract: false, final false
inline void set_Encoding(::System::Text::Encoding*  value) ;

/// @brief Method set_Headers, addr 0xac461f8, size 0x8, virtual false, abstract: false, final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// @brief Method set_Proxy, addr 0xac46300, size 0x24, virtual false, abstract: false, final false
inline void set_Proxy(::System::Net::IWebProxy*  value) ;

/// @brief Method set_QueryString, addr 0xac46270, size 0x8, virtual false, abstract: false, final false
inline void set_QueryString(::System::Collections::Specialized::NameValueCollection*  value) ;

/// @brief Method set_UseDefaultCredentials, addr 0xac460b0, size 0x78, virtual false, abstract: false, final false
inline void set_UseDefaultCredentials(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient(WebClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient(WebClient const& ) = delete;

/// @brief Field DefaultCopyBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  DefaultCopyBufferLength{static_cast<int32_t>(0x2000)};

/// @brief Field DefaultDownloadBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  DefaultDownloadBufferLength{static_cast<int32_t>(0x10000)};

/// @brief Field DefaultUploadFileContentType offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultUploadFileContentType{u"application/octet-stream"};

/// @brief Field UploadFileContentType offset 0xffffffff size 0x8
static constexpr ::ConstString  UploadFileContentType{u"multipart/form-data"};

/// @brief Field UploadValuesContentType offset 0xffffffff size 0x8
static constexpr ::ConstString  UploadValuesContentType{u"application/x-www-form-urlencoded"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10460};

/// @brief Field _baseAddress, offset: 0x28, size: 0x8, def value: None
 ::System::Uri*  ____baseAddress;

/// @brief Field _credentials, offset: 0x30, size: 0x8, def value: None
 ::System::Net::ICredentials*  ____credentials;

/// @brief Field _headers, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____headers;

/// @brief Field _requestParameters, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Specialized::NameValueCollection*  ____requestParameters;

/// @brief Field _webResponse, offset: 0x48, size: 0x8, def value: None
 ::System::Net::WebResponse*  ____webResponse;

/// @brief Field _webRequest, offset: 0x50, size: 0x8, def value: None
 ::System::Net::WebRequest*  ____webRequest;

/// @brief Field _encoding, offset: 0x58, size: 0x8, def value: None
 ::System::Text::Encoding*  ____encoding;

/// @brief Field _method, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____method;

/// @brief Field _contentLength, offset: 0x68, size: 0x8, def value: None
 int64_t  ____contentLength;

/// @brief Field _initWebClientAsync, offset: 0x70, size: 0x1, def value: None
 bool  ____initWebClientAsync;

/// @brief Field _canceled, offset: 0x71, size: 0x1, def value: None
 bool  ____canceled;

/// @brief Field _progress, offset: 0x78, size: 0x8, def value: None
 ::System::Net::WebClient_ProgressData*  ____progress;

/// @brief Field _proxy, offset: 0x80, size: 0x8, def value: None
 ::System::Net::IWebProxy*  ____proxy;

/// @brief Field _proxySet, offset: 0x88, size: 0x1, def value: None
 bool  ____proxySet;

/// @brief Field _callNesting, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____callNesting;

/// @brief Field _asyncOp, offset: 0x90, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ____asyncOp;

/// @brief Field _downloadDataOperationCompleted, offset: 0x98, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____downloadDataOperationCompleted;

/// @brief Field _openReadOperationCompleted, offset: 0xa0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____openReadOperationCompleted;

/// @brief Field _openWriteOperationCompleted, offset: 0xa8, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____openWriteOperationCompleted;

/// @brief Field _downloadStringOperationCompleted, offset: 0xb0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____downloadStringOperationCompleted;

/// @brief Field _downloadFileOperationCompleted, offset: 0xb8, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____downloadFileOperationCompleted;

/// @brief Field _uploadStringOperationCompleted, offset: 0xc0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____uploadStringOperationCompleted;

/// @brief Field _uploadDataOperationCompleted, offset: 0xc8, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____uploadDataOperationCompleted;

/// @brief Field _uploadFileOperationCompleted, offset: 0xd0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____uploadFileOperationCompleted;

/// @brief Field _uploadValuesOperationCompleted, offset: 0xd8, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____uploadValuesOperationCompleted;

/// @brief Field _reportDownloadProgressChanged, offset: 0xe0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____reportDownloadProgressChanged;

/// @brief Field _reportUploadProgressChanged, offset: 0xe8, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____reportUploadProgressChanged;

/// [CompilerGenerated]
/// @brief Field DownloadStringCompleted, offset: 0xf0, size: 0x8, def value: None
 ::System::Net::DownloadStringCompletedEventHandler*  ___DownloadStringCompleted;

/// [CompilerGenerated]
/// @brief Field DownloadDataCompleted, offset: 0xf8, size: 0x8, def value: None
 ::System::Net::DownloadDataCompletedEventHandler*  ___DownloadDataCompleted;

/// [CompilerGenerated]
/// @brief Field DownloadFileCompleted, offset: 0x100, size: 0x8, def value: None
 ::System::ComponentModel::AsyncCompletedEventHandler*  ___DownloadFileCompleted;

/// [CompilerGenerated]
/// @brief Field UploadStringCompleted, offset: 0x108, size: 0x8, def value: None
 ::System::Net::UploadStringCompletedEventHandler*  ___UploadStringCompleted;

/// [CompilerGenerated]
/// @brief Field UploadDataCompleted, offset: 0x110, size: 0x8, def value: None
 ::System::Net::UploadDataCompletedEventHandler*  ___UploadDataCompleted;

/// [CompilerGenerated]
/// @brief Field UploadFileCompleted, offset: 0x118, size: 0x8, def value: None
 ::System::Net::UploadFileCompletedEventHandler*  ___UploadFileCompleted;

/// [CompilerGenerated]
/// @brief Field UploadValuesCompleted, offset: 0x120, size: 0x8, def value: None
 ::System::Net::UploadValuesCompletedEventHandler*  ___UploadValuesCompleted;

/// [CompilerGenerated]
/// @brief Field OpenReadCompleted, offset: 0x128, size: 0x8, def value: None
 ::System::Net::OpenReadCompletedEventHandler*  ___OpenReadCompleted;

/// [CompilerGenerated]
/// @brief Field OpenWriteCompleted, offset: 0x130, size: 0x8, def value: None
 ::System::Net::OpenWriteCompletedEventHandler*  ___OpenWriteCompleted;

/// [CompilerGenerated]
/// @brief Field DownloadProgressChanged, offset: 0x138, size: 0x8, def value: None
 ::System::Net::DownloadProgressChangedEventHandler*  ___DownloadProgressChanged;

/// [CompilerGenerated]
/// @brief Field UploadProgressChanged, offset: 0x140, size: 0x8, def value: None
 ::System::Net::UploadProgressChangedEventHandler*  ___UploadProgressChanged;

/// [CompilerGenerated]
/// @brief Field <CachePolicy>k__BackingField, offset: 0x148, size: 0x8, def value: None
 ::System::Net::Cache::RequestCachePolicy*  ____CachePolicy_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllowReadStreamBuffering>k__BackingField, offset: 0x150, size: 0x1, def value: None
 bool  ____AllowReadStreamBuffering_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AllowWriteStreamBuffering>k__BackingField, offset: 0x151, size: 0x1, def value: None
 bool  ____AllowWriteStreamBuffering_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient, ____baseAddress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____credentials) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____headers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____requestParameters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____webResponse) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____webRequest) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____encoding) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____method) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____contentLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____initWebClientAsync) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____canceled) == 0x71, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____progress) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____proxy) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____proxySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____callNesting) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____asyncOp) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____downloadDataOperationCompleted) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____openReadOperationCompleted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____openWriteOperationCompleted) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____downloadStringOperationCompleted) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____downloadFileOperationCompleted) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____uploadStringOperationCompleted) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____uploadDataOperationCompleted) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____uploadFileOperationCompleted) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____uploadValuesOperationCompleted) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____reportDownloadProgressChanged) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____reportUploadProgressChanged) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___DownloadStringCompleted) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___DownloadDataCompleted) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___DownloadFileCompleted) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___UploadStringCompleted) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___UploadDataCompleted) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___UploadFileCompleted) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___UploadValuesCompleted) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___OpenReadCompleted) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___OpenWriteCompleted) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___DownloadProgressChanged) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ___UploadProgressChanged) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____CachePolicy_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____AllowReadStreamBuffering_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient, ____AllowWriteStreamBuffering_k__BackingField) == 0x151, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient) == 0x158, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass218_0
class CORDL_TYPE WebClient___c__DisplayClass218_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::UploadValuesCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass218_0* New_ctor() ;

/// @brief Method <UploadValuesTaskAsync>b__0, addr 0xac540a8, size 0x1bc, virtual false, abstract: false, final false
inline void _UploadValuesTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadValuesCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::UploadValuesCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::UploadValuesCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::UploadValuesCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xac4f618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass218_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass218_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass218_0(WebClient___c__DisplayClass218_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass218_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass218_0(WebClient___c__DisplayClass218_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10459};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::UploadValuesCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass218_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass218_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass218_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass218_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass214_0
class CORDL_TYPE WebClient___c__DisplayClass214_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::UploadFileCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass214_0* New_ctor() ;

/// @brief Method <UploadFileTaskAsync>b__0, addr 0xac53eec, size 0x1bc, virtual false, abstract: false, final false
inline void _UploadFileTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadFileCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::UploadFileCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::UploadFileCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::UploadFileCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xac4f284, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass214_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass214_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass214_0(WebClient___c__DisplayClass214_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass214_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass214_0(WebClient___c__DisplayClass214_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10458};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::UploadFileCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass214_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass214_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass214_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass214_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass210_0
class CORDL_TYPE WebClient___c__DisplayClass210_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::UploadDataCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass210_0* New_ctor() ;

/// @brief Method <UploadDataTaskAsync>b__0, addr 0xac53d30, size 0x1bc, virtual false, abstract: false, final false
inline void _UploadDataTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadDataCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::UploadDataCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::UploadDataCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::UploadDataCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xac4eef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass210_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass210_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass210_0(WebClient___c__DisplayClass210_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass210_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass210_0(WebClient___c__DisplayClass210_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10457};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::UploadDataCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass210_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass210_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass210_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass210_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass206_0
class CORDL_TYPE WebClient___c__DisplayClass206_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::ComponentModel::AsyncCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass206_0* New_ctor() ;

/// @brief Method <DownloadFileTaskAsync>b__0, addr 0xac53b74, size 0x1bc, virtual false, abstract: false, final false
inline void _DownloadFileTaskAsync_b__0(::System::Object*  sender, ::System::ComponentModel::AsyncCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::ComponentModel::AsyncCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::ComponentModel::AsyncCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::ComponentModel::AsyncCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value) ;

/// @brief Method .ctor, addr 0xac4ec68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass206_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass206_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass206_0(WebClient___c__DisplayClass206_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass206_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass206_0(WebClient___c__DisplayClass206_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10456};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::ComponentModel::AsyncCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass206_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass206_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass206_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass206_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass204_0
class CORDL_TYPE WebClient___c__DisplayClass204_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::DownloadDataCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass204_0* New_ctor() ;

/// @brief Method <DownloadDataTaskAsync>b__0, addr 0xac539b8, size 0x1bc, virtual false, abstract: false, final false
inline void _DownloadDataTaskAsync_b__0(::System::Object*  sender, ::System::Net::DownloadDataCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::DownloadDataCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::DownloadDataCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::DownloadDataCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value) ;

/// @brief Method .ctor, addr 0xac4e91c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass204_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass204_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass204_0(WebClient___c__DisplayClass204_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass204_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass204_0(WebClient___c__DisplayClass204_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10455};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::DownloadDataCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass204_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass204_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass204_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass204_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass202_0
class CORDL_TYPE WebClient___c__DisplayClass202_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::UploadStringCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass202_0* New_ctor() ;

/// @brief Method <UploadStringTaskAsync>b__0, addr 0xac537fc, size 0x1bc, virtual false, abstract: false, final false
inline void _UploadStringTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadStringCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::UploadStringCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::UploadStringCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::UploadStringCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xac4e5f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass202_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass202_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass202_0(WebClient___c__DisplayClass202_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass202_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass202_0(WebClient___c__DisplayClass202_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10454};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::UploadStringCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass202_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass202_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass202_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass202_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass198_0
class CORDL_TYPE WebClient___c__DisplayClass198_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::OpenWriteCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass198_0* New_ctor() ;

/// @brief Method <OpenWriteTaskAsync>b__0, addr 0xac53640, size 0x1bc, virtual false, abstract: false, final false
inline void _OpenWriteTaskAsync_b__0(::System::Object*  sender, ::System::Net::OpenWriteCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::OpenWriteCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::OpenWriteCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::OpenWriteCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  value) ;

/// @brief Method .ctor, addr 0xac4e260, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass198_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass198_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass198_0(WebClient___c__DisplayClass198_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass198_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass198_0(WebClient___c__DisplayClass198_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10453};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::OpenWriteCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass198_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass198_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass198_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass198_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass194_0
class CORDL_TYPE WebClient___c__DisplayClass194_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::OpenReadCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass194_0* New_ctor() ;

/// @brief Method <OpenReadTaskAsync>b__0, addr 0xac53484, size 0x1bc, virtual false, abstract: false, final false
inline void _OpenReadTaskAsync_b__0(::System::Object*  sender, ::System::Net::OpenReadCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::OpenReadCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::OpenReadCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::OpenReadCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  value) ;

/// @brief Method .ctor, addr 0xac4def0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass194_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass194_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass194_0(WebClient___c__DisplayClass194_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass194_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass194_0(WebClient___c__DisplayClass194_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10452};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::OpenReadCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass194_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass194_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass194_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass194_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c
class CORDL_TYPE WebClient___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Net::WebClient___c*  __9;

/// @brief Field <>9__192_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__192_1, put=setStaticF___9__192_1)) ::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>*  __9__192_1;

/// @brief Field <>9__192_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__192_2, put=setStaticF___9__192_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>*  __9__192_2;

/// @brief Field <>9__194_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__194_1, put=setStaticF___9__194_1)) ::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>*  __9__194_1;

/// @brief Field <>9__194_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__194_2, put=setStaticF___9__194_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>*  __9__194_2;

/// @brief Field <>9__198_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__198_1, put=setStaticF___9__198_1)) ::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>*  __9__198_1;

/// @brief Field <>9__198_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__198_2, put=setStaticF___9__198_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>*  __9__198_2;

/// @brief Field <>9__202_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__202_1, put=setStaticF___9__202_1)) ::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>*  __9__202_1;

/// @brief Field <>9__202_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__202_2, put=setStaticF___9__202_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>*  __9__202_2;

/// @brief Field <>9__204_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__204_1, put=setStaticF___9__204_1)) ::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>*  __9__204_1;

/// @brief Field <>9__204_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__204_2, put=setStaticF___9__204_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>*  __9__204_2;

/// @brief Field <>9__206_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__206_1, put=setStaticF___9__206_1)) ::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>*  __9__206_1;

/// @brief Field <>9__206_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__206_2, put=setStaticF___9__206_2)) ::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>*  __9__206_2;

/// @brief Field <>9__210_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__210_1, put=setStaticF___9__210_1)) ::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>*  __9__210_1;

/// @brief Field <>9__210_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__210_2, put=setStaticF___9__210_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>*  __9__210_2;

/// @brief Field <>9__214_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__214_1, put=setStaticF___9__214_1)) ::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>*  __9__214_1;

/// @brief Field <>9__214_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__214_2, put=setStaticF___9__214_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>*  __9__214_2;

/// @brief Field <>9__218_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__218_1, put=setStaticF___9__218_1)) ::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>*  __9__218_1;

/// @brief Field <>9__218_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__218_2, put=setStaticF___9__218_2)) ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>*  __9__218_2;

static inline ::System::Net::WebClient___c* New_ctor() ;

/// @brief Method <DownloadDataTaskAsync>b__204_1, addr 0xac532f4, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> _DownloadDataTaskAsync_b__204_1(::System::Net::DownloadDataCompletedEventArgs*  args) ;

/// @brief Method <DownloadDataTaskAsync>b__204_2, addr 0xac53338, size 0x18, virtual false, abstract: false, final false
inline void _DownloadDataTaskAsync_b__204_2(::System::Net::WebClient*  webClient, ::System::Net::DownloadDataCompletedEventHandler*  completion) ;

/// @brief Method <DownloadFileTaskAsync>b__206_1, addr 0xac53350, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* _DownloadFileTaskAsync_b__206_1(::System::ComponentModel::AsyncCompletedEventArgs*  args) ;

/// @brief Method <DownloadFileTaskAsync>b__206_2, addr 0xac53358, size 0x18, virtual false, abstract: false, final false
inline void _DownloadFileTaskAsync_b__206_2(::System::Net::WebClient*  webClient, ::System::ComponentModel::AsyncCompletedEventHandler*  completion) ;

/// @brief Method <DownloadStringTaskAsync>b__192_1, addr 0xac53184, size 0x28, virtual false, abstract: false, final false
inline ::StringW _DownloadStringTaskAsync_b__192_1(::System::Net::DownloadStringCompletedEventArgs*  args) ;

/// @brief Method <DownloadStringTaskAsync>b__192_2, addr 0xac531c8, size 0x18, virtual false, abstract: false, final false
inline void _DownloadStringTaskAsync_b__192_2(::System::Net::WebClient*  webClient, ::System::Net::DownloadStringCompletedEventHandler*  completion) ;

/// @brief Method <OpenReadTaskAsync>b__194_1, addr 0xac531e0, size 0x28, virtual false, abstract: false, final false
inline ::System::IO::Stream* _OpenReadTaskAsync_b__194_1(::System::Net::OpenReadCompletedEventArgs*  args) ;

/// @brief Method <OpenReadTaskAsync>b__194_2, addr 0xac53224, size 0x18, virtual false, abstract: false, final false
inline void _OpenReadTaskAsync_b__194_2(::System::Net::WebClient*  webClient, ::System::Net::OpenReadCompletedEventHandler*  completion) ;

/// @brief Method <OpenWriteTaskAsync>b__198_1, addr 0xac5323c, size 0x28, virtual false, abstract: false, final false
inline ::System::IO::Stream* _OpenWriteTaskAsync_b__198_1(::System::Net::OpenWriteCompletedEventArgs*  args) ;

/// @brief Method <OpenWriteTaskAsync>b__198_2, addr 0xac53280, size 0x18, virtual false, abstract: false, final false
inline void _OpenWriteTaskAsync_b__198_2(::System::Net::WebClient*  webClient, ::System::Net::OpenWriteCompletedEventHandler*  completion) ;

/// @brief Method <UploadDataTaskAsync>b__210_1, addr 0xac53370, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> _UploadDataTaskAsync_b__210_1(::System::Net::UploadDataCompletedEventArgs*  args) ;

/// @brief Method <UploadDataTaskAsync>b__210_2, addr 0xac533b4, size 0x18, virtual false, abstract: false, final false
inline void _UploadDataTaskAsync_b__210_2(::System::Net::WebClient*  webClient, ::System::Net::UploadDataCompletedEventHandler*  completion) ;

/// @brief Method <UploadFileTaskAsync>b__214_1, addr 0xac533cc, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> _UploadFileTaskAsync_b__214_1(::System::Net::UploadFileCompletedEventArgs*  args) ;

/// @brief Method <UploadFileTaskAsync>b__214_2, addr 0xac53410, size 0x18, virtual false, abstract: false, final false
inline void _UploadFileTaskAsync_b__214_2(::System::Net::WebClient*  webClient, ::System::Net::UploadFileCompletedEventHandler*  completion) ;

/// @brief Method <UploadStringTaskAsync>b__202_1, addr 0xac53298, size 0x28, virtual false, abstract: false, final false
inline ::StringW _UploadStringTaskAsync_b__202_1(::System::Net::UploadStringCompletedEventArgs*  args) ;

/// @brief Method <UploadStringTaskAsync>b__202_2, addr 0xac532dc, size 0x18, virtual false, abstract: false, final false
inline void _UploadStringTaskAsync_b__202_2(::System::Net::WebClient*  webClient, ::System::Net::UploadStringCompletedEventHandler*  completion) ;

/// @brief Method <UploadValuesTaskAsync>b__218_1, addr 0xac53428, size 0x28, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> _UploadValuesTaskAsync_b__218_1(::System::Net::UploadValuesCompletedEventArgs*  args) ;

/// @brief Method <UploadValuesTaskAsync>b__218_2, addr 0xac5346c, size 0x18, virtual false, abstract: false, final false
inline void _UploadValuesTaskAsync_b__218_2(::System::Net::WebClient*  webClient, ::System::Net::UploadValuesCompletedEventHandler*  completion) ;

/// @brief Method .ctor, addr 0xac5317c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Net::WebClient___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>* getStaticF___9__192_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>* getStaticF___9__192_2() ;

static inline ::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>* getStaticF___9__194_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>* getStaticF___9__194_2() ;

static inline ::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>* getStaticF___9__198_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>* getStaticF___9__198_2() ;

static inline ::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>* getStaticF___9__202_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>* getStaticF___9__202_2() ;

static inline ::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>* getStaticF___9__204_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>* getStaticF___9__204_2() ;

static inline ::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>* getStaticF___9__206_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>* getStaticF___9__206_2() ;

static inline ::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>* getStaticF___9__210_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>* getStaticF___9__210_2() ;

static inline ::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>* getStaticF___9__214_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>* getStaticF___9__214_2() ;

static inline ::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>* getStaticF___9__218_1() ;

static inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>* getStaticF___9__218_2() ;

static inline void setStaticF___9(::System::Net::WebClient___c*  value) ;

static inline void setStaticF___9__192_1(::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>*  value) ;

static inline void setStaticF___9__192_2(::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__194_1(::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>*  value) ;

static inline void setStaticF___9__194_2(::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__198_1(::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>*  value) ;

static inline void setStaticF___9__198_2(::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__202_1(::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>*  value) ;

static inline void setStaticF___9__202_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__204_1(::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>*  value) ;

static inline void setStaticF___9__204_2(::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__206_1(::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>*  value) ;

static inline void setStaticF___9__206_2(::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__210_1(::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>*  value) ;

static inline void setStaticF___9__210_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__214_1(::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>*  value) ;

static inline void setStaticF___9__214_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>*  value) ;

static inline void setStaticF___9__218_1(::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>*  value) ;

static inline void setStaticF___9__218_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c(WebClient___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c(WebClient___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10451};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WebClient___c) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass192_0
class CORDL_TYPE WebClient___c__DisplayClass192_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field handler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::System::Net::DownloadStringCompletedEventHandler*  handler;

/// @brief Field tcs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs, put=__cordl_internal_set_tcs)) ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  tcs;

static inline ::System::Net::WebClient___c__DisplayClass192_0* New_ctor() ;

/// @brief Method <DownloadStringTaskAsync>b__0, addr 0xac52f58, size 0x1bc, virtual false, abstract: false, final false
inline void _DownloadStringTaskAsync_b__0(::System::Object*  sender, ::System::Net::DownloadStringCompletedEventArgs*  e) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::Net::DownloadStringCompletedEventHandler* const& __cordl_internal_get_handler() const;

constexpr ::System::Net::DownloadStringCompletedEventHandler*& __cordl_internal_get_handler() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& __cordl_internal_get_tcs() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& __cordl_internal_get_tcs() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_handler(::System::Net::DownloadStringCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xac4dbc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass192_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass192_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass192_0(WebClient___c__DisplayClass192_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass192_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass192_0(WebClient___c__DisplayClass192_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10450};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field tcs, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  ___tcs;

/// @brief Field handler, offset: 0x20, size: 0x8, def value: None
 ::System::Net::DownloadStringCompletedEventHandler*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass192_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass192_0, ___tcs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass192_0, ___handler) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass192_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass188_0
class CORDL_TYPE WebClient___c__DisplayClass188_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field asyncOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::System::ComponentModel::AsyncOperation*  asyncOp;

static inline ::System::Net::WebClient___c__DisplayClass188_0* New_ctor() ;

/// @brief Method <UploadValuesAsync>b__0, addr 0xac52e94, size 0xc4, virtual false, abstract: false, final false
inline void _UploadValuesAsync_b__0(::ArrayW<uint8_t>  result, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get_asyncOp() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get_asyncOp() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value) ;

/// @brief Method .ctor, addr 0xac4d910, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass188_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass188_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass188_0(WebClient___c__DisplayClass188_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass188_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass188_0(WebClient___c__DisplayClass188_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10449};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field asyncOp, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ___asyncOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass188_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass188_0, ___asyncOp) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass188_0) == 0x20, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass185_0
class CORDL_TYPE WebClient___c__DisplayClass185_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field asyncOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::System::ComponentModel::AsyncOperation*  asyncOp;

static inline ::System::Net::WebClient___c__DisplayClass185_0* New_ctor() ;

/// @brief Method <UploadFileAsync>b__0, addr 0xac52dd0, size 0xc4, virtual false, abstract: false, final false
inline void _UploadFileAsync_b__0(::ArrayW<uint8_t>  result, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get_asyncOp() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get_asyncOp() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value) ;

/// @brief Method .ctor, addr 0xac4d4c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass185_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass185_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass185_0(WebClient___c__DisplayClass185_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass185_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass185_0(WebClient___c__DisplayClass185_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10448};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field asyncOp, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ___asyncOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass185_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass185_0, ___asyncOp) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass185_0) == 0x20, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass182_0
class CORDL_TYPE WebClient___c__DisplayClass182_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field asyncOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::System::ComponentModel::AsyncOperation*  asyncOp;

static inline ::System::Net::WebClient___c__DisplayClass182_0* New_ctor() ;

/// @brief Method <UploadDataAsync>b__0, addr 0xac52d0c, size 0xc4, virtual false, abstract: false, final false
inline void _UploadDataAsync_b__0(::ArrayW<uint8_t>  result, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get_asyncOp() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get_asyncOp() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value) ;

/// @brief Method .ctor, addr 0xac4d00c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass182_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass182_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass182_0(WebClient___c__DisplayClass182_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass182_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass182_0(WebClient___c__DisplayClass182_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10447};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field asyncOp, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ___asyncOp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass182_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass182_0, ___asyncOp) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass182_0) == 0x20, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass167_0
class CORDL_TYPE WebClient___c__DisplayClass167_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field asyncOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::System::ComponentModel::AsyncOperation*  asyncOp;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::System::Net::WebRequest*  request;

static inline ::System::Net::WebClient___c__DisplayClass167_0* New_ctor() ;

/// @brief Method <OpenWriteAsync>b__0, addr 0xac52acc, size 0x240, virtual false, abstract: false, final false
inline void _OpenWriteAsync_b__0(::System::IAsyncResult*  iar) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get_asyncOp() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get_asyncOp() ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get_request() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value) ;

constexpr void __cordl_internal_set_request(::System::Net::WebRequest*  value) ;

/// @brief Method .ctor, addr 0xac4bbd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass167_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass167_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass167_0(WebClient___c__DisplayClass167_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass167_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass167_0(WebClient___c__DisplayClass167_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10446};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field asyncOp, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ___asyncOp;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass167_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass167_0, ___asyncOp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass167_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass167_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/<>c__DisplayClass164_0
class CORDL_TYPE WebClient___c__DisplayClass164_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebClient*  __4__this;

/// @brief Field asyncOp, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOp, put=__cordl_internal_set_asyncOp)) ::System::ComponentModel::AsyncOperation*  asyncOp;

/// @brief Field request, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::System::Net::WebRequest*  request;

static inline ::System::Net::WebClient___c__DisplayClass164_0* New_ctor() ;

/// @brief Method <OpenReadAsync>b__0, addr 0xac52884, size 0x248, virtual false, abstract: false, final false
inline void _OpenReadAsync_b__0(::System::IAsyncResult*  iar) ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get___4__this() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get_asyncOp() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get_asyncOp() ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get_request() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebClient*  value) ;

constexpr void __cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value) ;

constexpr void __cordl_internal_set_request(::System::Net::WebRequest*  value) ;

/// @brief Method .ctor, addr 0xac4b73c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient___c__DisplayClass164_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass164_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient___c__DisplayClass164_0(WebClient___c__DisplayClass164_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient___c__DisplayClass164_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient___c__DisplayClass164_0(WebClient___c__DisplayClass164_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10445};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebClient*  _____4__this;

/// @brief Field asyncOp, offset: 0x18, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ___asyncOp;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient___c__DisplayClass164_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass164_0, ___asyncOp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient___c__DisplayClass164_0, ___request) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient___c__DisplayClass164_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Net.Http.DelegatingStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/WebClientWriteStream
class CORDL_TYPE WebClient_WebClientWriteStream : public ::System::Net::Http::DelegatingStream {
public:
// Declarations
/// @brief Field _request, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__request, put=__cordl_internal_set__request)) ::System::Net::WebRequest*  _request;

/// @brief Field _webClient, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__webClient, put=__cordl_internal_set__webClient)) ::System::Net::WebClient*  _webClient;

/// @brief Method Dispose, addr 0xac503a8, size 0xd8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::Net::WebClient_WebClientWriteStream* New_ctor(::System::IO::Stream*  stream, ::System::Net::WebRequest*  request, ::System::Net::WebClient*  webClient) ;

constexpr ::System::Net::WebRequest* const& __cordl_internal_get__request() const;

constexpr ::System::Net::WebRequest*& __cordl_internal_get__request() ;

constexpr ::System::Net::WebClient* const& __cordl_internal_get__webClient() const;

constexpr ::System::Net::WebClient*& __cordl_internal_get__webClient() ;

constexpr void __cordl_internal_set__request(::System::Net::WebRequest*  value) ;

constexpr void __cordl_internal_set__webClient(::System::Net::WebClient*  value) ;

/// @brief Method .ctor, addr 0xac486a4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Net::WebRequest*  request, ::System::Net::WebClient*  webClient) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient_WebClientWriteStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient_WebClientWriteStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient_WebClientWriteStream(WebClient_WebClientWriteStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient_WebClientWriteStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient_WebClientWriteStream(WebClient_WebClientWriteStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10441};

/// @brief Field _request, offset: 0x30, size: 0x8, def value: None
 ::System::Net::WebRequest*  ____request;

/// @brief Field _webClient, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebClient*  ____webClient;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient_WebClientWriteStream, ____request) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_WebClientWriteStream, ____webClient) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient_WebClientWriteStream) == 0x40, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebClient/ProgressData
class CORDL_TYPE WebClient_ProgressData : public ::System::Object {
public:
// Declarations
/// @brief Field BytesReceived, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_BytesReceived, put=__cordl_internal_set_BytesReceived)) int64_t  BytesReceived;

/// @brief Field BytesSent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_BytesSent, put=__cordl_internal_set_BytesSent)) int64_t  BytesSent;

/// @brief Field HasUploadPhase, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_HasUploadPhase, put=__cordl_internal_set_HasUploadPhase)) bool  HasUploadPhase;

/// @brief Field TotalBytesToReceive, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalBytesToReceive, put=__cordl_internal_set_TotalBytesToReceive)) int64_t  TotalBytesToReceive;

/// @brief Field TotalBytesToSend, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TotalBytesToSend, put=__cordl_internal_set_TotalBytesToSend)) int64_t  TotalBytesToSend;

static inline ::System::Net::WebClient_ProgressData* New_ctor() ;

/// @brief Method Reset, addr 0xac459a8, size 0x14, virtual false, abstract: false, final false
inline void Reset() ;

constexpr int64_t const& __cordl_internal_get_BytesReceived() const;

constexpr int64_t& __cordl_internal_get_BytesReceived() ;

constexpr int64_t const& __cordl_internal_get_BytesSent() const;

constexpr int64_t& __cordl_internal_get_BytesSent() ;

constexpr bool const& __cordl_internal_get_HasUploadPhase() const;

constexpr bool& __cordl_internal_get_HasUploadPhase() ;

constexpr int64_t const& __cordl_internal_get_TotalBytesToReceive() const;

constexpr int64_t& __cordl_internal_get_TotalBytesToReceive() ;

constexpr int64_t const& __cordl_internal_get_TotalBytesToSend() const;

constexpr int64_t& __cordl_internal_get_TotalBytesToSend() ;

constexpr void __cordl_internal_set_BytesReceived(int64_t  value) ;

constexpr void __cordl_internal_set_BytesSent(int64_t  value) ;

constexpr void __cordl_internal_set_HasUploadPhase(bool  value) ;

constexpr void __cordl_internal_set_TotalBytesToReceive(int64_t  value) ;

constexpr void __cordl_internal_set_TotalBytesToSend(int64_t  value) ;

/// @brief Method .ctor, addr 0xac45d4c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebClient_ProgressData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebClient_ProgressData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebClient_ProgressData(WebClient_ProgressData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebClient_ProgressData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebClient_ProgressData(WebClient_ProgressData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10440};

/// @brief Field BytesSent, offset: 0x10, size: 0x8, def value: None
 int64_t  ___BytesSent;

/// @brief Field TotalBytesToSend, offset: 0x18, size: 0x8, def value: None
 int64_t  ___TotalBytesToSend;

/// @brief Field BytesReceived, offset: 0x20, size: 0x8, def value: None
 int64_t  ___BytesReceived;

/// @brief Field TotalBytesToReceive, offset: 0x28, size: 0x8, def value: None
 int64_t  ___TotalBytesToReceive;

/// @brief Field HasUploadPhase, offset: 0x30, size: 0x1, def value: None
 bool  ___HasUploadPhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebClient_ProgressData, ___BytesSent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___TotalBytesToSend) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___BytesReceived) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___TotalBytesToReceive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebClient_ProgressData, ___HasUploadPhase) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebClient_ProgressData) == 0x38, "Size mismatch!");

} // namespace end def System::Net
