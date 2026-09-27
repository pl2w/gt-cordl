#pragma once
// IWYU pragma private; include "System/Net/OpenReadCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
CORDL_MODULE_EXPORT(OpenReadCompletedEventArgs)
namespace System::IO {
class Stream;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class OpenReadCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::OpenReadCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::OpenReadCompletedEventArgs*, "System.Net", "OpenReadCompletedEventArgs");
// Dependencies System.ComponentModel.AsyncCompletedEventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.OpenReadCompletedEventArgs
class CORDL_TYPE OpenReadCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
// Declarations
 __declspec(property(get=get_Result)) ::System::IO::Stream*  Result;

/// @brief Field _result, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) ::System::IO::Stream*  _result;

static inline ::System::Net::OpenReadCompletedEventArgs* New_ctor() ;

static inline ::System::Net::OpenReadCompletedEventArgs* New_ctor(::System::IO::Stream*  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__result() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__result() ;

constexpr void __cordl_internal_set__result(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xac548a0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac4b828, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  result, ::System::Exception*  exception, bool  cancelled, ::System::Object*  userToken) ;

/// @brief Method get_Result, addr 0xac53208, size 0x1c, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_Result() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenReadCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenReadCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenReadCompletedEventArgs(OpenReadCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenReadCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenReadCompletedEventArgs(OpenReadCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10472};

/// @brief Field _result, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::OpenReadCompletedEventArgs, ____result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Net::OpenReadCompletedEventArgs) == 0x30, "Size mismatch!");

} // namespace end def System::Net
