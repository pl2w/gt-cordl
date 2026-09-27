#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Components/LocalizedAssetEvent_3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Components/zzzz__LocalizedAssetBehaviour_2_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAssetEvent_3)
// Forward declare root types
namespace UnityEngine::Localization::Components {
template<typename TObject,typename TReference,typename TEvent>
class LocalizedAssetEvent_3;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Components::LocalizedAssetEvent_3);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Components::LocalizedAssetEvent_3, "UnityEngine.Localization.Components", "LocalizedAssetEvent`3");
// Dependencies UnityEngine.Localization.Components.LocalizedAssetBehaviour`2<TObject, TReference>
namespace UnityEngine::Localization::Components {
// cpp template
template<typename TObject,typename TReference,typename TEvent>
// Is value type: false
// CS Name: UnityEngine.Localization.Components.LocalizedAssetEvent`3<TObject,TReference,TEvent>
class CORDL_TYPE LocalizedAssetEvent_3 : public ::UnityEngine::Localization::Components::LocalizedAssetBehaviour_2<TObject,TReference> {
public:
// Declarations
 __declspec(property(get=get_OnUpdateAsset, put=set_OnUpdateAsset)) TEvent  OnUpdateAsset;

/// @brief Field m_UpdateAsset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UpdateAsset, put=__cordl_internal_set_m_UpdateAsset)) TEvent  m_UpdateAsset;

static inline ::UnityEngine::Localization::Components::LocalizedAssetEvent_3<TObject,TReference,TEvent>* New_ctor() ;

/// @brief Method UpdateAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void UpdateAsset(TObject  localizedAsset) ;

constexpr TEvent const& __cordl_internal_get_m_UpdateAsset() const;

constexpr TEvent& __cordl_internal_get_m_UpdateAsset() ;

constexpr void __cordl_internal_set_m_UpdateAsset(TEvent  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_OnUpdateAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEvent get_OnUpdateAsset() ;

/// @brief Method set_OnUpdateAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_OnUpdateAsset(TEvent  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAssetEvent_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetEvent_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAssetEvent_3(LocalizedAssetEvent_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetEvent_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAssetEvent_3(LocalizedAssetEvent_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25320};

/// [SerializeField]
/// @brief Field m_UpdateAsset, offset: 0x30, size: 0x8, def value: None
 TEvent  ___m_UpdateAsset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Components
