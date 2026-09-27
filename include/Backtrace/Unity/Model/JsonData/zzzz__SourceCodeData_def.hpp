#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/SourceCodeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SourceCodeData)
namespace Backtrace::Unity::Model::JsonData {
class SourceCodeData_SourceCode;
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
class SourceCodeData;
}
namespace Backtrace::Unity::Model::JsonData {
class SourceCodeData_SourceCode;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::JsonData::SourceCodeData*);
MARK_REF_T(::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::SourceCodeData*, "Backtrace.Unity.Model.JsonData", "SourceCodeData");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*, "Backtrace.Unity.Model.JsonData", "SourceCodeData/SourceCode");
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.SourceCodeData
class CORDL_TYPE SourceCodeData : public ::System::Object {
public:
// Declarations
using SourceCode = ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode;

/// @brief Field data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>*  data;

static inline ::Backtrace::Unity::Model::JsonData::SourceCodeData* New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>* const& __cordl_internal_get_data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>*  value) ;

/// @brief Method .ctor, addr 0x5f1a9bc, size 0x384, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>*  exceptionStack) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SourceCodeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SourceCodeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SourceCodeData(SourceCodeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SourceCodeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SourceCodeData(SourceCodeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27628};

/// @brief Field data, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode*>*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::SourceCodeData, ___data) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::SourceCodeData) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.SourceCodeData/SourceCode
class CORDL_TYPE SourceCodeData_SourceCode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SourceCodeFullPath, put=set_SourceCodeFullPath)) ::StringW  SourceCodeFullPath;

 __declspec(property(get=get_StartColumn, put=set_StartColumn)) int32_t  StartColumn;

 __declspec(property(get=get_StartLine, put=set_StartLine)) int32_t  StartLine;

/// @brief Field <StartColumn>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__StartColumn_k__BackingField, put=__cordl_internal_set__StartColumn_k__BackingField)) int32_t  _StartColumn_k__BackingField;

/// @brief Field <StartLine>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__StartLine_k__BackingField, put=__cordl_internal_set__StartLine_k__BackingField)) int32_t  _StartLine_k__BackingField;

/// @brief Field <_sourceCodeFullPath>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___sourceCodeFullPath_k__BackingField, put=__cordl_internal_set___sourceCodeFullPath_k__BackingField)) ::StringW  __sourceCodeFullPath_k__BackingField;

 __declspec(property(get=get__sourceCodeFullPath, put=set__sourceCodeFullPath)) ::StringW  _sourceCodeFullPath;

/// @brief Method FromExceptionStack, addr 0x5f1ad40, size 0x80, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode* FromExceptionStack(::Backtrace::Unity::Model::BacktraceStackFrame*  stackFrame) ;

static inline ::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__StartColumn_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StartColumn_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__StartLine_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__StartLine_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get___sourceCodeFullPath_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get___sourceCodeFullPath_k__BackingField() ;

constexpr void __cordl_internal_set__StartColumn_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__StartLine_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set___sourceCodeFullPath_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f1ae84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SourceCodeFullPath, addr 0x5f1adf0, size 0x8c, virtual false, abstract: false, final false
inline ::StringW get_SourceCodeFullPath() ;

/// [CompilerGenerated]
/// @brief Method get_StartColumn, addr 0x5f1add0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartColumn() ;

/// [CompilerGenerated]
/// @brief Method get_StartLine, addr 0x5f1adc0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_StartLine() ;

/// [CompilerGenerated]
/// @brief Method get__sourceCodeFullPath, addr 0x5f1ade0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get__sourceCodeFullPath() ;

/// @brief Method set_SourceCodeFullPath, addr 0x5f1ae7c, size 0x8, virtual false, abstract: false, final false
inline void set_SourceCodeFullPath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_StartColumn, addr 0x5f1add8, size 0x8, virtual false, abstract: false, final false
inline void set_StartColumn(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_StartLine, addr 0x5f1adc8, size 0x8, virtual false, abstract: false, final false
inline void set_StartLine(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set__sourceCodeFullPath, addr 0x5f1ade8, size 0x8, virtual false, abstract: false, final false
inline void set__sourceCodeFullPath(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SourceCodeData_SourceCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SourceCodeData_SourceCode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SourceCodeData_SourceCode(SourceCodeData_SourceCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SourceCodeData_SourceCode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SourceCodeData_SourceCode(SourceCodeData_SourceCode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27627};

/// [CompilerGenerated]
/// @brief Field <StartLine>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____StartLine_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StartColumn>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____StartColumn_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <_sourceCodeFullPath>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  _____sourceCodeFullPath_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode, ____StartLine_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode, ____StartColumn_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode, _____sourceCodeFullPath_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::SourceCodeData_SourceCode) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
