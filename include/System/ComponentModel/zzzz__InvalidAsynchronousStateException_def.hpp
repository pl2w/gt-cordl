#pragma once
// IWYU pragma private; include "System/ComponentModel/InvalidAsynchronousStateException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InvalidAsynchronousStateException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::ComponentModel {
class InvalidAsynchronousStateException;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::InvalidAsynchronousStateException*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::InvalidAsynchronousStateException*, "System.ComponentModel", "InvalidAsynchronousStateException");
// Dependencies System.ArgumentException
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.InvalidAsynchronousStateException
class CORDL_TYPE InvalidAsynchronousStateException : public ::System::ArgumentException {
public:
// Declarations
static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor() ;

static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor(::StringW  message) ;

static inline ::System::ComponentModel::InvalidAsynchronousStateException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xad58ea8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad58ec4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xad58eb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xad58ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvalidAsynchronousStateException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvalidAsynchronousStateException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvalidAsynchronousStateException(InvalidAsynchronousStateException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvalidAsynchronousStateException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvalidAsynchronousStateException(InvalidAsynchronousStateException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ComponentModel::InvalidAsynchronousStateException) == 0x98, "Size mismatch!");

} // namespace end def System::ComponentModel
