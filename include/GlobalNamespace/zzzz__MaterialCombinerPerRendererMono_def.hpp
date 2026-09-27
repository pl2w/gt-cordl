#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialCombinerPerRendererMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialCombinerPerRendererMono)
namespace GlobalNamespace {
struct MaterialCombinerPerRendererInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialCombinerPerRendererMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MaterialCombinerPerRendererMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialCombinerPerRendererMono*, "", "MaterialCombinerPerRendererMono");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialCombinerPerRendererMono
class CORDL_TYPE MaterialCombinerPerRendererMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field slotData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotData, put=__cordl_internal_set_slotData)) ::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>*  slotData;

/// @brief Method AddEntry, addr 0x5697fb4, size 0x164, virtual false, abstract: false, final false
inline void AddEntry(::UnityEngine::Renderer*  r, int32_t  slot, int32_t  sliceIndex, ::UnityEngine::Color  baseColor, ::UnityEngine::Material*  oldMat) ;

/// @brief Method Awake, addr 0x5697fb0, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MaterialCombinerPerRendererMono* New_ctor() ;

/// @brief Method TryGetData, addr 0x5698118, size 0x250, virtual false, abstract: false, final false
inline bool TryGetData(::UnityEngine::Renderer*  r, int32_t  slot, ::by_ref<::GlobalNamespace::MaterialCombinerPerRendererInfo>  data) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>* const& __cordl_internal_get_slotData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>*& __cordl_internal_get_slotData() ;

constexpr void __cordl_internal_set_slotData(::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>*  value) ;

/// @brief Method .ctor, addr 0x5698368, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialCombinerPerRendererMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialCombinerPerRendererMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialCombinerPerRendererMono(MaterialCombinerPerRendererMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialCombinerPerRendererMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialCombinerPerRendererMono(MaterialCombinerPerRendererMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{905};

/// @brief Field slotData, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::MaterialCombinerPerRendererInfo>*  ___slotData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialCombinerPerRendererMono, ___slotData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialCombinerPerRendererMono) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
