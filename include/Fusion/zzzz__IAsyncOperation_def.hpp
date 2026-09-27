#pragma once
// IWYU pragma private; include "Fusion/IAsyncOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncOperation)
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Fusion {
class IAsyncOperation;
}
// Write type traits
MARK_REF_T(::Fusion::IAsyncOperation*);
DEFINE_IL2CPP_CLASS(::Fusion::IAsyncOperation*, "Fusion", "IAsyncOperation");
// Dependencies 
namespace Fusion {
// Is value type: false
// CS Name: Fusion.IAsyncOperation
class CORDL_TYPE IAsyncOperation {
public:
// Declarations
 __declspec(property(get=get_Error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  Error;

 __declspec(property(get=get_IsDone)) bool  IsDone;

/// [CompilerGenerated]
/// @brief Method add_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value) ;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error() ;

/// @brief Method get_IsDone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsDone() ;

/// [CompilerGenerated]
/// @brief Method remove_Completed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncOperation(IAsyncOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19048};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
