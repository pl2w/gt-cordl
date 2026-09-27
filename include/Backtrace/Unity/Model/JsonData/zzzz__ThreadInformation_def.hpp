#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/ThreadInformation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ThreadInformation)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Backtrace::Unity::Model::JsonData {
class ThreadInformation;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::JsonData::ThreadInformation*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::ThreadInformation*, "Backtrace.Unity.Model.JsonData", "ThreadInformation");
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.ThreadInformation
class CORDL_TYPE ThreadInformation : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Fault, put=set_Fault)) bool  Fault;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

/// @brief Field Stack, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Stack, put=__cordl_internal_set_Stack)) ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  Stack;

/// @brief Field <Fault>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__Fault_k__BackingField, put=__cordl_internal_set__Fault_k__BackingField)) bool  _Fault_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::Backtrace::Unity::Model::JsonData::ThreadInformation* New_ctor() ;

static inline ::Backtrace::Unity::Model::JsonData::ThreadInformation* New_ctor(::System::Threading::Thread*  thread, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack, bool  faultingThread) ;

static inline ::Backtrace::Unity::Model::JsonData::ThreadInformation* New_ctor(::StringW  threadName, bool  fault, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack) ;

/// @brief Method ToJson, addr 0x5f1b274, size 0x270, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

constexpr ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* const& __cordl_internal_get_Stack() const;

constexpr ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*& __cordl_internal_get_Stack() ;

constexpr bool const& __cordl_internal_get__Fault_k__BackingField() const;

constexpr bool& __cordl_internal_get__Fault_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set_Stack(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  value) ;

constexpr void __cordl_internal_set__Fault_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f1b6c8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f1b090, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Thread*  thread, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack, bool  faultingThread) ;

/// @brief Method .ctor, addr 0x5f1b5dc, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  threadName, bool  fault, ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  stack) ;

/// [CompilerGenerated]
/// @brief Method get_Fault, addr 0x5f1b4f4, size 0x8, virtual false, abstract: false, final false
inline bool get_Fault() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0x5f1b4e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method set_Fault, addr 0x5f1b4fc, size 0x8, virtual false, abstract: false, final false
inline void set_Fault(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0x5f1b4ec, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThreadInformation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThreadInformation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThreadInformation(ThreadInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThreadInformation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThreadInformation(ThreadInformation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27630};

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Fault>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____Fault_k__BackingField;

/// @brief Field Stack, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  ___Stack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::ThreadInformation, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::ThreadInformation, ____Fault_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::ThreadInformation, ___Stack) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::ThreadInformation) == 0x28, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
