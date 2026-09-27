#pragma once
// IWYU pragma private; include "System/Net/WriteStreamClosedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(WriteStreamClosedEventArgs)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net {
class WriteStreamClosedEventArgs;
}
// Write type traits
MARK_REF_T(::System::Net::WriteStreamClosedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::Net::WriteStreamClosedEventArgs*, "System.Net", "WriteStreamClosedEventArgs");
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// Dependencies System.EventArgs
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WriteStreamClosedEventArgs
class CORDL_TYPE WriteStreamClosedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
 __declspec(property(get=get_Error)) ::System::Exception*  Error;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
static inline ::System::Net::WriteStreamClosedEventArgs* New_ctor() ;

/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief Method .ctor, addr 0xac54b00, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Error, addr 0xac54b58, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Error() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WriteStreamClosedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WriteStreamClosedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WriteStreamClosedEventArgs(WriteStreamClosedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WriteStreamClosedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WriteStreamClosedEventArgs(WriteStreamClosedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::WriteStreamClosedEventArgs) == 0x10, "Size mismatch!");

} // namespace end def System::Net
