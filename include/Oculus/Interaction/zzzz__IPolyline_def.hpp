#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPolyline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPolyline)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class IPolyline;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::IPolyline*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::IPolyline*, "Oculus.Interaction", "IPolyline");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.IPolyline
class CORDL_TYPE IPolyline {
public:
// Declarations
 __declspec(property(get=get_PointsCount)) int32_t  PointsCount;

/// @brief Method PointAtIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 PointAtIndex(int32_t  index) ;

/// @brief Method get_PointsCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_PointsCount() ;

// Ctor Parameters [CppParam { name: "", ty: "IPolyline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPolyline(IPolyline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15915};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
