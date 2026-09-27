#pragma once
// IWYU pragma private; include "Liv/Lck/LckPreviewer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LckPreviewer)
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
namespace GlobalNamespace {
struct LckEvents_ActiveCameraTrackTextureChangedEvent;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckMonitor;
}
namespace Liv::Lck {
class ILckPreviewer;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Liv::Lck {
class LckPreviewer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckPreviewer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckPreviewer*, "Liv.Lck", "LckPreviewer");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckPreviewer
class CORDL_TYPE LckPreviewer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsPreviewActive, put=set_IsPreviewActive)) bool  IsPreviewActive;

/// @brief Field <IsPreviewActive>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPreviewActive_k__BackingField, put=__cordl_internal_set__IsPreviewActive_k__BackingField)) bool  _IsPreviewActive_k__BackingField;

/// @brief Field _eventBus, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _videoTextureProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoTextureProvider, put=__cordl_internal_set__videoTextureProvider)) ::GlobalNamespace::ILckVideoTextureProvider*  _videoTextureProvider;

/// @brief Convert operator to "::Liv::Lck::ILckPreviewer"
constexpr operator  ::Liv::Lck::ILckPreviewer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9cf3314, size 0x1b4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckPreviewer* New_ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus) ;

/// @brief Method OnCameraTrackTextureChanged, addr 0x9cf3310, size 0x4, virtual false, abstract: false, final false
inline void OnCameraTrackTextureChanged(::GlobalNamespace::LckEvents_ActiveCameraTrackTextureChangedEvent  activeCameraTrackTextureChangedEvent) ;

/// @brief Method OnMonitorRegistered, addr 0x9cf2f98, size 0x4, virtual false, abstract: false, final false
inline void OnMonitorRegistered(::Liv::Lck::ILckMonitor*  monitor) ;

/// @brief Method OnMonitorUnregistered, addr 0x9cf2f9c, size 0xac, virtual false, abstract: false, final false
static inline void OnMonitorUnregistered(::Liv::Lck::ILckMonitor*  monitor) ;

/// @brief Method SetMonitorRenderTexture, addr 0x9cf2d7c, size 0x21c, virtual false, abstract: false, final false
inline void SetMonitorRenderTexture(::Liv::Lck::ILckMonitor*  monitor) ;

/// @brief Method SetMonitorTextureForAllMonitors, addr 0x9cf3048, size 0x2c8, virtual false, abstract: false, final false
inline void SetMonitorTextureForAllMonitors() ;

constexpr bool const& __cordl_internal_get__IsPreviewActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPreviewActive_k__BackingField() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& __cordl_internal_get__videoTextureProvider() const;

constexpr ::GlobalNamespace::ILckVideoTextureProvider*& __cordl_internal_get__videoTextureProvider() ;

constexpr void __cordl_internal_set__IsPreviewActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9cf2b7c, size 0x200, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus) ;

/// [CompilerGenerated]
/// @brief Method get_IsPreviewActive, addr 0x9cf2b6c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsPreviewActive() ;

/// @brief Convert to "::Liv::Lck::ILckPreviewer"
constexpr ::Liv::Lck::ILckPreviewer* i___Liv__Lck__ILckPreviewer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsPreviewActive, addr 0x9cf2b74, size 0x8, virtual true, abstract: false, final true
inline void set_IsPreviewActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckPreviewer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckPreviewer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckPreviewer(LckPreviewer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckPreviewer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckPreviewer(LckPreviewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24781};

/// @brief Field _videoTextureProvider, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ILckVideoTextureProvider*  ____videoTextureProvider;

/// @brief Field _eventBus, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// [CompilerGenerated]
/// @brief Field <IsPreviewActive>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsPreviewActive_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckPreviewer, ____videoTextureProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPreviewer, ____eventBus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckPreviewer, ____IsPreviewActive_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckPreviewer) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck
