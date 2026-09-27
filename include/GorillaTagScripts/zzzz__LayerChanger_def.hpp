#pragma once
// IWYU pragma private; include "GorillaTagScripts/LayerChanger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerChanger)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts {
class LayerChanger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::LayerChanger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::LayerChanger*, "GorillaTagScripts", "LayerChanger");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.LayerChanger
class CORDL_TYPE LayerChanger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field includeChildren, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeChildren, put=__cordl_internal_set_includeChildren)) bool  includeChildren;

/// @brief Field layersStored, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_layersStored, put=__cordl_internal_set_layersStored)) bool  layersStored;

/// @brief Field originalLayers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalLayers, put=__cordl_internal_set_originalLayers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>*  originalLayers;

/// @brief Field restrictedLayers, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_restrictedLayers, put=__cordl_internal_set_restrictedLayers)) ::UnityEngine::LayerMask  restrictedLayers;

/// @brief Method ChangeLayer, addr 0x5bcb9d8, size 0xac, virtual false, abstract: false, final false
inline void ChangeLayer(::UnityEngine::Transform*  parent, ::StringW  newLayer) ;

/// @brief Method ChangeLayers, addr 0x5bcba84, size 0x39c, virtual false, abstract: false, final false
inline void ChangeLayers(::UnityEngine::Transform*  parent, int32_t  newLayer) ;

/// @brief Method InitializeLayers, addr 0x5bcb678, size 0x28, virtual false, abstract: false, final false
inline void InitializeLayers(::UnityEngine::Transform*  parent) ;

static inline ::GorillaTagScripts::LayerChanger* New_ctor() ;

/// @brief Method RestoreOriginalLayers, addr 0x5bcbe20, size 0x1c4, virtual false, abstract: false, final false
inline void RestoreOriginalLayers() ;

/// @brief Method StoreOriginalLayers, addr 0x5bcb6a0, size 0x338, virtual false, abstract: false, final false
inline void StoreOriginalLayers(::UnityEngine::Transform*  parent) ;

constexpr bool const& __cordl_internal_get_includeChildren() const;

constexpr bool& __cordl_internal_get_includeChildren() ;

constexpr bool const& __cordl_internal_get_layersStored() const;

constexpr bool& __cordl_internal_get_layersStored() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>* const& __cordl_internal_get_originalLayers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>*& __cordl_internal_get_originalLayers() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_restrictedLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_restrictedLayers() ;

constexpr void __cordl_internal_set_includeChildren(bool  value) ;

constexpr void __cordl_internal_set_layersStored(bool  value) ;

constexpr void __cordl_internal_set_originalLayers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>*  value) ;

constexpr void __cordl_internal_set_restrictedLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x5bcbfe4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerChanger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerChanger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerChanger(LayerChanger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerChanger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerChanger(LayerChanger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3996};

/// @brief Field restrictedLayers, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___restrictedLayers;

/// @brief Field includeChildren, offset: 0x24, size: 0x1, def value: None
 bool  ___includeChildren;

/// @brief Field originalLayers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>,int32_t>*  ___originalLayers;

/// @brief Field layersStored, offset: 0x30, size: 0x1, def value: None
 bool  ___layersStored;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::LayerChanger, ___restrictedLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LayerChanger, ___includeChildren) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LayerChanger, ___originalLayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::LayerChanger, ___layersStored) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::LayerChanger) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts
