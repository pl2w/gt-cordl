#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewRotationModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_InterpolateOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonTransformViewRotationModel)
namespace GlobalNamespace {
struct PhotonTransformViewRotationModel_InterpolateOptions;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewRotationModel;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonTransformViewRotationModel*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonTransformViewRotationModel*, "Photon.Pun", "PhotonTransformViewRotationModel");
// Dependencies Photon.Pun.PhotonTransformViewRotationModel::InterpolateOptions, System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonTransformViewRotationModel
class CORDL_TYPE PhotonTransformViewRotationModel : public ::System::Object {
public:
// Declarations
using InterpolateOptions = ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions;

/// @brief Field InterpolateLerpSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateLerpSpeed, put=__cordl_internal_set_InterpolateLerpSpeed)) float_t  InterpolateLerpSpeed;

/// @brief Field InterpolateOption, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateOption, put=__cordl_internal_set_InterpolateOption)) ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  InterpolateOption;

/// @brief Field InterpolateRotateTowardsSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateRotateTowardsSpeed, put=__cordl_internal_set_InterpolateRotateTowardsSpeed)) float_t  InterpolateRotateTowardsSpeed;

/// @brief Field SynchronizeEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_SynchronizeEnabled, put=__cordl_internal_set_SynchronizeEnabled)) bool  SynchronizeEnabled;

static inline ::Photon::Pun::PhotonTransformViewRotationModel* New_ctor() ;

constexpr float_t const& __cordl_internal_get_InterpolateLerpSpeed() const;

constexpr float_t& __cordl_internal_get_InterpolateLerpSpeed() ;

constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions const& __cordl_internal_get_InterpolateOption() const;

constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions& __cordl_internal_get_InterpolateOption() ;

constexpr float_t const& __cordl_internal_get_InterpolateRotateTowardsSpeed() const;

constexpr float_t& __cordl_internal_get_InterpolateRotateTowardsSpeed() ;

constexpr bool const& __cordl_internal_get_SynchronizeEnabled() const;

constexpr bool& __cordl_internal_get_SynchronizeEnabled() ;

constexpr void __cordl_internal_set_InterpolateLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_InterpolateOption(::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  value) ;

constexpr void __cordl_internal_set_InterpolateRotateTowardsSpeed(float_t  value) ;

constexpr void __cordl_internal_set_SynchronizeEnabled(bool  value) ;

/// @brief Method .ctor, addr 0xa741ad8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewRotationModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewRotationModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTransformViewRotationModel(PhotonTransformViewRotationModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewRotationModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTransformViewRotationModel(PhotonTransformViewRotationModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29743};

/// @brief Field SynchronizeEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ___SynchronizeEnabled;

/// @brief Field InterpolateOption, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  ___InterpolateOption;

/// @brief Field InterpolateRotateTowardsSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ___InterpolateRotateTowardsSpeed;

/// @brief Field InterpolateLerpSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___InterpolateLerpSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonTransformViewRotationModel, ___SynchronizeEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewRotationModel, ___InterpolateOption) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewRotationModel, ___InterpolateRotateTowardsSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewRotationModel, ___InterpolateLerpSpeed) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonTransformViewRotationModel) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun
