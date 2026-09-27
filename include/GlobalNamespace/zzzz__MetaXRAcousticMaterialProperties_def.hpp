#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterialProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_BuiltinPreset_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaXRAcousticMaterialProperties)
namespace GlobalNamespace {
struct MetaXRAcousticMaterialProperties_BuiltinPreset;
}
namespace Meta::XR::Acoustics {
class IMaterialDataProvider;
}
namespace Meta::XR::Acoustics {
class MaterialData;
}
// Forward declare root types
namespace GlobalNamespace {
class MetaXRAcousticMaterialProperties;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MetaXRAcousticMaterialProperties*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticMaterialProperties*, "", "MetaXRAcousticMaterialProperties");
// [CreateAssetMenu(menuName = "MetaXRAudio/Acoustic Material Properties")]
// Dependencies MetaXRAcousticMaterialProperties::BuiltinPreset, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MetaXRAcousticMaterialProperties
class CORDL_TYPE MetaXRAcousticMaterialProperties : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using BuiltinPreset = ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset;

 __declspec(property(get=get_Data)) ::Meta::XR::Acoustics::MaterialData*  Data;

 __declspec(property(get=get_Preset, put=set_Preset)) ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  Preset;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::Meta::XR::Acoustics::MaterialData*  data;

/// @brief Field preset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  preset;

/// @brief Convert operator to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr operator  ::Meta::XR::Acoustics::IMaterialDataProvider*() noexcept;

