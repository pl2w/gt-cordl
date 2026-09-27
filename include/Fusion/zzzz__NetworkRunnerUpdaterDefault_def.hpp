#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerUpdaterDefault.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkRunnerUpdaterDefaultInvokeSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunnerUpdaterDefault)
namespace Fusion {
class INetworkRunnerUpdater;
}
namespace Fusion {
struct NetworkRunnerUpdaterDefaultInvokeSettings;
}
namespace Fusion {
class NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration;
}
namespace Fusion {
class NetworkRunnerUpdaterDefault___c;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O;
}
namespace GlobalNamespace {
struct NetworkRunnerUpdaterDefault_NetworkRunnerRender;
}
namespace GlobalNamespace {
struct NetworkRunnerUpdaterDefault_NetworkRunnerUpdate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::LowLevel {
class PlayerLoopSystem_UpdateFunction;
}
// Forward declare root types
namespace Fusion {
class NetworkRunnerUpdaterDefault;
}
namespace Fusion {
class NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration;
}
namespace Fusion {
class NetworkRunnerUpdaterDefault___c;
}
namespace Fusion {
class PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkRunnerUpdaterDefault*);
MARK_REF_T(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*);
MARK_REF_T(::Fusion::NetworkRunnerUpdaterDefault___c*);
MARK_REF_T(::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerUpdaterDefault*, "Fusion", "NetworkRunnerUpdaterDefault");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*, "Fusion", "NetworkRunnerUpdaterDefault/PlayerLoopSystemRegistration");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerUpdaterDefault___c*, "Fusion", "NetworkRunnerUpdaterDefault/<>c");
DEFINE_IL2CPP_CLASS(::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O*, "Fusion", "NetworkRunnerUpdaterDefault/PlayerLoopSystemRegistration/<>O");
// Dependencies Fusion.NetworkRunnerUpdaterDefaultInvokeSettings, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerUpdaterDefault
class CORDL_TYPE NetworkRunnerUpdaterDefault : public ::System::Object {
public:
// Declarations
using PlayerLoopSystemRegistration = ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration;

using __c = ::Fusion::NetworkRunnerUpdaterDefault___c;

using NetworkRunnerRender = ::GlobalNamespace::NetworkRunnerUpdaterDefault_NetworkRunnerRender;

using NetworkRunnerUpdate = ::GlobalNamespace::NetworkRunnerUpdaterDefault_NetworkRunnerUpdate;

/// @brief Field RenderSettings, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_RenderSettings, put=__cordl_internal_set_RenderSettings)) ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  RenderSettings;

/// @brief Field UpdateSettings, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_UpdateSettings, put=__cordl_internal_set_UpdateSettings)) ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  UpdateSettings;

/// @brief Field _instanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__instanceCount, put=setStaticF__instanceCount)) int32_t  _instanceCount;

/// @brief Field _instances, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instances, put=setStaticF__instances)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*  _instances;

/// @brief Field _registration, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__registration, put=setStaticF__registration)) ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*  _registration;

/// @brief Convert operator to "::Fusion::INetworkRunnerUpdater"
constexpr operator  ::Fusion::INetworkRunnerUpdater*() noexcept;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method ClearStatics, addr 0x5fda950, size 0xa0, virtual false, abstract: false, final false
static inline void ClearStatics() ;

/// @brief Method Fusion.INetworkRunnerUpdater.Initialize, addr 0x5fdb2c4, size 0x160, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerUpdater_Initialize(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerUpdater.Shutdown, addr 0x5fdb424, size 0x23c, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerUpdater_Shutdown(::Fusion::NetworkRunner*  runner) ;

/// @brief Method InvokeRender, addr 0x5fdb858, size 0x27c, virtual false, abstract: false, final false
static inline void InvokeRender() ;

/// @brief Method InvokeUpdate, addr 0x5fdb660, size 0x1f8, virtual false, abstract: false, final false
static inline void InvokeUpdate() ;

static inline ::Fusion::NetworkRunnerUpdaterDefault* New_ctor() ;

/// @brief Method RegisterInPlayerLoop, addr 0x5fda9f0, size 0x2e0, virtual false, abstract: false, final false
static inline bool RegisterInPlayerLoop(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  updateSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  renderSettings) ;

/// @brief Method UnregisterFromPlayerLoop, addr 0x5fdb0e0, size 0x9c, virtual false, abstract: false, final false
static inline bool UnregisterFromPlayerLoop() ;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& __cordl_internal_get_RenderSettings() const;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& __cordl_internal_get_RenderSettings() ;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& __cordl_internal_get_UpdateSettings() const;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& __cordl_internal_get_UpdateSettings() ;

constexpr void __cordl_internal_set_RenderSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value) ;

