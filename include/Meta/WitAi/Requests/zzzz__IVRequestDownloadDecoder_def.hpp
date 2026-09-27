#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/IVRequestDownloadDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVRequestDownloadDecoder)
namespace Meta::WitAi::Requests {
class VRequestProgressDelegate;
}
namespace Meta::WitAi::Requests {
class VRequestResponseDelegate;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
// Forward declare root types
namespace Meta::WitAi::Requests {
class IVRequestDownloadDecoder;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Requests::IVRequestDownloadDecoder*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Requests::IVRequestDownloadDecoder*, "Meta.WitAi.Requests", "IVRequestDownloadDecoder");
// Dependencies 
namespace Meta::WitAi::Requests {
// Is value type: false
// CS Name: Meta.WitAi.Requests.IVRequestDownloadDecoder
class CORDL_TYPE IVRequestDownloadDecoder {
public:
// Declarations
 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

/// [CompilerGenerated]
/// @brief Method add_OnFirstResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// @brief Method get_Completion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// [CompilerGenerated]
/// @brief Method remove_OnFirstResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProgress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IVRequestDownloadDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IVRequestDownloadDecoder(IVRequestDownloadDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Requests