/// @brief Method AcousticTile, addr 0x9ea97f0, size 0x2d4, virtual false, abstract: false, final false
static inline void AcousticTile(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Brick, addr 0x9ea9ac4, size 0x2e0, virtual false, abstract: false, final false
static inline void Brick(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method BrickPainted, addr 0x9ea9da4, size 0x2d4, virtual false, abstract: false, final false
static inline void BrickPainted(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Cardboard, addr 0x9eaa078, size 0x354, virtual false, abstract: false, final false
static inline void Cardboard(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Carpet, addr 0x9eaa3cc, size 0x2e8, virtual false, abstract: false, final false
static inline void Carpet(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method CarpetHeavy, addr 0x9eaa6b4, size 0x2d4, virtual false, abstract: false, final false
static inline void CarpetHeavy(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method CarpetHeavyPadded, addr 0x9eaa988, size 0x2d4, virtual false, abstract: false, final false
static inline void CarpetHeavyPadded(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method CeramicTile, addr 0x9eaac5c, size 0x2dc, virtual false, abstract: false, final false
static inline void CeramicTile(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Concrete, addr 0x9eaaf38, size 0x2dc, virtual false, abstract: false, final false
static inline void Concrete(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method ConcreteBlock, addr 0x9eab4f4, size 0x2dc, virtual false, abstract: false, final false
static inline void ConcreteBlock(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method ConcreteBlockPainted, addr 0x9eab7d0, size 0x2e4, virtual false, abstract: false, final false
static inline void ConcreteBlockPainted(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method ConcreteRough, addr 0x9eab214, size 0x2e0, virtual false, abstract: false, final false
static inline void ConcreteRough(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Curtain, addr 0x9eabab4, size 0x2d4, virtual false, abstract: false, final false
static inline void Curtain(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Foliage, addr 0x9eabd88, size 0x2e0, virtual false, abstract: false, final false
static inline void Foliage(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Glass, addr 0x9eac068, size 0x2c4, virtual false, abstract: false, final false
static inline void Glass(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method GlassHeavy, addr 0x9eac32c, size 0x2d0, virtual false, abstract: false, final false
static inline void GlassHeavy(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Grass, addr 0x9eac5fc, size 0x234, virtual false, abstract: false, final false
static inline void Grass(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Gravel, addr 0x9eac830, size 0x22c, virtual false, abstract: false, final false
static inline void Gravel(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method GypsumBoard, addr 0x9eaca5c, size 0x2e4, virtual false, abstract: false, final false
static inline void GypsumBoard(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Marble, addr 0x9eacd40, size 0x2cc, virtual false, abstract: false, final false
static inline void Marble(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method MetaDefault, addr 0x9eaf738, size 0x130, virtual false, abstract: false, final false
static inline void MetaDefault(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Meta.XR.Acoustics.IMaterialDataProvider.get_name, addr 0x9eaf8d4, size 0x8, virtual true, abstract: false, final true
inline ::StringW Meta_XR_Acoustics_IMaterialDataProvider_get_name() ;

/// @brief Method Mud, addr 0x9ead00c, size 0x22c, virtual false, abstract: false, final false
static inline void Mud(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

static inline ::GlobalNamespace::MetaXRAcousticMaterialProperties* New_ctor() ;

/// @brief Method PlasterOnBrick, addr 0x9ead238, size 0x2e0, virtual false, abstract: false, final false
static inline void PlasterOnBrick(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method PlasterOnConcreteBlock, addr 0x9ead518, size 0x2e0, virtual false, abstract: false, final false
static inline void PlasterOnConcreteBlock(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Rubber, addr 0x9ead7f8, size 0x2c4, virtual false, abstract: false, final false
static inline void Rubber(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method SetPreset, addr 0x9ea8ae4, size 0x2d4, virtual false, abstract: false, final false
static inline void SetPreset(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  builtinPreset, ::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Snow, addr 0x9eade04, size 0x228, virtual false, abstract: false, final false
static inline void Snow(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Soil, addr 0x9eadabc, size 0x238, virtual false, abstract: false, final false
static inline void Soil(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method SoundProof, addr 0x9eadcf4, size 0x110, virtual false, abstract: false, final false
static inline void SoundProof(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Steel, addr 0x9eae02c, size 0x2c4, virtual false, abstract: false, final false
static inline void Steel(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Stone, addr 0x9eae2f0, size 0x2a8, virtual false, abstract: false, final false
static inline void Stone(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Vent, addr 0x9eae598, size 0x378, virtual false, abstract: false, final false
static inline void Vent(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method Water, addr 0x9eae910, size 0x2d4, virtual false, abstract: false, final false
static inline void Water(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method WoodFloor, addr 0x9eaf184, size 0x2dc, virtual false, abstract: false, final false
static inline void WoodFloor(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method WoodOnConcrete, addr 0x9eaf460, size 0x2d8, virtual false, abstract: false, final false
static inline void WoodOnConcrete(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method WoodThick, addr 0x9eaeeb0, size 0x2d4, virtual false, abstract: false, final false
static inline void WoodThick(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

/// @brief Method WoodThin, addr 0x9eaebe4, size 0x2cc, virtual false, abstract: false, final false
static inline void WoodThin(::by_ref<::Meta::XR::Acoustics::MaterialData*>  data) ;

constexpr ::Meta::XR::Acoustics::MaterialData* const& __cordl_internal_get_data() const;

constexpr ::Meta::XR::Acoustics::MaterialData*& __cordl_internal_get_data() ;

constexpr ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset const& __cordl_internal_get_preset() const;

constexpr ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset& __cordl_internal_get_preset() ;

constexpr void __cordl_internal_set_data(::Meta::XR::Acoustics::MaterialData*  value) ;

constexpr void __cordl_internal_set_preset(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  value) ;

/// @brief Method .ctor, addr 0x9eaf868, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x9ea97b0, size 0x8, virtual true, abstract: false, final true
inline ::Meta::XR::Acoustics::MaterialData* get_Data() ;

/// @brief Method get_Preset, addr 0x9ea97b8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset get_Preset() ;

/// @brief Convert to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr ::Meta::XR::Acoustics::IMaterialDataProvider* i___Meta__XR__Acoustics__IMaterialDataProvider() noexcept;

/// @brief Method set_Preset, addr 0x9ea97c0, size 0x30, virtual false, abstract: false, final false
inline void set_Preset(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticMaterialProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetaXRAcousticMaterialProperties(MetaXRAcousticMaterialProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRAcousticMaterialProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetaXRAcousticMaterialProperties(MetaXRAcousticMaterialProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29935};

/// [SerializeField]
/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::Meta::XR::Acoustics::MaterialData*  ___data;

/// [SerializeField]
/// @brief Field preset, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  ___preset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialProperties, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticMaterialProperties, ___preset) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticMaterialProperties) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
