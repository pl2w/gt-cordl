#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_UVTransformUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MB3_UVTransformUtility)
namespace DigitalOpus::MB::Core {
struct DRect;
}
namespace DigitalOpus::MB::Core {
struct DVector2;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_UVTransformUtility;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_UVTransformUtility*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_UVTransformUtility*, "DigitalOpus.MB.Core", "MB3_UVTransformUtility");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_UVTransformUtility
class CORDL_TYPE MB3_UVTransformUtility : public ::System::Object {
public:
// Declarations
/// @brief Method CombineTransforms, addr 0x9dbd0b8, size 0x2c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DRect CombineTransforms(::by_ref<::DigitalOpus::MB::Core::DRect>  r1, ::by_ref<::DigitalOpus::MB::Core::DRect>  r2) ;

/// @brief Method CombineTransforms, addr 0x9dbd114, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect CombineTransforms(::by_ref<::UnityEngine::Rect>  r1, ::by_ref<::UnityEngine::Rect>  r2) ;

/// @brief Method GetEncapsulatingRect, addr 0x9dbd3a0, size 0x6c, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DRect GetEncapsulatingRect(::by_ref<::DigitalOpus::MB::Core::DRect>  uvRect1, ::by_ref<::DigitalOpus::MB::Core::DRect>  uvRect2) ;

/// @brief Method GetEncapsulatingRectShifted, addr 0x9dbd238, size 0x168, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DRect GetEncapsulatingRectShifted(::by_ref<::DigitalOpus::MB::Core::DRect>  uvRect1, ::by_ref<::DigitalOpus::MB::Core::DRect>  willBeIn) ;

/// @brief Method GetShiftTransformToFitBinA, addr 0x9dbd134, size 0x104, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DRect GetShiftTransformToFitBinA(::by_ref<::DigitalOpus::MB::Core::DRect>  A, ::by_ref<::DigitalOpus::MB::Core::DRect>  B) ;

/// @brief Method InverseTransform, addr 0x9dbd090, size 0x28, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DRect InverseTransform(::by_ref<::DigitalOpus::MB::Core::DRect>  t) ;

/// @brief Method LineSegmentContainsShifted, addr 0x9dbd6a0, size 0xe0, virtual false, abstract: false, final false
static inline bool LineSegmentContainsShifted(float_t  bucketOffset, float_t  bucketLength, float_t  tryFitOffset, float_t  tryFitLength) ;

static inline ::DigitalOpus::MB::Core::MB3_UVTransformUtility* New_ctor() ;

/// @brief Method RectContains, addr 0x9dbd780, size 0x80, virtual false, abstract: false, final false
static inline bool RectContains(::by_ref<::DigitalOpus::MB::Core::DRect>  bigRect, ::by_ref<::DigitalOpus::MB::Core::DRect>  smallToTestIfFits) ;

/// @brief Method RectContains, addr 0x9dbd620, size 0x80, virtual false, abstract: false, final false
static inline bool RectContains(::by_ref<::UnityEngine::Rect>  bigRect, ::by_ref<::UnityEngine::Rect>  smallToTestIfFits) ;

/// @brief Method RectContainsShifted, addr 0x9dbd40c, size 0x10c, virtual false, abstract: false, final false
static inline bool RectContainsShifted(::by_ref<::DigitalOpus::MB::Core::DRect>  bucket, ::by_ref<::DigitalOpus::MB::Core::DRect>  tryFit) ;

/// @brief Method RectContainsShifted, addr 0x9dbd518, size 0x108, virtual false, abstract: false, final false
static inline bool RectContainsShifted(::by_ref<::UnityEngine::Rect>  bucket, ::by_ref<::UnityEngine::Rect>  tryFit) ;

/// @brief Method Test, addr 0x9dbce6c, size 0x224, virtual false, abstract: false, final false
static inline void Test() ;

/// @brief Method TransformPoint, addr 0x9dbd800, size 0x18, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::DVector2 TransformPoint(::by_ref<::DigitalOpus::MB::Core::DRect>  r, ::DigitalOpus::MB::Core::DVector2  p) ;

/// @brief Method TransformPoint, addr 0x9dbd0e4, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 TransformPoint(::by_ref<::DigitalOpus::MB::Core::DRect>  r, ::UnityEngine::Vector2  p) ;

/// @brief Method TransformX, addr 0x9dbd104, size 0x10, virtual false, abstract: false, final false
static inline float_t TransformX(::DigitalOpus::MB::Core::DRect  r, double_t  x) ;

/// @brief Method .ctor, addr 0x9dbd818, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_UVTransformUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_UVTransformUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_UVTransformUtility(MB3_UVTransformUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_UVTransformUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_UVTransformUtility(MB3_UVTransformUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22734};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB3_UVTransformUtility) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
