#pragma once
// IWYU pragma private; include "Fusion/FusionAddressablePrefabsPreloader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FusionAddressablePrefabsPreloader)
namespace GlobalNamespace {
struct FusionAddressablePrefabsPreloader__Start_d__1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Fusion {
class FusionAddressablePrefabsPreloader;
}
// Write type traits
MARK_REF_T(::Fusion::FusionAddressablePrefabsPreloader*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionAddressablePrefabsPreloader*, "Fusion", "FusionAddressablePrefabsPreloader");
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionAddressablePrefabsPreloader
class CORDL_TYPE FusionAddressablePrefabsPreloader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__1 = ::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1;

/// @brief Field _handles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handles, put=__cordl_internal_set__handles)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  _handles;

static inline ::Fusion::FusionAddressablePrefabsPreloader* New_ctor() ;

/// @brief Method OnDestroy, addr 0x60e97b0, size 0x188, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// [AsyncStateMachine(typeof(Fusion.FusionAddressablePrefabsPreloader::<Start>d__1))]
/// @brief Method Start, addr 0x60e9704, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>* const& __cordl_internal_get__handles() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*& __cordl_internal_get__handles() ;

constexpr void __cordl_internal_set__handles(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  value) ;

/// @brief Method .ctor, addr 0x60e9938, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionAddressablePrefabsPreloader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionAddressablePrefabsPreloader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionAddressablePrefabsPreloader(FusionAddressablePrefabsPreloader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionAddressablePrefabsPreloader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionAddressablePrefabsPreloader(FusionAddressablePrefabsPreloader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23456};

/// @brief Field _handles, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>>*  ____handles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionAddressablePrefabsPreloader, ____handles) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionAddressablePrefabsPreloader) == 0x28, "Size mismatch!");

} // namespace end def Fusion
