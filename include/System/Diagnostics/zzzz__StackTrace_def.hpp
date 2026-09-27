#pragma once
// IWYU pragma private; include "System/Diagnostics/StackTrace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/zzzz__StackFrame_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StackTrace)
namespace GlobalNamespace {
struct StackTrace_TraceFormat;
}
namespace System::Diagnostics {
class StackFrame;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Diagnostics {
class StackTrace;
}
// Write type traits
MARK_REF_T(::System::Diagnostics::StackTrace*);
DEFINE_IL2CPP_CLASS(::System::Diagnostics::StackTrace*, "System.Diagnostics", "StackTrace");
// [MonoTODO("Serialized objects are not compatible with .NET")]
// [ComVisible(true)]
// Dependencies System.Diagnostics.StackFrame, System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.StackTrace
class CORDL_TYPE StackTrace : public ::System::Object {
public:
// Declarations
using TraceFormat = ::GlobalNamespace::StackTrace_TraceFormat;

 __declspec(property(get=get_FrameCount)) int32_t  FrameCount;

/// @brief Field aotid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_aotid, put=setStaticF_aotid)) ::StringW  aotid;

/// @brief Field captured_traces, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_captured_traces, put=__cordl_internal_set_captured_traces)) ::ArrayW<::System::Diagnostics::StackTrace*>  captured_traces;

/// @brief Field debug_info, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug_info, put=__cordl_internal_set_debug_info)) bool  debug_info;

/// @brief Field frames, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_frames, put=__cordl_internal_set_frames)) ::ArrayW<::System::Diagnostics::StackFrame*>  frames;

/// @brief Field isAotidSet, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isAotidSet, put=setStaticF_isAotidSet)) bool  isAotidSet;

/// @brief Method AddFrames, addr 0xa25f094, size 0x480, virtual false, abstract: false, final false
inline bool AddFrames(::System::Text::StringBuilder*  sb, bool  separator, ::by_ref<bool>  isAsync) ;

/// @brief Method ConvertAsyncStateMachineMethod, addr 0xa25fb3c, size 0x430, virtual false, abstract: false, final false
static inline void ConvertAsyncStateMachineMethod(::by_ref<::System::Reflection::MethodBase*>  method, ::by_ref<::System::Type*>  declaringType) ;

/// @brief Method GetAotId, addr 0xa25efc4, size 0xd0, virtual false, abstract: false, final false
static inline ::StringW GetAotId() ;

/// @brief Method GetFrame, addr 0xa25ed88, size 0x60, virtual true, abstract: false, final false
inline ::System::Diagnostics::StackFrame* GetFrame(int32_t  index) ;

/// [ComVisible(false)]
/// @brief Method GetFrames, addr 0xa25ede8, size 0x1dc, virtual true, abstract: false, final false
inline ::ArrayW<::System::Diagnostics::StackFrame*> GetFrames() ;

/// @brief Method GetFullNameForStackTrace, addr 0xa25f514, size 0x628, virtual false, abstract: false, final false
inline void GetFullNameForStackTrace(::System::Text::StringBuilder*  sb, ::System::Reflection::MethodBase*  mi, bool  needsNewLine, ::by_ref<bool>  skipped, ::by_ref<bool>  isAsync) ;

static inline ::System::Diagnostics::StackTrace* New_ctor() ;

static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception*  e, bool  fNeedFileInfo) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(::System::Exception*  e, int32_t  skipFrames, bool  fNeedFileInfo) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(bool  fNeedFileInfo) ;

static inline ::System::Diagnostics::StackTrace* New_ctor(int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method ToString, addr 0xa25ff6c, size 0x160, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xa2600cc, size 0xc, virtual false, abstract: false, final false
inline ::StringW ToString(::GlobalNamespace::StackTrace_TraceFormat  traceFormat) ;

constexpr ::ArrayW<::System::Diagnostics::StackTrace*> const& __cordl_internal_get_captured_traces() const;

constexpr ::ArrayW<::System::Diagnostics::StackTrace*>& __cordl_internal_get_captured_traces() ;

constexpr bool const& __cordl_internal_get_debug_info() const;

constexpr bool& __cordl_internal_get_debug_info() ;

constexpr ::ArrayW<::System::Diagnostics::StackFrame*> const& __cordl_internal_get_frames() const;

constexpr ::ArrayW<::System::Diagnostics::StackFrame*>& __cordl_internal_get_frames() ;

constexpr void __cordl_internal_set_captured_traces(::ArrayW<::System::Diagnostics::StackTrace*>  value) ;

constexpr void __cordl_internal_set_debug_info(bool  value) ;

constexpr void __cordl_internal_set_frames(::ArrayW<::System::Diagnostics::StackFrame*>  value) ;

/// @brief Method .ctor, addr 0xa25e9cc, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa25ec6c, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  e, bool  fNeedFileInfo) ;

/// @brief Method .ctor, addr 0xa25ec78, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  e, int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method .ctor, addr 0xa25ec04, size 0x30, virtual false, abstract: false, final false
inline void _ctor(bool  fNeedFileInfo) ;

/// @brief Method .ctor, addr 0xa25ec34, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  skipFrames, bool  fNeedFileInfo) ;

static inline ::StringW getStaticF_aotid() ;

static inline bool getStaticF_isAotidSet() ;

/// @brief Method get_FrameCount, addr 0xa25ed70, size 0x18, virtual true, abstract: false, final false
inline int32_t get_FrameCount() ;

/// @brief Method get_trace, addr 0xa25ec68, size 0x4, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Diagnostics::StackFrame*> get_trace(::System::Exception*  e, int32_t  skipFrames, bool  fNeedFileInfo) ;

/// @brief Method init_frames, addr 0xa25e9f0, size 0x214, virtual false, abstract: false, final false
inline void init_frames(int32_t  skipFrames, bool  fNeedFileInfo) ;

static inline void setStaticF_aotid(::StringW  value) ;

static inline void setStaticF_isAotidSet(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StackTrace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StackTrace(StackTrace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StackTrace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StackTrace(StackTrace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6793};

/// @brief Field frames, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Diagnostics::StackFrame*>  ___frames;

/// @brief Field captured_traces, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Diagnostics::StackTrace*>  ___captured_traces;

/// @brief Field debug_info, offset: 0x20, size: 0x1, def value: None
 bool  ___debug_info;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::StackTrace, ___frames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___captured_traces) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Diagnostics::StackTrace, ___debug_info) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Diagnostics::StackTrace) == 0x28, "Size mismatch!");

} // namespace end def System::Diagnostics
