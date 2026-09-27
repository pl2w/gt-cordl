#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabAcquireContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPrefabAcquireContext)
namespace Fusion {
class NetworkObjectMeta;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Fusion {
struct NetworkPrefabAcquireContext;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkPrefabAcquireContext);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabAcquireContext, "Fusion", "NetworkPrefabAcquireContext");
// [IsReadOnly]
// Dependencies Fusion.NetworkPrefabId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkPrefabAcquireContext
struct CORDL_TYPE NetworkPrefabAcquireContext {
public:
// Declarations
 __declspec(property(get=get_Data)) ::System::Span_1<int32_t>  Data;

 __declspec(property(get=get_HasHeader)) bool  HasHeader;

/// @brief Method .ctor, addr 0x5fcc570, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkPrefabId  prefabId, ::Fusion::NetworkObjectMeta*  meta, bool  isSynchronous, bool  dontDestroyOnLoad) ;

/// @brief Method get_Data, addr 0x5fcc5b8, size 0xd0, virtual false, abstract: false, final false
inline ::System::Span_1<int32_t> get_Data() ;

/// @brief Method get_HasHeader, addr 0x5fcc5a8, size 0x10, virtual false, abstract: false, final false
inline bool get_HasHeader() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabAcquireContext() ;

// Ctor Parameters [CppParam { name: "PrefabId", ty: "::Fusion::NetworkPrefabId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Meta", ty: "::Fusion::NetworkObjectMeta*", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsSynchronous", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "DontDestroyOnLoad", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPrefabAcquireContext(::Fusion::NetworkPrefabId  PrefabId, ::Fusion::NetworkObjectMeta*  Meta, bool  IsSynchronous, bool  DontDestroyOnLoad) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19160};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field PrefabId, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkPrefabId  PrefabId;

/// @brief Field Meta, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkObjectMeta*  Meta;

/// @brief Field IsSynchronous, offset: 0x10, size: 0x1, def value: None
 bool  IsSynchronous;

/// @brief Field DontDestroyOnLoad, offset: 0x11, size: 0x1, def value: None
 bool  DontDestroyOnLoad;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkPrefabAcquireContext, PrefabId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabAcquireContext, Meta) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabAcquireContext, IsSynchronous) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkPrefabAcquireContext, DontDestroyOnLoad) == 0x11, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkPrefabAcquireContext) == 0x18, "Size mismatch!");

} // namespace end def Fusion
