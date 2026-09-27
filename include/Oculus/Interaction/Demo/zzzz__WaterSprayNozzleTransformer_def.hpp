#pragma once
// IWYU pragma private; include "Oculus/Interaction/Demo/WaterSprayNozzleTransformer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaterSprayNozzleTransformer)
namespace Oculus::Interaction {
class IGrabbable;
}
namespace Oculus::Interaction {
class ITransformer;
}
// Forward declare root types
namespace Oculus::Interaction::Demo {
class WaterSprayNozzleTransformer;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer*, "Oculus.Interaction.Demo", "WaterSprayNozzleTransformer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace Oculus::Interaction::Demo {
// Is value type: false
// CS Name: Oculus.Interaction.Demo.WaterSprayNozzleTransformer
class CORDL_TYPE WaterSprayNozzleTransformer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _factor, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__factor, put=__cordl_internal_set__factor)) float_t  _factor;

/// @brief Field _grabbable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::Oculus::Interaction::IGrabbable*  _grabbable;

/// @brief Field _maxSteps, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSteps, put=__cordl_internal_set__maxSteps)) int32_t  _maxSteps;

/// @brief Field _previousGrabPose, offset 0x40, size 0x1c 
 __declspec(property(get=__cordl_internal_get__previousGrabPose, put=__cordl_internal_set__previousGrabPose)) ::UnityEngine::Pose  _previousGrabPose;

/// @brief Field _relativeAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__relativeAngle, put=__cordl_internal_set__relativeAngle)) float_t  _relativeAngle;

/// @brief Field _snapAngle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__snapAngle, put=__cordl_internal_set__snapAngle)) float_t  _snapAngle;

/// @brief Field _snappiness, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__snappiness, put=__cordl_internal_set__snappiness)) float_t  _snappiness;

/// @brief Field _stepsCount, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__stepsCount, put=__cordl_internal_set__stepsCount)) int32_t  _stepsCount;

/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr operator  ::Oculus::Interaction::ITransformer*() noexcept;

/// @brief Method BeginTransform, addr 0xa4319b8, size 0xe8, virtual true, abstract: false, final true
inline void BeginTransform() ;

/// @brief Method EndTransform, addr 0xa432078, size 0x4, virtual true, abstract: false, final true
inline void EndTransform() ;

/// @brief Method Initialize, addr 0xa4319b0, size 0x8, virtual true, abstract: false, final true
inline void Initialize(::Oculus::Interaction::IGrabbable*  grabbable) ;

static inline ::Oculus::Interaction::Demo::WaterSprayNozzleTransformer* New_ctor() ;

/// @brief Method UpdateTransform, addr 0xa431aa0, size 0x5d8, virtual true, abstract: false, final true
inline void UpdateTransform() ;

constexpr float_t const& __cordl_internal_get__factor() const;

constexpr float_t& __cordl_internal_get__factor() ;

constexpr ::Oculus::Interaction::IGrabbable* const& __cordl_internal_get__grabbable() const;

constexpr ::Oculus::Interaction::IGrabbable*& __cordl_internal_get__grabbable() ;

constexpr int32_t const& __cordl_internal_get__maxSteps() const;

constexpr int32_t& __cordl_internal_get__maxSteps() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__previousGrabPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__previousGrabPose() ;

constexpr float_t const& __cordl_internal_get__relativeAngle() const;

constexpr float_t& __cordl_internal_get__relativeAngle() ;

constexpr float_t const& __cordl_internal_get__snapAngle() const;

constexpr float_t& __cordl_internal_get__snapAngle() ;

constexpr float_t const& __cordl_internal_get__snappiness() const;

constexpr float_t& __cordl_internal_get__snappiness() ;

constexpr int32_t const& __cordl_internal_get__stepsCount() const;

constexpr int32_t& __cordl_internal_get__stepsCount() ;

constexpr void __cordl_internal_set__factor(float_t  value) ;

constexpr void __cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value) ;

constexpr void __cordl_internal_set__maxSteps(int32_t  value) ;

constexpr void __cordl_internal_set__previousGrabPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__relativeAngle(float_t  value) ;

constexpr void __cordl_internal_set__snapAngle(float_t  value) ;

constexpr void __cordl_internal_set__snappiness(float_t  value) ;

constexpr void __cordl_internal_set__stepsCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xa43207c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* i___Oculus__Interaction__ITransformer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterSprayNozzleTransformer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterSprayNozzleTransformer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterSprayNozzleTransformer(WaterSprayNozzleTransformer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterSprayNozzleTransformer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterSprayNozzleTransformer(WaterSprayNozzleTransformer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28279};

/// [SerializeField]
/// @brief Field _factor, offset: 0x20, size: 0x4, def value: None
 float_t  ____factor;

/// [SerializeField]
/// @brief Field _snapAngle, offset: 0x24, size: 0x4, def value: None
 float_t  ____snapAngle;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _snappiness, offset: 0x28, size: 0x4, def value: None
 float_t  ____snappiness;

/// [SerializeField]
/// @brief Field _maxSteps, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxSteps;

/// @brief Field _relativeAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ____relativeAngle;

/// @brief Field _stepsCount, offset: 0x34, size: 0x4, def value: None
 int32_t  ____stepsCount;

/// @brief Field _grabbable, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IGrabbable*  ____grabbable;

/// @brief Field _previousGrabPose, offset: 0x40, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____previousGrabPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____factor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____snapAngle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____snappiness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____maxSteps) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____relativeAngle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____stepsCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____grabbable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer, ____previousGrabPose) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Demo::WaterSprayNozzleTransformer) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction::Demo
