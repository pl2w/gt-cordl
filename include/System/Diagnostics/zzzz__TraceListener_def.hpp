#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TraceListener)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Diagnostics {
class TraceListener;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::TraceListener*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::TraceListener*, "System.Diagnostics", "TraceListener");
// Dependencies System.MarshalByRefObject
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.TraceListener
class CORDL_TYPE TraceListener : public ::System::MarshalByRefObject {
public:
// Declarations
 __declspec(property(put=set_IndentLevel)) int32_t  IndentLevel;

 __declspec(property(put=set_IndentSize)) int32_t  IndentSize;

 __declspec(property(get=get_IsThreadSafe)) bool  IsThreadSafe;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedIndent, put=set_NeedIndent)) bool  NeedIndent;

/// @brief Field indentLevel, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_indentLevel, put=__cordl_internal_set_indentLevel)) int32_t  indentLevel;

/// @brief Field indentSize, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_indentSize, put=__cordl_internal_set_indentSize)) int32_t  indentSize;

/// @brief Field listenerName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_listenerName, put=__cordl_internal_set_listenerName)) ::StringW  listenerName;

/// @brief Field needIndent, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_needIndent, put=__cordl_internal_set_needIndent)) bool  needIndent;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xad285dc, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xad28648, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xad2864c, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::System::Diagnostics::TraceListener* New_ctor(::StringW  name) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Write(::StringW  message) ;

/// @brief Method WriteIndent, addr 0xad28660, size 0xd4, virtual true, abstract: false, final false
inline void WriteIndent() ;

/// @brief Method WriteLine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteLine(::StringW  message) ;

constexpr int32_t const& __cordl_internal_get_indentLevel() const;

constexpr int32_t& __cordl_internal_get_indentLevel() ;

constexpr int32_t const& __cordl_internal_get_indentSize() const;

constexpr int32_t& __cordl_internal_get_indentSize() ;

constexpr ::StringW const& __cordl_internal_get_listenerName() const;

constexpr ::StringW& __cordl_internal_get_listenerName() ;

constexpr bool const& __cordl_internal_get_needIndent() const;

constexpr bool& __cordl_internal_get_needIndent() ;

constexpr void __cordl_internal_set_indentLevel(int32_t  value) ;

constexpr void __cordl_internal_set_indentSize(int32_t  value) ;

constexpr void __cordl_internal_set_listenerName(::StringW  value) ;

constexpr void __cordl_internal_set_needIndent(bool  value) ;

/// @brief Method .ctor, addr 0xad28544, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_IsThreadSafe, addr 0xad285d4, size 0x8, virtual true, abstract: false, final false
inline bool get_IsThreadSafe() ;

/// @brief Method get_Name, addr 0xad28584, size 0x50, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedIndent, addr 0xad28650, size 0x8, virtual false, abstract: false, final false
inline bool get_NeedIndent() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_IndentLevel, addr 0xad28120, size 0x18, virtual false, abstract: false, final false
inline void set_IndentLevel(int32_t  value) ;

/// @brief Method set_IndentSize, addr 0xad28138, size 0x9c, virtual false, abstract: false, final false
inline void set_IndentSize(int32_t  value) ;

/// @brief Method set_NeedIndent, addr 0xad28658, size 0x8, virtual false, abstract: false, final false
inline void set_NeedIndent(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TraceListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TraceListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TraceListener(TraceListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TraceListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TraceListener(TraceListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10008};

/// @brief Field indentLevel, offset: 0x18, size: 0x4, def value: None
 int32_t  ___indentLevel;

/// @brief Field indentSize, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___indentSize;

/// @brief Field needIndent, offset: 0x20, size: 0x1, def value: None
 bool  ___needIndent;

/// @brief Field listenerName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___listenerName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceListener, ___indentLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___indentSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___needIndent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::TraceListener, ___listenerName) == 0x28, "Offset mismatch!");

static_assert(sizeof(::System::Diagnostics::TraceListener) == 0x30, "Size mismatch!");

} // namespace end def System::Diagnostics
