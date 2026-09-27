#pragma once
// IWYU pragma private; include "System/ComponentModel/DoWorkEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CancelEventArgs_def.hpp"
CORDL_MODULE_EXPORT(DoWorkEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DoWorkEventArgs;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::DoWorkEventArgs*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::DoWorkEventArgs*, "System.ComponentModel", "DoWorkEventArgs");
// Dependencies System.ComponentModel.CancelEventArgs
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.DoWorkEventArgs
class CORDL_TYPE DoWorkEventArgs : public ::System::ComponentModel::CancelEventArgs {
public:
// Declarations
/// @brief [SRDescription("Argument passed into the worker handler from BackgroundWorker.RunWorkerAsync.")]
 __declspec(property(get=get_Argument)) ::System::Object*  Argument;

/// @brief [SRDescription("Result from the worker function.")]
 __declspec(property(get=get_Result, put=set_Result)) ::System::Object*  Result;

/// @brief Field argument, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_argument, put=__cordl_internal_set_argument)) ::System::Object*  argument;

/// @brief Field result, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::System::Object*  result;

static inline ::System::ComponentModel::DoWorkEventArgs* New_ctor(::System::Object*  argument) ;

constexpr ::System::Object* const& __cordl_internal_get_argument() const;

constexpr ::System::Object*& __cordl_internal_get_argument() ;

constexpr ::System::Object* const& __cordl_internal_get_result() const;

constexpr ::System::Object*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_argument(::System::Object*  value) ;

constexpr void __cordl_internal_set_result(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad71560, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  argument) ;

/// @brief Method get_Argument, addr 0xad71590, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Argument() ;

/// @brief Method get_Result, addr 0xad71598, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Result() ;

/// @brief Method set_Result, addr 0xad715a0, size 0x8, virtual false, abstract: false, final false
inline void set_Result(::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoWorkEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoWorkEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoWorkEventArgs(DoWorkEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoWorkEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoWorkEventArgs(DoWorkEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10267};

/// @brief Field result, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___result;

/// @brief Field argument, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___argument;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::DoWorkEventArgs, ___result) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DoWorkEventArgs, ___argument) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::DoWorkEventArgs) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
