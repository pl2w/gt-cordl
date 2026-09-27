#pragma once
// IWYU pragma private; include "System/ThrowHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowHelper)
namespace System::Buffers {
template<typename T>
class ReadOnlySequenceSegment_1;
}
namespace System::Collections::Generic {
class KeyNotFoundException;
}
namespace System {
class ArgumentException;
}
namespace System {
class ArgumentNullException;
}
namespace System {
class ArgumentOutOfRangeException;
}
namespace System {
class Array;
}
namespace System {
struct ExceptionArgument;
}
namespace System {
struct ExceptionResource;
}
namespace System {
class Exception;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ThrowHelper;
}
// Write type traits
MARK_REF_T(::System::ThrowHelper*);
DEFINE_IL2CPP_CLASS(::System::ThrowHelper*, "System", "ThrowHelper");
// [StackTraceHidden]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.ThrowHelper
class CORDL_TYPE ThrowHelper : public ::System::Object {
public:
// Declarations
/// @brief Method CreateArgumentException_DestinationTooShort, addr 0xa3002c4, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentException_DestinationTooShort() ;

/// @brief Method CreateArgumentNullException, addr 0xa300184, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0xa3003cc, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException() ;

/// @brief Method CreateArgumentOutOfRangeException, addr 0xa300420, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method CreateArgumentOutOfRangeException_OffsetOutOfRange, addr 0xa300818, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException_OffsetOutOfRange() ;

/// @brief Method CreateArgumentOutOfRangeException_PositionOutOfRange, addr 0xa300788, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException_PositionOutOfRange() ;

/// @brief Method CreateArgumentOutOfRangeException_PrecisionTooLarge, addr 0xa3004e8, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException_PrecisionTooLarge() ;

/// @brief Method CreateArgumentOutOfRangeException_SymbolDoesNotFit, addr 0xa3005d0, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArgumentOutOfRangeException_SymbolDoesNotFit() ;

/// @brief Method CreateArgumentValidationException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Exception* CreateArgumentValidationException(::System::Buffers::ReadOnlySequenceSegment_1<T>*  startSegment, int32_t  startIndex, ::System::Buffers::ReadOnlySequenceSegment_1<T>*  endSegment) ;

/// @brief Method CreateArrayTypeMismatchException, addr 0xa30024c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateArrayTypeMismatchException() ;

/// @brief Method CreateFormatException_BadFormatSpecifier, addr 0xa300934, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateFormatException_BadFormatSpecifier() ;

/// @brief Method CreateIndexOutOfRangeException, addr 0xa300354, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateIndexOutOfRangeException() ;

/// @brief Method CreateInvalidOperationException, addr 0xa300680, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidOperationException() ;

/// @brief Method CreateInvalidOperationException_EndPositionNotReached, addr 0xa3006f8, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateInvalidOperationException_EndPositionNotReached() ;

/// @brief Method CreateObjectDisposedException_ArrayMemoryPoolBuffer, addr 0xa3008a8, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* CreateObjectDisposedException_ArrayMemoryPoolBuffer() ;

/// @brief Method CreateThrowNotSupportedException, addr 0xa3009c4, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* CreateThrowNotSupportedException() ;

/// @brief Method GetAddingDuplicateWithKeyArgumentException, addr 0xa3014a8, size 0x90, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method GetArgumentException, addr 0xa301840, size 0xa4, virtual false, abstract: false, final false
static inline ::System::ArgumentException* GetArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method GetArgumentName, addr 0xa300ef0, size 0x178, virtual false, abstract: false, final false
static inline ::StringW GetArgumentName(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentNullException, addr 0xa30171c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::ArgumentNullException* GetArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0xa301370, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::StringW  resource) ;

/// @brief Method GetArgumentOutOfRangeException, addr 0xa301788, size 0xb8, virtual false, abstract: false, final false
static inline ::System::ArgumentOutOfRangeException* GetArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method GetArraySegmentCtorValidationFailedException, addr 0xa3016ec, size 0x30, virtual false, abstract: false, final false
static inline ::System::Exception* GetArraySegmentCtorValidationFailedException(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method GetInvalidOperationException, addr 0xa30166c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::InvalidOperationException* GetInvalidOperationException(::StringW  str) ;

/// @brief Method GetKeyNotFoundException, addr 0xa30155c, size 0x78, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::KeyNotFoundException* GetKeyNotFoundException(::System::Object*  key) ;

/// @brief Method GetResourceName, addr 0xa300c0c, size 0x280, virtual false, abstract: false, final false
static inline ::StringW GetResourceName(::System::ExceptionResource  resource) ;

/// @brief Method IfNullAndNullsAreIllegalThenThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void IfNullAndNullsAreIllegalThenThrow(::System::Object*  value, ::System::ExceptionArgument  argName) ;

/// @brief Method ThrowAddingDuplicateWithKeyArgumentException, addr 0xa301538, size 0x24, virtual false, abstract: false, final false
static inline void ThrowAddingDuplicateWithKeyArgumentException(::System::Object*  key) ;

/// @brief Method ThrowArgumentException, addr 0xa300bbc, size 0x50, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentException, addr 0xa300e8c, size 0x64, virtual false, abstract: false, final false
static inline void ThrowArgumentException(::System::ExceptionResource  resource, ::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentException_Argument_InvalidArrayType, addr 0xa30145c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowArgumentException_Argument_InvalidArrayType() ;

/// @brief Method ThrowArgumentException_DestinationTooShort, addr 0xa3002a0, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentException_DestinationTooShort() ;

/// @brief Method ThrowArgumentNullException, addr 0xa2f0780, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentNullException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0xa3003a8, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException() ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0xa2eff84, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument) ;

/// @brief Method ThrowArgumentOutOfRangeException, addr 0xa301068, size 0x9c, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException(::System::ExceptionArgument  argument, ::System::ExceptionResource  resource) ;

/// @brief Method ThrowArgumentOutOfRangeException_OffsetOutOfRange, addr 0xa3007f4, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException_OffsetOutOfRange() ;

/// @brief Method ThrowArgumentOutOfRangeException_PositionOutOfRange, addr 0xa300764, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException_PositionOutOfRange() ;

/// @brief Method ThrowArgumentOutOfRangeException_PrecisionTooLarge, addr 0xa3004c4, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException_PrecisionTooLarge() ;

/// @brief Method ThrowArgumentOutOfRangeException_SymbolDoesNotFit, addr 0xa3005ac, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRangeException_SymbolDoesNotFit() ;

/// @brief Method ThrowArgumentOutOfRange_IndexException, addr 0xa3013ec, size 0x38, virtual false, abstract: false, final false
static inline void ThrowArgumentOutOfRange_IndexException() ;

/// @brief Method ThrowArgumentValidationException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ThrowArgumentValidationException(::System::Buffers::ReadOnlySequenceSegment_1<T>*  startSegment, int32_t  startIndex, ::System::Buffers::ReadOnlySequenceSegment_1<T>*  endSegment) ;

/// @brief Method ThrowArraySegmentCtorValidationFailedExceptions, addr 0xa3016c8, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArraySegmentCtorValidationFailedExceptions(::System::Array*  array, int32_t  offset, int32_t  count) ;

/// @brief Method ThrowArrayTypeMismatchException, addr 0xa300228, size 0x24, virtual false, abstract: false, final false
static inline void ThrowArrayTypeMismatchException() ;

/// @brief Method ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count, addr 0xa301910, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count() ;

/// @brief Method ThrowFormatException_BadFormatSpecifier, addr 0xa300910, size 0x24, virtual false, abstract: false, final false
static inline void ThrowFormatException_BadFormatSpecifier() ;

/// @brief Method ThrowIndexArgumentOutOfRange_NeedNonNegNumException, addr 0xa301424, size 0x38, virtual false, abstract: false, final false
static inline void ThrowIndexArgumentOutOfRange_NeedNonNegNumException() ;

/// @brief Method ThrowIndexOutOfRangeException, addr 0xa300330, size 0x24, virtual false, abstract: false, final false
static inline void ThrowIndexOutOfRangeException() ;

/// @brief Method ThrowInvalidOperationException, addr 0xa30065c, size 0x24, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException() ;

/// @brief Method ThrowInvalidOperationException, addr 0xa301104, size 0x50, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowInvalidOperationException_ConcurrentOperationsNotSupported, addr 0xa30163c, size 0x30, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_ConcurrentOperationsNotSupported() ;

/// @brief Method ThrowInvalidOperationException_EndPositionNotReached, addr 0xa3006d4, size 0x24, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_EndPositionNotReached() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumEnded, addr 0xa3012d8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumEnded() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion, addr 0xa3011f4, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumNotStarted, addr 0xa30128c, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen, addr 0xa301240, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen() ;

/// @brief Method ThrowInvalidOperationException_InvalidOperation_NoValue, addr 0xa301324, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_InvalidOperation_NoValue() ;

/// @brief Method ThrowInvalidTypeWithPointersNotSupported, addr 0xa3015dc, size 0x60, virtual false, abstract: false, final false
static inline void ThrowInvalidTypeWithPointersNotSupported(::System::Type*  targetType) ;

/// @brief Method ThrowKeyNotFoundException, addr 0xa3015d4, size 0x8, virtual false, abstract: false, final false
static inline void ThrowKeyNotFoundException(::System::Object*  key) ;

/// @brief Method ThrowNotSupportedException, addr 0xa3009a0, size 0x24, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException() ;

/// @brief Method ThrowNotSupportedException, addr 0xa3011a4, size 0x50, virtual false, abstract: false, final false
static inline void ThrowNotSupportedException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowObjectDisposedException_ArrayMemoryPoolBuffer, addr 0xa300884, size 0x24, virtual false, abstract: false, final false
static inline void ThrowObjectDisposedException_ArrayMemoryPoolBuffer() ;

/// @brief Method ThrowSerializationException, addr 0xa301154, size 0x50, virtual false, abstract: false, final false
static inline void ThrowSerializationException(::System::ExceptionResource  resource) ;

/// @brief Method ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index, addr 0xa3018e4, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index() ;

/// @brief Method ThrowValueArgumentOutOfRange_NeedNonNegNumException, addr 0xa30193c, size 0x2c, virtual false, abstract: false, final false
static inline void ThrowValueArgumentOutOfRange_NeedNonNegNumException() ;

/// @brief Method ThrowWrongKeyTypeArgumentException, addr 0xa300a24, size 0xcc, virtual false, abstract: false, final false
static inline void ThrowWrongKeyTypeArgumentException(::System::Object*  key, ::System::Type*  targetType) ;

/// @brief Method ThrowWrongValueTypeArgumentException, addr 0xa300af0, size 0xcc, virtual false, abstract: false, final false
static inline void ThrowWrongValueTypeArgumentException(::System::Object*  value, ::System::Type*  targetType) ;

/// @brief Method TryFormatThrowFormatException, addr 0xa300a18, size 0xc, virtual false, abstract: false, final false
static inline bool TryFormatThrowFormatException(::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryParseThrowFormatException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryParseThrowFormatException(::by_ref<T>  value, ::by_ref<int32_t>  bytesConsumed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowHelper(ThrowHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowHelper(ThrowHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5643};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ThrowHelper) == 0x10, "Size mismatch!");

} // namespace end def System
