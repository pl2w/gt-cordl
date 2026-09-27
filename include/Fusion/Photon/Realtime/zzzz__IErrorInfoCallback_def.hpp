#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/IErrorInfoCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IErrorInfoCallback)
namespace Fusion::Photon::Realtime {
class ErrorInfo;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class IErrorInfoCallback;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::IErrorInfoCallback*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::IErrorInfoCallback*, "Fusion.Photon.Realtime", "IErrorInfoCallback");
// Dependencies 
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.IErrorInfoCallback
class CORDL_TYPE IErrorInfoCallback {
public:
// Declarations
/// @brief Method OnErrorInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnErrorInfo(::Fusion::Photon::Realtime::ErrorInfo*  errorInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "IErrorInfoCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IErrorInfoCallback(IErrorInfoCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28060};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion::Photon::Realtime
