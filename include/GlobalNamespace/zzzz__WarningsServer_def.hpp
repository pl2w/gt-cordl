#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningsServer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(WarningsServer)
namespace GlobalNamespace {
struct PlayerAgeGateWarningStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class WarningsServer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WarningsServer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WarningsServer*, "", "WarningsServer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: WarningsServer
class CORDL_TYPE WarningsServer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::WarningsServer>  Instance;

/// @brief Method FetchPlayerData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* FetchPlayerData(::System::Threading::CancellationToken  token) ;

/// @brief Method GetOptInFollowUpMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<::GlobalNamespace::PlayerAgeGateWarningStatus>>* GetOptInFollowUpMessage(::System::Threading::CancellationToken  token) ;

static inline ::GlobalNamespace::WarningsServer* New_ctor() ;

/// @brief Method .ctor, addr 0x5a5e1e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::WarningsServer> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::WarningsServer>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WarningsServer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WarningsServer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WarningsServer(WarningsServer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WarningsServer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WarningsServer(WarningsServer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3052};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WarningsServer) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
