#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/MaterialData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(MaterialData)
namespace Meta::XR::Acoustics {
class Spectrum;
}
// Forward declare root types
namespace Meta::XR::Acoustics {
class MaterialData;
}
// Write type traits
MARK_REF_T(::Meta::XR::Acoustics::MaterialData*);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::MaterialData*, "Meta.XR.Acoustics", "MaterialData");
// Dependencies System.Object, UnityEngine.Color
namespace Meta::XR::Acoustics {
// Is value type: false
// CS Name: Meta.XR.Acoustics.MaterialData
class CORDL_TYPE MaterialData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Field absorption, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_absorption, put=__cordl_internal_set_absorption)) ::Meta::XR::Acoustics::Spectrum*  absorption;

/// @brief Field color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field scattering, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scattering, put=__cordl_internal_set_scattering)) ::Meta::XR::Acoustics::Spectrum*  scattering;

/// @brief Field transmission, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transmission, put=__cordl_internal_set_transmission)) ::Meta::XR::Acoustics::Spectrum*  transmission;

/// @brief Method Clone, addr 0x9ebea3c, size 0x58, virtual false, abstract: false, final false
inline void Clone(::Meta::XR::Acoustics::MaterialData*  other) ;

static inline ::Meta::XR::Acoustics::MaterialData* New_ctor() ;

constexpr ::Meta::XR::Acoustics::Spectrum* const& __cordl_internal_get_absorption() const;

constexpr ::Meta::XR::Acoustics::Spectrum*& __cordl_internal_get_absorption() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr ::Meta::XR::Acoustics::Spectrum* const& __cordl_internal_get_scattering() const;

constexpr ::Meta::XR::Acoustics::Spectrum*& __cordl_internal_get_scattering() ;

constexpr ::Meta::XR::Acoustics::Spectrum* const& __cordl_internal_get_transmission() const;

constexpr ::Meta::XR::Acoustics::Spectrum*& __cordl_internal_get_transmission() ;

constexpr void __cordl_internal_set_absorption(::Meta::XR::Acoustics::Spectrum*  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_scattering(::Meta::XR::Acoustics::Spectrum*  value) ;

constexpr void __cordl_internal_set_transmission(::Meta::XR::Acoustics::Spectrum*  value) ;

/// @brief Method .ctor, addr 0x9ebebc8, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsEmpty, addr 0x9ebeb38, size 0x90, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialData(MaterialData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialData(MaterialData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29963};

/// [SerializeField]
/// @brief Field absorption, offset: 0x10, size: 0x8, def value: None
 ::Meta::XR::Acoustics::Spectrum*  ___absorption;

/// [SerializeField]
/// @brief Field transmission, offset: 0x18, size: 0x8, def value: None
 ::Meta::XR::Acoustics::Spectrum*  ___transmission;

/// [SerializeField]
/// @brief Field scattering, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::Acoustics::Spectrum*  ___scattering;

/// [SerializeField]
/// @brief Field color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::MaterialData, ___absorption) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MaterialData, ___transmission) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MaterialData, ___scattering) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::MaterialData, ___color) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::MaterialData) == 0x38, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
