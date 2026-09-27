#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/IStartupMinidumpSender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IStartupMinidumpSender)
namespace Backtrace::Unity::Interfaces {
class IBacktraceApi;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace Backtrace::Unity::Runtime::Native {
class IStartupMinidumpSender;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Runtime::Native::IStartupMinidumpSender*, "Backtrace.Unity.Runtime.Native", "IStartupMinidumpSender");
// Dependencies 
namespace Backtrace::Unity::Runtime::Native {
// Is value type: false
// CS Name: Backtrace.Unity.Runtime.Native.IStartupMinidumpSender
class CORDL_TYPE IStartupMinidumpSender {
public:
// Declarations
/// @brief Method SendMinidumpOnStartup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::IEnumerator* SendMinidumpOnStartup(::System::Collections::Generic::ICollection_1<::StringW>*  clientAttachments, ::Backtrace::Unity::Interfaces::IBacktraceApi*  backtraceApi) ;

// Ctor Parameters [CppParam { name: "", ty: "IStartupMinidumpSender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IStartupMinidumpSender(IStartupMinidumpSender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27583};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Backtrace::Unity::Runtime::Native
