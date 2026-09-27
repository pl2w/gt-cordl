#pragma once
// IWYU pragma private; include "Photon/Realtime/ErrorInfoCallbacksContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(ErrorInfoCallbacksContainer)
namespace Photon::Realtime {
class ErrorInfo;
}
namespace Photon::Realtime {
class IErrorInfoCallback;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
// Forward declare root types
namespace Photon::Realtime {
class ErrorInfoCallbacksContainer;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::ErrorInfoCallbacksContainer*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::ErrorInfoCallbacksContainer*, "Photon.Realtime", "ErrorInfoCallbacksContainer");
// Dependencies System.Collections.Generic.List`1<T>
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.ErrorInfoCallbacksContainer
class CORDL_TYPE ErrorInfoCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IErrorInfoCallback*> {
public:
// Declarations
/// @brief Field client, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Photon::Realtime::LoadBalancingClient*  client;

/// @brief Convert operator to "::Photon::Realtime::IErrorInfoCallback"
constexpr operator  ::Photon::Realtime::IErrorInfoCallback*() noexcept;

static inline ::Photon::Realtime::ErrorInfoCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Method OnErrorInfo, addr 0xa705564, size 0x1b4, virtual true, abstract: false, final true
inline void OnErrorInfo(::Photon::Realtime::ErrorInfo*  errorInfo) ;

constexpr ::Photon::Realtime::LoadBalancingClient* const& __cordl_internal_get_client() const;

constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client() ;

constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value) ;

/// @brief Method .ctor, addr 0xa6fa804, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Photon::Realtime::LoadBalancingClient*  client) ;

/// @brief Convert to "::Photon::Realtime::IErrorInfoCallback"
constexpr ::Photon::Realtime::IErrorInfoCallback* i___Photon__Realtime__IErrorInfoCallback() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorInfoCallbacksContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorInfoCallbacksContainer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorInfoCallbacksContainer(ErrorInfoCallbacksContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorInfoCallbacksContainer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorInfoCallbacksContainer(ErrorInfoCallbacksContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29863};

/// @brief Field client, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::LoadBalancingClient*  ___client;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::ErrorInfoCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::ErrorInfoCallbacksContainer) == 0x30, "Size mismatch!");

} // namespace end def Photon::Realtime
