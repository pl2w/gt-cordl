#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_ActiveCameraChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_ActiveCameraChangedEvent)
namespace Liv::Lck {
class ILckCamera;
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
struct LckEvents_ActiveCameraChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent, "Liv.Lck", "LckEvents/ActiveCameraChangedEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/ActiveCameraChangedEvent
struct CORDL_TYPE LckEvents_ActiveCameraChangedEvent {
public:
// Declarations
 __declspec(property(get=get_CameraResult)) ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  CameraResult;

 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  Result;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*() ;

/// @brief Method .ctor, addr 0x9ce1900, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  cameraResult) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_CameraResult, addr 0x9ce18f0, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* get_CameraResult() ;

/// @brief Method get_Result, addr 0x9ce18f8, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* get_Result() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1___Liv__Lck__ILckCamera____() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_ActiveCameraChangedEvent() ;

// Ctor Parameters [CppParam { name: "_CameraResult_k__BackingField", ty: "::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_ActiveCameraChangedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  _CameraResult_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24724};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <CameraResult>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  _CameraResult_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent, _CameraResult_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
