#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BurstCompilerService)
namespace GlobalNamespace {
struct BurstCompilerService_BurstLogType;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace Unity::Burst::LowLevel {
class BurstCompilerService;
}
// Write type traits
MARK_REF_T(::Unity::Burst::LowLevel::BurstCompilerService*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::LowLevel::BurstCompilerService*, "Unity.Burst.LowLevel", "BurstCompilerService");
// [NativeHeader("Runtime/Burst/BurstDelegateCache.h")]
// [NativeHeader("Runtime/Burst/Burst.h")]
// [StaticAccessor("BurstCompilerService::Get()", (UnityEngine.Bindings.StaticAccessorType)1)]
// Dependencies System.Object
namespace Unity::Burst::LowLevel {
// Is value type: false
// CS Name: Unity.Burst.LowLevel.BurstCompilerService
class CORDL_TYPE BurstCompilerService : public ::System::Object {
public:
// Declarations
using BurstLogType = ::GlobalNamespace::BurstCompilerService_BurstLogType;

/// [FreeFunction(IsThreadSafe = true)]
/// @brief Method CompileAsyncDelegateMethod, addr 0xb5601e8, size 0x178, virtual false, abstract: false, final false
static inline int32_t CompileAsyncDelegateMethod(::System::Object*  delegateMethod, ::StringW  compilerOptions) ;

/// @brief Method CompileAsyncDelegateMethod_Injected, addr 0xb560360, size 0x44, virtual false, abstract: false, final false
static inline int32_t CompileAsyncDelegateMethod_Injected(::System::Object*  delegateMethod, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  compilerOptions) ;

/// [FreeFunction(IsThreadSafe = true)]
/// @brief Method GetAsyncCompiledAsyncDelegateMethod, addr 0xb5603a4, size 0x3c, virtual false, abstract: false, final false
static inline void* GetAsyncCompiledAsyncDelegateMethod(int32_t  userID) ;

/// [ThreadSafe]
/// @brief Method GetOrCreateSharedMemory, addr 0xb55f8ec, size 0x54, virtual false, abstract: false, final false
static inline void* GetOrCreateSharedMemory(::by_ref<::UnityEngine::Hash128>  key, uint32_t  size_of, uint32_t  alignment) ;

/// [FreeFunction("DefaultBurstLogCallback", true)]
/// @brief Method Log, addr 0xb5603e0, size 0x6c, virtual false, abstract: false, final false
static inline void Log(void*  userData, ::GlobalNamespace::BurstCompilerService_BurstLogType  logType, uint8_t*  message, uint8_t*  filename, int32_t  lineNumber) ;

/// [FreeFunction("DefaultBurstRuntimeLogCallback", true)]
/// @brief Method RuntimeLog, addr 0xb56044c, size 0x6c, virtual false, abstract: false, final false
static inline void RuntimeLog(void*  userData, ::GlobalNamespace::BurstCompilerService_BurstLogType  logType, uint8_t*  message, uint8_t*  filename, int32_t  lineNumber) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompilerService(BurstCompilerService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompilerService(BurstCompilerService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14758};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::LowLevel::BurstCompilerService) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::LowLevel
