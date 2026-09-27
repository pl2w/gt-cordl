#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeadModel)
namespace GlobalNamespace {
struct HeadModel__CosmeticPartLoadInfo;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadModel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HeadModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeadModel*, "", "HeadModel");
// Dependencies UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HeadModel
class CORDL_TYPE HeadModel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CosmeticPartLoadInfo = ::GlobalNamespace::HeadModel__CosmeticPartLoadInfo;

/// @brief Field _currentPartLoadInfos, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPartLoadInfos, put=__cordl_internal_set__currentPartLoadInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*  _currentPartLoadInfos;

/// @brief Field _loadOp_to_partInfoIndex, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadOp_to_partInfoIndex, put=__cordl_internal_set__loadOp_to_partInfoIndex)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  _loadOp_to_partInfoIndex;

/// @brief Field _mannequinRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__mannequinRenderer, put=__cordl_internal_set__mannequinRenderer)) ::UnityW<::UnityEngine::Renderer>  _mannequinRenderer;

/// @brief Field cosmetics, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmetics, put=__cordl_internal_set_cosmetics)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  cosmetics;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method Awake, addr 0x5750abc, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x575181c, size 0x218, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  partLoadInfosIndex) ;

static inline ::GlobalNamespace::HeadModel* New_ctor() ;

/// @brief Method RefreshRenderer, addr 0x5750ac0, size 0x5c, virtual false, abstract: false, final false
inline void RefreshRenderer() ;

/// @brief Method SetCosmeticActive, addr 0x5750b1c, size 0x30, virtual false, abstract: false, final false
inline void SetCosmeticActive(::StringW  playFabId, bool  forRightSide) ;

/// @brief Method SetCosmeticActiveArray, addr 0x5751428, size 0x94, virtual false, abstract: false, final false
inline void SetCosmeticActiveArray(::ArrayW<::StringW>  playFabIds, ::ArrayW<bool>  forRightSideArray) ;

/// @brief Method _AddPreviewCosmetic, addr 0x5750d14, size 0x714, virtual false, abstract: false, final false
inline void _AddPreviewCosmetic(::StringW  playFabId, bool  forRightSide) ;

/// @brief Method _ClearCurrent, addr 0x5750b4c, size 0x1c8, virtual false, abstract: false, final false
inline void _ClearCurrent() ;

/// @brief Method _EnsureCapacityAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline void _EnsureCapacityAndClear(::System::Collections::Generic::Dictionary_2<T1,T2>*  dict) ;

/// @brief Method _EnsureCapacityAndClear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void _EnsureCapacityAndClear(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method _HandleLoadOpOnCompleted, addr 0x57514bc, size 0x360, virtual false, abstract: false, final false
inline void _HandleLoadOpOnCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  loadOp) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>* const& __cordl_internal_get__currentPartLoadInfos() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*& __cordl_internal_get__currentPartLoadInfos() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>* const& __cordl_internal_get__loadOp_to_partInfoIndex() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*& __cordl_internal_get__loadOp_to_partInfoIndex() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__mannequinRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__mannequinRenderer() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_cosmetics() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_cosmetics() ;

constexpr void __cordl_internal_set__currentPartLoadInfos(::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*  value) ;

constexpr void __cordl_internal_set__loadOp_to_partInfoIndex(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  value) ;

constexpr void __cordl_internal_set__mannequinRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_cosmetics(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x5751a34, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeadModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeadModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeadModel(HeadModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeadModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeadModel(HeadModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1311};

/// [DebugReadout]
/// @brief Field _currentPartLoadInfos, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*  ____currentPartLoadInfos;

/// [DebugReadout]
/// @brief Field _loadOp_to_partInfoIndex, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle,int32_t>*  ____loadOp_to_partInfoIndex;

/// @brief Field _mannequinRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____mannequinRenderer;

/// @brief Field cosmetics, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___cosmetics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeadModel, ____currentPartLoadInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel, ____loadOp_to_partInfoIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel, ____mannequinRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeadModel, ___cosmetics) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeadModel) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