constexpr void __cordl_internal_set_UpdateSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value) ;

/// @brief Method .ctor, addr 0x5fdbad4, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__instanceCount() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF__instances() ;

static inline ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration* getStaticF__registration() ;

/// @brief Convert to "::Fusion::INetworkRunnerUpdater"
constexpr ::Fusion::INetworkRunnerUpdater* i___Fusion__INetworkRunnerUpdater() noexcept;

static inline void setStaticF__instanceCount(int32_t  value) ;

static inline void setStaticF__instances(::System::Collections::Generic::List_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

static inline void setStaticF__registration(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerUpdaterDefault() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDefault", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerUpdaterDefault(NetworkRunnerUpdaterDefault && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDefault", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerUpdaterDefault(NetworkRunnerUpdaterDefault const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19271};

/// @brief Field UpdateSettings, offset: 0x10, size: 0x10, def value: None
 ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  ___UpdateSettings;

/// @brief Field RenderSettings, offset: 0x20, size: 0x10, def value: None
 ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  ___RenderSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunnerUpdaterDefault, ___UpdateSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerUpdaterDefault, ___RenderSettings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunnerUpdaterDefault) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerUpdaterDefault/<>c
class CORDL_TYPE NetworkRunnerUpdaterDefault___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkRunnerUpdaterDefault___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>*  __9__11_0;

static inline ::Fusion::NetworkRunnerUpdaterDefault___c* New_ctor() ;

/// @brief Method <InvokeRender>b__11_0, addr 0x5fdbcd8, size 0x64, virtual false, abstract: false, final false
inline bool _InvokeRender_b__11_0(::Fusion::NetworkRunner*  x) ;

/// @brief Method .ctor, addr 0x5fdbcd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkRunnerUpdaterDefault___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Fusion::NetworkRunnerUpdaterDefault___c*  value) ;

static inline void setStaticF___9__11_0(::System::Predicate_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerUpdaterDefault___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDefault___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerUpdaterDefault___c(NetworkRunnerUpdaterDefault___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDefault___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerUpdaterDefault___c(NetworkRunnerUpdaterDefault___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunnerUpdaterDefault___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.NetworkRunnerUpdaterDefaultInvokeSettings, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerUpdaterDefault/PlayerLoopSystemRegistration
class CORDL_TYPE NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration : public ::System::Object {
public:
// Declarations
using __O = ::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O;

/// @brief Field RenderSettings, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_RenderSettings, put=__cordl_internal_set_RenderSettings)) ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  RenderSettings;

/// @brief Field UpdateSettings, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_UpdateSettings, put=__cordl_internal_set_UpdateSettings)) ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  UpdateSettings;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x5fdb17c, size 0x148, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration* New_ctor(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  updateSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  renderSettings) ;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& __cordl_internal_get_RenderSettings() const;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& __cordl_internal_get_RenderSettings() ;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings const& __cordl_internal_get_UpdateSettings() const;

constexpr ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings& __cordl_internal_get_UpdateSettings() ;

constexpr void __cordl_internal_set_RenderSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value) ;

constexpr void __cordl_internal_set_UpdateSettings(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  value) ;

/// @brief Method .ctor, addr 0x5fdacd0, size 0x3e0, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  updateSettings, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  renderSettings) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration(NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration(NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19269};

/// @brief Field UpdateSettings, offset: 0x10, size: 0x10, def value: None
 ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  ___UpdateSettings;

/// @brief Field RenderSettings, offset: 0x20, size: 0x10, def value: None
 ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  ___RenderSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration, ___UpdateSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration, ___RenderSettings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunnerUpdaterDefault_PlayerLoopSystemRegistration) == 0x30, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerUpdaterDefault/PlayerLoopSystemRegistration/<>O
class CORDL_TYPE PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O : public ::System::Object {
public:
// Declarations
/// @brief Field <0>__InvokeUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__0___InvokeUpdate, put=setStaticF__0___InvokeUpdate)) ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  _0___InvokeUpdate;

/// @brief Field <1>__InvokeRender, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__1___InvokeRender, put=setStaticF__1___InvokeRender)) ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  _1___InvokeRender;

static inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* getStaticF__0___InvokeUpdate() ;

static inline ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* getStaticF__1___InvokeRender() ;

static inline void setStaticF__0___InvokeUpdate(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value) ;

static inline void setStaticF__1___InvokeRender(::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O(PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O(PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::PlayerLoopSystemRegistration_NetworkRunnerUpdaterDefault___O) == 0x10, "Size mismatch!");

} // namespace end def Fusion
