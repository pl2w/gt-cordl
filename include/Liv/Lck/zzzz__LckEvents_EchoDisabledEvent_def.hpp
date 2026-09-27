#pragma once
// IWYU pragma private; include "Liv/Lck/LckEvents_EchoDisabledEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckEvents_EchoDisabledEvent)
namespace Liv::Lck {
struct EchoDisableReason;
}
namespace Liv::Lck {
template<typename TResult>
class LckEvents_IEventWithResult_1;
}
namespace Liv::Lck {
class LckResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckEvents_EchoDisabledEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckEvents_EchoDisabledEvent);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckEvents_EchoDisabledEvent, "Liv.Lck", "LckEvents/EchoDisabledEvent");
// Dependencies Liv.Lck.EchoDisableReason
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.LckEvents/EchoDisabledEvent
struct CORDL_TYPE LckEvents_EchoDisabledEvent {
public:
// Declarations
 __declspec(property(get=get_Reason)) ::Liv::Lck::EchoDisableReason  Reason;

 __declspec(property(get=get_Result)) ::Liv::Lck::LckResult*  Result;

/// @brief Convert operator to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr operator  ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>*() ;

/// @brief Method .ctor, addr 0x9ce1888, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Reason, addr 0x9ce1880, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::EchoDisableReason get_Reason() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Result, addr 0x9ce1878, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* get_Result() ;

/// @brief Convert to "::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>"
constexpr ::Liv::Lck::LckEvents_IEventWithResult_1<::Liv::Lck::LckResult*>* i___Liv__Lck__LckEvents_IEventWithResult_1___Liv__Lck__LckResult__() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckEvents_EchoDisabledEvent() ;

// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "::Liv::Lck::LckResult*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Reason_k__BackingField", ty: "::Liv::Lck::EchoDisableReason", modifiers: "", def_value: None, comment: None }]
constexpr LckEvents_EchoDisabledEvent(::Liv::Lck::LckResult*  _Result_k__BackingField, ::Liv::Lck::EchoDisableReason  _Reason_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <Result>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::LckResult*  _Result_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Reason>k__BackingField, offset: 0x8, size: 0x4, def value: None
 ::Liv::Lck::EchoDisableReason  _Reason_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckEvents_EchoDisabledEvent, _Result_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckEvents_EchoDisabledEvent, _Reason_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckEvents_EchoDisabledEvent) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
