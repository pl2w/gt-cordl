#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceStackFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Types/zzzz__BacktraceStackFrameType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BacktraceStackFrame)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace System::Diagnostics {
class StackFrame;
}
namespace System::Reflection {
class MethodBase;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceStackFrame;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceStackFrame*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceStackFrame*, "Backtrace.Unity.Model", "BacktraceStackFrame");
// Dependencies Backtrace.Unity.Types.BacktraceStackFrameType, System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceStackFrame
class CORDL_TYPE BacktraceStackFrame : public ::System::Object {
public:
// Declarations
/// @brief Field Address, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Address, put=__cordl_internal_set_Address)) ::StringW  Address;

/// @brief Field Assembly, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Assembly, put=__cordl_internal_set_Assembly)) ::StringW  Assembly;

/// @brief Field Column, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Column, put=__cordl_internal_set_Column)) int32_t  Column;

 __declspec(property(get=get_FileName)) ::StringW  FileName;

/// @brief Field FunctionName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FunctionName, put=__cordl_internal_set_FunctionName)) ::StringW  FunctionName;

/// @brief Field ILOffset, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ILOffset, put=__cordl_internal_set_ILOffset)) int32_t  ILOffset;

 __declspec(property(get=get_InvalidFrame, put=set_InvalidFrame)) bool  InvalidFrame;

/// @brief Field Library, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Library, put=__cordl_internal_set_Library)) ::StringW  Library;

/// @brief Field Line, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Line, put=__cordl_internal_set_Line)) int32_t  Line;

/// @brief Field MemberInfo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MemberInfo, put=__cordl_internal_set_MemberInfo)) ::StringW  MemberInfo;

/// @brief Field SourceCode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SourceCode, put=__cordl_internal_set_SourceCode)) ::StringW  SourceCode;

/// @brief Field SourceCodeFullPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SourceCodeFullPath, put=__cordl_internal_set_SourceCodeFullPath)) ::StringW  SourceCodeFullPath;

/// @brief Field StackFrameType, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_StackFrameType, put=__cordl_internal_set_StackFrameType)) ::Backtrace::Unity::Types::BacktraceStackFrameType  StackFrameType;

/// @brief Field <InvalidFrame>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__InvalidFrame_k__BackingField, put=__cordl_internal_set__InvalidFrame_k__BackingField)) bool  _InvalidFrame_k__BackingField;

/// @brief Field _frameSeparators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__frameSeparators, put=setStaticF__frameSeparators)) ::ArrayW<::StringW>  _frameSeparators;

/// @brief Method GetFileNameFromFunctionName, addr 0x5f1281c, size 0x2d4, virtual false, abstract: false, final false
inline ::StringW GetFileNameFromFunctionName() ;

/// @brief Method GetFileNameFromLibraryName, addr 0x5f12af0, size 0x138, virtual false, abstract: false, final false
inline ::StringW GetFileNameFromLibraryName() ;

/// @brief Method GetMethodName, addr 0x5f13224, size 0x150, virtual false, abstract: false, final false
inline ::StringW GetMethodName(::System::Reflection::MethodBase*  method) ;

static inline ::Backtrace::Unity::Model::BacktraceStackFrame* New_ctor() ;

static inline ::Backtrace::Unity::Model::BacktraceStackFrame* New_ctor(::System::Diagnostics::StackFrame*  frame, bool  generatedByException) ;

/// @brief Method ToJson, addr 0x5f12c38, size 0x2b8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

/// @brief Method ToString, addr 0x5f13374, size 0xa4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_Address() const;

constexpr ::StringW& __cordl_internal_get_Address() ;

constexpr ::StringW const& __cordl_internal_get_Assembly() const;

constexpr ::StringW& __cordl_internal_get_Assembly() ;

constexpr int32_t const& __cordl_internal_get_Column() const;

constexpr int32_t& __cordl_internal_get_Column() ;

constexpr ::StringW const& __cordl_internal_get_FunctionName() const;

constexpr ::StringW& __cordl_internal_get_FunctionName() ;

constexpr int32_t const& __cordl_internal_get_ILOffset() const;

constexpr int32_t& __cordl_internal_get_ILOffset() ;

constexpr ::StringW const& __cordl_internal_get_Library() const;

constexpr ::StringW& __cordl_internal_get_Library() ;

constexpr int32_t const& __cordl_internal_get_Line() const;

constexpr int32_t& __cordl_internal_get_Line() ;

constexpr ::StringW const& __cordl_internal_get_MemberInfo() const;

constexpr ::StringW& __cordl_internal_get_MemberInfo() ;

constexpr ::StringW const& __cordl_internal_get_SourceCode() const;

constexpr ::StringW& __cordl_internal_get_SourceCode() ;

constexpr ::StringW const& __cordl_internal_get_SourceCodeFullPath() const;

constexpr ::StringW& __cordl_internal_get_SourceCodeFullPath() ;

constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType const& __cordl_internal_get_StackFrameType() const;

constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType& __cordl_internal_get_StackFrameType() ;

constexpr bool const& __cordl_internal_get__InvalidFrame_k__BackingField() const;

constexpr bool& __cordl_internal_get__InvalidFrame_k__BackingField() ;

constexpr void __cordl_internal_set_Address(::StringW  value) ;

constexpr void __cordl_internal_set_Assembly(::StringW  value) ;

constexpr void __cordl_internal_set_Column(int32_t  value) ;

constexpr void __cordl_internal_set_FunctionName(::StringW  value) ;

constexpr void __cordl_internal_set_ILOffset(int32_t  value) ;

constexpr void __cordl_internal_set_Library(::StringW  value) ;

constexpr void __cordl_internal_set_Line(int32_t  value) ;

constexpr void __cordl_internal_set_MemberInfo(::StringW  value) ;

constexpr void __cordl_internal_set_SourceCode(::StringW  value) ;

constexpr void __cordl_internal_set_SourceCodeFullPath(::StringW  value) ;

constexpr void __cordl_internal_set_StackFrameType(::Backtrace::Unity::Types::BacktraceStackFrameType  value) ;

constexpr void __cordl_internal_set__InvalidFrame_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x5f12ef0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5f12ef8, size 0x32c, virtual false, abstract: false, final false
inline void _ctor(::System::Diagnostics::StackFrame*  frame, bool  generatedByException) ;

static inline ::ArrayW<::StringW> getStaticF__frameSeparators() ;

/// @brief Method get_FileName, addr 0x5f12750, size 0xcc, virtual false, abstract: false, final false
inline ::StringW get_FileName() ;

/// [CompilerGenerated]
/// @brief Method get_InvalidFrame, addr 0x5f12c28, size 0x8, virtual false, abstract: false, final false
inline bool get_InvalidFrame() ;

static inline void setStaticF__frameSeparators(::ArrayW<::StringW>  value) ;

/// [CompilerGenerated]
/// @brief Method set_InvalidFrame, addr 0x5f12c30, size 0x8, virtual false, abstract: false, final false
inline void set_InvalidFrame(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceStackFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceStackFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceStackFrame(BacktraceStackFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceStackFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceStackFrame(BacktraceStackFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27603};

/// @brief Field FunctionName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FunctionName;

/// @brief Field StackFrameType, offset: 0x18, size: 0x4, def value: None
 ::Backtrace::Unity::Types::BacktraceStackFrameType  ___StackFrameType;

/// @brief Field Line, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Line;

/// @brief Field MemberInfo, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MemberInfo;

/// @brief Field SourceCodeFullPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___SourceCodeFullPath;

/// @brief Field Column, offset: 0x30, size: 0x4, def value: None
 int32_t  ___Column;

/// @brief Field ILOffset, offset: 0x34, size: 0x4, def value: None
 int32_t  ___ILOffset;

/// @brief Field SourceCode, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___SourceCode;

/// @brief Field Address, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___Address;

/// @brief Field Assembly, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___Assembly;

/// [CompilerGenerated]
/// @brief Field <InvalidFrame>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____InvalidFrame_k__BackingField;

/// @brief Field Library, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___Library;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___FunctionName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___StackFrameType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___Line) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___MemberInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___SourceCodeFullPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___Column) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___ILOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___SourceCode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___Address) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___Assembly) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ____InvalidFrame_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceStackFrame, ___Library) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceStackFrame) == 0x60, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
