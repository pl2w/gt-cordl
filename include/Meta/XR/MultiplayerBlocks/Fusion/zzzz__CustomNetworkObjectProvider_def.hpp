#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/CustomNetworkObjectProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkObjectProviderDefault_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomNetworkObjectProvider)
namespace Fusion {
struct NetworkObjectAcquireResult;
}
namespace Fusion {
class NetworkObjectBaker;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct NetworkPrefabAcquireContext;
}
namespace Fusion {
class NetworkRunner;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class CustomNetworkObjectProvider;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*, "Meta.XR.MultiplayerBlocks.Fusion", "CustomNetworkObjectProvider");
// Dependencies Fusion.NetworkObjectProviderDefault
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.CustomNetworkObjectProvider
class CORDL_TYPE CustomNetworkObjectProvider : public ::Fusion::NetworkObjectProviderDefault {
public:
// Declarations
/// @brief Field CustomSpawnDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CustomSpawnDict, put=setStaticF_CustomSpawnDict)) ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>*  CustomSpawnDict;

/// @brief Field _baker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__baker, put=setStaticF__baker)) ::Fusion::NetworkObjectBaker*  _baker;

/// @brief Method AcquirePrefabInstance, addr 0x9f5d9fc, size 0x1d8, virtual true, abstract: false, final false
inline ::Fusion::NetworkObjectAcquireResult AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  result) ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider* New_ctor() ;

/// @brief Method RegisterCustomNetworkObject, addr 0x9f5d8ac, size 0x150, virtual false, abstract: false, final false
static inline void RegisterCustomNetworkObject(uint32_t  customPrefabID, ::System::Func_1<::UnityW<::UnityEngine::GameObject>>*  func) ;

/// @brief Method .ctor, addr 0x9f5dbd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>* getStaticF_CustomSpawnDict() ;

static inline ::Fusion::NetworkObjectBaker* getStaticF__baker() ;

/// @brief Method get_Baker, addr 0x9f5d7f8, size 0xb4, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectBaker* get_Baker() ;

static inline void setStaticF_CustomSpawnDict(::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>*  value) ;

static inline void setStaticF__baker(::Fusion::NetworkObjectBaker*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomNetworkObjectProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomNetworkObjectProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomNetworkObjectProvider(CustomNetworkObjectProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomNetworkObjectProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomNetworkObjectProvider(CustomNetworkObjectProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider) == 0x28, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
