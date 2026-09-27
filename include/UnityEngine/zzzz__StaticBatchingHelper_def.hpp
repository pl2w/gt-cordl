#pragma once
// IWYU pragma private; include "UnityEngine/StaticBatchingHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StaticBatchingHelper)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine {
struct StaticBatchingHelper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::StaticBatchingHelper);
DEFINE_IL2CPP_CLASS(::UnityEngine::StaticBatchingHelper, "UnityEngine", "StaticBatchingHelper");
// [NativeHeader("Runtime/Graphics/Mesh/StaticBatching.h")]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.StaticBatchingHelper
#pragma pack(push, 0)
struct CORDL_TYPE StaticBatchingHelper {
public:
// Declarations
/// [FreeFunction("StaticBatching::CombineMeshesForStaticBatching")]
/// @brief Method CombineMeshes, addr 0xb5b180c, size 0x8c, virtual false, abstract: false, final false
static inline void CombineMeshes(::ArrayW<::UnityEngine::GameObject*>  gos, ::UnityEngine::GameObject*  staticBatchRoot) ;

/// @brief Method CombineMeshes_Injected, addr 0xb5b1898, size 0x44, virtual false, abstract: false, final false
static inline void CombineMeshes_Injected(::ArrayW<::UnityEngine::GameObject*>  gos, ::System::IntPtr  staticBatchRoot) ;

// Ctor Parameters []
// @brief default ctor
constexpr StaticBatchingHelper() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14943};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::StaticBatchingHelper) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine
