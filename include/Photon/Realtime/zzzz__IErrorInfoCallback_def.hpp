#pragma once
// IWYU pragma private; include "Photon/Realtime/IErrorInfoCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IErrorInfoCallback)
namespace Photon::Realtime {
class ErrorInfo;
}
// Forward declare root types
namespace Photon::Realtime {
class IErrorInfoCallback;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::IErrorInfoCallback*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::IErrorInfoCallback*, "Photon.Realtime", "IErrorInfoCallback");
// Dependencies 
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.IErrorInfoCallback
class CORDL_TYPE IErrorInfoCallback {
public:
// Declarations
/// @brief Method OnErrorInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnErrorInfo(::Photon::Realtime::ErrorInfo*  errorInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "IErrorInfoCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IErrorInfoCallback(IErrorInfoCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Realtime
