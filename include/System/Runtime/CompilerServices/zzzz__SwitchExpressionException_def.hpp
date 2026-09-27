#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/SwitchExpressionException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SwitchExpressionException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class SwitchExpressionException;
}
// Write type traits
MARK_REF_T(::System::Runtime::CompilerServices::SwitchExpressionException*);
DEFINE_IL2CPP_CLASS(::System::Runtime::CompilerServices::SwitchExpressionException*, "System.Runtime.CompilerServices", "SwitchExpressionException");
// Dependencies System.InvalidOperationException
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.SwitchExpressionException
class CORDL_TYPE SwitchExpressionException : public ::System::InvalidOperationException {
public:
// Declarations
 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_UnmatchedValue)) ::System::Object*  UnmatchedValue;

/// @brief Field <UnmatchedValue>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnmatchedValue_k__BackingField, put=__cordl_internal_set__UnmatchedValue_k__BackingField)) ::System::Object*  _UnmatchedValue_k__BackingField;

/// @brief Method GetObjectData, addr 0xa1e87b4, size 0xb4, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Runtime::CompilerServices::SwitchExpressionException* New_ctor() ;

static inline ::System::Runtime::CompilerServices::SwitchExpressionException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::Runtime::CompilerServices::SwitchExpressionException* New_ctor(::System::Object*  unmatchedValue) ;

constexpr ::System::Object* const& __cordl_internal_get__UnmatchedValue_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__UnmatchedValue_k__BackingField() ;

constexpr void __cordl_internal_set__UnmatchedValue_k__BackingField(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xa1e8678, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa1e86f0, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xa1e86c4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  unmatchedValue) ;

/// @brief Method get_Message, addr 0xa1e8868, size 0xa8, virtual true, abstract: false, final false
inline ::StringW get_Message() ;

/// [CompilerGenerated]
/// @brief Method get_UnmatchedValue, addr 0xa1e87ac, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_UnmatchedValue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SwitchExpressionException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SwitchExpressionException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SwitchExpressionException(SwitchExpressionException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SwitchExpressionException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SwitchExpressionException(SwitchExpressionException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6564};

/// [CompilerGenerated]
/// @brief Field <UnmatchedValue>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Object*  ____UnmatchedValue_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::SwitchExpressionException, ____UnmatchedValue_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::CompilerServices::SwitchExpressionException) == 0x98, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
