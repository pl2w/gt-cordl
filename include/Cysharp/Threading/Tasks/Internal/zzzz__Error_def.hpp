#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Error)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class Error;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::Error*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::Error*, "Cysharp.Threading.Tasks.Internal", "Error");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.Error
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Method ArgumentOutOfRange, addr 0xae48334, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method MoreThanOneElement, addr 0xae483fc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* MoreThanOneElement() ;

/// @brief Method NoElements, addr 0xae48390, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* NoElements() ;

/// @brief Method ThrowArgumentException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowArgumentException(::StringW  message) ;

/// @brief Method ThrowArgumentNullException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline void ThrowArgumentNullException(T  value, ::StringW  paramName) ;

/// @brief Method ThrowArgumentNullExceptionCore, addr 0xae482f0, size 0x44, virtual false, abstract: false, final false
static inline void ThrowArgumentNullExceptionCore(::StringW  paramName) ;

/// @brief Method ThrowInvalidOperationExceptionCore, addr 0xae484b4, size 0x44, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationExceptionCore(::StringW  message) ;

/// @brief Method ThrowNotYetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T ThrowNotYetCompleted() ;

/// @brief Method ThrowNotYetCompleted, addr 0xae48468, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowNotYetCompleted() ;

/// @brief Method ThrowOperationCanceledException, addr 0xae484f8, size 0x38, virtual false, abstract: false, final false
static inline void ThrowOperationCanceledException() ;

/// @brief Method ThrowWhenContinuationIsAlreadyRegistered, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline void ThrowWhenContinuationIsAlreadyRegistered(T  continuationField) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Error() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22073};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::Error) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal
