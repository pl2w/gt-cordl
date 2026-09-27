#pragma once
// IWYU pragma private; include "Fusion/FusionUnityLogger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionUnityLoggerBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FusionUnityLogger)
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class SimulationBehaviour;
}
namespace GlobalNamespace {
struct FusionUnityLoggerBase_LogContext;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class Thread;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionUnityLogger;
}
// Write type traits
MARK_REF_T(::Fusion::FusionUnityLogger*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionUnityLogger*, "Fusion", "FusionUnityLogger");
// Dependencies Fusion.FusionUnityLoggerBase
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionUnityLogger
class CORDL_TYPE FusionUnityLogger : public ::Fusion::FusionUnityLoggerBase {
public:
// Declarations
/// @brief Field LogActiveRunnerTick, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_LogActiveRunnerTick, put=__cordl_internal_set_LogActiveRunnerTick)) bool  LogActiveRunnerTick;

/// @brief Method CreateMessage, addr 0x60e1110, size 0x630, virtual true, abstract: false, final false
inline ::System::ValueTuple_2<::StringW,::UnityW<::UnityEngine::Object>> CreateMessage(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::FusionUnityLoggerBase_LogContext>  context) ;

static inline ::Fusion::FusionUnityLogger* New_ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode) ;

/// @brief Method TryAppendNetworkObjectPrefix, addr 0x60e18a4, size 0x154, virtual false, abstract: false, final false
inline bool TryAppendNetworkObjectPrefix(::System::Text::StringBuilder*  builder, ::Fusion::NetworkObject*  networkObject) ;

/// @brief Method TryAppendRunnerPrefix, addr 0x60e1740, size 0x164, virtual false, abstract: false, final false
inline bool TryAppendRunnerPrefix(::System::Text::StringBuilder*  builder, ::Fusion::NetworkRunner*  runner) ;

/// @brief Method TryAppendSimulationBehaviourPrefix, addr 0x60e19f8, size 0x178, virtual false, abstract: false, final false
inline bool TryAppendSimulationBehaviourPrefix(::System::Text::StringBuilder*  builder, ::Fusion::SimulationBehaviour*  simulationBehaviour) ;

constexpr bool const& __cordl_internal_get_LogActiveRunnerTick() const;

constexpr bool& __cordl_internal_get_LogActiveRunnerTick() ;

constexpr void __cordl_internal_set_LogActiveRunnerTick(bool  value) ;

/// @brief Method .ctor, addr 0x60e1034, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::Thread*  mainThread, bool  isDarkMode) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionUnityLogger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityLogger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionUnityLogger(FusionUnityLogger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionUnityLogger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionUnityLogger(FusionUnityLogger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23424};

/// @brief Field LogActiveRunnerTick, offset: 0x70, size: 0x1, def value: None
 bool  ___LogActiveRunnerTick;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionUnityLogger, ___LogActiveRunnerTick) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionUnityLogger) == 0x78, "Size mismatch!");

} // namespace end def Fusion
