#pragma once
// IWYU pragma private; include "System/ComponentModel/RunWorkerCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
CORDL_MODULE_EXPORT(RunWorkerCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RunWorkerCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::RunWorkerCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::RunWorkerCompletedEventArgs*, "System.ComponentModel", "RunWorkerCompletedEventArgs");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.RunWorkerCompletedEventArgs
class CORDL_TYPE RunWorkerCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Result)) ::System::Object*  Result;

/// [Browsable(false)]
/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
 __declspec(property(get=get_UserState)) ::System::Object*  UserState;

/// @brief Field result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::System::Object*  result;

static inline ::System::ComponentModel::RunWorkerCompletedEventArgs* New_ctor(::System::Object*  result, ::System::Exception*  error, bool  cancelled) ;

constexpr ::System::Object* const& __cordl_internal_get_result() const;

constexpr ::System::Object*& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_result(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad8411c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  result, ::System::Exception*  error, bool  cancelled) ;

/// @brief Method get_Result, addr 0xad84158, size 0x1c, virtual false, abstract: false, final false
inline ::System::Object* get_Result() ;

/// @brief Method get_UserState, addr 0xad84174, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_UserState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunWorkerCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunWorkerCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RunWorkerCompletedEventArgs(RunWorkerCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunWorkerCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunWorkerCompletedEventArgs(RunWorkerCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10279};

/// @brief Field result, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  ___result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::RunWorkerCompletedEventArgs, ___result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::RunWorkerCompletedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::ComponentModel
