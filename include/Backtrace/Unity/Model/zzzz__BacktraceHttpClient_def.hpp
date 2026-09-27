#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceHttpClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceHttpClient)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model {
class BacktraceHttpClient___c__DisplayClass6_0;
}
namespace Backtrace::Unity::Model {
class IBacktraceHttpClient;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::Networking {
class IMultipartFormSection;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceHttpClient;
}
namespace Backtrace::Unity::Model {
class BacktraceHttpClient___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceHttpClient*);
MARK_REF_T(::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceHttpClient*, "Backtrace.Unity.Model", "BacktraceHttpClient");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0*, "Backtrace.Unity.Model", "BacktraceHttpClient/<>c__DisplayClass6_0");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceHttpClient
class CORDL_TYPE BacktraceHttpClient : public ::System::Object {
public:
// Declarations
using __c__DisplayClass6_0 = ::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0;

 __declspec(property(get=get_IgnoreSslValidation, put=set_IgnoreSslValidation)) bool  IgnoreSslValidation;

/// @brief Field <IgnoreSslValidation>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IgnoreSslValidation_k__BackingField, put=__cordl_internal_set__IgnoreSslValidation_k__BackingField)) bool  _IgnoreSslValidation_k__BackingField;

/// @brief Convert operator to "::Backtrace::Unity::Model::IBacktraceHttpClient"
constexpr operator  ::Backtrace::Unity::Model::IBacktraceHttpClient*() noexcept;

/// @brief Method AddAttachmentToFormData, addr 0x5f1199c, size 0x51c, virtual false, abstract: false, final false
inline void AddAttachmentToFormData(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  formData, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments) ;

/// @brief Method AddAttributesToFormData, addr 0x5f11618, size 0x384, virtual false, abstract: false, final false
inline void AddAttributesToFormData(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  formData, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method CreateJsonFormData, addr 0x5f11284, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* CreateJsonFormData(::ArrayW<uint8_t>  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method CreateMinidumpFormData, addr 0x5f114b8, size 0x160, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* CreateMinidumpFormData(::ArrayW<uint8_t>  minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

static inline ::Backtrace::Unity::Model::BacktraceHttpClient* New_ctor() ;

/// @brief Method Post, addr 0x5f11434, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  submissionUrl, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*  formData) ;

/// @brief Method Post, addr 0x5f074c4, size 0x74, virtual true, abstract: false, final true
inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  submissionUrl, ::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Post, addr 0x5f07cd0, size 0x38, virtual true, abstract: false, final true
inline ::UnityEngine::Networking::UnityWebRequest* Post(::StringW  submissionUrl, ::ArrayW<uint8_t>  minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method Post, addr 0x5f1103c, size 0x240, virtual true, abstract: false, final true
inline void Post(::StringW  submissionUrl, ::Backtrace::Unity::Json::BacktraceJObject*  jObject, ::System::Action_3<int64_t,bool,::StringW>*  onComplete) ;

constexpr bool const& __cordl_internal_get__IgnoreSslValidation_k__BackingField() const;

constexpr bool& __cordl_internal_get__IgnoreSslValidation_k__BackingField() ;

constexpr void __cordl_internal_set__IgnoreSslValidation_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f0667c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IgnoreSslValidation, addr 0x5f1102c, size 0x8, virtual true, abstract: false, final true
inline bool get_IgnoreSslValidation() ;

/// @brief Convert to "::Backtrace::Unity::Model::IBacktraceHttpClient"
constexpr ::Backtrace::Unity::Model::IBacktraceHttpClient* i___Backtrace__Unity__Model__IBacktraceHttpClient() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IgnoreSslValidation, addr 0x5f11034, size 0x8, virtual true, abstract: false, final true
inline void set_IgnoreSslValidation(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceHttpClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceHttpClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceHttpClient(BacktraceHttpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceHttpClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceHttpClient(BacktraceHttpClient const& ) = delete;

/// @brief Field DiagnosticFileName offset 0xffffffff size 0x8
static constexpr ::ConstString  DiagnosticFileName{u"upload_file"};

/// @brief Field RequestTimeout offset 0xffffffff size 0x4
static constexpr int32_t  RequestTimeout{static_cast<int32_t>(0x3a98)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27596};

/// [CompilerGenerated]
/// @brief Field <IgnoreSslValidation>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IgnoreSslValidation_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceHttpClient, ____IgnoreSslValidation_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceHttpClient) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
// [CompilerGenerated]
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceHttpClient/<>c__DisplayClass6_0
class CORDL_TYPE BacktraceHttpClient___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onComplete, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onComplete, put=__cordl_internal_set_onComplete)) ::System::Action_3<int64_t,bool,::StringW>*  onComplete;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <Post>b__0, addr 0x5f11eb8, size 0xb4, virtual false, abstract: false, final false
inline void _Post_b__0(::UnityEngine::AsyncOperation*  operation) ;

constexpr ::System::Action_3<int64_t,bool,::StringW>* const& __cordl_internal_get_onComplete() const;

constexpr ::System::Action_3<int64_t,bool,::StringW>*& __cordl_internal_get_onComplete() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set_onComplete(::System::Action_3<int64_t,bool,::StringW>*  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x5f1127c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceHttpClient___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceHttpClient___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceHttpClient___c__DisplayClass6_0(BacktraceHttpClient___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceHttpClient___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceHttpClient___c__DisplayClass6_0(BacktraceHttpClient___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27595};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

/// @brief Field onComplete, offset: 0x18, size: 0x8, def value: None
 ::System::Action_3<int64_t,bool,::StringW>*  ___onComplete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0, ___onComplete) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceHttpClient___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
