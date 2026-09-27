#pragma once
// IWYU pragma private; include "Backtrace/Unity/Interfaces/IBacktraceApi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceApi)
namespace Backtrace::Unity::Model {
class BacktraceData;
}
namespace Backtrace::Unity::Model {
class BacktraceResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace Backtrace::Unity::Interfaces {
class IBacktraceApi;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Interfaces::IBacktraceApi*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Interfaces::IBacktraceApi*, "Backtrace.Unity.Interfaces", "IBacktraceApi");
// Dependencies 
namespace Backtrace::Unity::Interfaces {
// Is value type: false
// CS Name: Backtrace.Unity.Interfaces.IBacktraceApi
class CORDL_TYPE IBacktraceApi {
public:
// Declarations
 __declspec(property(get=get_EnablePerformanceStatistics, put=set_EnablePerformanceStatistics)) bool  EnablePerformanceStatistics;

 __declspec(property(get=get_OnServerError, put=set_OnServerError)) ::System::Action_1<::System::Exception*>*  OnServerError;

 __declspec(property(get=get_OnServerResponse, put=set_OnServerResponse)) ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  OnServerResponse;

 __declspec(property(get=get_RequestHandler, put=set_RequestHandler)) ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  RequestHandler;

 __declspec(property(get=get_ServerUrl)) ::StringW  ServerUrl;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* Send(::Backtrace::Unity::Model::BacktraceData*  data, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, int32_t  deduplication, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  queryAttributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// @brief Method SendMinidump, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* SendMinidump(::StringW  minidumpPath, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  queryAttributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback) ;

/// @brief Method get_EnablePerformanceStatistics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_EnablePerformanceStatistics() ;

/// @brief Method get_OnServerError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Action_1<::System::Exception*>* get_OnServerError() ;

/// @brief Method get_OnServerResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* get_OnServerResponse() ;

/// @brief Method get_RequestHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* get_RequestHandler() ;

/// @brief Method get_ServerUrl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_ServerUrl() ;

/// @brief Method set_EnablePerformanceStatistics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_EnablePerformanceStatistics(bool  value) ;

/// @brief Method set_OnServerError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnServerError(::System::Action_1<::System::Exception*>*  value) ;

/// @brief Method set_OnServerResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

/// @brief Method set_RequestHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_RequestHandler(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceApi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceApi(IBacktraceApi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27657};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Interfaces
