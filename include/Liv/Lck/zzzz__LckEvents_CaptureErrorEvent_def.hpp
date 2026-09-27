#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_CaptureErrorEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/ErrorHandling/zzzz__LckCaptureError_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_CaptureErrorEvent)
namespace Liv::Lck::ErrorHandling {
struct LckCaptureError;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEvents_CaptureErrorEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_CaptureErrorEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_CaptureErrorEvent, "Liv.Lck", "LckEvents/CaptureErrorEvent");
// Dependencies Liv.Lck.ErrorHandling.LckCaptureError
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/CaptureErrorEvent
struct CORDL_TYPE LckEvents_CaptureErrorEvent {
public:
// Declarations
 __declspec(property(get=get_Error)) ::Liv::Lck::ErrorHandling::LckCaptureError  Error;

/// @brief Method .ctor, addr 0x9ce194c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ErrorHandling::LckCaptureError  error) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x9ce1940, size 0xc, virtual false, abstract: false, final false
inline ::Liv::Lck::ErrorHandling::LckCaptureError get_Error() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_CaptureErrorEvent() ;

// Ctor Parameters [CppParam { name: "_Error_k__BackingField", ty: "::Liv::Lck::ErrorHandling::LckCaptureError", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_CaptureErrorEvent(::Liv::Lck::ErrorHandling::LckCaptureError  _Error_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x0, size: 0x10, def value: None
 ::Liv::Lck::ErrorHandling::LckCaptureError  _Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_CaptureErrorEvent, _Error_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_CaptureErrorEvent) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
