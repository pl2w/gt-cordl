#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_ExtrapolateOptions_def.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_InterpolateOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonTransformViewPositionModel)
namespace GlobalNamespace {
struct PhotonTransformViewPositionModel_ExtrapolateOptions;
}
namespace GlobalNamespace {
struct PhotonTransformViewPositionModel_InterpolateOptions;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewPositionModel;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonTransformViewPositionModel*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonTransformViewPositionModel*, "Photon.Pun", "PhotonTransformViewPositionModel");
// Dependencies Photon.Pun.PhotonTransformViewPositionModel::ExtrapolateOptions, Photon.Pun.PhotonTransformViewPositionModel::InterpolateOptions, System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonTransformViewPositionModel
class CORDL_TYPE PhotonTransformViewPositionModel : public ::System::Object {
public:
// Declarations
using ExtrapolateOptions = ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions;

using InterpolateOptions = ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions;

/// @brief Field ExtrapolateIncludingRoundTripTime, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExtrapolateIncludingRoundTripTime, put=__cordl_internal_set_ExtrapolateIncludingRoundTripTime)) bool  ExtrapolateIncludingRoundTripTime;

/// @brief Field ExtrapolateNumberOfStoredPositions, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExtrapolateNumberOfStoredPositions, put=__cordl_internal_set_ExtrapolateNumberOfStoredPositions)) int32_t  ExtrapolateNumberOfStoredPositions;

/// @brief Field ExtrapolateOption, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExtrapolateOption, put=__cordl_internal_set_ExtrapolateOption)) ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  ExtrapolateOption;

/// @brief Field ExtrapolateSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ExtrapolateSpeed, put=__cordl_internal_set_ExtrapolateSpeed)) float_t  ExtrapolateSpeed;

/// @brief Field InterpolateLerpSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateLerpSpeed, put=__cordl_internal_set_InterpolateLerpSpeed)) float_t  InterpolateLerpSpeed;

/// @brief Field InterpolateMoveTowardsSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateMoveTowardsSpeed, put=__cordl_internal_set_InterpolateMoveTowardsSpeed)) float_t  InterpolateMoveTowardsSpeed;

/// @brief Field InterpolateOption, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_InterpolateOption, put=__cordl_internal_set_InterpolateOption)) ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  InterpolateOption;

/// @brief Field SynchronizeEnabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_SynchronizeEnabled, put=__cordl_internal_set_SynchronizeEnabled)) bool  SynchronizeEnabled;

/// @brief Field TeleportEnabled, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_TeleportEnabled, put=__cordl_internal_set_TeleportEnabled)) bool  TeleportEnabled;

/// @brief Field TeleportIfDistanceGreaterThan, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_TeleportIfDistanceGreaterThan, put=__cordl_internal_set_TeleportIfDistanceGreaterThan)) float_t  TeleportIfDistanceGreaterThan;

static inline ::Photon::Pun::PhotonTransformViewPositionModel* New_ctor() ;

constexpr bool const& __cordl_internal_get_ExtrapolateIncludingRoundTripTime() const;

constexpr bool& __cordl_internal_get_ExtrapolateIncludingRoundTripTime() ;

constexpr int32_t const& __cordl_internal_get_ExtrapolateNumberOfStoredPositions() const;

constexpr int32_t& __cordl_internal_get_ExtrapolateNumberOfStoredPositions() ;

constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions const& __cordl_internal_get_ExtrapolateOption() const;

constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions& __cordl_internal_get_ExtrapolateOption() ;

constexpr float_t const& __cordl_internal_get_ExtrapolateSpeed() const;

constexpr float_t& __cordl_internal_get_ExtrapolateSpeed() ;

constexpr float_t const& __cordl_internal_get_InterpolateLerpSpeed() const;

constexpr float_t& __cordl_internal_get_InterpolateLerpSpeed() ;

constexpr float_t const& __cordl_internal_get_InterpolateMoveTowardsSpeed() const;

constexpr float_t& __cordl_internal_get_InterpolateMoveTowardsSpeed() ;

constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions const& __cordl_internal_get_InterpolateOption() const;

constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions& __cordl_internal_get_InterpolateOption() ;

constexpr bool const& __cordl_internal_get_SynchronizeEnabled() const;

constexpr bool& __cordl_internal_get_SynchronizeEnabled() ;

constexpr bool const& __cordl_internal_get_TeleportEnabled() const;

constexpr bool& __cordl_internal_get_TeleportEnabled() ;

constexpr float_t const& __cordl_internal_get_TeleportIfDistanceGreaterThan() const;

constexpr float_t& __cordl_internal_get_TeleportIfDistanceGreaterThan() ;

constexpr void __cordl_internal_set_ExtrapolateIncludingRoundTripTime(bool  value) ;

constexpr void __cordl_internal_set_ExtrapolateNumberOfStoredPositions(int32_t  value) ;

constexpr void __cordl_internal_set_ExtrapolateOption(::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  value) ;

constexpr void __cordl_internal_set_ExtrapolateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_InterpolateLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_InterpolateMoveTowardsSpeed(float_t  value) ;

constexpr void __cordl_internal_set_InterpolateOption(::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  value) ;

constexpr void __cordl_internal_set_SynchronizeEnabled(bool  value) ;

constexpr void __cordl_internal_set_TeleportEnabled(bool  value) ;

constexpr void __cordl_internal_set_TeleportIfDistanceGreaterThan(float_t  value) ;

/// @brief Method .ctor, addr 0xa741aa4, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonTransformViewPositionModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewPositionModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonTransformViewPositionModel(PhotonTransformViewPositionModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewPositionModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonTransformViewPositionModel(PhotonTransformViewPositionModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29740};

/// @brief Field SynchronizeEnabled, offset: 0x10, size: 0x1, def value: None
 bool  ___SynchronizeEnabled;

/// @brief Field TeleportEnabled, offset: 0x11, size: 0x1, def value: None
 bool  ___TeleportEnabled;

/// @brief Field TeleportIfDistanceGreaterThan, offset: 0x14, size: 0x4, def value: None
 float_t  ___TeleportIfDistanceGreaterThan;

/// @brief Field InterpolateOption, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  ___InterpolateOption;

/// @brief Field InterpolateMoveTowardsSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___InterpolateMoveTowardsSpeed;

/// @brief Field InterpolateLerpSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___InterpolateLerpSpeed;

/// @brief Field ExtrapolateOption, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  ___ExtrapolateOption;

/// @brief Field ExtrapolateSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___ExtrapolateSpeed;

/// @brief Field ExtrapolateIncludingRoundTripTime, offset: 0x2c, size: 0x1, def value: None
 bool  ___ExtrapolateIncludingRoundTripTime;

/// @brief Field ExtrapolateNumberOfStoredPositions, offset: 0x30, size: 0x4, def value: None
 int32_t  ___ExtrapolateNumberOfStoredPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___SynchronizeEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___TeleportEnabled) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___TeleportIfDistanceGreaterThan) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___InterpolateOption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___InterpolateMoveTowardsSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___InterpolateLerpSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateOption) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateIncludingRoundTripTime) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewPositionModel, ___ExtrapolateNumberOfStoredPositions) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonTransformViewPositionModel) == 0x38, "Size mismatch!");

} // namespace end def Photon::Pun
