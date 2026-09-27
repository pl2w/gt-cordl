#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_CameraFramerateChangedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEvents_CameraFramerateChangedEvent)
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
struct LckEvents_CameraFramerateChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent, "Liv.Lck", "LckEvents/CameraFramerateChangedEvent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/CameraFramerateChangedEvent
struct CORDL_TYPE LckEvents_CameraFramerateChangedEvent {
public:
// Declarations
 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult_1<uint32_t>*  Result;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>*() ;

/// @brief Method .ctor, addr 0x9ce1938, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult_1<uint32_t>*  result) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x9ce1930, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<uint32_t>* get_Result() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult_1<uint32_t>*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult_1_uint32_t___() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_CameraFramerateChangedEvent() ;

// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult_1<uint32_t>*", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_CameraFramerateChangedEvent(::Liv::Lck::LckResult_1<uint32_t>*  _Result_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24727};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult_1<uint32_t>*  _Result_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent, _Result_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_CameraFramerateChangedEvent) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
