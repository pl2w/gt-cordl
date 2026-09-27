#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewScaleModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_InterpolateOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonTransformViewScaleModel)
namespace GlobalNamespace {
struct PhotonTransformViewScaleModel_InterpolateOptions;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewScaleModel;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonTransformViewScaleModel*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonTransformViewScaleModel*, "Photon.Pun", "PhotonTransformViewScaleModel");
// Dependencies Photon.Pun.PhotonTransformViewScaleModel::InterpolateOptions, System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonTransformViewScaleModel
class CORDL_TYPE PhotonTransformViewScaleModel : public ::System::Object {
public:
// Declarations
using InterpolateOptions = ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions;

/// @brief Field InterpolateLerpSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateLerpSpeed, put=__cordl_internal_set_InterpolateLerpSpeed)) float_t  InterpolateLerpSpeed;

/// @brief Field InterpolateMoveTowardsSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateMoveTowardsSpeed, put=__cordl_internal_set_InterpolateMoveTowardsSpeed)) float_t  InterpolateMoveTowardsSpeed;

/// @brief Field InterpolateOption, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateOption, put=__cordl_internal_set_InterpolateOption)) ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  InterpolateOption;

/// @brief Field SynchronizeEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_SynchronizeEnabled, put=__cordl_internal_set_SynchronizeEnabled)) bool  SynchronizeEnabled;

static inline ::Photon::Pun::PhotonTransformViewScaleModel* New_ctor() ;

constexpr float_t const& __cordl_internal_get_InterpolateLerpSpeed() const;

constexpr float_t& __cordl_internal_get_InterpolateLerpSpeed() ;

constexpr float_t const& __cordl_internal_get_InterpolateMoveTowardsSpeed() const;

constexpr float_t& __cordl_internal_get_InterpolateMoveTowardsSpeed() ;

constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions const& __cordl_internal_get_InterpolateOption() const;

constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions& __cordl_internal_get_InterpolateOption() ;

constexpr bool const& __cordl_internal_get_SynchronizeEnabled() const;

constexpr bool& __cordl_internal_get_SynchronizeEnabled() ;

constexpr void __cordl_internal_set_InterpolateLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_InterpolateMoveTowardsSpeed(float_t  value) ;

constexpr void __cordl_internal_set_InterpolateOption(::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  value) ;

constexpr void __cordl_internal_set_SynchronizeEnabled(bool  value) ;

/// @brief Method .ctor, addr 0xa741af4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewScaleModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewScaleModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTransformViewScaleModel(PhotonTransformViewScaleModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewScaleModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTransformViewScaleModel(PhotonTransformViewScaleModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29746};

/// @brief Field SynchronizeEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ___SynchronizeEnabled;

/// @brief Field InterpolateOption, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  ___InterpolateOption;

/// @brief Field InterpolateMoveTowardsSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ___InterpolateMoveTowardsSpeed;

/// @brief Field InterpolateLerpSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___InterpolateLerpSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___SynchronizeEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___InterpolateOption) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___InterpolateMoveTowardsSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleModel, ___InterpolateLerpSpeed) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonTransformViewScaleModel) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun
