#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_CameraResolutionChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_CameraResolutionChangedEvent)
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEvents_CameraResolutionChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent, "Liv.Lck", "LckEvents/CameraResolutionChangedEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/CameraResolutionChangedEvent
struct CORDL_TYPE LckEvents_CameraResolutionChangedEvent {
public:
// Declarations
 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*  Result;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>*() ;

/// @brief Method .ctor, addr 0x9ce1928, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*  cameraResult) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x9ce1920, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>* get_Result() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__CameraResolutionDescriptor___() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_CameraResolutionChangedEvent() ;

// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_CameraResolutionChangedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*  _Result_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult_1<::Liv::Lck::CameraResolutionDescriptor>*  _Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent, _Result_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_CameraResolutionChangedEvent) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
