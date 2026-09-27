#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadSubAssetOperation_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoadSubAssetOperation_1)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TObject>
class LoadSubAssetOperation_1___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TObject>
class LoadSubAssetOperation_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TObject>
class LoadSubAssetOperation_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadSubAssetOperation_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadSubAssetOperation_1, "UnityEngine.Localization.Operations", "LoadSubAssetOperation`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c, "UnityEngine.Localization.Operations", "LoadSubAssetOperation`1/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LoadSubAssetOperation`1<TObject>
class CORDL_TYPE LoadSubAssetOperation_1 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c<TObject>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadSubAssetOperation_1<TObject>*>*  Pool;

/// @brief Field m_Address, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Address, put=__cordl_internal_set_m_Address)) ::StringW  m_Address;

/// @brief Field m_AssetLoadedAction, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AssetLoadedAction, put=__cordl_internal_set_m_AssetLoadedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  m_AssetLoadedAction;

/// @brief Field m_AssetOperation, offset 0xd8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_AssetOperation, put=__cordl_internal_set_m_AssetOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  m_AssetOperation;

/// @brief Field m_IsSubAsset, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsSubAsset, put=__cordl_internal_set_m_IsSubAsset)) bool  m_IsSubAsset;

/// @brief Field m_PreloadOperations, offset 0xf0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PreloadOperations, put=__cordl_internal_set_m_PreloadOperations)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  m_PreloadOperations;

/// @brief Field m_SubAssetName, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubAssetName, put=__cordl_internal_set_m_SubAssetName)) ::StringW  m_SubAssetName;

/// @brief Method AssetLoaded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AssetLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  handle) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  preloadOperations, ::StringW  address, bool  isSubAsset, ::StringW  subAssetName) ;

static inline ::UnityEngine::Localization::Operations::LoadSubAssetOperation_1<TObject>* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_m_Address() const;

constexpr ::StringW& __cordl_internal_get_m_Address() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const& __cordl_internal_get_m_AssetLoadedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& __cordl_internal_get_m_AssetLoadedAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __cordl_internal_get_m_AssetOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __cordl_internal_get_m_AssetOperation() ;

constexpr bool const& __cordl_internal_get_m_IsSubAsset() const;

constexpr bool& __cordl_internal_get_m_IsSubAsset() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>> const& __cordl_internal_get_m_PreloadOperations() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>& __cordl_internal_get_m_PreloadOperations() ;

constexpr ::StringW const& __cordl_internal_get_m_SubAssetName() const;

constexpr ::StringW& __cordl_internal_get_m_SubAssetName() ;

constexpr void __cordl_internal_set_m_Address(::StringW  value) ;

constexpr void __cordl_internal_set_m_AssetLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

constexpr void __cordl_internal_set_m_AssetOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

constexpr void __cordl_internal_set_m_IsSubAsset(bool  value) ;

constexpr void __cordl_internal_set_m_PreloadOperations(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value) ;

constexpr void __cordl_internal_set_m_SubAssetName(::StringW  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadSubAssetOperation_1<TObject>*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadSubAssetOperation_1<TObject>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadSubAssetOperation_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadSubAssetOperation_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadSubAssetOperation_1(LoadSubAssetOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadSubAssetOperation_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadSubAssetOperation_1(LoadSubAssetOperation_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25301};

/// @brief Field m_AssetLoadedAction, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  ___m_AssetLoadedAction;

/// @brief Field m_AssetOperation, offset: 0xd8, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  ___m_AssetOperation;

/// @brief Field m_PreloadOperations, offset: 0xf0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  ___m_PreloadOperations;

/// @brief Field m_Address, offset: 0x108, size: 0x8, def value: None
 ::StringW  ___m_Address;

/// @brief Field m_IsSubAsset, offset: 0x110, size: 0x1, def value: None
 bool  ___m_IsSubAsset;

/// @brief Field m_SubAssetName, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___m_SubAssetName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LoadSubAssetOperation`1/<>c<TObject>
class CORDL_TYPE LoadSubAssetOperation_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c<TObject>*  __9;

static inline ::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c<TObject>* New_ctor() ;

/// @brief Method <.cctor>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::LoadSubAssetOperation_1<TObject>* __cctor_b__12_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c<TObject>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::LoadSubAssetOperation_1___c<TObject>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadSubAssetOperation_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadSubAssetOperation_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadSubAssetOperation_1___c(LoadSubAssetOperation_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadSubAssetOperation_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadSubAssetOperation_1___c(LoadSubAssetOperation_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
