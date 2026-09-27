#pragma once
// IWYU pragma private; include "Fusion/Timeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__InterpolationParams_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Timeline)
namespace Fusion {
struct InterpolationParams;
}
namespace Fusion {
template<typename T>
class RingBuffer_1;
}
namespace Fusion {
struct TimelinePoint;
}
// Forward declare root types
namespace Fusion {
class Timeline;
}
// Write type traits
MARK_REF_T(::Fusion::Timeline*);
DEFINE_IL2CPP_CLASS(::Fusion::Timeline*, "Fusion", "Timeline");
// Dependencies Fusion.InterpolationParams, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Timeline
class CORDL_TYPE Timeline : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Field Params, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_Params, put=__cordl_internal_set_Params)) ::Fusion::InterpolationParams  Params;

/// @brief Field Points, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Points, put=__cordl_internal_set_Points)) ::Fusion::RingBuffer_1<::Fusion::TimelinePoint>*  Points;

/// @brief Method AddPoint, addr 0x5fe1678, size 0x10c, virtual false, abstract: false, final false
inline void AddPoint(::Fusion::TimelinePoint  point, double_t  tickDeltaDouble, bool  allowInactiveHandling) ;

/// @brief Method Clear, addr 0x5fe161c, size 0x5c, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetInterpolationParams, addr 0x5fe1784, size 0x3a4, virtual false, abstract: false, final false
inline ::Fusion::InterpolationParams GetInterpolationParams(double_t  time) ;

static inline ::Fusion::Timeline* New_ctor(int32_t  capacity) ;

/// @brief Method UpdateInterpolationParams, addr 0x5fe1b28, size 0x30, virtual false, abstract: false, final false
inline void UpdateInterpolationParams(double_t  time) ;

constexpr ::Fusion::InterpolationParams const& __cordl_internal_get_Params() const;

constexpr ::Fusion::InterpolationParams& __cordl_internal_get_Params() ;

constexpr ::Fusion::RingBuffer_1<::Fusion::TimelinePoint>* const& __cordl_internal_get_Points() const;

constexpr ::Fusion::RingBuffer_1<::Fusion::TimelinePoint>*& __cordl_internal_get_Points() ;

constexpr void __cordl_internal_set_Params(::Fusion::InterpolationParams  value) ;

constexpr void __cordl_internal_set_Points(::Fusion::RingBuffer_1<::Fusion::TimelinePoint>*  value) ;

/// @brief Method .ctor, addr 0x5fe1530, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_IsEmpty, addr 0x5fe15cc, size 0x50, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Timeline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Timeline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Timeline(Timeline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Timeline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Timeline(Timeline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19302};

/// @brief Field Points, offset: 0x10, size: 0x8, def value: None
 ::Fusion::RingBuffer_1<::Fusion::TimelinePoint>*  ___Points;

/// @brief Field Params, offset: 0x18, size: 0x18, def value: None
 ::Fusion::InterpolationParams  ___Params;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Timeline, ___Points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Timeline, ___Params) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Timeline) == 0x30, "Size mismatch!");

} // namespace end def Fusion
