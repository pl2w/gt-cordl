#pragma once
// IWYU pragma private; include "System/Net/BaseLoggingObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseLoggingObject)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Net {
class BaseLoggingObject;
}
// Write type traits
MARK_REF_T(::System::Net::BaseLoggingObject*);
DEFINE_IL2CPP_CLASS(::System::Net::BaseLoggingObject*, "System.Net", "BaseLoggingObject");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.BaseLoggingObject
class CORDL_TYPE BaseLoggingObject : public ::System::Object {
public:
// Declarations
/// @brief Method Dump, addr 0xac72b40, size 0x4, virtual true, abstract: false, final false
inline void Dump(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Dump, addr 0xac72b44, size 0x4, virtual true, abstract: false, final false
inline void Dump(::ArrayW<uint8_t>  buffer, int32_t  length) ;

/// @brief Method Dump, addr 0xac72b48, size 0x4, virtual true, abstract: false, final false
inline void Dump(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method Dump, addr 0xac72b4c, size 0x4, virtual true, abstract: false, final false
inline void Dump(::System::IntPtr  pBuffer, int32_t  offset, int32_t  length) ;

/// @brief Method DumpArray, addr 0xac72b2c, size 0x4, virtual true, abstract: false, final false
inline void DumpArray(bool  shouldClose) ;

/// @brief Method DumpArrayToConsole, addr 0xac72b24, size 0x4, virtual true, abstract: false, final false
inline void DumpArrayToConsole() ;

/// @brief Method DumpArrayToFile, addr 0xac72b30, size 0x4, virtual true, abstract: false, final false
inline void DumpArrayToFile(bool  shouldClose) ;

/// @brief Method EnterFunc, addr 0xac72b1c, size 0x4, virtual true, abstract: false, final false
inline void EnterFunc(::StringW  funcname) ;

/// @brief Method Flush, addr 0xac72b34, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Flush, addr 0xac72b38, size 0x4, virtual true, abstract: false, final false
inline void Flush(bool  close) ;

/// @brief Method LeaveFunc, addr 0xac72b20, size 0x4, virtual true, abstract: false, final false
inline void LeaveFunc(::StringW  funcname) ;

/// @brief Method LoggingMonitorTick, addr 0xac72b3c, size 0x4, virtual true, abstract: false, final false
inline void LoggingMonitorTick() ;

static inline ::System::Net::BaseLoggingObject* New_ctor() ;

/// @brief Method PrintLine, addr 0xac72b28, size 0x4, virtual true, abstract: false, final false
inline void PrintLine(::StringW  msg) ;

/// @brief Method .ctor, addr 0xac72b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseLoggingObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseLoggingObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseLoggingObject(BaseLoggingObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseLoggingObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseLoggingObject(BaseLoggingObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::BaseLoggingObject) == 0x10, "Size mismatch!");

} // namespace end def System::Net
