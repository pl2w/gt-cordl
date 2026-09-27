#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/IBacktraceHttpClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IBacktraceHttpClient)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class IBacktraceHttpClient;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::IBacktraceHttpClient*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::IBacktraceHttpClient*, "Backtrace.Unity.Model", "IBacktraceHttpClient");
// Dependencies 
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.IBacktraceHttpClient
class CORDL_TYPE IBacktraceHttpClient {
public:
// Declarations
 __declspec(property(get=get_IgnoreSslValidation, put=set_IgnoreSslValidation)) bool  IgnoreSslValidation;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  submissionUrl, ::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  submissionUrl, ::ArrayW<uint8_t>  minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Post, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Post(::StringW  submissionUrl, ::Backtrace::Unity::Json::BacktraceJObject*  jObject, ::System::Action_3<int64_t,bool,::StringW>*  onComplete) ;

/// @brief Method get_IgnoreSslValidation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IgnoreSslValidation() ;

/// @brief Method set_IgnoreSslValidation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_IgnoreSslValidation(bool  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IBacktraceHttpClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IBacktraceHttpClient(IBacktraceHttpClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27609};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Model
