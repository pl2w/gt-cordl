#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedAssetBehaviour_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAssetBehaviour_2)
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_ChangeHandler;
}
// Forward declare root types
namespace UnityEngine::Localization::Components {
template<typename TObject,typename TReference>
class LocalizedAssetBehaviour_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2, "UnityEngine.Localization.Components", "LocalizedAssetBehaviour`2");
// [ExecuteAlways]
// Dependencies UnityEngine.Localization.Components.LocalizedMonoBehaviour
namespace UnityEngine::Localization::Components {
// cpp template
template<typename TObject,typename TReference>
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizedAssetBehaviour`2<TObject,TReference>
class CORDL_TYPE LocalizedAssetBehaviour_2 : public ::UnityEngine::Localization::Components::LocalizedMonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AssetReference, put=set_AssetReference)) TReference  AssetReference;

/// @brief Field m_ChangeHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ChangeHandler, put=__cordl_internal_set_m_ChangeHandler)) ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  m_ChangeHandler;

/// @brief Field m_LocalizedAssetReference, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalizedAssetReference, put=__cordl_internal_set_m_LocalizedAssetReference)) TReference  m_LocalizedAssetReference;

/// @brief Method ClearChangeHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearChangeHandler() ;

static inline ::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method RegisterChangeHandler, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RegisterChangeHandler() ;

/// @brief Method UpdateAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateAsset(TObject  localizedAsset) ;

constexpr ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>* const& __cordl_internal_get_m_ChangeHandler() const;

constexpr ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*& __cordl_internal_get_m_ChangeHandler() ;

constexpr TReference const& __cordl_internal_get_m_LocalizedAssetReference() const;

constexpr TReference& __cordl_internal_get_m_LocalizedAssetReference() ;

constexpr void __cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  value) ;

constexpr void __cordl_internal_set_m_LocalizedAssetReference(TReference  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AssetReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TReference get_AssetReference() ;

/// @brief Method set_AssetReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_AssetReference(TReference  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAssetBehaviour_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetBehaviour_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAssetBehaviour_2(LocalizedAssetBehaviour_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetBehaviour_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAssetBehaviour_2(LocalizedAssetBehaviour_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25319};

/// [SerializeField]
/// @brief Field m_LocalizedAssetReference, offset: 0x20, size: 0x8, def value: None
 TReference  ___m_LocalizedAssetReference;

/// @brief Field m_ChangeHandler, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  ___m_ChangeHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Components
