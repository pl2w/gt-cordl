#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventProvider_Registration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventProvider_Registration)
namespace GlobalNamespace {
struct Event_Type;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::InputForUI {
class EventConsumer;
}
// Forward declare root types
namespace GlobalNamespace {
struct EventProvider_Registration;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EventProvider_Registration);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EventProvider_Registration, "UnityEngine.InputForUI", "EventProvider/Registration");
// Dependencies System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputForUI.EventProvider/Registration
struct CORDL_TYPE EventProvider_Registration {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr EventProvider_Registration() ;

// Ctor Parameters [CppParam { name: "handler", ty: "::UnityEngine::InputForUI::EventConsumer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "priority", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_types", ty: "::System::Collections::Generic::HashSet_1<::GlobalNamespace::Event_Type>*", modifiers: "", def_value: None, comment: None }]
constexpr EventProvider_Registration(::UnityEngine::InputForUI::EventConsumer*  handler, int32_t  priority, ::System::Nullable_1<int32_t>  playerId, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::Event_Type>*  _types) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31879};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field handler, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputForUI::EventConsumer*  handler;

/// @brief Field priority, offset: 0x8, size: 0x4, def value: None
 int32_t  priority;

/// @brief Field playerId, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  playerId;

/// @brief Size padding 0x20 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field _types, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::GlobalNamespace::Event_Type>*  _types;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EventProvider_Registration, handler) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventProvider_Registration, priority) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventProvider_Registration, playerId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EventProvider_Registration, _types) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EventProvider_Registration) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
