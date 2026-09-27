#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker_AsyncLock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(OVRAnchor_Tracker_AsyncLock)
namespace GlobalNamespace {
struct AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3;
}
namespace GlobalNamespace {
class OVRAnchor_Tracker;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct Tracker_OVRAnchor_AsyncLock;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock, "", "OVRAnchor/Tracker/AsyncLock");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/Tracker/AsyncLock
struct CORDL_TYPE Tracker_OVRAnchor_AsyncLock {
public:
// Declarations
using _AcquireAsync_d__3 = ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// [AsyncStateMachine(typeof(OVRAnchor::Tracker::AsyncLock::<AcquireAsync>d__3))]
/// @brief Method AcquireAsync, addr 0xa56eb40, size 0xe4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> AcquireAsync(::GlobalNamespace::OVRAnchor_Tracker*  tracker) ;

/// @brief Method Dispose, addr 0xa56eb20, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0xa56eaf0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::OVRAnchor_Tracker*  tracker) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Tracker_OVRAnchor_AsyncLock() ;

// Ctor Parameters [CppParam { name: "_tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: None, comment: None }]
constexpr Tracker_OVRAnchor_AsyncLock(::GlobalNamespace::OVRAnchor_Tracker*  _tracker) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11824};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _tracker, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::OVRAnchor_Tracker*  _tracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock, _tracker) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tracker_OVRAnchor_AsyncLock) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
