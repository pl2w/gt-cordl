#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FixedScaleHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedScaleHand)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataModifier_1;
}
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class FixedScaleHand;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::FixedScaleHand*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FixedScaleHand*, "Oculus.Interaction.Input", "FixedScaleHand");
// Dependencies Oculus.Interaction.Input.Hand
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FixedScaleHand
class CORDL_TYPE FixedScaleHand : public ::Oculus::Interaction::Input::Hand {
public:
// Declarations
/// @brief Field _scale, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) float_t  _scale;

/// @brief Method Apply, addr 0xa507edc, size 0xa4, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HandDataAsset*  data) ;

/// @brief Method InjectAllFixedScaleDataModifier, addr 0xa507f80, size 0x24, virtual false, abstract: false, final false
inline void InjectAllFixedScaleDataModifier(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier, float_t  scale) ;

/// @brief Method InjectScale, addr 0xa50801c, size 0x8, virtual false, abstract: false, final false
inline void InjectScale(float_t  scale) ;

static inline ::Oculus::Interaction::Input::FixedScaleHand* New_ctor() ;

constexpr float_t const& __cordl_internal_get__scale() const;

constexpr float_t& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set__scale(float_t  value) ;

/// @brief Method .ctor, addr 0xa508024, size 0x5c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedScaleHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedScaleHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedScaleHand(FixedScaleHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedScaleHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedScaleHand(FixedScaleHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16474};

/// [SerializeField]
/// @brief Field _scale, offset: 0x80, size: 0x4, def value: None
 float_t  ____scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::FixedScaleHand, ____scale) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::FixedScaleHand) == 0x88, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
