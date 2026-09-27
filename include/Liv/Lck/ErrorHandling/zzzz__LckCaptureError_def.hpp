#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/LckCaptureError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/ErrorHandling/zzzz__CaptureErrorType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckCaptureError)
namespace Liv::Lck::ErrorHandling {
struct CaptureErrorType;
}
// Forward declare root types
namespace Liv::Lck::ErrorHandling {
struct LckCaptureError;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::ErrorHandling::LckCaptureError);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ErrorHandling::LckCaptureError, "Liv.Lck.ErrorHandling", "LckCaptureError");
// Dependencies Liv.Lck.ErrorHandling.CaptureErrorType
namespace Liv::Lck::ErrorHandling {
// Is value type: true
// CS Name: Liv.Lck.ErrorHandling.LckCaptureError
struct CORDL_TYPE LckCaptureError {
public:
// Declarations
 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_Type, put=set_Type)) ::Liv::Lck::ErrorHandling::CaptureErrorType  Type;

/// @brief Method .ctor, addr 0x9d41e48, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ErrorHandling::CaptureErrorType  type, ::StringW  message) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Message, addr 0x9d41e38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Type, addr 0x9d41e28, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::ErrorHandling::CaptureErrorType get_Type() ;

/// [CompilerGenerated]
/// @brief Method set_Message, addr 0x9d41e40, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0x9d41e30, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::Liv::Lck::ErrorHandling::CaptureErrorType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCaptureError() ;

// Ctor Parameters [CppParam { name: "_Type_k__BackingField", ty: "::Liv::Lck::ErrorHandling::CaptureErrorType", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Message_k__BackingField", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr LckCaptureError(::Liv::Lck::ErrorHandling::CaptureErrorType  _Type_k__BackingField, ::StringW  _Message_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24873};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x0, size: 0x4, def value: None
 ::Liv::Lck::ErrorHandling::CaptureErrorType  _Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Message>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _Message_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::ErrorHandling::LckCaptureError, _Type_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::ErrorHandling::LckCaptureError, _Message_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::ErrorHandling::LckCaptureError) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::ErrorHandling
