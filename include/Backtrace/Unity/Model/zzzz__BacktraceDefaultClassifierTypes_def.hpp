#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceDefaultClassifierTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BacktraceDefaultClassifierTypes)
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceDefaultClassifierTypes;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes*, "Backtrace.Unity.Model", "BacktraceDefaultClassifierTypes");
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceDefaultClassifierTypes
class CORDL_TYPE BacktraceDefaultClassifierTypes : public ::System::Object {
public:
// Declarations
static inline ::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes* New_ctor() ;

/// @brief Method .ctor, addr 0x5f11024, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceDefaultClassifierTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDefaultClassifierTypes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceDefaultClassifierTypes(BacktraceDefaultClassifierTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceDefaultClassifierTypes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceDefaultClassifierTypes(BacktraceDefaultClassifierTypes const& ) = delete;

/// @brief Field AnrExceptionType offset 0xffffffff size 0x8
static constexpr ::ConstString  AnrExceptionType{u"Hang"};

/// @brief Field ExceptionType offset 0xffffffff size 0x8
static constexpr ::ConstString  ExceptionType{u"Exception"};

/// @brief Field MessageType offset 0xffffffff size 0x8
static constexpr ::ConstString  MessageType{u"Message"};

/// @brief Field OOMExceptionType offset 0xffffffff size 0x8
static constexpr ::ConstString  OOMExceptionType{u"OOMException"};

/// @brief Field UnhandledExceptionType offset 0xffffffff size 0x8
static constexpr ::ConstString  UnhandledExceptionType{u"Unhandled exception"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::BacktraceDefaultClassifierTypes) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
