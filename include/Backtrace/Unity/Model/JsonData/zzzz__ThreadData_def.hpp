#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/ThreadData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ThreadData)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model::JsonData {
class ThreadInformation;
}
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Backtrace::Unity::Model::JsonData {
class ThreadData;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::JsonData::ThreadData*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::ThreadData*, "Backtrace.Unity.Model.JsonData", "ThreadData");
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.ThreadData
class CORDL_TYPE ThreadData : public ::System::Object {
public:
// Declarations
/// @brief Field MainThread, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MainThread, put=__cordl_internal_set_MainThread)) ::StringW  MainThread;

/// @brief Field ThreadInformations, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ThreadInformations, put=__cordl_internal_set_ThreadInformations)) ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  ThreadInformations;

static inline ::Backtrace::Unity::Model::JsonData::ThreadData* New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack, bool  faultingThread) ;

/// @brief Method ToJson, addr 0x5f1b0d8, size 0x19c, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

constexpr ::StringW const& __cordl_internal_get_MainThread() const;

constexpr ::StringW& __cordl_internal_get_MainThread() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>* const& __cordl_internal_get_ThreadInformations() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*& __cordl_internal_get_ThreadInformations() ;

constexpr void __cordl_internal_set_MainThread(::StringW  value) ;

constexpr void __cordl_internal_set_ThreadInformations(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  value) ;

/// @brief Method .ctor, addr 0x5f1ae8c, size 0x158, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack, bool  faultingThread) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadData(ThreadData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadData(ThreadData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27629};

/// @brief Field ThreadInformations, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::ThreadInformation*>*  ___ThreadInformations;

/// @brief Field MainThread, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MainThread;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::ThreadData, ___ThreadInformations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::ThreadData, ___MainThread) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::ThreadData) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
