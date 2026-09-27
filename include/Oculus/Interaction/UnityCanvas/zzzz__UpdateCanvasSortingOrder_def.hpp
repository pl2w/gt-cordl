#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/UpdateCanvasSortingOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateCanvasSortingOrder)
// Forward declare root types
namespace Oculus::Interaction::UnityCanvas {
class UpdateCanvasSortingOrder;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*, "Oculus.Interaction.UnityCanvas", "UpdateCanvasSortingOrder");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::UnityCanvas {
// Is value type: false
// CS Name: Oculus.Interaction.UnityCanvas.UpdateCanvasSortingOrder
class CORDL_TYPE UpdateCanvasSortingOrder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder* New_ctor() ;

/// @brief Method SetCanvasSortingOrder, addr 0xa4927d4, size 0xcc, virtual false, abstract: false, final false
inline void SetCanvasSortingOrder(int32_t  sortingOrder) ;

/// @brief Method .ctor, addr 0xa4928a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateCanvasSortingOrder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateCanvasSortingOrder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateCanvasSortingOrder(UpdateCanvasSortingOrder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateCanvasSortingOrder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateCanvasSortingOrder(UpdateCanvasSortingOrder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16062};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::UnityCanvas
