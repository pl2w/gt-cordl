#pragma once
// IWYU pragma private; include "UnityEngine/UnitySynchronizationContext_WorkRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UnitySynchronizationContext_WorkRequest)
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnitySynchronizationContext_WorkRequest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnitySynchronizationContext_WorkRequest);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnitySynchronizationContext_WorkRequest, "UnityEngine", "UnitySynchronizationContext/WorkRequest");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UnitySynchronizationContext/WorkRequest
struct CORDL_TYPE UnitySynchronizationContext_WorkRequest {
public:
// Declarations
/// @brief Method Invoke, addr 0xb5ea428, size 0xcc, virtual false, abstract: false, final false
inline void Invoke() ;

/// @brief Method .ctor, addr 0xb5e9ff4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SendOrPostCallback*  callback, ::System::Object*  state, ::System::Threading::ManualResetEvent*  waitHandle) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnitySynchronizationContext_WorkRequest() ;

// Ctor Parameters [CppParam { name: "m_DelagateCallback", ty: "::System::Threading::SendOrPostCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DelagateState", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WaitHandle", ty: "::System::Threading::ManualResetEvent*", modifiers: "", def_value: None, comment: None }]
constexpr UnitySynchronizationContext_WorkRequest(::System::Threading::SendOrPostCallback*  m_DelagateCallback, ::System::Object*  m_DelagateState, ::System::Threading::ManualResetEvent*  m_WaitHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15115};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_DelagateCallback, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  m_DelagateCallback;

/// @brief Field m_DelagateState, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  m_DelagateState;

/// @brief Field m_WaitHandle, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  m_WaitHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnitySynchronizationContext_WorkRequest, m_DelagateCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySynchronizationContext_WorkRequest, m_DelagateState) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnitySynchronizationContext_WorkRequest, m_WaitHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnitySynchronizationContext_WorkRequest) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
